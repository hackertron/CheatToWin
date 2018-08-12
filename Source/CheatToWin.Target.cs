// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class CheatToWinTarget : TargetRules
{
	public CheatToWinTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.Add("CheatToWin");
	}

	//
	// TargetRules interface.
	//


}
