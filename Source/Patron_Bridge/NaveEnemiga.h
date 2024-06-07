// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImplementacionMovimiento.h"
#include "NaveEnemiga.generated.h"

UCLASS(Abstract)
class PATRON_BRIDGE_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* mallaNaveEnemiga;

//protected:
//	float velocidad;
//	FVector direccion;
//
//public:
//	// Metodos accesores
//	FORCEINLINE float GetVelocidad() const { return velocidad; }
//	FORCEINLINE FVector GetDireccion() const { return direccion; }
//
//	FORCEINLINE void SetVelocidad(float _velocidad) { velocidad = _velocidad; }
//	FORCEINLINE void SetDireccion(FVector Direccion) { direccion = Direccion; }

	
public:	
	// Sets default values for this actor's properties
	ANaveEnemiga();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Reference to the movement implementation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movimiento")
		TScriptInterface<IImplementacionMovimiento> Movimiento;

	// Funcion para realizar el movimiento
	virtual void Mover(float DeltaTime);
};
