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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveEnemigaGuerreraClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NaveEnemigaGuerreraClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NaveEnemigaCazaClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NaveEnemigaCazaClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaGuerreraClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Patron_BridgeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaGuerreraClass = { "NaveEnemigaGuerreraClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatron_BridgeGameMode, NaveEnemigaGuerreraClass), Z_Construct_UClass_ANaveEnemiga_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaGuerreraClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaGuerreraClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaCazaClass_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "Patron_BridgeGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaCazaClass = { "NaveEnemigaCazaClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatron_BridgeGameMode, NaveEnemigaCazaClass), Z_Construct_UClass_ANaveEnemiga_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaCazaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaCazaClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatron_BridgeGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaGuerreraClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatron_BridgeGameMode_Statics::NewProp_NaveEnemigaCazaClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatron_BridgeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatron_BridgeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatron_BridgeGameMode_Statics::ClassParams = {
		&APatron_BridgeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APatron_BridgeGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APatron_BridgeGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(APatron_BridgeGameMode, 983344617);
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
