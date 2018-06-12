// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectorGameMode.h"
#include "BatteryCollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "SpawnVolume.h"
#include "EngineUtils.h"

ABatteryCollectorGameMode::ABatteryCollectorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// Enablethe tick function on this game mode
	PrimaryActorTick.bCanEverTick = true;

	// Base decay rate
	DecayRate = 0.01f;
}

void ABatteryCollectorGameMode::BeginPlay()
{
	Super::BeginPlay();
	SetCurrentState(EBatteryPlayState::EPlaying);

	// Set the score to beat
	ABatteryCollectorCharacter* MyCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		PowerToWin = (MyCharacter->GetInitialPower()) * 1.25f;
	}

	// Setup the hud widget
	if (HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}

	//Find all spawn volume actors
	/* The two bits of code below do the same thing, but the iterator version is better
	TArray<AActors*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundActors);
	for (auto Actor : FoundActors)
	{
		ASpawnVolume* SpawnVolumeActor = Cast<ASpawnVolume>(Actor);
		if (SpawnVolumeActor)
		{
			SpawnVolumeActors.AddUnique(SpawnVolumeActor);

		}
	}*/

	for (TActorIterator<ASpawnVolume> It(GetWorld()); It; ++It) 
	{
		SpawnVolumeActors.AddUnique(*It);
	}
}

void ABatteryCollectorGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Check that we are using the battery collector character
	ABatteryCollectorCharacter* MyCharacter = Cast<ABatteryCollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		// If our power is greater than needed to win, set the game state to won
		if (MyCharacter->GetCurrentPower() > PowerToWin)
		{
			SetCurrentState(EBatteryPlayState::EWon);
		}
		// If the character's power is positive
		else if (MyCharacter->GetCurrentPower() > 0.f)
		{
			// Decrease the characters power using the decay rate
			MyCharacter->UpdatePower(-DeltaTime * DecayRate * (MyCharacter->GetInitialPower()));
		}
		else
		{
			SetCurrentState(EBatteryPlayState::EGameOver);
		}
	}
}

float ABatteryCollectorGameMode::GetPowerToWin() const
{
	return PowerToWin;
}

EBatteryPlayState ABatteryCollectorGameMode::GetCurrentState() const
{
	return CurrentState;
}

void ABatteryCollectorGameMode::SetCurrentState(EBatteryPlayState NewState)
{
	CurrentState = NewState;
}