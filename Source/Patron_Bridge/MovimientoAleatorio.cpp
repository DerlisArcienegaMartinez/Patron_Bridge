// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoAleatorio.h"

void UMovimientoAleatorio::Mover(AActor* Nave)
{
    if (Nave)
    {
        FVector NewLocation = Nave->GetActorLocation();
        NewLocation.X += FMath::RandRange(-10, 10); // Mueve la nave aleatoriamente a lo largo del eje X.
        NewLocation.Y += FMath::RandRange(-10, 10); // Mueve la nave aleatoriamente a lo largo del eje Y.
        Nave->SetActorLocation(NewLocation);
    }
}