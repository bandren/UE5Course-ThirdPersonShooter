// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Math/RotationMatrix.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundCue.h"
#include "Engine/SkeletalMeshSocket.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"

/******************************************************************************/
/* Public Functions                                                           */
/******************************************************************************/

/******************************************************************************
 * Constructor
 */
AShooterCharacter::AShooterCharacter()
{
	base_yaw_rate = 45.0f;
	base_pitch_rate = 45.0f;
	is_aiming = false;
	camera_default_fov = 0.0f; /* Set in begin play to actual default */
	camera_fov_interp_speed = 20.0f;
	shoot_time_duration = 0.05f;
	is_firing = false;
	automatic_fire_rate = 0.1f;
	should_fire = true;
	b_fire_button_pressed = false;

 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/* Create a camera boom. Pulls in towards the character if tehre is a collision
	 */
	camera_boom = CreateDefaultSubobject<USpringArmComponent>(TEXT("camera_boom"));
	camera_boom->SetupAttachment(RootComponent);
	camera_boom->TargetArmLength = 300.0f;       /* Follows this distance behind the character */
	camera_boom->bUsePawnControlRotation = true; /* Rotate arm based on controller             */
	camera_boom->SocketOffset = default_boom_offset;

	/* Create a follow camera
	 */
	follow_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("follow_camera"));
	follow_camera->SetupAttachment(camera_boom, USpringArmComponent::SocketName); /* Attach camera to end of boom */
	follow_camera->bUsePawnControlRotation = false; /* Camera does not rotate relative to arm */

	/* Don't rotate when camera rotates. ie, don't use controller rotation to change character rotation.
	 */
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;

	/* Character will turn with controller rotation
	 */
	bUseControllerRotationYaw = true;

	/* Character doesn't turn to face direction of travel. This makes strafing possible.
	 * I'm not sure if the RotationRate is needed, because the character's rotation matches
	 * the camera's rotation.
	 */
	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);

	/* Adjust jumping mechanics and ability to move while air born.
	 */
	GetCharacterMovement()->JumpZVelocity = 600.0f;
	GetCharacterMovement()->AirControl = 0.2f;
}

/******************************************************************************
 * Called every frame
 */
void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/* Zoom in when aiming
	 */
	if( is_aiming ) {
		camera_current_fov = FMath::FInterpTo(camera_current_fov,
											  camera_zoomed_fov,
											  DeltaTime,
											  camera_fov_interp_speed);
		current_boom_offset = FMath::VInterpTo(current_boom_offset,
											   aiming_boom_offset,
											   DeltaTime,
											   camera_fov_interp_speed);
	}
	else {
		camera_current_fov = FMath::FInterpTo(camera_current_fov,
											  camera_default_fov,
											  DeltaTime,
											  camera_fov_interp_speed);
		current_boom_offset = FMath::VInterpTo(current_boom_offset,
											   default_boom_offset,
											   DeltaTime,
											   camera_fov_interp_speed);
	}
	get_follow_camera()->SetFieldOfView(camera_current_fov);
	camera_boom->SocketOffset = current_boom_offset;

	/* Change look sensitivity when aiming
	 */
	if( get_is_aiming() ) {
		base_yaw_rate = aim_yaw_rate;
		base_pitch_rate = aim_pitch_rate;
	}
	else {
		base_yaw_rate = hip_yaw_rate;
		base_pitch_rate = hip_pitch_rate;
	}

	calculate_crosshair_spread(DeltaTime);
}

/******************************************************************************
 * Called to bind functionality to input
 */
void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AShooterCharacter::move_forward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AShooterCharacter::move_right);
	PlayerInputComponent->BindAxis("YawRate", this, &AShooterCharacter::set_yaw_rate);
	PlayerInputComponent->BindAxis("PitchRate", this, &AShooterCharacter::set_pitch_rate);
	PlayerInputComponent->BindAxis("Yaw", this, &AShooterCharacter::set_yaw);
	PlayerInputComponent->BindAxis("Pitch", this, &AShooterCharacter::set_pitch);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", EInputEvent::IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("FireButton", EInputEvent::IE_Pressed, this, &AShooterCharacter::fire_button_pressed);
	PlayerInputComponent->BindAction("FireButton", EInputEvent::IE_Released, this, &AShooterCharacter::fire_button_released);
	PlayerInputComponent->BindAction("AimButton", EInputEvent::IE_Pressed, this, &AShooterCharacter::aim_button_pressed);
	PlayerInputComponent->BindAction("AimButton", EInputEvent::IE_Released, this, &AShooterCharacter::aim_button_released);
}

