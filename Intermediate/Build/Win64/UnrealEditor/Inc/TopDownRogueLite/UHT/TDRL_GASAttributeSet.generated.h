// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAS/TDRL_GASAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttributeData;
#ifdef TOPDOWNROGUELITE_TDRL_GASAttributeSet_generated_h
#error "TDRL_GASAttributeSet.generated.h already included, missing '#pragma once' in TDRL_GASAttributeSet.h"
#endif
#define TOPDOWNROGUELITE_TDRL_GASAttributeSet_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CustomAttribute3); \
	DECLARE_FUNCTION(execOnRep_CustomAttribute2); \
	DECLARE_FUNCTION(execOnRep_CustomAttribute1);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CustomAttribute3); \
	DECLARE_FUNCTION(execOnRep_CustomAttribute2); \
	DECLARE_FUNCTION(execOnRep_CustomAttribute1);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTDRL_GASAttributeSet(); \
	friend struct Z_Construct_UClass_UTDRL_GASAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UTDRL_GASAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_GASAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CustomAttribute1=NETFIELD_REP_START, \
		CustomAttribute2, \
		CustomAttribute3, \
		NETFIELD_REP_END=CustomAttribute3	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UTDRL_GASAttributeSet) \
public:


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUTDRL_GASAttributeSet(); \
	friend struct Z_Construct_UClass_UTDRL_GASAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UTDRL_GASAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(UTDRL_GASAttributeSet) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CustomAttribute1=NETFIELD_REP_START, \
		CustomAttribute2, \
		CustomAttribute3, \
		NETFIELD_REP_END=CustomAttribute3	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UTDRL_GASAttributeSet) \
public:


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTDRL_GASAttributeSet(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_GASAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_GASAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_GASAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_GASAttributeSet(UTDRL_GASAttributeSet&&); \
	NO_API UTDRL_GASAttributeSet(const UTDRL_GASAttributeSet&); \
public: \
	NO_API virtual ~UTDRL_GASAttributeSet();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTDRL_GASAttributeSet(UTDRL_GASAttributeSet&&); \
	NO_API UTDRL_GASAttributeSet(const UTDRL_GASAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTDRL_GASAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_GASAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTDRL_GASAttributeSet) \
	NO_API virtual ~UTDRL_GASAttributeSet();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_22_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_GASAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
