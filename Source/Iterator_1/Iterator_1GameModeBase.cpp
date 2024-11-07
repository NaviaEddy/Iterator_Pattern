// Copyright Epic Games, Inc. All Rights Reserved.
#include "Iterator_1GameModeBase.h"
#include "MisionJugadorCollection.h"


AIterator_1GameModeBase::AIterator_1GameModeBase()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AIterator_1GameModeBase::BeginPlay()
{
	Super::BeginPlay();
	IterarMisionesJugador();
}

void AIterator_1GameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AIterator_1GameModeBase::IterarMisionesJugador()
{
    TArray<FString> Misiones = { "Mission 1", "Mission 2", "Mission 3", "Mission 4", "Mission 5", "Mission 6", "Mission 1", "Mission 2", "Mission 3", "Mission 4", "Mission 5", "Mission 6" };

    MisionCollection = GetWorld()->SpawnActor<AMisionJugadorCollection>(AMisionJugadorCollection::StaticClass());
    MisionCollection->InicilizarColeccion(Misiones);
    Iterator = MisionCollection->CrearIterador();

    while (Iterator->TieneSiguiente())
    {
        FString Mission = Iterator->Siguiente();
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Mission: %s"), *Mission));
    }
	
}
