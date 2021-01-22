// Fill out your copyright notice in the Description page of Project Settings.


#include "SSM_Spaceship_Pawn.h"

// Sets default values
ASSM_Spaceship_Pawn::ASSM_Spaceship_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

}

// Called when the game starts or when spawned
void ASSM_Spaceship_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASSM_Spaceship_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASSM_Spaceship_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ASSM_Spaceship_Pawn::MoveHorizontal(float AxisValue)
{
}

void ASSM_Spaceship_Pawn::MoveVertical(float AxisValue)
{
}

