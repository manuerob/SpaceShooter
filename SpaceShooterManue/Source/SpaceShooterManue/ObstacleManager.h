// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "MyActor.h"


#include "ObstacleManager.generated.h"

UCLASS()
class SPACESHOOTERMANUE_API AObstacleManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AObstacleManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	AMyActor* SpawnObstacle();

	void MoveObstacle();

	bool IsInRange(FVector pawnLocation, FVector forwardVector, int offset, FVector actorLocation);

	FVector GenerateRandomLocation(FVector pawnLocation, FVector forwardVector, int offset);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Spawner)
		TSubclassOf<AActor> ActorToSpawn;

	TArray<AMyActor*> Obstacles;

	APawn* PlayerPawn;

	UFUNCTION()
		void RespawnObject(int index);

};
