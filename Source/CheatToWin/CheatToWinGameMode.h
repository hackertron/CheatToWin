// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameModeBase.h"
#include "CheatToWinGameMode.generated.h"

UCLASS(minimalapi)
class ACheatToWinGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACheatToWinGameMode();
	bool win = false;
	bool check_win(int32 coins);
};