/******************************************************************************
 */
float AShooterCharacter::get_crosshair_spread_multiplier() const {
	return crosshair_spread_multiplier;
}

/******************************************************************************/
/* Protected Functions                                                        */
/******************************************************************************/

/******************************************************************************
 * Called when the game starts or when spawned
 */
void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();

	current_boom_offset = default_boom_offset;
	if( get_follow_camera() != nullptr ) {
		camera_default_fov = get_follow_camera()->FieldOfView;
		camera_current_fov = camera_default_fov;
	}
}

/******************************************************************************
 */
void AShooterCharacter::move_forward(float value)
{
	if( (Controller != nullptr) && (value != 0.0f) ) {
		/* Find out which way is forward by checking the rotation of the controller
		 * object and filtering out the pitch and roll.
		 */
		const FRotator rotation = Controller->GetControlRotation();
		const FRotator yaw_rotation(0, rotation.Yaw, 0);

		/* Apply this yaw rotation to the unit x-axis vector to get facing direction of
		 * controller (ie rotate the unit x-axis to have the same yaw as the controller).
		  */
		const FVector direction = FRotationMatrix(yaw_rotation).GetUnitAxis(EAxis::X);

		/* Move in direction the controller is facing with the input magnitude to this
		 * function.
		 */
		AddMovementInput(direction, value);
	}
}

/******************************************************************************
 */
void AShooterCharacter::move_right(float value)
{
	if( (Controller != nullptr) && (value != 0.0f) ) {
		/* Find out which way is forward
		 */
		const FRotator rotation = Controller->GetControlRotation();
		const FRotator yaw_rotation(0, rotation.Yaw, 0);

		const FVector direction = FRotationMatrix(yaw_rotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(direction, value);
	}	
}

/******************************************************************************
 */
void AShooterCharacter::set_yaw_rate(float rate)
{
	/* Add Yaw rotation to controller based on input rate. This funciton was bound
	 * to the PlayerInputComponent to get called when mouse/joy-stick motion rotates
	 * the camera.
	 */
	AddControllerYawInput(rate * base_yaw_rate * GetWorld()->GetDeltaSeconds());
}

/******************************************************************************
 */
void AShooterCharacter::set_pitch_rate(float rate) {
	AddControllerPitchInput(rate * base_yaw_rate * GetWorld()->GetDeltaSeconds());
}


/******************************************************************************
 * Yaw is normalized from [0,1]
 */
void AShooterCharacter::set_yaw(float yaw) {
	float yaw_scale_factor = hip_yaw_scale;
	if( get_is_aiming() ) {
		yaw_scale_factor = aim_yaw_scale;
	}
	AddControllerYawInput(yaw * yaw_scale_factor);
}

/******************************************************************************
 * Pitch is normalized from [0,1]
 */
void AShooterCharacter::set_pitch(float pitch) {
	float pitch_scale_factor = hip_pitch_scale;
	if( get_is_aiming() ) {
		pitch_scale_factor = aim_pitch_scale;
	}
	AddControllerPitchInput(pitch * pitch_scale_factor);	
}

/******************************************************************************
 */
void AShooterCharacter::fire_weapon()
{
	/* We created a SoundCue that randomly plays one of ten pre-recorded gun shot sounds.
	 * This will play the SoundCue everytime we fire the weapon.
	 */
	if( fire_sound != nullptr ) {
		UGameplayStatics::PlaySound2D(this, fire_sound);
	}

	/* We created a socket on the skeleton for the mesh used by this character. We did this
	 * by opening the skeleton and searching for the bone on the weapon, then adding a new
	 * socket under that bone. We then moved the socket to the muzzle and named it
	 * "BarrelSocket"
	 */
	const USkeletalMeshSocket* barrel_socket = GetMesh()->GetSocketByName("BarrelSocket");
	if( barrel_socket != nullptr ) {
		const FTransform socket_transform = barrel_socket->GetSocketTransform(GetMesh());
		if( muzzle_flash != nullptr ) {
			/* Socket transform gives us the location to spawn this particle system.
			 */
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), muzzle_flash, socket_transform);
		}

		FVector beam_end_point;
		bool blocking_hit = get_beam_end_location(socket_transform.GetLocation(), beam_end_point);

		if( blocking_hit ) {
			/* We have a particle system to animate a gunshot hitting something. We're going to spawn that
				* animation at the fire_hit::location
				*/
			if( impact_particles != nullptr ) {
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impact_particles, beam_end_point);
			}
		}
		if( beam_particles != nullptr ) {
			/* This one I'm quite unsure of. It looks like the particle system has been designed in way so that we can
			 * set this "Target" parameter to the location the particles will travel to
			 */
			UParticleSystemComponent* beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), beam_particles, socket_transform);
			if( beam != nullptr ) {
				beam->SetVectorParameter(FName("Target"), beam_end_point);
			}
		}																		
	}

