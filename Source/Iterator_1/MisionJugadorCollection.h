// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IIterableCollection.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MisionJugadorCollection.generated.h"

UCLASS()
class ITERATOR_1_API AMisionJugadorCollection : public AActor, public IIIterableCollection
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMisionJugadorCollection();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void InicilizarColeccion(const TArray<FString>& _coleccionmisiones);

	IIIterable* CrearIterador() const override;

private:
	TArray<FString> CollecionMisiones;

};
