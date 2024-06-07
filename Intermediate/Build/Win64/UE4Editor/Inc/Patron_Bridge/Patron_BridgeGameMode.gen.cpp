// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Bridge/Patron_BridgeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatron_BridgeGameMode() {}
// Cross Module References
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_APatron_BridgeGameMode_NoRegister();
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_APatron_BridgeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Patron_Bridge();
// End Cross Module References
	void APatron_BridgeGameMode::StaticRegisterNativesAPatron_BridgeGameMode()
	{
	}
	UClass* Z_Construct_UClass_APatron_BridgeGameMode_NoRegister()
	{
		return APatron_BridgeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_APatron_BridgeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatron_BridgeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Bridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatron_BridgeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Patron_BridgeGameMode.h" },
		{ "ModuleRelativePath", "Patron_BridgeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatron_BridgeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatron_BridgeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatron_BridgeGameMode_Statics::ClassParams = {
		&APatron_BridgeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_APatron_BridgeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APatron_BridgeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatron_BridgeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatron_BridgeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatron_BridgeGameMode, 2755431153);
	template<> PATRON_BRIDGE_API UClass* StaticClass<APatron_BridgeGameMode>()
	{
		return APatron_BridgeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatron_BridgeGameMode(Z_Construct_UClass_APatron_BridgeGameMode, &APatron_BridgeGameMode::StaticClass, TEXT("/Script/Patron_Bridge"), TEXT("APatron_BridgeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatron_BridgeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