#if( 0 )
		FHitResult fire_hit;
		const FVector start = socket_transform.GetLocation();
		const FQuat rotation = socket_transform.GetRotation();
		const FVector rotation_axis = rotation.GetAxisX();
		const FVector end = start + rotation_axis * 50'000.0f;
		FVector beam_end_point = end;
		GetWorld()->LineTraceSingleByChannel(fire_hit, start, end, ECollisionChannel::ECC_Visibility);
		if( fire_hit.bBlockingHit ) {
			beam_end_point = fire_hit.Location;

			/* We have a particle system to animate a gunshot hitting something. We're going to spawn that
			 * animation at the fire_hit::location
			 */
			if( impact_particles != nullptr ) {
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), impact_particles, fire_hit.Location);
			}
		}

		/* This one I'm quite unsure of. It looks like the particle system has been designed in way so that we can
		 * set this "Target" parameter to the location the particles will travel to
		*/
		if( beam_particles != nullptr ) {
			UParticleSystemComponent* beam = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), beam_particles, socket_transform);
			if( beam != nullptr ) {
				beam->SetVectorParameter(FName("Target"), beam_end_point);
			}
		}
#endif

	/* In out shooter character blueprint we set an Anim Class. This function will get us a
	 * pointer to the anim class instance. 
	 * Within the anim blueprint we included an anim montage that we made to animate weapon
	 * fire. We can invoke that weapon fire montage via the Montage_Play() function. In addition,
	 * we set a key frame right at the beginning of the montage called "StartFire" which we use
	 * to play the montage from the beginning.
	 * However, it appears that the anim blueprint doesn't create an instance of the montage, it
	 * just provides a location where the montage will be blended in. In order to activate that
	 * montage we need a pointer reference to an instance of it, which we acquired by creating
	 * a UPROPERTY() variable and assigning the montage to that variable, ie, hip_fire_montage.
	 */
	UAnimInstance* anim_instance = GetMesh()->GetAnimInstance();
	if( (anim_instance != nullptr) && (hip_fire_montage != nullptr) ) {
		anim_instance->Montage_Play(hip_fire_montage);
		anim_instance->Montage_JumpToSection(FName("StartFire"));
	}

	/* Start timer for scaling cross hairs while shooting
	 */
	start_crosshair_fire();
}

/******************************************************************************
 */
