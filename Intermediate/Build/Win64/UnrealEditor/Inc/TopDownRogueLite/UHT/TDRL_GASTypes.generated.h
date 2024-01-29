// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/TDRL_GASTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOPDOWNROGUELITE_TDRL_GASTypes_generated_h
#error "TDRL_GASTypes.generated.h already included, missing '#pragma once' in TDRL_GASTypes.h"
#endif
#define TOPDOWNROGUELITE_TDRL_GASTypes_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGASContainer_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FGASContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h


#define FOREACH_ENUM_ETDRLGASABILITYINPUTID(op) \
	op(ETDRLGASAbilityInputID::None) \
	op(ETDRLGASAbilityInputID::Confirm) \
	op(ETDRLGASAbilityInputID::Cancel) \
	op(ETDRLGASAbilityInputID::Move) \
	op(ETDRLGASAbilityInputID::Interact) \
	op(ETDRLGASAbilityInputID::Drop) \
	op(ETDRLGASAbilityInputID::PrimaryAction) \
	op(ETDRLGASAbilityInputID::SecondaryAction) \
	op(ETDRLGASAbilityInputID::RAction) \
	op(ETDRLGASAbilityInputID::CameraRotation) \
	op(ETDRLGASAbilityInputID::Crouch) \
	op(ETDRLGASAbilityInputID::Jump) \
	op(ETDRLGASAbilityInputID::Dash) \
	op(ETDRLGASAbilityInputID::Walk) \
	op(ETDRLGASAbilityInputID::PitchAim) \
	op(ETDRLGASAbilityInputID::SwitchWeapon) 

enum class ETDRLGASAbilityInputID : uint8;
template<> struct TIsUEnumClass<ETDRLGASAbilityInputID> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<ETDRLGASAbilityInputID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
