// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SpaceShooterManue/SpaceshipProjectile.h"

#include "SSM_PlayerController.generated.h"


/**
 * 
 */
UCLASS()
class SPACESHOOTERMANUE_API ASSM_PlayerController : public APlayerController
{
	GENERATED_BODY()

		ASSM_PlayerController();

	UFUNCTION()
		virtual void SetupInputComponent() override;

protected:

	virtual void BeginPlay() override;

	virtual void ProcessMouseYInput(float Value);
	virtual void ProcessMouseXInput(float Value);

	virtual void ProcessKeyRoll(float Rate);
	virtual void ProcessKeyPitch(float Rate);

	virtual void ProcessRoll(float Value);
	virtual void ProcessPitch(float Value);

	virtual void Shoot();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectiles)
		TSubclassOf<ASpaceshipProjectile> ProjectileToSpawn;
};
