// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

#include "SpaceshipProjectile.generated.h"

UCLASS()
class SPACESHOOTERMANUE_API ASpaceshipProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpaceshipProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void setProjectileVelocity(FVector velocity);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = ProjectileMovement)
		UProjectileMovementComponent* ProjectileMovement = nullptr;
};
