// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/TDRL_Melee.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
class UShapeComponent;
struct FHitResult;
#ifdef TOPDOWNROGUELITE_TDRL_Melee_generated_h
#error "TDRL_Melee.generated.h already included, missing '#pragma once' in TDRL_Melee.h"
#endif
#define TOPDOWNROGUELITE_TDRL_Melee_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_RPC_WRAPPERS \
	virtual void MeleeHit_Effects_Implementation(const FHitResult Hit); \
	virtual void ApplyMeleeImpactField_MultiUnreliable_Implementation(const FVector FieldOrigin); \
	virtual void ApplyMeleeImpactField_MultiReliable_Implementation(const FVector FieldOrigin); \
 \
	DECLARE_FUNCTION(execMeleeHit); \
	DECLARE_FUNCTION(execOpenAttackWindow); \
	DECLARE_FUNCTION(execAttackCountdownOverTimer); \
	DECLARE_FUNCTION(execAttackWindowOverTimer); \
	DECLARE_FUNCTION(execTraceAttack); \
	DECLARE_FUNCTION(execStopAttack); \
	DECLARE_FUNCTION(execStartAttack); \
	DECLARE_FUNCTION(execMeleeHit_Effects); \
	DECLARE_FUNCTION(execApplyMeleeImpactField_MultiUnreliable); \
	DECLARE_FUNCTION(execApplyMeleeImpactField_MultiReliable); \
	DECLARE_FUNCTION(execApplyMeleeImpactField); \
	DECLARE_FUNCTION(execGetAttackMontageBasedOnDirection); \
	DECLARE_FUNCTION(execClearDamageBodies); \
	DECLARE_FUNCTION(execRemoveDamageBodies); \
	DECLARE_FUNCTION(execRemoveDamageBody); \
	DECLARE_FUNCTION(execAddDamageBodies); \
	DECLARE_FUNCTION(execAddDamageBody);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MeleeHit_Effects_Implementation(const FHitResult Hit); \
	virtual void ApplyMeleeImpactField_MultiUnreliable_Implementation(const FVector FieldOrigin); \
	virtual void ApplyMeleeImpactField_MultiReliable_Implementation(const FVector FieldOrigin); \
 \
	DECLARE_FUNCTION(execMeleeHit); \
	DECLARE_FUNCTION(execOpenAttackWindow); \
	DECLARE_FUNCTION(execAttackCountdownOverTimer); \
	DECLARE_FUNCTION(execAttackWindowOverTimer); \
	DECLARE_FUNCTION(execTraceAttack); \
	DECLARE_FUNCTION(execStopAttack); \
	DECLARE_FUNCTION(execStartAttack); \
	DECLARE_FUNCTION(execMeleeHit_Effects); \
	DECLARE_FUNCTION(execApplyMeleeImpactField_MultiUnreliable); \
	DECLARE_FUNCTION(execApplyMeleeImpactField_MultiReliable); \
	DECLARE_FUNCTION(execApplyMeleeImpactField); \
	DECLARE_FUNCTION(execGetAttackMontageBasedOnDirection); \
	DECLARE_FUNCTION(execClearDamageBodies); \
	DECLARE_FUNCTION(execRemoveDamageBodies); \
	DECLARE_FUNCTION(execRemoveDamageBody); \
	DECLARE_FUNCTION(execAddDamageBodies); \
	DECLARE_FUNCTION(execAddDamageBody);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_Melee(); \
	friend struct Z_Construct_UClass_ATDRL_Melee_Statics; \
public: \
	DECLARE_CLASS(ATDRL_Melee, ATDRL_Weapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_Melee)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_Melee(); \
	friend struct Z_Construct_UClass_ATDRL_Melee_Statics; \
public: \
	DECLARE_CLASS(ATDRL_Melee, ATDRL_Weapon, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_Melee)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_Melee(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_Melee) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_Melee); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_Melee); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_Melee(ATDRL_Melee&&); \
	NO_API ATDRL_Melee(const ATDRL_Melee&); \
public: \
	NO_API virtual ~ATDRL_Melee();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_Melee(ATDRL_Melee&&); \
	NO_API ATDRL_Melee(const ATDRL_Melee&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_Melee); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_Melee); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_Melee) \
	NO_API virtual ~ATDRL_Melee();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_13_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_Melee>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
