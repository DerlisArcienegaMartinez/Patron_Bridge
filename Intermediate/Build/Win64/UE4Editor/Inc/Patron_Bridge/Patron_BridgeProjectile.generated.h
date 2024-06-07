// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PATRON_BRIDGE_Patron_BridgeProjectile_generated_h
#error "Patron_BridgeProjectile.generated.h already included, missing '#pragma once' in Patron_BridgeProjectile.h"
#endif
#define PATRON_BRIDGE_Patron_BridgeProjectile_generated_h

#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_SPARSE_DATA
#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPatron_BridgeProjectile(); \
	friend struct Z_Construct_UClass_APatron_BridgeProjectile_Statics; \
public: \
	DECLARE_CLASS(APatron_BridgeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Bridge"), NO_API) \
	DECLARE_SERIALIZER(APatron_BridgeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPatron_BridgeProjectile(); \
	friend struct Z_Construct_UClass_APatron_BridgeProjectile_Statics; \
public: \
	DECLARE_CLASS(APatron_BridgeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Patron_Bridge"), NO_API) \
	DECLARE_SERIALIZER(APatron_BridgeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APatron_BridgeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APatron_BridgeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatron_BridgeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatron_BridgeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatron_BridgeProjectile(APatron_BridgeProjectile&&); \
	NO_API APatron_BridgeProjectile(const APatron_BridgeProjectile&); \
public:


#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APatron_BridgeProjectile(APatron_BridgeProjectile&&); \
	NO_API APatron_BridgeProjectile(const APatron_BridgeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APatron_BridgeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APatron_BridgeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APatron_BridgeProjectile)


#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APatron_BridgeProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APatron_BridgeProjectile, ProjectileMovement); }


#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_12_PROLOG
#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_SPARSE_DATA \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_RPC_WRAPPERS \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_INCLASS \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_SPARSE_DATA \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PATRON_BRIDGE_API UClass* StaticClass<class APatron_BridgeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Patron_Bridge_Source_Patron_Bridge_Patron_BridgeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
