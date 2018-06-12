// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnVolume.h"
#include "Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Pickup.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Public/TimerManager.h"

// Sets default values
ASpawnVolume::ASpawnVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create the Box Component to represent the spawn volume
	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
	RootComponent = WhereToSpawn;

	// Set the spawn delay range
	SpawnDelayRangeLow = 1.0f;
	SpawnDelayRangeHigh = 4.5f;

}

// Called when the game starts or when spawned
void ASpawnVolume::BeginPlay()
{
	Super::BeginPlay();
}

FVector ASpawnVolume::GetRandomPointInVolume()
{
	FVector SpawnOrigin = WhereToSpawn->Bounds.Origin;
	FVector SpawnExtent = WhereToSpawn->Bounds.BoxExtent;

	return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent);

}

void ASpawnVolume::SetSpawningActive(bool bShouldSpawn)
{
	if (bShouldSpawn)
	{
		// Set the timer on spawn pickup
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, true);
	}
	else
	{
		// Clear the timer on spawn pcikup
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}
}

void ASpawnVolume::SpawnPickup()
{
	// If we have set something to spawn:
	if (WhatToSpawn != NULL)
	{
		// Check for a valid world
		UWorld* const World = GetWorld();
		if (World)
		{
			// Set the spawn paramaters
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;

			// Get a random location to spawn at
			FVector SpawnLocation = GetRandomPointInVolume();

			// Get a random rotation for the spawned item
			FRotator SpawnRotation;
			SpawnRotation.Yaw   = FMath::FRand() * 360.0f;
			SpawnRotation.Pitch = FMath::FRand() * 360.0f;
			SpawnRotation.Roll  = FMath::FRand() * 360.0f;

			// Spawn the pickup
			APickup* const SpawnedPickup =
				World->SpawnActor<APickup>(WhatToSpawn, SpawnLocation, SpawnRotation, SpawnParams);
		}
	}
}