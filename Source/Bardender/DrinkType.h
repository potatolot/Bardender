// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */

UCLASS(Blueprintable)
class BARDENDER_API DrinkType
{
public:
	DrinkType();
	~DrinkType();

	static const FString name;
};

class BaseDrink : DrinkType
{
	
};
