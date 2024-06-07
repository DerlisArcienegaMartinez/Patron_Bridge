// Copyright Epic Games, Inc. All Rights Reserved.

#include "Patron_BridgeGameMode.h"
#include "Patron_BridgePawn.h"
#include "UObject/ConstructorHelpers.h"
#include "NaveEnemiga.h"
#include "NaveEnemigaCaza.h"
#include "NaveEnemigaGuerrera.h"
#include "Kismet/GameplayStatics.h"

APatron_BridgeGameMode::APatron_BridgeGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APatron_BridgePawn::StaticClass();

}

void APatron_BridgeGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Spawn enemy ships at the start of the game
    SpawnNavesEnemigas();
}

void APatron_BridgeGameMode::SpawnNavesEnemigas()
{
    UWorld* World = GetWorld();
    if (World)
    {
        FVector SpawnLocation(-600.0f, -800.0f, 214.72f);
        FRotator SpawnRotation(0.0f, 0.0f, 0.0f);

        // Spawn NECaza ships
        for (int i = 0; i < 5; i++)
        {
            ANaveEnemigaCaza* NaveEnemigaCazaActual = World->SpawnActor<ANaveEnemigaCaza>(SpawnLocation, SpawnRotation);
            SpawnLocation.Y += 300.0f;

        }

        SpawnLocation.X -= 150.0f;


        // Spawn NEGuerrera ships
        for (int j = 0; j < 5; j++)
        {
            ANaveEnemigaGuerrera* NaveEnemigaGuerreraActual = World->SpawnActor<ANaveEnemigaGuerrera>(SpawnLocation, SpawnRotation);
            SpawnLocation.Y -= 300.0f;
        }
    }
}
