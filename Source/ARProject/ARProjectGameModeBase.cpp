// Copyright Epic Games, Inc. All Rights Reserved.


#include "ARProjectGameModeBase.h"
#include "ARPawn.h"
#include "ARPlayerController.h"

AARProjectGameModeBase::AARProjectGameModeBase()
	: Super()
{
	DefaultPawnClass = AARPawn::StaticClass();
	ReplaySpectatorPlayerControllerClass = AARPlayerController::StaticClass();
}