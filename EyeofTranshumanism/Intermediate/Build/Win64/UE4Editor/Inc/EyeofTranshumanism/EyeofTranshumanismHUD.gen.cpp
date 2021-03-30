// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EyeofTranshumanism/EyeofTranshumanismHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEyeofTranshumanismHUD() {}
// Cross Module References
	EYEOFTRANSHUMANISM_API UClass* Z_Construct_UClass_AEyeofTranshumanismHUD_NoRegister();
	EYEOFTRANSHUMANISM_API UClass* Z_Construct_UClass_AEyeofTranshumanismHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_EyeofTranshumanism();
// End Cross Module References
	void AEyeofTranshumanismHUD::StaticRegisterNativesAEyeofTranshumanismHUD()
	{
	}
	UClass* Z_Construct_UClass_AEyeofTranshumanismHUD_NoRegister()
	{
		return AEyeofTranshumanismHUD::StaticClass();
	}
	struct Z_Construct_UClass_AEyeofTranshumanismHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEyeofTranshumanismHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_EyeofTranshumanism,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEyeofTranshumanismHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "EyeofTranshumanismHUD.h" },
		{ "ModuleRelativePath", "EyeofTranshumanismHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEyeofTranshumanismHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEyeofTranshumanismHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEyeofTranshumanismHUD_Statics::ClassParams = {
		&AEyeofTranshumanismHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEyeofTranshumanismHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEyeofTranshumanismHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEyeofTranshumanismHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEyeofTranshumanismHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEyeofTranshumanismHUD, 3491203781);
	template<> EYEOFTRANSHUMANISM_API UClass* StaticClass<AEyeofTranshumanismHUD>()
	{
		return AEyeofTranshumanismHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEyeofTranshumanismHUD(Z_Construct_UClass_AEyeofTranshumanismHUD, &AEyeofTranshumanismHUD::StaticClass, TEXT("/Script/EyeofTranshumanism"), TEXT("AEyeofTranshumanismHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEyeofTranshumanismHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
