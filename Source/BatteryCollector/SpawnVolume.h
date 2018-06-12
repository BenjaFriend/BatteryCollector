// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/* The pickup to spawn */
	UPROPERTY(EditAnywhere, Category="Spawning")
	TSubclassOf<class APickup> WhatToSpawn;

	FTimerHandle SpawnTimer;

	/* Minimum Spawn delay */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeLow;

	/* Maximum spawn delay */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeHigh;

public:	
	
	/**Returns the WhereToSpawn subobject */
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn; }

	/** Find a random point within the BoxComponent */
	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector GetRandomPointInVolume();

private:
	/** Box Component to specify where pickups should be spawned */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* WhereToSpawn;
	
	/* Handle spawning a new pickup */
	void SpawnPickup();

	/* The currrent spawn delay */
	float SpawnDelay;

};
