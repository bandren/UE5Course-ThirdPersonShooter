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

	/* Called when fire button is pressed.
	 */
	void fire_weapon();

	bool get_beam_end_location(const FVector& muzzle_socket_location, FVector& out_beam_location);

private:
	/* Camera boom positioned behind the character
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* camera_boom;

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
};
