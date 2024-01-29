// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Progressbar/TDRL_ProgressBarComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FLinearColor;
struct FTDRLProgressBarColor;
struct FTDRLProgressBarFloat;
struct FTDRLProgressBarText;
#ifdef TOPDOWNROGUELITE_TDRL_ProgressBarComponent_generated_h
#error "TDRL_ProgressBarComponent.generated.h already included, missing '#pragma once' in TDRL_ProgressBarComponent.h"
#endif
#define TOPDOWNROGUELITE_TDRL_ProgressBarComponent_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_15_DELEGATE \
static inline void FWidgetReadyOnClient_DelegateWrapper(const FMulticastScriptDelegate& WidgetReadyOnClient) \
{ \
	WidgetReadyOnClient.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ProgressBarColor); \
	DECLARE_FUNCTION(execOnRep_ProgressBarText); \
	DECLARE_FUNCTION(execOnRep_ProgressBarFloat); \
	DECLARE_FUNCTION(execEditProgressBarColor); \
	DECLARE_FUNCTION(execEditProgressBarText); \
	DECLARE_FUNCTION(execEditProgressBarFloat); \
	DECLARE_FUNCTION(execSetProgressBarVisibility); \
	DECLARE_FUNCTION(execInactiveTimerOver); \
	DECLARE_FUNCTION(execStartInactiveTimer); \
	DECLARE_FUNCTION(execBarShouldBeVisibleChanged); \
	DECLARE_FUNCTION(execFadeProgressBarVisibility); \
	DECLARE_FUNCTION(execUpdateFollowPlayer);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ProgressBarColor); \
	DECLARE_FUNCTION(execOnRep_ProgressBarText); \
	DECLARE_FUNCTION(execOnRep_ProgressBarFloat); \
	DECLARE_FUNCTION(execEditProgressBarColor); \
	DECLARE_FUNCTION(execEditProgressBarText); \
	DECLARE_FUNCTION(execEditProgressBarFloat); \
	DECLARE_FUNCTION(execSetProgressBarVisibility); \
	DECLARE_FUNCTION(execInactiveTimerOver); \
	DECLARE_FUNCTION(execStartInactiveTimer); \
	DECLARE_FUNCTION(execBarShouldBeVisibleChanged); \
	DECLARE_FUNCTION(execFadeProgressBarVisibility); \
	DECLARE_FUNCTION(execUpdateFollowPlayer);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTDRL_ProgressBarComponent(); \
	friend struct Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics; \
public: \
	DECLARE_CLASS(UTDRL_ProgressBarComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_ProgressBarComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bBarShouldBeVisible=NETFIELD_REP_START, \
		ProgressBarFloat, \
		ProgressBarText, \
		ProgressBarColor, \
		NETFIELD_REP_END=ProgressBarColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUTDRL_ProgressBarComponent(); \
	friend struct Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics; \
public: \
	DECLARE_CLASS(UTDRL_ProgressBarComponent, UWidgetComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_ProgressBarComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bBarShouldBeVisible=NETFIELD_REP_START, \
		ProgressBarFloat, \
		ProgressBarText, \
		ProgressBarColor, \
		NETFIELD_REP_END=ProgressBarColor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_ProgressBarComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_ProgressBarComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_ProgressBarComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_ProgressBarComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_ProgressBarComponent(UTDRL_ProgressBarComponent&&); \
	NO_API UTDRL_ProgressBarComponent(const UTDRL_ProgressBarComponent&); \
public: \
	NO_API virtual ~UTDRL_ProgressBarComponent();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_ProgressBarComponent(UTDRL_ProgressBarComponent&&); \
	NO_API UTDRL_ProgressBarComponent(const UTDRL_ProgressBarComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_ProgressBarComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_ProgressBarComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTDRL_ProgressBarComponent) \
	NO_API virtual ~UTDRL_ProgressBarComponent();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_17_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_ProgressBarComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
