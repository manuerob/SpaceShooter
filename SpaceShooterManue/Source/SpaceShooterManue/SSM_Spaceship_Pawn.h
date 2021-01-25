// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Blueprint/UserWidget.h"

#include "SSM_Spaceship_Pawn.generated.h"

class UFloatingPawnMovement;

UCLASS()
class SPACESHOOTERMANUE_API ASSM_Spaceship_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASSM_Spaceship_Pawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AActor* SpawnObstacle();

	void MoveObstacle();

	bool IsInRange(FVector pawnLocation, FVector forwardVector, int offset, FVector actorLocation);

	FVector GenerateRandomLocation(FVector pawnLocation, FVector forwardVector, int offset);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float Acceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float MaxSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float MinSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float CurrentYawSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float CurrentPitchSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float CurrentRollSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float RollRateMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float PitchRateMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Flight)
		float CurrentForwardSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawner)
	TSubclassOf<AActor> ActorToSpawn;

	TArray<AActor*> Obstacles;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void ProcessMouseYInput(float Value);
	virtual void ProcessMouseXInput(float Value);

	virtual void ProcessKeyRoll(float Rate);
	virtual void ProcessKeyPitch(float Rate);

	virtual void ProcessRoll(float Value);
	virtual void ProcessPitch(float Value);


};
