// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ShooterCharacter.generated.h"

UCLASS()
class THIRDPERSONSHOOTER_API AShooterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AShooterCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	class USpringArmComponent* get_camera_boom() const { return camera_boom; }
	class UCameraComponent* get_follow_camera() const { return follow_camera; }

	bool get_is_aiming() const { return is_aiming; }

	UFUNCTION(BlueprintCallable)
	float get_crosshair_spread_multiplier() const;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/* Called with system movement input parameters
	 */
	void move_forward(float value);
	void move_right(float value);

	/* Called by input to turn at a given rate
	 * @param rate
     *     Normalized fractional rate, between [0, 1], of the base rate.
	 */
	void set_yaw_rate(float rate);
	void set_pitch_rate(float rate);
	void set_yaw(float yaw);
	void set_pitch(float pitch);

	/* Called when fire button is pressed.
	 */
	void fire_weapon();

	bool get_beam_end_location(const FVector& muzzle_socket_location, FVector& out_beam_location);

	void aim_button_pressed();
	void aim_button_released();

	void calculate_crosshair_spread(float delta_time);

	void start_crosshair_fire();
	UFUNCTION()
	void finish_crosshair_fire();

	void fire_button_pressed();
	void fire_button_released();
	void start_fire_timer();
	UFUNCTION()
	void auto_fire_reset();

private:
	/* Camera boom positioned behind the character
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* camera_boom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	FVector aiming_boom_offset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	FVector default_boom_offset = FVector(0.0f, 50.0f, 50.0f);
	FVector current_boom_offset;

	/* Camera follows character
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* follow_camera;

	/* Turn rate in degrees / second
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float base_yaw_rate;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float base_pitch_rate;
	/** Character rotation rate for controller input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float hip_yaw_rate;
	/** Character rotation rate for controller input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float hip_pitch_rate;
	/** Character rotation rate for controller input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float aim_yaw_rate;
	/** Character rotation rate for controller input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
	float aim_pitch_rate;
	/** Character rotation scale for mouse input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"),
			  meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float hip_yaw_scale;
	/** Character rotation scale for mouse input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"),
	          meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float hip_pitch_scale;
	/** Character rotation scale for mouse input */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"),
	          meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float aim_yaw_scale;
	/** Character rotation scale for mouse input */
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"),
	           meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
	float aim_pitch_scale;
	
	/* Sound to play when firing weapon.
	 */	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USoundCue* fire_sound;

	/* Flash spawned at barrel when firing weapon
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UParticleSystem* muzzle_flash;

	/* Montage for hip firing weapon
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* hip_fire_montage;

	/* Particles spawned on bullet impact.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* impact_particles;

	/* Smoke trail for bullets
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* beam_particles;

	/* Aiming down sights or not
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	bool is_aiming;

	/* Camera field of view
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float camera_default_fov;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float camera_zoomed_fov;
	float camera_current_fov;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float camera_fov_interp_speed;

	/** Determines spread of cross hairs */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float crosshair_spread_multiplier;
	/** Velocity component of crosshair spread */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float crosshair_velocity_factor;
	/** Velocity component of crosshair spread while in air */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float crosshair_in_air_factor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float crosshair_aim_factor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Crosshairs, meta = (AllowPrivateAccess = "true"))
	float crosshair_shooting_factor;

	float shoot_time_duration;
	bool is_firing;
	FTimerHandle crosshair_shoot_timer;

	bool b_fire_button_pressed;
	bool should_fire;
	float automatic_fire_rate;
	FTimerHandle auto_fire_timer;
};
