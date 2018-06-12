// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"

// Sets default values for this actor's properties
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// The base power level of hte battery
	BatteryPower = 150.f;
}

void ABatteryPickup::WasCollected_Implementation()
{
	// Use the base pickup behavior
	Super::WasCollected_Implementation();
	// Destroy the battery
	Destroy();
}

// Report the power level of the battery
float ABatteryPickup::GetPower()
{
	return BatteryPower;
}