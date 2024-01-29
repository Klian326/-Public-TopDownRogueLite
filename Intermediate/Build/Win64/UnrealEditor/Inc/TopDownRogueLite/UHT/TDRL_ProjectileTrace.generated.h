// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Projectile/TDRL_ProjectileTrace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
struct FHitResult;
#ifdef TOPDOWNROGUELITE_TDRL_ProjectileTrace_generated_h
#error "TDRL_ProjectileTrace.generated.h already included, missing '#pragma once' in TDRL_ProjectileTrace.h"
#endif
#define TOPDOWNROGUELITE_TDRL_ProjectileTrace_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_RPC_WRAPPERS \
	virtual void TrailVFXSpawnComplete_Implementation(TArray<UNiagaraComponent*> const& SpawnedTrailEffects); \
	virtual void ProjectileHit_Implementation(const FHitResult Hit, const int32 TraceIndex); \
	virtual void UpdateVFXs_Implementation(TArray<FVector> const& NewLocation); \
	virtual void SpawnVFXs_Implementation(); \
 \
	DECLARE_FUNCTION(execTrailVFXSpawnComplete); \
	DECLARE_FUNCTION(execTraceProjectile); \
	DECLARE_FUNCTION(execRegisterIgnoringActors); \
	DECLARE_FUNCTION(execProjectileHit); \
	DECLARE_FUNCTION(execUpdateVFXs); \
	DECLARE_FUNCTION(execSpawnVFXs);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TrailVFXSpawnComplete_Implementation(TArray<UNiagaraComponent*> const& SpawnedTrailEffects); \
	virtual void ProjectileHit_Implementation(const FHitResult Hit, const int32 TraceIndex); \
	virtual void UpdateVFXs_Implementation(TArray<FVector> const& NewLocation); \
	virtual void SpawnVFXs_Implementation(); \
 \
	DECLARE_FUNCTION(execTrailVFXSpawnComplete); \
	DECLARE_FUNCTION(execTraceProjectile); \
	DECLARE_FUNCTION(execRegisterIgnoringActors); \
	DECLARE_FUNCTION(execProjectileHit); \
	DECLARE_FUNCTION(execUpdateVFXs); \
	DECLARE_FUNCTION(execSpawnVFXs);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_ProjectileTrace(); \
	friend struct Z_Construct_UClass_ATDRL_ProjectileTrace_Statics; \
public: \
	DECLARE_CLASS(ATDRL_ProjectileTrace, ATDRL_ProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_ProjectileTrace)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_ProjectileTrace(); \
	friend struct Z_Construct_UClass_ATDRL_ProjectileTrace_Statics; \
public: \
	DECLARE_CLASS(ATDRL_ProjectileTrace, ATDRL_ProjectileBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_ProjectileTrace)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_ProjectileTrace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_ProjectileTrace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_ProjectileTrace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_ProjectileTrace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_ProjectileTrace(ATDRL_ProjectileTrace&&); \
	NO_API ATDRL_ProjectileTrace(const ATDRL_ProjectileTrace&); \
public: \
	NO_API virtual ~ATDRL_ProjectileTrace();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_ProjectileTrace(ATDRL_ProjectileTrace&&); \
	NO_API ATDRL_ProjectileTrace(const ATDRL_ProjectileTrace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_ProjectileTrace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_ProjectileTrace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_ProjectileTrace) \
	NO_API virtual ~ATDRL_ProjectileTrace();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_11_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_ProjectileTrace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
