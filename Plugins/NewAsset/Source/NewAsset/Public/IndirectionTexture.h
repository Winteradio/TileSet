// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <random>
#include "IndirectionTexture.generated.h"


/**
 * 
 */
UCLASS()
class NEWASSET_API UIndirectionTexture : public UObject
{
	GENERATED_BODY()
	
public : 
	UIndirectionTexture();

	UPROPERTY(EditAnywhere)
	int32 Width;
	
	UPROPERTY(EditAnywhere)
	int32 Height;

	UPROPERTY(EditAnywhere)
	int32 tileWidth;

	UPROPERTY(EditAnywhere)
	int32 tileHeight;

	UPROPERTY(EditAnywhere)
	UTexture2D* BaseTexture;

private :
	FString tilePath;
	FString tileName;

	void CreateTexture();
};
