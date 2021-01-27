// Fill out your copyright notice in the Description page of Project Settings.


#include "SpaceshipProjectile.h"

// Sets default values
ASpaceshipProjectile::ASpaceshipProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(FName("Projectile Movement"));

	ProjectileMovement->bAutoActivate = false;

}

// Called when the game starts or when spawned
void ASpaceshipProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpaceshipProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASpaceshipProjectile::setProjectileVelocity(FVector velocity)
{
	ProjectileMovement->SetVelocityInLocalSpace(velocity);
	ProjectileMovement->Activate();
}

