// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewAsset/Public/IndirectionTexture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndirectionTexture() {}
// Cross Module References
	NEWASSET_API UClass* Z_Construct_UClass_UIndirectionTexture_NoRegister();
	NEWASSET_API UClass* Z_Construct_UClass_UIndirectionTexture();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_NewAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	void UIndirectionTexture::StaticRegisterNativesUIndirectionTexture()
	{
	}
	UClass* Z_Construct_UClass_UIndirectionTexture_NoRegister()
	{
		return UIndirectionTexture::StaticClass();
	}
	struct Z_Construct_UClass_UIndirectionTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tileHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tileWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tileWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndirectionTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NewAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectionTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IndirectionTexture.h" },
		{ "ModuleRelativePath", "Public/IndirectionTexture.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_BaseTexture_MetaData[] = {
		{ "Category", "IndirectionTexture" },
		{ "ModuleRelativePath", "Public/IndirectionTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_BaseTexture = { "BaseTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectionTexture, BaseTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_BaseTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_BaseTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileHeight_MetaData[] = {
		{ "Category", "IndirectionTexture" },
		{ "ModuleRelativePath", "Public/IndirectionTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileHeight = { "tileHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectionTexture, tileHeight), METADATA_PARAMS(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileWidth_MetaData[] = {
		{ "Category", "IndirectionTexture" },
		{ "ModuleRelativePath", "Public/IndirectionTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileWidth = { "tileWidth", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectionTexture, tileWidth), METADATA_PARAMS(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "IndirectionTexture" },
		{ "ModuleRelativePath", "Public/IndirectionTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectionTexture, Height), METADATA_PARAMS(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "IndirectionTexture" },
		{ "ModuleRelativePath", "Public/IndirectionTexture.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectionTexture, Width), METADATA_PARAMS(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIndirectionTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_BaseTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_tileWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectionTexture_Statics::NewProp_Width,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndirectionTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndirectionTexture>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIndirectionTexture_Statics::ClassParams = {
		&UIndirectionTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIndirectionTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectionTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIndirectionTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectionTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndirectionTexture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIndirectionTexture_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIndirectionTexture, 2007525902);
	template<> NEWASSET_API UClass* StaticClass<UIndirectionTexture>()
	{
		return UIndirectionTexture::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIndirectionTexture(Z_Construct_UClass_UIndirectionTexture, &UIndirectionTexture::StaticClass, TEXT("/Script/NewAsset"), TEXT("UIndirectionTexture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndirectionTexture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
