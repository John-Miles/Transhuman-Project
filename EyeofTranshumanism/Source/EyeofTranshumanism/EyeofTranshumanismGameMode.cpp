// Copyright Epic Games, Inc. All Rights Reserved.

#include "EyeofTranshumanismGameMode.h"
#include "EyeofTranshumanismHUD.h"
#include "EyeofTranshumanismCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEyeofTranshumanismGameMode::AEyeofTranshumanismGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEyeofTranshumanismHUD::StaticClass();
}
