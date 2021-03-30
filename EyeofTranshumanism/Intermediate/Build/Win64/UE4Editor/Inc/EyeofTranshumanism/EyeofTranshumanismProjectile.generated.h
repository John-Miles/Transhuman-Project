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
#ifdef EYEOFTRANSHUMANISM_EyeofTranshumanismProjectile_generated_h
#error "EyeofTranshumanismProjectile.generated.h already included, missing '#pragma once' in EyeofTranshumanismProjectile.h"
#endif
#define EYEOFTRANSHUMANISM_EyeofTranshumanismProjectile_generated_h

#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_SPARSE_DATA
#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEyeofTranshumanismProjectile(); \
	friend struct Z_Construct_UClass_AEyeofTranshumanismProjectile_Statics; \
public: \
	DECLARE_CLASS(AEyeofTranshumanismProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EyeofTranshumanism"), NO_API) \
	DECLARE_SERIALIZER(AEyeofTranshumanismProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEyeofTranshumanismProjectile(); \
	friend struct Z_Construct_UClass_AEyeofTranshumanismProjectile_Statics; \
public: \
	DECLARE_CLASS(AEyeofTranshumanismProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EyeofTranshumanism"), NO_API) \
	DECLARE_SERIALIZER(AEyeofTranshumanismProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEyeofTranshumanismProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEyeofTranshumanismProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEyeofTranshumanismProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEyeofTranshumanismProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEyeofTranshumanismProjectile(AEyeofTranshumanismProjectile&&); \
	NO_API AEyeofTranshumanismProjectile(const AEyeofTranshumanismProjectile&); \
public:


#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEyeofTranshumanismProjectile(AEyeofTranshumanismProjectile&&); \
	NO_API AEyeofTranshumanismProjectile(const AEyeofTranshumanismProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEyeofTranshumanismProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEyeofTranshumanismProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEyeofTranshumanismProjectile)


#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AEyeofTranshumanismProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AEyeofTranshumanismProjectile, ProjectileMovement); }


#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_12_PROLOG
#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_SPARSE_DATA \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_RPC_WRAPPERS \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_INCLASS \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_SPARSE_DATA \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_INCLASS_NO_PURE_DECLS \
	EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EYEOFTRANSHUMANISM_API UClass* StaticClass<class AEyeofTranshumanismProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EyeofTranshumanism_Source_EyeofTranshumanism_EyeofTranshumanismProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
