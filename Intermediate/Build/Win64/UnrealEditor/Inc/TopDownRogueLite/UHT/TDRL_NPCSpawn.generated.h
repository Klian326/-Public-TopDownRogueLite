// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/TDRL_NPCSpawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATDRL_Character;
class ATDRL_NPCController;
struct FDeathData;
#ifdef TOPDOWNROGUELITE_TDRL_NPCSpawn_generated_h
#error "TDRL_NPCSpawn.generated.h already included, missing '#pragma once' in TDRL_NPCSpawn.h"
#endif
#define TOPDOWNROGUELITE_TDRL_NPCSpawn_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_11_DELEGATE \
struct _Script_TopDownRogueLite_eventOnSpawnedDeathDelegate_Parms \
{ \
	FDeathData DeathData; \
}; \
static inline void FOnSpawnedDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnSpawnedDeathDelegate, FDeathData DeathData) \
{ \
	_Script_TopDownRogueLite_eventOnSpawnedDeathDelegate_Parms Parms; \
	Parms.DeathData=DeathData; \
	OnSpawnedDeathDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_RPC_WRAPPERS \
	virtual void SpawnRestored_Implementation(); \
	virtual void NPCDied_Implementation(ATDRL_Character* NPCCharacter); \
	virtual void NPCDespawning_Implementation(ATDRL_Character* NPCCharacter); \
	virtual void NPCSpawned_Implementation(ATDRL_Character* NPCCharacter); \
 \
	DECLARE_FUNCTION(execSpawnRestored); \
	DECLARE_FUNCTION(execNPCDied); \
	DECLARE_FUNCTION(execNPCDespawning); \
	DECLARE_FUNCTION(execNPCSpawned); \
	DECLARE_FUNCTION(execRestoreSpawn); \
	DECLARE_FUNCTION(execDespawnNPC); \
	DECLARE_FUNCTION(execSpawnNPC); \
	DECLARE_FUNCTION(execGetSpawnedController); \
	DECLARE_FUNCTION(execGetSpawnedCharacter); \
	DECLARE_FUNCTION(execCharacterDied); \
	DECLARE_FUNCTION(execRefreshSpawnName); \
	DECLARE_FUNCTION(execOverlapTriggerEnd); \
	DECLARE_FUNCTION(execOverlapTriggerBegin);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnRestored_Implementation(); \
	virtual void NPCDied_Implementation(ATDRL_Character* NPCCharacter); \
	virtual void NPCDespawning_Implementation(ATDRL_Character* NPCCharacter); \
	virtual void NPCSpawned_Implementation(ATDRL_Character* NPCCharacter); \
 \
	DECLARE_FUNCTION(execSpawnRestored); \
	DECLARE_FUNCTION(execNPCDied); \
	DECLARE_FUNCTION(execNPCDespawning); \
	DECLARE_FUNCTION(execNPCSpawned); \
	DECLARE_FUNCTION(execRestoreSpawn); \
	DECLARE_FUNCTION(execDespawnNPC); \
	DECLARE_FUNCTION(execSpawnNPC); \
	DECLARE_FUNCTION(execGetSpawnedController); \
	DECLARE_FUNCTION(execGetSpawnedCharacter); \
	DECLARE_FUNCTION(execCharacterDied); \
	DECLARE_FUNCTION(execRefreshSpawnName); \
	DECLARE_FUNCTION(execOverlapTriggerEnd); \
	DECLARE_FUNCTION(execOverlapTriggerBegin);


#if WITH_EDITOR
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectTriggers); \
	DECLARE_FUNCTION(execSelectNPCSpawnsMatchingTriggers); \
	DECLARE_FUNCTION(execSelectNPCSpawnsSharingOneTrigger); \
	DECLARE_FUNCTION(execSelectAllNPCSpawns);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectTriggers); \
	DECLARE_FUNCTION(execSelectNPCSpawnsMatchingTriggers); \
	DECLARE_FUNCTION(execSelectNPCSpawnsSharingOneTrigger); \
	DECLARE_FUNCTION(execSelectAllNPCSpawns);


#else
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_EDITOR_ONLY_RPC_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_NPCSpawn(); \
	friend struct Z_Construct_UClass_ATDRL_NPCSpawn_Statics; \
public: \
	DECLARE_CLASS(ATDRL_NPCSpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_NPCSpawn)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_NPCSpawn(); \
	friend struct Z_Construct_UClass_ATDRL_NPCSpawn_Statics; \
public: \
	DECLARE_CLASS(ATDRL_NPCSpawn, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_NPCSpawn)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_NPCSpawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_NPCSpawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_NPCSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_NPCSpawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_NPCSpawn(ATDRL_NPCSpawn&&); \
	NO_API ATDRL_NPCSpawn(const ATDRL_NPCSpawn&); \
public: \
	NO_API virtual ~ATDRL_NPCSpawn();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_NPCSpawn(ATDRL_NPCSpawn&&); \
	NO_API ATDRL_NPCSpawn(const ATDRL_NPCSpawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_NPCSpawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_NPCSpawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_NPCSpawn) \
	NO_API virtual ~ATDRL_NPCSpawn();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_13_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_EDITOR_ONLY_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_NPCSpawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
