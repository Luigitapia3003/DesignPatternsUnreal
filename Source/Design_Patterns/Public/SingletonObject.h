// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SingletonObject.generated.h"

/**
 * 
 */
UCLASS()
class DESIGN_PATTERNS_API USingletonObject : public UObject
{
	GENERATED_BODY()

public:

	static USingletonObject* GetInstance() { return Instance; }

private:
	static USingletonObject* Instance;
	
};
