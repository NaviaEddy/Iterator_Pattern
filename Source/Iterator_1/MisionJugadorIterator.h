// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IIterable.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MisionJugadorIterator.generated.h"

UCLASS()
class ITERATOR_1_API AMisionJugadorIterator : public AActor, public IIIterable
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMisionJugadorIterator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	FString Siguiente() override;
	bool TieneSiguiente() override;

	void InicializarMisiones(const TArray<FString>& misiones);

private:
	TArray<FString> Misiones;
	int32 IndexMisiones;

};
