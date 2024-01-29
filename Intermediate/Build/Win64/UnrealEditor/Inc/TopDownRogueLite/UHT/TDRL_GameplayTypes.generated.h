// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/TDRL_GameplayTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNROGUELITE_TDRL_GameplayTypes_generated_h
#error "TDRL_GameplayTypes.generated.h already included, missing '#pragma once' in TDRL_GameplayTypes.h"
#endif
#define TOPDOWNROGUELITE_TDRL_GameplayTypes_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeathData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FDeathData>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitEffectType_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FHitEffectType>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDashEffect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FDashEffect>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStunParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FStunParameters>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_231_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatusEffect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FStatusEffect>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_259_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCosmeticParameterList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FCosmeticParameterList>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_293_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FMergeSkeletalMeshesParameters>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_343_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurrencyData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FCurrencyData>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_364_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurrenciesList_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FCurrenciesList>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_412_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FTDRLProgressBarFloat>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_446_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FTDRLProgressBarText>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_480_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FTDRLProgressBarColor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h


#define FOREACH_ENUM_EPLAYERSSAPAWNUNLOCKMETHOD(op) \
	op(EPlayersSapawnUnlockMethod::PSUM_None) \
	op(EPlayersSapawnUnlockMethod::PSUM_Overlap) \
	op(EPlayersSapawnUnlockMethod::PSUM_Team) 

enum class EPlayersSapawnUnlockMethod : uint8;
template<> struct TIsUEnumClass<EPlayersSapawnUnlockMethod> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EPlayersSapawnUnlockMethod>();

#define FOREACH_ENUM_EPLAYERSSAPAWNMETHOD(op) \
	op(EPlayersSapawnMethod::PSM_None) \
	op(EPlayersSapawnMethod::PSM_Progressive) \
	op(EPlayersSapawnMethod::PSM_Random) 

enum class EPlayersSapawnMethod : uint8;
template<> struct TIsUEnumClass<EPlayersSapawnMethod> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EPlayersSapawnMethod>();

#define FOREACH_ENUM_ECONTROLROTATIONTYPE(op) \
	op(EControlRotationType::ZPlane) \
	op(EControlRotationType::LockedTarget) \
	op(EControlRotationType::TargetLocation) \
	op(EControlRotationType::WorldRotation) 

enum class EControlRotationType : uint8;
template<> struct TIsUEnumClass<EControlRotationType> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EControlRotationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
