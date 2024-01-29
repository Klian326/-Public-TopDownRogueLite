// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TDRL_CharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNROGUELITE_TDRL_CharacterMovementComponent_generated_h
#error "TDRL_CharacterMovementComponent.generated.h already included, missing '#pragma once' in TDRL_CharacterMovementComponent.h"
#endif
#define TOPDOWNROGUELITE_TDRL_CharacterMovementComponent_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_WantsToDash); \
	DECLARE_FUNCTION(execSpawnDashEffects); \
	DECLARE_FUNCTION(execIsCustomMovementMode); \
	DECLARE_FUNCTION(execFindDashDirection); \
	DECLARE_FUNCTION(execDashCDReset); \
	DECLARE_FUNCTION(execDash); \
	DECLARE_FUNCTION(execSetAlternativeWalk); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execGetDashLeft); \
	DECLARE_FUNCTION(execGetRemainingDashCDPercent); \
	DECLARE_FUNCTION(execGetRemainingDashCD);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_WantsToDash); \
	DECLARE_FUNCTION(execSpawnDashEffects); \
	DECLARE_FUNCTION(execIsCustomMovementMode); \
	DECLARE_FUNCTION(execFindDashDirection); \
	DECLARE_FUNCTION(execDashCDReset); \
	DECLARE_FUNCTION(execDash); \
	DECLARE_FUNCTION(execSetAlternativeWalk); \
	DECLARE_FUNCTION(execIsDashing); \
	DECLARE_FUNCTION(execGetDashLeft); \
	DECLARE_FUNCTION(execGetRemainingDashCDPercent); \
	DECLARE_FUNCTION(execGetRemainingDashCD);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTDRL_CharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UTDRL_CharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_CharacterMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WantsToDash=NETFIELD_REP_START, \
		NETFIELD_REP_END=WantsToDash	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTDRL_CharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UTDRL_CharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_CharacterMovementComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		WantsToDash=NETFIELD_REP_START, \
		NETFIELD_REP_END=WantsToDash	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_CharacterMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_CharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_CharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_CharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_CharacterMovementComponent(UTDRL_CharacterMovementComponent&&); \
	NO_API UTDRL_CharacterMovementComponent(const UTDRL_CharacterMovementComponent&); \
public: \
	NO_API virtual ~UTDRL_CharacterMovementComponent();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_CharacterMovementComponent(UTDRL_CharacterMovementComponent&&); \
	NO_API UTDRL_CharacterMovementComponent(const UTDRL_CharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_CharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_CharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTDRL_CharacterMovementComponent) \
	NO_API virtual ~UTDRL_CharacterMovementComponent();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_22_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_CharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h


#define FOREACH_ENUM_ECUSTOMMOVEMENTMODE(op) \
	op(CMOVE_Dash) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
