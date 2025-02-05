// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "TestGameMode.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API ATestGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	ATestGameMode();
	virtual void BeginPlay() override;
};
