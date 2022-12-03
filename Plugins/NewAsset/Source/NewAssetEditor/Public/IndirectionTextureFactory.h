// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "IndirectionTextureFactory.generated.h"

/**
 * 
 */
UCLASS()
class NEWASSETEDITOR_API UIndirectionTextureFactory : public UFactory
{
	GENERATED_BODY()
	
public :
	UIndirectionTextureFactory();
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName,
			EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
