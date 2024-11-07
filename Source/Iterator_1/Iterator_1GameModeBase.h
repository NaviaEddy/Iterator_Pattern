// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Iterator_1GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ITERATOR_1_API AIterator_1GameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AIterator_1GameModeBase();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	void IterarMisionesJugador();
	
	UPROPERTY(VisibleAnywhere, Category="Game mode")
	class AMisionJugadorCollection* MisionCollection;

	class IIIterable* Iterator;
};
