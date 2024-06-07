// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoLineal.h"

UMovimientoLineal::UMovimientoLineal()
{
	velocidad = 50.0f;
	direccion = FVector(1.0f, 0.0f, 0.0f);

	//LIMITES DEL ESCENARIO
	LimiteDerecho = 1870.0f;         //Y
	LimiteInferior = -1950.0f;      //-X
	LimiteIzquierdo = -1870.0f;     //-Y
	LimiteSuperior = 1950.0f;        //X
}


void UMovimientoLineal::Mover(AActor* Nave)
{
    if (Nave)
    {
		FVector NewLocation = Nave -> GetActorLocation();  // Obtener la posición actual del actor

	/* CALCULAR EL DESPLAZAMIENTO BASADO EN LA VELOCIDAD Y TIEMPO TRANSCURRIDO */
		FVector Desplazamiento = direccion * velocidad;
		NewLocation += Desplazamiento;

		/* VERIFICAR LOS LIMITES DEL ESCENARIO Y CAMBIAR LA DIRECCION DE MOVIMIENTO SI ES NECESARIO */
		if (NewLocation.X < LimiteInferior || NewLocation.X > LimiteSuperior)
		{
			direccion.X *= -1.0f;   // Invertir la dirección en el eje X para rebotar en la pared izquierda o derecha
		}
		if (NewLocation.Y < LimiteIzquierdo || NewLocation.Y > LimiteDerecho)
		{
			direccion.Y *= -1.0f;   // Invertir la dirección en el eje Y para rebotar en la pared inferior o superior
		}

		Nave -> SetActorLocation(NewLocation);   // Establecer la nueva posición del actor
    }
}