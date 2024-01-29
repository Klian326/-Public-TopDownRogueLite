// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Types/TDRL_AITypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
enum class EMathComparisonMethod : uint8;
#ifdef TOPDOWNROGUELITE_TDRL_AITypes_generated_h
#error "TDRL_AITypes.generated.h already included, missing '#pragma once' in TDRL_AITypes.h"
#endif
#define TOPDOWNROGUELITE_TDRL_AITypes_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<struct FAIRandomAnimMontageList>();

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomAnimationMontageLength); \
	DECLARE_FUNCTION(execGetRandomAnimationMontage); \
	DECLARE_FUNCTION(execGetRandomAnimationMontageIndex); \
	DECLARE_FUNCTION(execGetNum); \
	DECLARE_FUNCTION(execbHasValues);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomAnimationMontageLength); \
	DECLARE_FUNCTION(execGetRandomAnimationMontage); \
	DECLARE_FUNCTION(execGetRandomAnimationMontageIndex); \
	DECLARE_FUNCTION(execGetNum); \
	DECLARE_FUNCTION(execbHasValues);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIAnimMontageContainer(); \
	friend struct Z_Construct_UClass_UAIAnimMontageContainer_Statics; \
public: \
	DECLARE_CLASS(UAIAnimMontageContainer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UAIAnimMontageContainer)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUAIAnimMontageContainer(); \
	friend struct Z_Construct_UClass_UAIAnimMontageContainer_Statics; \
public: \
	DECLARE_CLASS(UAIAnimMontageContainer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UAIAnimMontageContainer)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIAnimMontageContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIAnimMontageContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIAnimMontageContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAnimMontageContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIAnimMontageContainer(UAIAnimMontageContainer&&); \
	NO_API UAIAnimMontageContainer(const UAIAnimMontageContainer&); \
public: \
	NO_API virtual ~UAIAnimMontageContainer();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIAnimMontageContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIAnimMontageContainer(UAIAnimMontageContainer&&); \
	NO_API UAIAnimMontageContainer(const UAIAnimMontageContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIAnimMontageContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIAnimMontageContainer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIAnimMontageContainer) \
	NO_API virtual ~UAIAnimMontageContainer();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_60_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UAIAnimMontageContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h


#define FOREACH_ENUM_EMATHCOMPARISONMETHOD(op) \
	op(EMathComparisonMethod::MCM_Equal) \
	op(EMathComparisonMethod::MCM_Less) \
	op(EMathComparisonMethod::MCM_LessOrEqual) \
	op(EMathComparisonMethod::MCM_Greater) \
	op(EMathComparisonMethod::MCM_GreaterOrEqual) 

enum class EMathComparisonMethod : uint8;
template<> struct TIsUEnumClass<EMathComparisonMethod> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EMathComparisonMethod>();

#define FOREACH_ENUM_EAISWITCHWEAPONMETHOD(op) \
	op(EAISwitchWeaponMethod::ASW_Main) \
	op(EAISwitchWeaponMethod::ASW_BestRarity) \
	op(EAISwitchWeaponMethod::ASW_WorstRarity) \
	op(EAISwitchWeaponMethod::ASW_SpecificSlot) \
	op(EAISwitchWeaponMethod::ASW_WeaponClass) 

enum class EAISwitchWeaponMethod : uint8;
template<> struct TIsUEnumClass<EAISwitchWeaponMethod> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EAISwitchWeaponMethod>();

#define FOREACH_ENUM_EITEMSLOTNATIVE(op) \
	op(EItemSlotNative::ISN_Slot_0) \
	op(EItemSlotNative::ISN_Slot_1) \
	op(EItemSlotNative::ISN_Slot_2) \
	op(EItemSlotNative::ISN_Slot_3) \
	op(EItemSlotNative::ISN_Slot_4) \
	op(EItemSlotNative::ISN_Slot_5) \
	op(EItemSlotNative::ISN_Slot_6) \
	op(EItemSlotNative::ISN_Slot_7) \
	op(EItemSlotNative::ISN_Slot_8) \
	op(EItemSlotNative::ISN_Slot_9) 

enum class EItemSlotNative : uint8;
template<> struct TIsUEnumClass<EItemSlotNative> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EItemSlotNative>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
