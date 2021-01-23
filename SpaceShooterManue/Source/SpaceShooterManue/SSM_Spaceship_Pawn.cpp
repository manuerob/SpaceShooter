// Fill out your copyright notice in the Description page of Project Settings.


#include "SSM_Spaceship_Pawn.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ASSM_Spaceship_Pawn::ASSM_Spaceship_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//bUseControllerRotationPitch = false;
	//bUseControllerRotationYaw = false;
	//bUseControllerRotationRoll = false;

}

// Called when the game starts or when spawned
void ASSM_Spaceship_Pawn::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &ASSM_Spaceship_Pawn::SpawnObstacle, 0.05f, true);
	
}

// Called every frame
void ASSM_Spaceship_Pawn::Tick(float DeltaTime)
{
	const float CurrentAcc = -GetActorRotation().Pitch * DeltaTime * Acceleration;
	const float newForwardSpeed = CurrentForwardSpeed * CurrentAcc;
	CurrentForwardSpeed = FMath::Clamp(newForwardSpeed, MinSpeed, MaxSpeed);

	const FVector LocalMove = FVector(CurrentForwardSpeed * DeltaTime, 0.f, 0.f);

	AddActorLocalOffset(LocalMove, true);

	FRotator DeltaRotation(0, 0, 0);
	DeltaRotation.Pitch = CurrentPitchSpeed * DeltaTime;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaTime;
	DeltaRotation.Roll = CurrentRollSpeed * DeltaTime;

	AddActorLocalRotation(DeltaRotation);

	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASSM_Spaceship_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASSM_Spaceship_Pawn::ProcessMouseYInput(float Value)
{
}

void ASSM_Spaceship_Pawn::ProcessMouseXInput(float Value)
{
}

void ASSM_Spaceship_Pawn::ProcessKeyRoll(float Rate)
{
	if (FMath::Abs(Rate) > .2f) {
		ProcessRoll(Rate * 2.f);
	}
}

void ASSM_Spaceship_Pawn::ProcessKeyPitch(float Rate)
{
	if (FMath::Abs(Rate) > .2f) {
		ProcessPitch(Rate*2.f);
	}
}

void ASSM_Spaceship_Pawn::ProcessRoll(float Value)
{
	float TargetRollSpeed = Value * RollRateMultiplier;
	CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

void ASSM_Spaceship_Pawn::ProcessPitch(float Value)
{
	float TargetPitchSpeed = Value * PitchRateMultiplier;
	CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

//void ASSM_Spaceship_Pawn::MoveHorizontal(float AxisValue)
//{
//	AddMovementInput(FVector(AxisValue, 0.0f, 0.0f), 0.5f, true);
//}
//
//void ASSM_Spaceship_Pawn::MoveVertical(float AxisValue)
//{
//	AddMovementInput(FVector(0.0f, 0.0f, AxisValue), 0.5f, true);
//}

