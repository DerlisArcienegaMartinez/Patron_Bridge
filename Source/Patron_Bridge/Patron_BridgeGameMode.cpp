// Copyright Epic Games, Inc. All Rights Reserved.

#include "Patron_BridgeGameMode.h"
#include "Patron_BridgePawn.h"

APatron_BridgeGameMode::APatron_BridgeGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APatron_BridgePawn::StaticClass();
}

