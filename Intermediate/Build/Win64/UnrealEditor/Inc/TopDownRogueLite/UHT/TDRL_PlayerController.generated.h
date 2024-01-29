// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TDRL_PlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APawn;
class ATDRL_PlayersSpawn;
enum class EControlRotationType : uint8;
struct FCosmeticParameterList;
#ifdef TOPDOWNROGUELITE_TDRL_PlayerController_generated_h
#error "TDRL_PlayerController.generated.h already included, missing '#pragma once' in TDRL_PlayerController.h"
#endif
#define TOPDOWNROGUELITE_TDRL_PlayerController_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_RPC_WRAPPERS \
	virtual void PlayersSpawnAreaOverlapped_Implementation(ATDRL_PlayersSpawn* Spawner); \
	virtual void UpdateAimOffsetValue_Serv_Implementation(const FVector2D NewValue); \
	virtual void TDRLCharacterChanged_Server_Implementation(APawn* InPawn); \
 \
	DECLARE_FUNCTION(execPlayersSpawnAreaOverlapped); \
	DECLARE_FUNCTION(execGetDefaultCharacterCosmetic); \
	DECLARE_FUNCTION(execSetShouldUsePitch); \
	DECLARE_FUNCTION(execGetShouldUsePitch); \
	DECLARE_FUNCTION(execUpdateOnServerTimerOver); \
	DECLARE_FUNCTION(execUpdateAimOffsetValue_Serv); \
	DECLARE_FUNCTION(execUpdateAimOffsetValue); \
	DECLARE_FUNCTION(execUpdateAimOffset); \
	DECLARE_FUNCTION(execUpdateControlRotation); \
	DECLARE_FUNCTION(execUpdateTraceUnderMouse); \
	DECLARE_FUNCTION(execTDRLCharacterChanged_Server); \
	DECLARE_FUNCTION(execSetControlRotationLockedTarget); \
	DECLARE_FUNCTION(execGetControlRotationLockedTarget); \
	DECLARE_FUNCTION(execSetControlRotationTargetLocation); \
	DECLARE_FUNCTION(execGetControlRotationTargetLocation); \
	DECLARE_FUNCTION(execSetControlRotationType); \
	DECLARE_FUNCTION(execGetControlRotationType); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusUnderMouse); \
	DECLARE_FUNCTION(execGetActorsOfClassInRadiusUnderMouse);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayersSpawnAreaOverlapped_Implementation(ATDRL_PlayersSpawn* Spawner); \
	virtual void UpdateAimOffsetValue_Serv_Implementation(const FVector2D NewValue); \
	virtual void TDRLCharacterChanged_Server_Implementation(APawn* InPawn); \
 \
	DECLARE_FUNCTION(execPlayersSpawnAreaOverlapped); \
	DECLARE_FUNCTION(execGetDefaultCharacterCosmetic); \
	DECLARE_FUNCTION(execSetShouldUsePitch); \
	DECLARE_FUNCTION(execGetShouldUsePitch); \
	DECLARE_FUNCTION(execUpdateOnServerTimerOver); \
	DECLARE_FUNCTION(execUpdateAimOffsetValue_Serv); \
	DECLARE_FUNCTION(execUpdateAimOffsetValue); \
	DECLARE_FUNCTION(execUpdateAimOffset); \
	DECLARE_FUNCTION(execUpdateControlRotation); \
	DECLARE_FUNCTION(execUpdateTraceUnderMouse); \
	DECLARE_FUNCTION(execTDRLCharacterChanged_Server); \
	DECLARE_FUNCTION(execSetControlRotationLockedTarget); \
	DECLARE_FUNCTION(execGetControlRotationLockedTarget); \
	DECLARE_FUNCTION(execSetControlRotationTargetLocation); \
	DECLARE_FUNCTION(execGetControlRotationTargetLocation); \
	DECLARE_FUNCTION(execSetControlRotationType); \
	DECLARE_FUNCTION(execGetControlRotationType); \
	DECLARE_FUNCTION(execGetClosestActorOfClassInRadiusUnderMouse); \
	DECLARE_FUNCTION(execGetActorsOfClassInRadiusUnderMouse);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_PlayerController(); \
	friend struct Z_Construct_UClass_ATDRL_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ATDRL_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_PlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PossessedTDRLCharacter=NETFIELD_REP_START, \
		LatestValidStartTag, \
		NETFIELD_REP_END=LatestValidStartTag	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_PlayerController(); \
	friend struct Z_Construct_UClass_ATDRL_PlayerController_Statics; \
public: \
	DECLARE_CLASS(ATDRL_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_PlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PossessedTDRLCharacter=NETFIELD_REP_START, \
		LatestValidStartTag, \
		NETFIELD_REP_END=LatestValidStartTag	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_PlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_PlayerController(ATDRL_PlayerController&&); \
	NO_API ATDRL_PlayerController(const ATDRL_PlayerController&); \
public: \
	NO_API virtual ~ATDRL_PlayerController();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_PlayerController(ATDRL_PlayerController&&); \
	NO_API ATDRL_PlayerController(const ATDRL_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_PlayerController) \
	NO_API virtual ~ATDRL_PlayerController();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_14_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_PlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
