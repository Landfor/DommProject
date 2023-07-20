// Copyright Epic Games, Inc. All Rights Reserved.

#include "experGameMode.h"
#include "experCharacter.h"
#include "UObject/ConstructorHelpers.h"

AexperGameMode::AexperGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
