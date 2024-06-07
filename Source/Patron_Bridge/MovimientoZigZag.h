// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImplementacionMovimiento.h"
#include "MovimientoZigZag.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_BRIDGE_API UMovimientoZigZag : public UObject, public IImplementacionMovimiento
{
	GENERATED_BODY()

private:
	float TimePassed;
	float Direction;

public:
	UMovimientoZigZag();

	virtual void Mover(AActor* Nave) override;
	
};
