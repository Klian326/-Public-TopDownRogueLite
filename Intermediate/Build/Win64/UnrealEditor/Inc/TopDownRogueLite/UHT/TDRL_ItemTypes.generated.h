// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/TDRL_ItemTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNROGUELITE_TDRL_ItemTypes_generated_h
#error "TDRL_ItemTypes.generated.h already included, missing '#pragma once' in TDRL_ItemTypes.h"
#endif
#define TOPDOWNROGUELITE_TDRL_ItemTypes_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FItemAbilitiesEffects>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStaticData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FItemStaticData>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FMeleePrimaryAttackMontages>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_205_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeleeStaticData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FMeleeStaticData>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirearmMontages_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FFirearmMontages>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_298_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFirearmStaticData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FFirearmStaticData>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_361_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectileStaticData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FProjectileStaticData>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_427_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGrenadeStaticData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FGrenadeStaticData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h


#define FOREACH_ENUM_EITEMRARITY(op) \
	op(EItemRarity::IR_Trash) \
	op(EItemRarity::IR_Common) \
	op(EItemRarity::IR_Uncommon) \
	op(EItemRarity::IR_Rare) \
	op(EItemRarity::IR_Epic) \
	op(EItemRarity::IR_Legend) 

enum class EItemRarity : uint8;
template<> struct TIsUEnumClass<EItemRarity> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EItemRarity>();

#define FOREACH_ENUM_EITEMINTERACTIONS(op) \
	op(EItemInteractions::II_Pickup) \
	op(EItemInteractions::II_Drop) \
	op(EItemInteractions::II_Equip) \
	op(EItemInteractions::II_Holster) 

enum class EItemInteractions : uint8;
template<> struct TIsUEnumClass<EItemInteractions> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EItemInteractions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
