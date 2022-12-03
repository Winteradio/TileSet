// Fill out your copyright notice in the Description page of Project Settings.


#include "IndirectionTextureAssetActions.h"
#include "IndirectionTexture.h"

FIndirectionTextureAssetActions::FIndirectionTextureAssetActions(EAssetTypeCategories::Type assetCategory)
    : AssetCategory( assetCategory )
{}

UClass* FIndirectionTextureAssetActions::GetSupportedClass() const
{
    return UIndirectionTexture::StaticClass();
}

FText FIndirectionTextureAssetActions::GetName() const
{
    return INVTEXT("Indirect Texture");
}

FColor FIndirectionTextureAssetActions::GetTypeColor() const
{
    return FColor::Cyan;
}

uint32 FIndirectionTextureAssetActions::GetCategories()
{
    return EAssetTypeCategories::Misc;
}
