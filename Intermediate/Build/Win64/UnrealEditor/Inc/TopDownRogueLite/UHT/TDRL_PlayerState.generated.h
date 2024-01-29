// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TDRL_PlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCosmeticParameterList;
#ifdef TOPDOWNROGUELITE_TDRL_PlayerState_generated_h
#error "TDRL_PlayerState.generated.h already included, missing '#pragma once' in TDRL_PlayerState.h"
#endif
#define TOPDOWNROGUELITE_TDRL_PlayerState_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_RPC_WRAPPERS \
	virtual void SetCosmeticList_Serv_Implementation(FCosmeticParameterList InCosmeticList); \
 \
	DECLARE_FUNCTION(execApplyCosmetic); \
	DECLARE_FUNCTION(execSetCosmeticList); \
	DECLARE_FUNCTION(execSetCosmeticList_Implementation); \
	DECLARE_FUNCTION(execSetCosmeticList_Serv); \
	DECLARE_FUNCTION(execGemerateCosmetic); \
	DECLARE_FUNCTION(execOnRep_CosmeticList);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetCosmeticList_Serv_Implementation(FCosmeticParameterList InCosmeticList); \
 \
	DECLARE_FUNCTION(execApplyCosmetic); \
	DECLARE_FUNCTION(execSetCosmeticList); \
	DECLARE_FUNCTION(execSetCosmeticList_Implementation); \
	DECLARE_FUNCTION(execSetCosmeticList_Serv); \
	DECLARE_FUNCTION(execGemerateCosmetic); \
	DECLARE_FUNCTION(execOnRep_CosmeticList);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_PlayerState(); \
	friend struct Z_Construct_UClass_ATDRL_PlayerState_Statics; \
public: \
	DECLARE_CLASS(ATDRL_PlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_PlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CosmeticList=NETFIELD_REP_START, \
		NETFIELD_REP_END=CosmeticList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_PlayerState(); \
	friend struct Z_Construct_UClass_ATDRL_PlayerState_Statics; \
public: \
	DECLARE_CLASS(ATDRL_PlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_PlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CosmeticList=NETFIELD_REP_START, \
		NETFIELD_REP_END=CosmeticList	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_PlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_PlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_PlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_PlayerState(ATDRL_PlayerState&&); \
	NO_API ATDRL_PlayerState(const ATDRL_PlayerState&); \
public: \
	NO_API virtual ~ATDRL_PlayerState();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_PlayerState(ATDRL_PlayerState&&); \
	NO_API ATDRL_PlayerState(const ATDRL_PlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_PlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_PlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_PlayerState) \
	NO_API virtual ~ATDRL_PlayerState();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_14_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_PlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
