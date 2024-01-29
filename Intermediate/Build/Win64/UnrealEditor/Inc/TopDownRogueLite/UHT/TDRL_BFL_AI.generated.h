// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/TDRL_BFL_AI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
class APawn;
class ATDRL_Character;
class ATDRL_NPCController;
class UBlackboardComponent;
class UObject;
struct FBlackboardKeySelector;
#ifdef TOPDOWNROGUELITE_TDRL_BFL_AI_generated_h
#error "TDRL_BFL_AI.generated.h already included, missing '#pragma once' in TDRL_BFL_AI.h"
#endif
#define TOPDOWNROGUELITE_TDRL_BFL_AI_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocationFromActorOrVectorFromBB); \
	DECLARE_FUNCTION(execExecuteAIToTDRLExecuteAI);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocationFromActorOrVectorFromBB); \
	DECLARE_FUNCTION(execExecuteAIToTDRLExecuteAI);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTDRL_BFL_AI(); \
	friend struct Z_Construct_UClass_UTDRL_BFL_AI_Statics; \
public: \
	DECLARE_CLASS(UTDRL_BFL_AI, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_BFL_AI)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUTDRL_BFL_AI(); \
	friend struct Z_Construct_UClass_UTDRL_BFL_AI_Statics; \
public: \
	DECLARE_CLASS(UTDRL_BFL_AI, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_BFL_AI)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_BFL_AI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_BFL_AI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_BFL_AI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_BFL_AI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_BFL_AI(UTDRL_BFL_AI&&); \
	NO_API UTDRL_BFL_AI(const UTDRL_BFL_AI&); \
public: \
	NO_API virtual ~UTDRL_BFL_AI();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_BFL_AI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_BFL_AI(UTDRL_BFL_AI&&); \
	NO_API UTDRL_BFL_AI(const UTDRL_BFL_AI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_BFL_AI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_BFL_AI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_BFL_AI) \
	NO_API virtual ~UTDRL_BFL_AI();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_12_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_BFL_AI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
