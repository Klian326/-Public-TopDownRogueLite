// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/TDRL_BFL_Global.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class AActor;
class ACharacter;
class ATDRL_Character;
class ATDRL_GameModeBase;
class ATDRL_GameStateBase;
class ATDRL_HUD;
class ATDRL_PlayersSpawn;
class UDataTable;
class UObject;
class USceneComponent;
class USkeletalMesh;
struct FCosmeticParameterList;
struct FHitResult;
struct FMergeSkeletalMeshesParameters;
struct FPhysicsFieldComponentsHitData;
struct FPhysicsFieldRadialHitData;
struct FStatusEffect;
struct FStunParameters;
#ifdef TOPDOWNROGUELITE_TDRL_BFL_Global_generated_h
#error "TDRL_BFL_Global.generated.h already included, missing '#pragma once' in TDRL_BFL_Global.h"
#endif
#define TOPDOWNROGUELITE_TDRL_BFL_Global_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyRadialFieldAtLocation); \
	DECLARE_FUNCTION(execSpawnStatusVFXs); \
	DECLARE_FUNCTION(execSpawnHitVFXsFromHit); \
	DECLARE_FUNCTION(execSetActorHiddenInGameWithAttached); \
	DECLARE_FUNCTION(execApplyCustomProperties); \
	DECLARE_FUNCTION(execCosmeticParamToMergeParam); \
	DECLARE_FUNCTION(execMergeSkeletalMeshes); \
	DECLARE_FUNCTION(execIsValidStun); \
	DECLARE_FUNCTION(execGetAllPlayersSpawn); \
	DECLARE_FUNCTION(execGetGameStateTDRL); \
	DECLARE_FUNCTION(execGetGameModeTDRL); \
	DECLARE_FUNCTION(execGetPlayerCharacterTDRL); \
	DECLARE_FUNCTION(execGetTDRLHUD);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyRadialFieldAtLocation); \
	DECLARE_FUNCTION(execSpawnStatusVFXs); \
	DECLARE_FUNCTION(execSpawnHitVFXsFromHit); \
	DECLARE_FUNCTION(execSetActorHiddenInGameWithAttached); \
	DECLARE_FUNCTION(execApplyCustomProperties); \
	DECLARE_FUNCTION(execCosmeticParamToMergeParam); \
	DECLARE_FUNCTION(execMergeSkeletalMeshes); \
	DECLARE_FUNCTION(execIsValidStun); \
	DECLARE_FUNCTION(execGetAllPlayersSpawn); \
	DECLARE_FUNCTION(execGetGameStateTDRL); \
	DECLARE_FUNCTION(execGetGameModeTDRL); \
	DECLARE_FUNCTION(execGetPlayerCharacterTDRL); \
	DECLARE_FUNCTION(execGetTDRLHUD);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTDRL_BFL_Global(); \
	friend struct Z_Construct_UClass_UTDRL_BFL_Global_Statics; \
public: \
	DECLARE_CLASS(UTDRL_BFL_Global, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_BFL_Global)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTDRL_BFL_Global(); \
	friend struct Z_Construct_UClass_UTDRL_BFL_Global_Statics; \
public: \
	DECLARE_CLASS(UTDRL_BFL_Global, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_BFL_Global)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_BFL_Global(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_BFL_Global) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_BFL_Global); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_BFL_Global); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_BFL_Global(UTDRL_BFL_Global&&); \
	NO_API UTDRL_BFL_Global(const UTDRL_BFL_Global&); \
public: \
	NO_API virtual ~UTDRL_BFL_Global();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_BFL_Global(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_BFL_Global(UTDRL_BFL_Global&&); \
	NO_API UTDRL_BFL_Global(const UTDRL_BFL_Global&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_BFL_Global); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_BFL_Global); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_BFL_Global) \
	NO_API virtual ~UTDRL_BFL_Global();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_14_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_BFL_Global>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
