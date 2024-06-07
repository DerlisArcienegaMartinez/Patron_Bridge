// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaCaza.h"
#include "MovimientoLineal.h"

ANaveEnemigaCaza::ANaveEnemigaCaza()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));
    mallaNaveEnemiga->SetStaticMesh(malla.Object);

    // Establecer comportamiento de movimiento predeterminado
    Movimiento = CreateDefaultSubobject<UMovimientoLineal>(TEXT("MovimientoLineal"));
}