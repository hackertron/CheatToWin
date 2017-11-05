// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "CheatToWin.h"
#include "CheatToWinGameMode.h"
#include "CheatToWinCharacter.h"

ACheatToWinGameMode::ACheatToWinGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
