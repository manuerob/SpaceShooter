// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTestDelegate, int, ObstacleIndex);

UCLASS()
class SPACESHOOTERMANUE_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintAssignable, Category = "Test")
		FTestDelegate TestDelegate;

	UFUNCTION(BlueprintCallable, Category = "Test")
		void OnObstacleHit();

	int index;
};
