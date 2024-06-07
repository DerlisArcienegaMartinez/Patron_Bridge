// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ImplementacionMovimiento.h"
#include "MovimientoLineal.generated.h"

/**
 * 
 */
UCLASS()
class PATRON_BRIDGE_API UMovimientoLineal : public UObject, public IImplementacionMovimiento
{
	GENERATED_BODY()

protected:
	float velocidad;
	FVector direccion;

public:
	UMovimientoLineal();

	float LimiteSuperior;
	float LimiteInferior;
	float LimiteDerecho;
	float LimiteIzquierdo;

public:
	virtual void Mover(AActor* Nave) override;
};
