// Fill out your copyright notice in the Description page of Project Settings.


#include "IndirectionTexture.h"
#include "Engine/Texture2D.h"
#include "ImageUtils.h"

UIndirectionTexture::UIndirectionTexture()
{
	tileWidth = 8;
	tileHeight = 4;
	tilePath = TEXT("/Game/");
	tileName = TEXT("PUBG_Test_Tileset_01.png");
	BaseTexture = NULL;

	if (BaseTexture != NULL)
	{
		UE_LOG(LogTemp, Log, TEXT("NOT NULL!!"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("NULL"));
	}
}

void UIndirectionTexture::CreateTexture()
{
}

