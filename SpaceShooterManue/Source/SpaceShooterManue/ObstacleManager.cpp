// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstacleManager.h"


// Sets default values
AObstacleManager::AObstacleManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AObstacleManager::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AObstacleManager::MoveObstacle, 0.2f, true);

	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	for (int i = 0; i < 200; i++) {

		AMyActor* newObstacle = SpawnObstacle();

		newObstacle->index = i;

		newObstacle->TestDelegate.AddDynamic(this, &AObstacleManager::RespawnObject);

		Obstacles.Add(newObstacle);
	}
}

// Called every frame
void AObstacleManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AObstacleManager::RespawnObject(int index)
{
	Obstacles[index]->Destroy();

	Obstacles[index] = SpawnObstacle();
}

AMyActor* AObstacleManager::SpawnObstacle()
{

	FVector pawnLocation = PlayerPawn->GetActorLocation();
	FVector forwardVector = PlayerPawn->GetActorForwardVector();

	FVector RandomSpawnLocation = GenerateRandomLocation(pawnLocation, forwardVector, 3000);

	FActorSpawnParameters SpawnInfo;

	FRotator RRot;
	RRot.Yaw = FMath::FRand() * 360.f;
	RRot.Pitch = FMath::FRand() * 360.f;
	RRot.Roll = FMath::FRand() * 360.f;

	return GetWorld()->SpawnActor<AMyActor>(ActorToSpawn, RandomSpawnLocation, RRot, SpawnInfo);
}

void AObstacleManager::MoveObstacle()
{
	FVector pawnLocation = PlayerPawn->GetActorLocation();
	FVector forwardVector = PlayerPawn->GetActorForwardVector();

	for (int i = 0; i < 200; i++) {

		if (Obstacles[i] != nullptr) {

			FVector actorLocation = Obstacles[i]->GetActorLocation();

			if (IsInRange(pawnLocation, forwardVector, 5000, actorLocation)) {

				FVector RandomSpawnLocation = GenerateRandomLocation(pawnLocation, forwardVector, 3000);

				Obstacles[i]->SetActorLocation(RandomSpawnLocation);
			}
		}
		else {
			AMyActor* newObstacle = SpawnObstacle();

			Obstacles[i] = newObstacle;
		}


	}
}

bool AObstacleManager::IsInRange(FVector pawnLocation, FVector forwardVector, int offset, FVector actorLocation)
{
	FVector randomLocationSphereCenter = pawnLocation + forwardVector * 3000;

	if (randomLocationSphereCenter.X - offset > actorLocation.X || randomLocationSphereCenter.X + offset < actorLocation.X || randomLocationSphereCenter.Y - offset > actorLocation.Y || randomLocationSphereCenter.Y + offset < actorLocation.Y || randomLocationSphereCenter.Z - offset > actorLocation.Z || randomLocationSphereCenter.Z + offset < actorLocation.Z)
		return true;
	return false;
}

FVector AObstacleManager::GenerateRandomLocation(FVector pawnLocation, FVector forwardVector, int offset)
{

	FVector randomLocationSphereCenter = pawnLocation + forwardVector * 4000;

	FVector RandomSpawnLocation;
	RandomSpawnLocation.X = FMath::FRandRange(randomLocationSphereCenter.X - offset, randomLocationSphereCenter.X + offset);
	RandomSpawnLocation.Y = FMath::FRandRange(randomLocationSphereCenter.Y - offset, randomLocationSphereCenter.Y + offset);
	RandomSpawnLocation.Z = FMath::FRandRange(randomLocationSphereCenter.Z - offset, randomLocationSphereCenter.Z + offset);

	return RandomSpawnLocation;
}

