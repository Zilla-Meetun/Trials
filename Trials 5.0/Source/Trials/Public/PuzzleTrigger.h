// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PuzzleTrigger.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UPuzzleTrigger : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TRIALS_API IPuzzleTrigger
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Activate();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void Deactivate();
};
