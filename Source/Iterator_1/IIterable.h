// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IIterable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIIterable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ITERATOR_1_API IIIterable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual FString Siguiente() = 0;
	virtual bool TieneSiguiente() = 0;
};
