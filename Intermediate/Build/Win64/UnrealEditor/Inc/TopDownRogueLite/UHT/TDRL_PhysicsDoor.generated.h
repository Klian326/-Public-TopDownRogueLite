// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gameplay/TDRL_PhysicsDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class UStaticMeshComponent;
struct FHitResult;
#ifdef TOPDOWNROGUELITE_TDRL_PhysicsDoor_generated_h
#error "TDRL_PhysicsDoor.generated.h already included, missing '#pragma once' in TDRL_PhysicsDoor.h"
#endif
#define TOPDOWNROGUELITE_TDRL_PhysicsDoor_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_RPC_WRAPPERS \
	virtual void AddImpulseAtLocation_Multicast_Implementation(const FVector Impulse, const FVector Location); \
 \
	DECLARE_FUNCTION(execAddImpulseAtLocation_Multicast); \
	DECLARE_FUNCTION(execSetDoorLocked); \
	DECLARE_FUNCTION(execSetDoorOpen); \
	DECLARE_FUNCTION(execGetIsLocked); \
	DECLARE_FUNCTION(execGetIsOpen); \
	DECLARE_FUNCTION(execGetDoorMesh); \
	DECLARE_FUNCTION(execOverlapAreaEnd); \
	DECLARE_FUNCTION(execOverlapAreaBegin); \
	DECLARE_FUNCTION(execAdjustYawOnClients); \
	DECLARE_FUNCTION(execGatherYawOnServer); \
	DECLARE_FUNCTION(execOnRep_bIsOpen);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AddImpulseAtLocation_Multicast_Implementation(const FVector Impulse, const FVector Location); \
 \
	DECLARE_FUNCTION(execAddImpulseAtLocation_Multicast); \
	DECLARE_FUNCTION(execSetDoorLocked); \
	DECLARE_FUNCTION(execSetDoorOpen); \
	DECLARE_FUNCTION(execGetIsLocked); \
	DECLARE_FUNCTION(execGetIsOpen); \
	DECLARE_FUNCTION(execGetDoorMesh); \
	DECLARE_FUNCTION(execOverlapAreaEnd); \
	DECLARE_FUNCTION(execOverlapAreaBegin); \
	DECLARE_FUNCTION(execAdjustYawOnClients); \
	DECLARE_FUNCTION(execGatherYawOnServer); \
	DECLARE_FUNCTION(execOnRep_bIsOpen);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_PhysicsDoor(); \
	friend struct Z_Construct_UClass_ATDRL_PhysicsDoor_Statics; \
public: \
	DECLARE_CLASS(ATDRL_PhysicsDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_PhysicsDoor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		YawDoor=NETFIELD_REP_START, \
		bIsOpen, \
		NETFIELD_REP_END=bIsOpen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_PhysicsDoor(); \
	friend struct Z_Construct_UClass_ATDRL_PhysicsDoor_Statics; \
public: \
	DECLARE_CLASS(ATDRL_PhysicsDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_PhysicsDoor) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		YawDoor=NETFIELD_REP_START, \
		bIsOpen, \
		NETFIELD_REP_END=bIsOpen	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_PhysicsDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_PhysicsDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_PhysicsDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_PhysicsDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_PhysicsDoor(ATDRL_PhysicsDoor&&); \
	NO_API ATDRL_PhysicsDoor(const ATDRL_PhysicsDoor&); \
public: \
	NO_API virtual ~ATDRL_PhysicsDoor();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_PhysicsDoor(ATDRL_PhysicsDoor&&); \
	NO_API ATDRL_PhysicsDoor(const ATDRL_PhysicsDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_PhysicsDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_PhysicsDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_PhysicsDoor) \
	NO_API virtual ~ATDRL_PhysicsDoor();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_9_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_PhysicsDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
