// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImplementacionMovimiento.h"
#include "MovimientoAleatorio.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_BRIDGE_API UMovimientoAleatorio : public UObject, public IImplementacionMovimiento
{
	GENERATED_BODY()
	
public:
	virtual void Mover(AActor* Nave) override;
};
