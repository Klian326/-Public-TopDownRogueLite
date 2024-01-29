// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/TDRL_Ammo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ATDRL_Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TOPDOWNROGUELITE_TDRL_Ammo_generated_h
#error "TDRL_Ammo.generated.h already included, missing '#pragma once' in TDRL_Ammo.h"
#endif
#define TOPDOWNROGUELITE_TDRL_Ammo_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRefillCharacter); \
	DECLARE_FUNCTION(execOverlapAreaBegin);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRefillCharacter); \
	DECLARE_FUNCTION(execOverlapAreaBegin);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_Ammo(); \
	friend struct Z_Construct_UClass_ATDRL_Ammo_Statics; \
public: \
	DECLARE_CLASS(ATDRL_Ammo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_Ammo)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_Ammo(); \
	friend struct Z_Construct_UClass_ATDRL_Ammo_Statics; \
public: \
	DECLARE_CLASS(ATDRL_Ammo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_Ammo)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_Ammo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_Ammo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_Ammo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_Ammo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_Ammo(ATDRL_Ammo&&); \
	NO_API ATDRL_Ammo(const ATDRL_Ammo&); \
public: \
	NO_API virtual ~ATDRL_Ammo();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_Ammo(ATDRL_Ammo&&); \
	NO_API ATDRL_Ammo(const ATDRL_Ammo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_Ammo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_Ammo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_Ammo) \
	NO_API virtual ~ATDRL_Ammo();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_16_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_Ammo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h


#define FOREACH_ENUM_EAMMOREFILLMETHOD(op) \
	op(EAmmoRefillMethod::ARM_Percentage) \
	op(EAmmoRefillMethod::ARM_Exact) \
	op(EAmmoRefillMethod::ARM_Full) 

enum class EAmmoRefillMethod : uint8;
template<> struct TIsUEnumClass<EAmmoRefillMethod> { enum { Value = true }; };
template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EAmmoRefillMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
