// Fill out your copyright notice in the Description page of Project Settings.


#include "SSM_PlayerController.h"
#include "SSM_Spaceship_Pawn.h"


ASSM_PlayerController::ASSM_PlayerController()
{
	bEnableClickEvents = true;
	bShowMouseCursor = true;
}

void ASSM_PlayerController::BeginPlay()
{
}

void ASSM_PlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("Turn", this, &ASSM_PlayerController::ProcessMouseXInput);
	InputComponent->BindAxis("LookUp", this, &ASSM_PlayerController::ProcessMouseYInput);
	InputComponent->BindAxis("TurnRate", this, &ASSM_PlayerController::ProcessKeyRoll);
	InputComponent->BindAxis("LookUpRate", this, &ASSM_PlayerController::ProcessKeyPitch);
	InputComponent->BindAction("Fire", IE_Pressed, this, &ASSM_PlayerController::Shoot);
}

void ASSM_PlayerController::ProcessMouseYInput(float Value)
{
	Cast<ASSM_Spaceship_Pawn>(GetPawn())->ProcessPitch(Value);
}

void ASSM_PlayerController::ProcessMouseXInput(float Value)
{
	Cast<ASSM_Spaceship_Pawn>(GetPawn())->ProcessRoll(Value);
}

void ASSM_PlayerController::ProcessKeyRoll(float Rate)
{
	Cast<ASSM_Spaceship_Pawn>(GetPawn())->ProcessKeyRoll(Rate);
}

void ASSM_PlayerController::ProcessKeyPitch(float Rate)
{
	Cast<ASSM_Spaceship_Pawn>(GetPawn())->ProcessKeyPitch(Rate);
}

void ASSM_PlayerController::ProcessRoll(float Value)
{
	Cast<ASSM_Spaceship_Pawn>(GetPawn())->ProcessRoll(Value);
}

void ASSM_PlayerController::ProcessPitch(float Value)
{
	Cast<ASSM_Spaceship_Pawn>(GetPawn())->ProcessPitch(Value);
}

void ASSM_PlayerController::Shoot()
{
	FVector pawnLocation = GetPawn()->GetActorLocation();
	FVector forwardVector = GetPawn()->GetActorForwardVector();

	FVector projectileLocation = pawnLocation + forwardVector * 500;

	FActorSpawnParameters SpawnInfo;

	AActor* spawnedProjectile = GetWorld()->SpawnActor<AActor>(ProjectileToSpawn, projectileLocation, FRotator(0.0f, 0.0f, 0.0f), SpawnInfo);

	ASpaceshipProjectile* SpaceshipProjectile = Cast<ASpaceshipProjectile>(spawnedProjectile);
	if (SpaceshipProjectile)
	{
		SpaceshipProjectile->setProjectileVelocity(forwardVector * 10000);
	}
}



//void ASSM_PlayerController::MoveHorizontal(float AxisValue)
//{
//	auto MyPawn = Cast<ASSM_Spaceship_Pawn>(GetPawn());
//
//	if (MyPawn) {
//		//MyPawn->MoveHorizontal(AxisValue);
//	}
//
//}
//
//void ASSM_PlayerController::MoveVertical(float AxisValue)
//{
//	auto MyPawn = Cast<ASSM_Spaceship_Pawn>(GetPawn());
//
//	if (MyPawn) {
//		//MyPawn->MoveVertical(AxisValue);
//	}
//
//}
