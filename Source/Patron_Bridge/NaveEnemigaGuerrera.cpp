// Fill out your copyright notice in the Description page of Project Settings.


#include "NaveEnemigaGuerrera.h"
#include "MovimientoAleatorio.h"
#include "MovimientoZigZag.h"


ANaveEnemigaGuerrera::ANaveEnemigaGuerrera()
{

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	mallaNaveEnemiga->SetStaticMesh(malla.Object);

	// Establecer comportamiento de movimiento predeterminado
	Movimiento = CreateDefaultSubobject<UMovimientoZigZag>(TEXT("MovimientoAleatorio"));
}