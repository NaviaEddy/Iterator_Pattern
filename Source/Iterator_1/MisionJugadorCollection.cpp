// Fill out your copyright notice in the Description page of Project Settings.

#include "MisionJugadorCollection.h"
#include "MisionJugadorIterator.h"

// Sets default values
AMisionJugadorCollection::AMisionJugadorCollection()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollecionMisiones = TArray<FString>();
}

// Called when the game starts or when spawned
void AMisionJugadorCollection::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMisionJugadorCollection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMisionJugadorCollection::InicilizarColeccion(const TArray<FString>& _coleccionmisiones)
{
	CollecionMisiones = _coleccionmisiones;
}

IIIterable* AMisionJugadorCollection::CrearIterador() const
{
	AMisionJugadorIterator* IteradorJugador = GetWorld()->SpawnActor<AMisionJugadorIterator>(AMisionJugadorIterator::StaticClass());
	IteradorJugador->InicializarMisiones(CollecionMisiones);
	return IteradorJugador;
}

