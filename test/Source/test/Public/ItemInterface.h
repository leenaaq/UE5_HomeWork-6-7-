// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TEST_API IItemInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//virtual void OnItemOverlap(AActor* OverlapActor) = 0;
	//virtual void OnItemRndOverlap(AActor* OverlapActor) = 0;
	//virtual void ActivateItem(AActor* Activator) = 0;
	//virtual FName GetItemType() const = 0;

};
