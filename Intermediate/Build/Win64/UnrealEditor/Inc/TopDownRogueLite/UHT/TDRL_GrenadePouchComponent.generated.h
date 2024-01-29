// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GrenadePouch/TDRL_GrenadePouchComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATDRL_GrenadeBase;
struct FGrenadePouchElement;
#ifdef TOPDOWNROGUELITE_TDRL_GrenadePouchComponent_generated_h
#error "TDRL_GrenadePouchComponent.generated.h already included, missing '#pragma once' in TDRL_GrenadePouchComponent.h"
#endif
#define TOPDOWNROGUELITE_TDRL_GrenadePouchComponent_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrenadePouchElement_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FGrenadePouchElement>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_RPC_WRAPPERS \
	virtual void RemoveGrenadesFromPouch_Server_Implementation(FGrenadePouchElement Grenade); \
	virtual void AddGrenadeToPouchList_Server_Implementation(FGrenadePouchElement Grenade); \
 \
	DECLARE_FUNCTION(execCheckRemoveEmptySlots); \
	DECLARE_FUNCTION(execRemoveGrenadesFromPouch_Func); \
	DECLARE_FUNCTION(execRemoveGrenadesFromPouch_Server); \
	DECLARE_FUNCTION(execAddGrenadeToPouchList_Func); \
	DECLARE_FUNCTION(execAddGrenadeToPouchList_Server); \
	DECLARE_FUNCTION(execRemoveGrenadesFromPouch); \
	DECLARE_FUNCTION(execAddGrenadeToPouchList); \
	DECLARE_FUNCTION(execCanAddGrenadeByClass); \
	DECLARE_FUNCTION(execGetAmountGrenadesOfClass); \
	DECLARE_FUNCTION(execHasAnyGrenadeOfClass); \
	DECLARE_FUNCTION(execGetGrenadePouchLimitByClass); \
	DECLARE_FUNCTION(execGetGrenadePouchAmounts); \
	DECLARE_FUNCTION(execGetGrenadePouchClasses); \
	DECLARE_FUNCTION(execGetGrenadePouchList); \
	DECLARE_FUNCTION(execGetGrenadeAvailableSlotsCount); \
	DECLARE_FUNCTION(execGetGrenadeTotalCount); \
	DECLARE_FUNCTION(execGetGrenadeSlotsCount); \
	DECLARE_FUNCTION(execGetGrenadeSlotsIndexByClass); \
	DECLARE_FUNCTION(execOnRep_GrenadePouchChanged);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RemoveGrenadesFromPouch_Server_Implementation(FGrenadePouchElement Grenade); \
	virtual void AddGrenadeToPouchList_Server_Implementation(FGrenadePouchElement Grenade); \
 \
	DECLARE_FUNCTION(execCheckRemoveEmptySlots); \
	DECLARE_FUNCTION(execRemoveGrenadesFromPouch_Func); \
	DECLARE_FUNCTION(execRemoveGrenadesFromPouch_Server); \
	DECLARE_FUNCTION(execAddGrenadeToPouchList_Func); \
	DECLARE_FUNCTION(execAddGrenadeToPouchList_Server); \
	DECLARE_FUNCTION(execRemoveGrenadesFromPouch); \
	DECLARE_FUNCTION(execAddGrenadeToPouchList); \
	DECLARE_FUNCTION(execCanAddGrenadeByClass); \
	DECLARE_FUNCTION(execGetAmountGrenadesOfClass); \
	DECLARE_FUNCTION(execHasAnyGrenadeOfClass); \
	DECLARE_FUNCTION(execGetGrenadePouchLimitByClass); \
	DECLARE_FUNCTION(execGetGrenadePouchAmounts); \
	DECLARE_FUNCTION(execGetGrenadePouchClasses); \
	DECLARE_FUNCTION(execGetGrenadePouchList); \
	DECLARE_FUNCTION(execGetGrenadeAvailableSlotsCount); \
	DECLARE_FUNCTION(execGetGrenadeTotalCount); \
	DECLARE_FUNCTION(execGetGrenadeSlotsCount); \
	DECLARE_FUNCTION(execGetGrenadeSlotsIndexByClass); \
	DECLARE_FUNCTION(execOnRep_GrenadePouchChanged);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTDRL_GrenadePouchComponent(); \
	friend struct Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics; \
public: \
	DECLARE_CLASS(UTDRL_GrenadePouchComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_GrenadePouchComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GrenadePouch=NETFIELD_REP_START, \
		LimitOnClasses, \
		PouchLimits, \
		NETFIELD_REP_END=PouchLimits	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUTDRL_GrenadePouchComponent(); \
	friend struct Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics; \
public: \
	DECLARE_CLASS(UTDRL_GrenadePouchComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_GrenadePouchComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GrenadePouch=NETFIELD_REP_START, \
		LimitOnClasses, \
		PouchLimits, \
		NETFIELD_REP_END=PouchLimits	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_GrenadePouchComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_GrenadePouchComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_GrenadePouchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_GrenadePouchComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_GrenadePouchComponent(UTDRL_GrenadePouchComponent&&); \
	NO_API UTDRL_GrenadePouchComponent(const UTDRL_GrenadePouchComponent&); \
public: \
	NO_API virtual ~UTDRL_GrenadePouchComponent();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_GrenadePouchComponent(UTDRL_GrenadePouchComponent&&); \
	NO_API UTDRL_GrenadePouchComponent(const UTDRL_GrenadePouchComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_GrenadePouchComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_GrenadePouchComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTDRL_GrenadePouchComponent) \
	NO_API virtual ~UTDRL_GrenadePouchComponent();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_49_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_GrenadePouchComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
