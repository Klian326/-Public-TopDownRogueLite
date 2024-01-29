// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/TDRL_CameraOcclusionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class USceneComponent;
#ifdef TOPDOWNROGUELITE_TDRL_CameraOcclusionComponent_generated_h
#error "TDRL_CameraOcclusionComponent.generated.h already included, missing '#pragma once' in TDRL_CameraOcclusionComponent.h"
#endif
#define TOPDOWNROGUELITE_TDRL_CameraOcclusionComponent_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_9_DELEGATE \
struct _Script_TopDownRogueLite_eventOnOcclusionChanged_Parms \
{ \
	bool Occluded; \
	TArray<USceneComponent*> OcclusionComps; \
}; \
static inline void FOnOcclusionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOcclusionChanged, bool Occluded, const TArray<USceneComponent*>& OcclusionComps) \
{ \
	_Script_TopDownRogueLite_eventOnOcclusionChanged_Parms Parms; \
	Parms.Occluded=Occluded ? true : false; \
	Parms.OcclusionComps=OcclusionComps; \
	OnOcclusionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDefaultOcclusionEvent); \
	DECLARE_FUNCTION(execSetOcclusionEnabled); \
	DECLARE_FUNCTION(execAddAffectedComponent); \
	DECLARE_FUNCTION(execAddAffectedComponents); \
	DECLARE_FUNCTION(execSetAffectedComponents); \
	DECLARE_FUNCTION(execGetAffectedComponents);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDefaultOcclusionEvent); \
	DECLARE_FUNCTION(execSetOcclusionEnabled); \
	DECLARE_FUNCTION(execAddAffectedComponent); \
	DECLARE_FUNCTION(execAddAffectedComponents); \
	DECLARE_FUNCTION(execSetAffectedComponents); \
	DECLARE_FUNCTION(execGetAffectedComponents);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTDRL_CameraOcclusionComponent(); \
	friend struct Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics; \
public: \
	DECLARE_CLASS(UTDRL_CameraOcclusionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_CameraOcclusionComponent)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTDRL_CameraOcclusionComponent(); \
	friend struct Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics; \
public: \
	DECLARE_CLASS(UTDRL_CameraOcclusionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_CameraOcclusionComponent)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_CameraOcclusionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_CameraOcclusionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_CameraOcclusionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_CameraOcclusionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_CameraOcclusionComponent(UTDRL_CameraOcclusionComponent&&); \
	NO_API UTDRL_CameraOcclusionComponent(const UTDRL_CameraOcclusionComponent&); \
public: \
	NO_API virtual ~UTDRL_CameraOcclusionComponent();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_CameraOcclusionComponent(UTDRL_CameraOcclusionComponent&&); \
	NO_API UTDRL_CameraOcclusionComponent(const UTDRL_CameraOcclusionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_CameraOcclusionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_CameraOcclusionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTDRL_CameraOcclusionComponent) \
	NO_API virtual ~UTDRL_CameraOcclusionComponent();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_12_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_CameraOcclusionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
