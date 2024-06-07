// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Patron_Bridge/NaveEnemigaGuerrera.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigaGuerrera() {}
// Cross Module References
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_ANaveEnemigaGuerrera_NoRegister();
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_ANaveEnemigaGuerrera();
	PATRON_BRIDGE_API UClass* Z_Construct_UClass_ANaveEnemiga();
	UPackage* Z_Construct_UPackage__Script_Patron_Bridge();
// End Cross Module References
	void ANaveEnemigaGuerrera::StaticRegisterNativesANaveEnemigaGuerrera()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigaGuerrera_NoRegister()
	{
		return ANaveEnemigaGuerrera::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigaGuerrera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigaGuerrera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANaveEnemiga,
		(UObject* (*)())Z_Construct_UPackage__Script_Patron_Bridge,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigaGuerrera_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NaveEnemigaGuerrera.h" },
		{ "ModuleRelativePath", "NaveEnemigaGuerrera.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigaGuerrera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigaGuerrera>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigaGuerrera_Statics::ClassParams = {
		&ANaveEnemigaGuerrera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigaGuerrera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigaGuerrera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigaGuerrera()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigaGuerrera_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigaGuerrera, 3484877393);
	template<> PATRON_BRIDGE_API UClass* StaticClass<ANaveEnemigaGuerrera>()
	{
		return ANaveEnemigaGuerrera::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigaGuerrera(Z_Construct_UClass_ANaveEnemigaGuerrera, &ANaveEnemigaGuerrera::StaticClass, TEXT("/Script/Patron_Bridge"), TEXT("ANaveEnemigaGuerrera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigaGuerrera);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
