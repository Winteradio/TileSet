// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NewAssetEditor/Public/IndirectionTextureFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIndirectionTextureFactory() {}
// Cross Module References
	NEWASSETEDITOR_API UClass* Z_Construct_UClass_UIndirectionTextureFactory_NoRegister();
	NEWASSETEDITOR_API UClass* Z_Construct_UClass_UIndirectionTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NewAssetEditor();
// End Cross Module References
	void UIndirectionTextureFactory::StaticRegisterNativesUIndirectionTextureFactory()
	{
	}
	UClass* Z_Construct_UClass_UIndirectionTextureFactory_NoRegister()
	{
		return UIndirectionTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UIndirectionTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndirectionTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NewAssetEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectionTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IndirectionTextureFactory.h" },
		{ "ModuleRelativePath", "Public/IndirectionTextureFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndirectionTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndirectionTextureFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIndirectionTextureFactory_Statics::ClassParams = {
		&UIndirectionTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIndirectionTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectionTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndirectionTextureFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIndirectionTextureFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIndirectionTextureFactory, 3859099522);
	template<> NEWASSETEDITOR_API UClass* StaticClass<UIndirectionTextureFactory>()
	{
		return UIndirectionTextureFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIndirectionTextureFactory(Z_Construct_UClass_UIndirectionTextureFactory, &UIndirectionTextureFactory::StaticClass, TEXT("/Script/NewAssetEditor"), TEXT("UIndirectionTextureFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndirectionTextureFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
