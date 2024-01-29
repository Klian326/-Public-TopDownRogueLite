// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUD/TDRL_HUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNROGUELITE_TDRL_HUD_generated_h
#error "TDRL_HUD.generated.h already included, missing '#pragma once' in TDRL_HUD.h"
#endif
#define TOPDOWNROGUELITE_TDRL_HUD_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_RPC_WRAPPERS \
	virtual void RefreshGrenadeWidget_Implementation(); \
	virtual void RefreshAmmoSlot_Implementation(const uint8 Slot); \
	virtual void RefreshIcons_Implementation(); \
	virtual void SelectSlotUI_Implementation(const uint8 Slot); \
	virtual void SetSlotsAmount_Implementation(const uint8 Slot); \
	virtual void CreateInGameUI_Implementation(); \
 \
	DECLARE_FUNCTION(execRefreshGrenadeWidget); \
	DECLARE_FUNCTION(execRefreshAmmoSlot); \
	DECLARE_FUNCTION(execRefreshIcons); \
	DECLARE_FUNCTION(execSelectSlotUI); \
	DECLARE_FUNCTION(execSetSlotsAmount); \
	DECLARE_FUNCTION(execCreateInGameUI);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void RefreshGrenadeWidget_Implementation(); \
	virtual void RefreshAmmoSlot_Implementation(const uint8 Slot); \
	virtual void RefreshIcons_Implementation(); \
	virtual void SelectSlotUI_Implementation(const uint8 Slot); \
	virtual void SetSlotsAmount_Implementation(const uint8 Slot); \
	virtual void CreateInGameUI_Implementation(); \
 \
	DECLARE_FUNCTION(execRefreshGrenadeWidget); \
	DECLARE_FUNCTION(execRefreshAmmoSlot); \
	DECLARE_FUNCTION(execRefreshIcons); \
	DECLARE_FUNCTION(execSelectSlotUI); \
	DECLARE_FUNCTION(execSetSlotsAmount); \
	DECLARE_FUNCTION(execCreateInGameUI);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_HUD(); \
	friend struct Z_Construct_UClass_ATDRL_HUD_Statics; \
public: \
	DECLARE_CLASS(ATDRL_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_HUD)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_HUD(); \
	friend struct Z_Construct_UClass_ATDRL_HUD_Statics; \
public: \
	DECLARE_CLASS(ATDRL_HUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_HUD)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_HUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_HUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_HUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_HUD(ATDRL_HUD&&); \
	NO_API ATDRL_HUD(const ATDRL_HUD&); \
public: \
	NO_API virtual ~ATDRL_HUD();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_HUD(ATDRL_HUD&&); \
	NO_API ATDRL_HUD(const ATDRL_HUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_HUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_HUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_HUD) \
	NO_API virtual ~ATDRL_HUD();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_12_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_HUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
