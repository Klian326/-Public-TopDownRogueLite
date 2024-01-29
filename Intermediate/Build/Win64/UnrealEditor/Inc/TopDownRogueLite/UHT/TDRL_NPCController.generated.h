// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/TDRL_NPCController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATDRL_Character;
class UAnimMontage;
#ifdef TOPDOWNROGUELITE_TDRL_NPCController_generated_h
#error "TDRL_NPCController.generated.h already included, missing '#pragma once' in TDRL_NPCController.h"
#endif
#define TOPDOWNROGUELITE_TDRL_NPCController_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefreshReduceAlertLevelWithTimer); \
	DECLARE_FUNCTION(execEnableReduceAlertLevelWithTimer); \
	DECLARE_FUNCTION(execReduceAlertLevelWithTimer); \
	DECLARE_FUNCTION(execModifyAlertLevel); \
	DECLARE_FUNCTION(execSetUseRandomAISplineToolPoints); \
	DECLARE_FUNCTION(execGetUseRandomAISplineToolPoints); \
	DECLARE_FUNCTION(execSetAlertThreat); \
	DECLARE_FUNCTION(execGetAlertThreat); \
	DECLARE_FUNCTION(execSetPatrolTarget); \
	DECLARE_FUNCTION(execGetPatrolTarget); \
	DECLARE_FUNCTION(execSetMobilityState); \
	DECLARE_FUNCTION(execGetMobilityState); \
	DECLARE_FUNCTION(execSetAlertState); \
	DECLARE_FUNCTION(execGetAlertState); \
	DECLARE_FUNCTION(execGetRandomMontageFromGroup); \
	DECLARE_FUNCTION(execGetPossessedTDRLCharacter);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefreshReduceAlertLevelWithTimer); \
	DECLARE_FUNCTION(execEnableReduceAlertLevelWithTimer); \
	DECLARE_FUNCTION(execReduceAlertLevelWithTimer); \
	DECLARE_FUNCTION(execModifyAlertLevel); \
	DECLARE_FUNCTION(execSetUseRandomAISplineToolPoints); \
	DECLARE_FUNCTION(execGetUseRandomAISplineToolPoints); \
	DECLARE_FUNCTION(execSetAlertThreat); \
	DECLARE_FUNCTION(execGetAlertThreat); \
	DECLARE_FUNCTION(execSetPatrolTarget); \
	DECLARE_FUNCTION(execGetPatrolTarget); \
	DECLARE_FUNCTION(execSetMobilityState); \
	DECLARE_FUNCTION(execGetMobilityState); \
	DECLARE_FUNCTION(execSetAlertState); \
	DECLARE_FUNCTION(execGetAlertState); \
	DECLARE_FUNCTION(execGetRandomMontageFromGroup); \
	DECLARE_FUNCTION(execGetPossessedTDRLCharacter);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_NPCController(); \
	friend struct Z_Construct_UClass_ATDRL_NPCController_Statics; \
public: \
	DECLARE_CLASS(ATDRL_NPCController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_NPCController)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_NPCController(); \
	friend struct Z_Construct_UClass_ATDRL_NPCController_Statics; \
public: \
	DECLARE_CLASS(ATDRL_NPCController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_NPCController)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_NPCController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_NPCController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_NPCController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_NPCController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_NPCController(ATDRL_NPCController&&); \
	NO_API ATDRL_NPCController(const ATDRL_NPCController&); \
public: \
	NO_API virtual ~ATDRL_NPCController();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_NPCController(ATDRL_NPCController&&); \
	NO_API ATDRL_NPCController(const ATDRL_NPCController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_NPCController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_NPCController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_NPCController) \
	NO_API virtual ~ATDRL_NPCController();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_13_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_NPCController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
