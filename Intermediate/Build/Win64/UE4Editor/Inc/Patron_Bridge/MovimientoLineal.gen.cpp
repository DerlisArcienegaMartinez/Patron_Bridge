// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Bridge/MovimientoLineal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimientoLineal() {}
// Cross Module References
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_UMovimientoLineal_NoRegister();
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_UMovimientoLineal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Patron_Bridge();
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_UImplementacionMovimiento_NoRegister();
// End Cross Module References
	void UMovimientoLineal::StaticRegisterNativesUMovimientoLineal()
	{
	}
	UClass* Z_Construct_UClass_UMovimientoLineal_NoRegister()
	{
		return UMovimientoLineal::StaticClass();
	}
	struct Z_Construct_UClass_UMovimientoLineal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimientoLineal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Bridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimientoLineal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MovimientoLineal.h" },
		{ "ModuleRelativePath", "MovimientoLineal.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovimientoLineal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UImplementacionMovimiento_NoRegister, (int32)VTABLE_OFFSET(UMovimientoLineal, IImplementacionMovimiento), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimientoLineal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimientoLineal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovimientoLineal_Statics::ClassParams = {
		&UMovimientoLineal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimientoLineal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimientoLineal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimientoLineal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovimientoLineal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovimientoLineal, 2673288133);
	template<> PATRON_BRIDGE_API UClass* StaticClass<UMovimientoLineal>()
	{
		return UMovimientoLineal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovimientoLineal(Z_Construct_UClass_UMovimientoLineal, &UMovimientoLineal::StaticClass, TEXT("/Script/Patron_Bridge"), TEXT("UMovimientoLineal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimientoLineal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
