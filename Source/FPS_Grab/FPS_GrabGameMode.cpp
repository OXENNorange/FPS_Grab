// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FPS_GrabGameMode.h"
#include "FPS_GrabHUD.h"
#include "FPS_GrabCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_GrabGameMode::AFPS_GrabGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_GrabHUD::StaticClass();
}
