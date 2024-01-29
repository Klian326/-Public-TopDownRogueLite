// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/TDRL_Firearm.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef TOPDOWNROGUELITE_TDRL_Firearm_generated_h
#error "TDRL_Firearm.generated.h already included, missing '#pragma once' in TDRL_Firearm.h"
#endif
#define TOPDOWNROGUELITE_TDRL_Firearm_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefillAmmo); \
	DECLARE_FUNCTION(execReloadCountdownOverTimer); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execMagazineEmpty); \
	DECLARE_FUNCTION(execFireRateTimerOver); \
	DECLARE_FUNCTION(execFireBullet); \
	DECLARE_FUNCTION(execStopFiring); \
	DECLARE_FUNCTION(execStartFiring); \
	DECLARE_FUNCTION(execGetMuzzleTransform); \
	DECLARE_FUNCTION(execGetMuzzleComponent); \
	DECLARE_FUNCTION(execHasQueuedShot); \
	DECLARE_FUNCTION(execIsFiring); \
	DECLARE_FUNCTION(execOnRep_AmmunitionModified);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefillAmmo); \
	DECLARE_FUNCTION(execReloadCountdownOverTimer); \
	DECLARE_FUNCTION(execReloadWeapon); \
	DECLARE_FUNCTION(execMagazineEmpty); \
	DECLARE_FUNCTION(execFireRateTimerOver); \
	DECLARE_FUNCTION(execFireBullet); \
	DECLARE_FUNCTION(execStopFiring); \
	DECLARE_FUNCTION(execStartFiring); \
	DECLARE_FUNCTION(execGetMuzzleTransform); \
	DECLARE_FUNCTION(execGetMuzzleComponent); \
	DECLARE_FUNCTION(execHasQueuedShot); \
	DECLARE_FUNCTION(execIsFiring); \
	DECLARE_FUNCTION(execOnRep_AmmunitionModified);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_Firearm(); \
	friend struct Z_Construct_UClass_ATDRL_Firearm_Statics; \
public: \
	DECLARE_CLASS(ATDRL_Firearm, ATDRL_Melee, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_Firearm) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Ammunition=NETFIELD_REP_START, \
		MagazineAmmunition, \
		NETFIELD_REP_END=MagazineAmmunition	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_Firearm(); \
	friend struct Z_Construct_UClass_ATDRL_Firearm_Statics; \
public: \
	DECLARE_CLASS(ATDRL_Firearm, ATDRL_Melee, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_Firearm) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Ammunition=NETFIELD_REP_START, \
		MagazineAmmunition, \
		NETFIELD_REP_END=MagazineAmmunition	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_Firearm(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_Firearm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_Firearm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_Firearm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_Firearm(ATDRL_Firearm&&); \
	NO_API ATDRL_Firearm(const ATDRL_Firearm&); \
public: \
	NO_API virtual ~ATDRL_Firearm();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_Firearm(ATDRL_Firearm&&); \
	NO_API ATDRL_Firearm(const ATDRL_Firearm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_Firearm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_Firearm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_Firearm) \
	NO_API virtual ~ATDRL_Firearm();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_13_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_Firearm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
