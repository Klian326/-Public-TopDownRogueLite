// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GrenadePouch/TDRL_GrenadeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class UProjectileMovementComponent;
#ifdef TOPDOWNROGUELITE_TDRL_GrenadeBase_generated_h
#error "TDRL_GrenadeBase.generated.h already included, missing '#pragma once' in TDRL_GrenadeBase.h"
#endif
#define TOPDOWNROGUELITE_TDRL_GrenadeBase_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_RPC_WRAPPERS \
	virtual void SpawnExplosionEffects_Multi_Implementation(); \
	virtual void SpawnExplosionEffects_Server_Implementation(); \
	virtual void GrenadeExploded_Implementation(); \
 \
	DECLARE_FUNCTION(execSetProjectileInitialVelocity); \
	DECLARE_FUNCTION(execGetProjectileMovementComponent); \
	DECLARE_FUNCTION(execInt_SpawnExplosionEffects); \
	DECLARE_FUNCTION(execSpawnExplosionEffects_Multi); \
	DECLARE_FUNCTION(execSpawnExplosionEffects_Server); \
	DECLARE_FUNCTION(execSpawnExplosionEffects); \
	DECLARE_FUNCTION(execGrenadeExploded); \
	DECLARE_FUNCTION(execTrailEffectDeactivated); \
	DECLARE_FUNCTION(execInt_Exploded);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnExplosionEffects_Multi_Implementation(); \
	virtual void SpawnExplosionEffects_Server_Implementation(); \
	virtual void GrenadeExploded_Implementation(); \
 \
	DECLARE_FUNCTION(execSetProjectileInitialVelocity); \
	DECLARE_FUNCTION(execGetProjectileMovementComponent); \
	DECLARE_FUNCTION(execInt_SpawnExplosionEffects); \
	DECLARE_FUNCTION(execSpawnExplosionEffects_Multi); \
	DECLARE_FUNCTION(execSpawnExplosionEffects_Server); \
	DECLARE_FUNCTION(execSpawnExplosionEffects); \
	DECLARE_FUNCTION(execGrenadeExploded); \
	DECLARE_FUNCTION(execTrailEffectDeactivated); \
	DECLARE_FUNCTION(execInt_Exploded);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_GrenadeBase(); \
	friend struct Z_Construct_UClass_ATDRL_GrenadeBase_Statics; \
public: \
	DECLARE_CLASS(ATDRL_GrenadeBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_GrenadeBase)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_GrenadeBase(); \
	friend struct Z_Construct_UClass_ATDRL_GrenadeBase_Statics; \
public: \
	DECLARE_CLASS(ATDRL_GrenadeBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_GrenadeBase)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_GrenadeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_GrenadeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_GrenadeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_GrenadeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_GrenadeBase(ATDRL_GrenadeBase&&); \
	NO_API ATDRL_GrenadeBase(const ATDRL_GrenadeBase&); \
public: \
	NO_API virtual ~ATDRL_GrenadeBase();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_GrenadeBase(ATDRL_GrenadeBase&&); \
	NO_API ATDRL_GrenadeBase(const ATDRL_GrenadeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_GrenadeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_GrenadeBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATDRL_GrenadeBase) \
	NO_API virtual ~ATDRL_GrenadeBase();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_9_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_GrenadeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
