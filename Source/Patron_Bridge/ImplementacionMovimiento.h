// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ImplementacionMovimiento.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UImplementacionMovimiento : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PATRON_BRIDGE_API IImplementacionMovimiento
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	//Esta función será implementada por clases de movimiento concreto.
	virtual void Mover(AActor* Nave) = 0;
};
