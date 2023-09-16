// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnimInstance.h"
#include "ShooterCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

/******************************************************************************/
/* Public Functions                                                           */
/******************************************************************************/

/******************************************************************************
 */
void UShooterAnimInstance::NativeInitializeAnimation() {
    shooter_character = Cast<AShooterCharacter>(TryGetPawnOwner());
}

/******************************************************************************
 */
void UShooterAnimInstance::update_animation_properties(float delta_time) {
    /* The editor calls this function when compiling the animation blue print,
     * so we need to NULL check incase theres no pawn owner assigned in the 
     * editor yet. I think the pawn owner is assigned when the AnimClass 
     * for a character class is assigned in the edtor (ie, the  shooter character
     * pawn owns this).
     * See BP_ShooterCharacter, animation details, in the editor.
     */
    if( shooter_character == nullptr ) {
        shooter_character = Cast<AShooterCharacter>(TryGetPawnOwner());
    }
    if( shooter_character == nullptr ) {
        return;
    }

    /* Calculate various parameters used by the animation blueprint state machine.
     */
    FVector velocity = shooter_character->GetVelocity();
    velocity.Z = 0;
    speed = velocity.Size();

    is_in_air = shooter_character->GetCharacterMovement()->IsFalling();

    is_accelerating = false;
    if( shooter_character->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.0f ) {
        is_accelerating = true;
    }

    FRotator aim_rotation = shooter_character->GetBaseAimRotation();

    /* MakeRotFromX will create a rotator to go from the world frame of reference to a new
     * frame of reference. The new frame of reference is defined only by it's x-axis (the
     * input to the function), and then Y, Z are set to be orthogonal.
     * In other worse, this gives us a rotator that can rotate the world x-axis to align with
     * the input vector.
     */
    const FVector velocity_direction = shooter_character->GetVelocity();
    FRotator movement_rotation = UKismetMathLibrary::MakeRotFromX(velocity_direction);

    movement_offset_yaw = UKismetMathLibrary::NormalizedDeltaRotator(movement_rotation, aim_rotation).Yaw;
    if( velocity_direction.Size() > 0.0f ) {
        last_movement_offset_yaw = movement_offset_yaw;
    }

    FString movement_msg = FString::Printf(TEXT("offset yaw: %f"), movement_offset_yaw);
    if( GEngine != nullptr ) {
        GEngine->AddOnScreenDebugMessage(1, 0, FColor::White, movement_msg);  
    }
}
