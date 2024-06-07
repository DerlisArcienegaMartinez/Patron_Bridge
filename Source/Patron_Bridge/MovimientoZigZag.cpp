// Fill out your copyright notice in the Description page of Project Settings.


#include "MovimientoZigZag.h"

UMovimientoZigZag::UMovimientoZigZag()
{
    TimePassed = 220.0f;
    Direction = 1.0f;
}

void UMovimientoZigZag::Mover(AActor* Nave)
{
    if (Nave)
    {
        FVector NewLocation = Nave->GetActorLocation();

        // Move the nave forward along the X axis
        NewLocation.X += 5.0f;

        // Update the zigzag movement along the Y axis
        TimePassed += GetWorld()->GetDeltaSeconds();
        if (TimePassed >= 1.0f) // Change direction every second
        {
            Direction *= -1.0f;
            TimePassed = 0.0f;
        }
        NewLocation.Y += Direction * 5.0f;

        Nave->SetActorLocation(NewLocation);
    }
}