bool AShooterCharacter::get_beam_end_location(const FVector& muzzle_socket_location, FVector& out_beam_location) {
	bool hit_something = false;

	/* Get viewport size
		*/
	FVector2D viewport_size;
	if( (GEngine != nullptr) && (GEngine->GameViewport != nullptr) ) {
		GEngine->GameViewport->GetViewportSize(viewport_size);
	}
	else {
		return false;
	}

	/* Get screenspace location of cross hair (sadly, hard coded :()
	 */
	FVector2D crosshair_location(viewport_size.X/2.0f, viewport_size.Y/2.0f);
	crosshair_location.Y -= 50;

	/* Transform 2D location into 3D world space location and direction
		*/
	FVector crosshair_world_position;
	FVector crosshair_world_direction;
	bool screen_to_world = UGameplayStatics::DeprojectScreenToWorld(UGameplayStatics::GetPlayerController(this, 0),
																	crosshair_location,
																	crosshair_world_position,
																	crosshair_world_direction);

	if( screen_to_world ) {
		FHitResult screen_trace_hit;
		const FVector start(crosshair_world_position);
		const FVector end(crosshair_world_position + (crosshair_world_direction * 50'000.0f));
		const FVector muzzle_start(muzzle_socket_location);
		out_beam_location = end;

		/* See if anything visible is in front of the crosshair
			*/
		GetWorld()->LineTraceSingleByChannel(screen_trace_hit, start, end, ECollisionChannel::ECC_Visibility);
		if( screen_trace_hit.bBlockingHit ) {
			hit_something = true;
			out_beam_location = screen_trace_hit.Location;

			/* We've hit something, however, the bullet path isn't from the crosshairs to the hit location,
				* it's from the muzzle to the hit location. We'll trace this new path to check for what we
				* actually hit.
				* This is important, because there might be something occluding the bullet path from the muzzle
				* that isn't occluding the crosshair project path.
				*/
			FHitResult muzzle_trace_hit;
			GetWorld()->LineTraceSingleByChannel(muzzle_trace_hit, muzzle_start, screen_trace_hit.Location, ECollisionChannel::ECC_Visibility);
			if( muzzle_trace_hit.bBlockingHit ) {
				/* If we hit something, then there was something occluding the muzzle trace and we want to use
					* that as the hit location instead. If nothing was occluding the muzzle trace, then the original
					* hit is still valid.
					*/
				out_beam_location = muzzle_trace_hit.Location;
			}

			DrawDebugLine(GetWorld(), muzzle_start, out_beam_location, FColor::Red, false, 2.0f);
			DrawDebugPoint(GetWorld(), out_beam_location, 6.0f, FColor::Red, false, 2.0f);

		}
	}

	return hit_something;
}

/******************************************************************************
 * Called when pressing the aim button
 */
void AShooterCharacter::aim_button_pressed() {
	is_aiming = true;
}

/******************************************************************************
 * Called when releasing the aim button
 */
void AShooterCharacter::aim_button_released() {
	is_aiming = false;
}

/******************************************************************************
 */
void AShooterCharacter::calculate_crosshair_spread(float delta_time) {
	FVector2D walk_speed_range(0.0f, 600.0f);
	FVector2D velocity_multiplier_range(0.0f, 1.0f);
	FVector velocity = GetVelocity();
	velocity.Z = 0.0f;

	crosshair_velocity_factor = FMath::GetMappedRangeValueClamped(walk_speed_range, 
																  velocity_multiplier_range,
																  velocity.Size());
	
	if( GetCharacterMovement()->IsFalling() ) {
		crosshair_in_air_factor = FMath::FInterpTo(crosshair_in_air_factor,
												   2.25f,
												   delta_time,
												   2.25f);
	}
	else {
		crosshair_in_air_factor = FMath::FInterpTo(crosshair_in_air_factor,
												   0.0f,
												   delta_time,
												   30.0f);
	}

	if( get_is_aiming() ) {
		crosshair_aim_factor = FMath::FInterpTo(crosshair_aim_factor,
												0.5f,
												delta_time,
												camera_fov_interp_speed);
	}
	else {
		crosshair_aim_factor = FMath::FInterpTo(crosshair_aim_factor,
												1.0f,
												delta_time,
												camera_fov_interp_speed);
	}

	if( is_firing ) {
		crosshair_shooting_factor = FMath::FInterpTo(crosshair_shooting_factor,
													 0.3f,
													 delta_time,
													 60.0f);
	}
	else {
		crosshair_shooting_factor = FMath::FInterpTo(crosshair_shooting_factor,
													 0.0f,
													 delta_time,
													 60.0f);
	}

	crosshair_spread_multiplier = crosshair_aim_factor * (0.5f + 
								  crosshair_velocity_factor +
								  crosshair_in_air_factor +
								  crosshair_shooting_factor);
}

/******************************************************************************
 */
void AShooterCharacter::start_crosshair_fire() {
	is_firing = true;
	GetWorldTimerManager().SetTimer(crosshair_shoot_timer,
									this,
									&AShooterCharacter::finish_crosshair_fire,
									shoot_time_duration);
									
}

/******************************************************************************
 */
void AShooterCharacter::finish_crosshair_fire() {
	is_firing = false;
}

/******************************************************************************
 */
void AShooterCharacter::fire_button_pressed() {
	b_fire_button_pressed = true;
	start_fire_timer();
}

/******************************************************************************
 */
void AShooterCharacter::fire_button_released() {
	b_fire_button_pressed = false;
}

/******************************************************************************
 */
void AShooterCharacter::start_fire_timer() {
	if( should_fire ) {
		fire_weapon();
		should_fire = false;
		GetWorldTimerManager().SetTimer(auto_fire_timer, 
										this,
										&AShooterCharacter::auto_fire_reset,
										automatic_fire_rate);
	}
}

/******************************************************************************
 */
void AShooterCharacter::auto_fire_reset() {
	should_fire = true;
	if( b_fire_button_pressed ) {
		start_fire_timer();
	}
}

/******************************************************************************/
/* Private Functions                                                          */
/******************************************************************************/
