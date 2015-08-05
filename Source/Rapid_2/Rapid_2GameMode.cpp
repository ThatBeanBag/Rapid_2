// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Rapid_2.h"
#include "Rapid_2GameMode.h"
#include "Rapid_2PlayerController.h"
#include "Rapid_2Character.h"

ARapid_2GameMode::ARapid_2GameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ARapid_2PlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}