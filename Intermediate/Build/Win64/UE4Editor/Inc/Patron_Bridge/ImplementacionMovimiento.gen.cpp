// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Bridge/ImplementacionMovimiento.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImplementacionMovimiento() {}
// Cross Module References
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_UImplementacionMovimiento_NoRegister();
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_UImplementacionMovimiento();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Patron_Bridge();
// End Cross Module References
	void UImplementacionMovimiento::StaticRegisterNativesUImplementacionMovimiento()
	{
	}
	UClass* Z_Construct_UClass_UImplementacionMovimiento_NoRegister()
	{
		return UImplementacionMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_UImplementacionMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImplementacionMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Bridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImplementacionMovimiento_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ImplementacionMovimiento.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImplementacionMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IImplementacionMovimiento>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UImplementacionMovimiento_Statics::ClassParams = {
		&UImplementacionMovimiento::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UImplementacionMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImplementacionMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImplementacionMovimiento()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UImplementacionMovimiento_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UImplementacionMovimiento, 1687543557);
	template<> PATRON_BRIDGE_API UClass* StaticClass<UImplementacionMovimiento>()
	{
		return UImplementacionMovimiento::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UImplementacionMovimiento(Z_Construct_UClass_UImplementacionMovimiento, &UImplementacionMovimiento::StaticClass, TEXT("/Script/Patron_Bridge"), TEXT("UImplementacionMovimiento"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImplementacionMovimiento);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
