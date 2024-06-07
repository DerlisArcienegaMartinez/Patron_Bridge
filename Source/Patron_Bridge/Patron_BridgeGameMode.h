// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "NaveEnemiga.h"
#include "Patron_BridgeGameMode.generated.h"

UCLASS(MinimalAPI)
class APatron_BridgeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APatron_BridgeGameMode();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<ANaveEnemiga> NaveEnemigaCazaClass;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<ANaveEnemiga> NaveEnemigaGuerreraClass;

	void SpawnNavesEnemigas();
};



