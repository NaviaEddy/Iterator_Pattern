// Fill out your copyright notice in the Description page of Project Settings.


#include "MisionJugadorIterator.h"

// Sets default values
AMisionJugadorIterator::AMisionJugadorIterator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	IndexMisiones = -1;
	Misiones = TArray<FString>();
}

// Called when the game starts or when spawned
void AMisionJugadorIterator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMisionJugadorIterator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AMisionJugadorIterator::Siguiente()
{
	if (TieneSiguiente())
	{
		return Misiones[++IndexMisiones];
	}
	return "";
}

bool AMisionJugadorIterator::TieneSiguiente()
{
	return Misiones.IsValidIndex(IndexMisiones + 1);
}

void AMisionJugadorIterator::InicializarMisiones(const TArray<FString>& _misiones)
{
	Misiones = _misiones;
}

