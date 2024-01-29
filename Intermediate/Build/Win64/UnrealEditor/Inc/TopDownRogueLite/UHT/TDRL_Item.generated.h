// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Items/TDRL_Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATDRL_Character;
class UAbilitySystemComponent;
class UAnimMontage;
class UCapsuleComponent;
class USceneComponent;
class UStaticMeshComponent;
enum class EItemInteractions : uint8;
#ifdef TOPDOWNROGUELITE_TDRL_Item_generated_h
#error "TDRL_Item.generated.h already included, missing '#pragma once' in TDRL_Item.h"
#endif
#define TOPDOWNROGUELITE_TDRL_Item_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_11_DELEGATE \
struct _Script_TopDownRogueLite_eventOnPickedUpDelegate_Parms \
{ \
	ATDRL_Character* InteractingCharacter; \
}; \
static inline void FOnPickedUpDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnPickedUpDelegate, ATDRL_Character* InteractingCharacter) \
{ \
	_Script_TopDownRogueLite_eventOnPickedUpDelegate_Parms Parms; \
	Parms.InteractingCharacter=InteractingCharacter; \
	OnPickedUpDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_12_DELEGATE \
struct _Script_TopDownRogueLite_eventOnDroppedDelegate_Parms \
{ \
	ATDRL_Character* InteractingCharacter; \
}; \
static inline void FOnDroppedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDroppedDelegate, ATDRL_Character* InteractingCharacter) \
{ \
	_Script_TopDownRogueLite_eventOnDroppedDelegate_Parms Parms; \
	Parms.InteractingCharacter=InteractingCharacter; \
	OnDroppedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_13_DELEGATE \
struct _Script_TopDownRogueLite_eventOnEquippedDelegate_Parms \
{ \
	ATDRL_Character* InteractingCharacter; \
}; \
static inline void FOnEquippedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEquippedDelegate, ATDRL_Character* InteractingCharacter) \
{ \
	_Script_TopDownRogueLite_eventOnEquippedDelegate_Parms Parms; \
	Parms.InteractingCharacter=InteractingCharacter; \
	OnEquippedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_14_DELEGATE \
struct _Script_TopDownRogueLite_eventOnHolsteredDelegate_Parms \
{ \
	ATDRL_Character* InteractingCharacter; \
}; \
static inline void FOnHolsteredDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnHolsteredDelegate, ATDRL_Character* InteractingCharacter) \
{ \
	_Script_TopDownRogueLite_eventOnHolsteredDelegate_Parms Parms; \
	Parms.InteractingCharacter=InteractingCharacter; \
	OnHolsteredDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_RPC_WRAPPERS \
	virtual void PlayAnimMontageOnOwningCharacter_Clients_Implementation(UAnimMontage* AttackMontage, const float Rate); \
	virtual void RAction_Implementation(bool Enabled); \
	virtual void SecondaryAction_Implementation(bool Enabled); \
	virtual void PrimaryAction_Implementation(bool Enabled); \
	virtual void Holstered_Implementation(ATDRL_Character* InteractingCharacter); \
	virtual void Equipped_Implementation(ATDRL_Character* InteractingCharacter); \
	virtual void Dropped_Implementation(ATDRL_Character* InteractingCharacter); \
	virtual void PickedUp_Implementation(ATDRL_Character* InteractingCharacter); \
 \
	DECLARE_FUNCTION(execPlayAnimMontageOnOwningCharacter_Func); \
	DECLARE_FUNCTION(execPlayAnimMontageOnOwningCharacter_Clients); \
	DECLARE_FUNCTION(execPlayAnimMontageOnOwningCharacter); \
	DECLARE_FUNCTION(execRAction); \
	DECLARE_FUNCTION(execSecondaryAction); \
	DECLARE_FUNCTION(execPrimaryAction); \
	DECLARE_FUNCTION(execHolstered); \
	DECLARE_FUNCTION(execHolster); \
	DECLARE_FUNCTION(execEquipped); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execDropped); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickedUp); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execAssignToCharacter); \
	DECLARE_FUNCTION(execEnableItemOutliner); \
	DECLARE_FUNCTION(execGetMeshComponent); \
	DECLARE_FUNCTION(execGetMeshOffsetComponent); \
	DECLARE_FUNCTION(execGetCapsuleComponent); \
	DECLARE_FUNCTION(execClearItemGlobalTimer); \
	DECLARE_FUNCTION(execIsItemGlobalTimerOver); \
	DECLARE_FUNCTION(execUpdateOwnerGAS); \
	DECLARE_FUNCTION(execUpdateOwnerGASEffects); \
	DECLARE_FUNCTION(execUpdateOwnerGASAbilities); \
	DECLARE_FUNCTION(execSetupSkeletalMeshComponent);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void PlayAnimMontageOnOwningCharacter_Clients_Implementation(UAnimMontage* AttackMontage, const float Rate); \
	virtual void RAction_Implementation(bool Enabled); \
	virtual void SecondaryAction_Implementation(bool Enabled); \
	virtual void PrimaryAction_Implementation(bool Enabled); \
	virtual void Holstered_Implementation(ATDRL_Character* InteractingCharacter); \
	virtual void Equipped_Implementation(ATDRL_Character* InteractingCharacter); \
	virtual void Dropped_Implementation(ATDRL_Character* InteractingCharacter); \
	virtual void PickedUp_Implementation(ATDRL_Character* InteractingCharacter); \
 \
	DECLARE_FUNCTION(execPlayAnimMontageOnOwningCharacter_Func); \
	DECLARE_FUNCTION(execPlayAnimMontageOnOwningCharacter_Clients); \
	DECLARE_FUNCTION(execPlayAnimMontageOnOwningCharacter); \
	DECLARE_FUNCTION(execRAction); \
	DECLARE_FUNCTION(execSecondaryAction); \
	DECLARE_FUNCTION(execPrimaryAction); \
	DECLARE_FUNCTION(execHolstered); \
	DECLARE_FUNCTION(execHolster); \
	DECLARE_FUNCTION(execEquipped); \
	DECLARE_FUNCTION(execEquip); \
	DECLARE_FUNCTION(execDropped); \
	DECLARE_FUNCTION(execDrop); \
	DECLARE_FUNCTION(execPickedUp); \
	DECLARE_FUNCTION(execPickup); \
	DECLARE_FUNCTION(execAssignToCharacter); \
	DECLARE_FUNCTION(execEnableItemOutliner); \
	DECLARE_FUNCTION(execGetMeshComponent); \
	DECLARE_FUNCTION(execGetMeshOffsetComponent); \
	DECLARE_FUNCTION(execGetCapsuleComponent); \
	DECLARE_FUNCTION(execClearItemGlobalTimer); \
	DECLARE_FUNCTION(execIsItemGlobalTimerOver); \
	DECLARE_FUNCTION(execUpdateOwnerGAS); \
	DECLARE_FUNCTION(execUpdateOwnerGASEffects); \
	DECLARE_FUNCTION(execUpdateOwnerGASAbilities); \
	DECLARE_FUNCTION(execSetupSkeletalMeshComponent);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATDRL_Item(); \
	friend struct Z_Construct_UClass_ATDRL_Item_Statics; \
public: \
	DECLARE_CLASS(ATDRL_Item, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_Item) \
	virtual UObject* _getUObject() const override { return const_cast<ATDRL_Item*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedCharacter=NETFIELD_REP_START, \
		GlobalTimerCountdownHandle, \
		NETFIELD_REP_END=GlobalTimerCountdownHandle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATDRL_Item(); \
	friend struct Z_Construct_UClass_ATDRL_Item_Statics; \
public: \
	DECLARE_CLASS(ATDRL_Item, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), NO_API) \
	DECLARE_SERIALIZER(ATDRL_Item) \
	virtual UObject* _getUObject() const override { return const_cast<ATDRL_Item*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		EquippedCharacter=NETFIELD_REP_START, \
		GlobalTimerCountdownHandle, \
		NETFIELD_REP_END=GlobalTimerCountdownHandle	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATDRL_Item(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATDRL_Item) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_Item); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_Item); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_Item(ATDRL_Item&&); \
	NO_API ATDRL_Item(const ATDRL_Item&); \
public: \
	NO_API virtual ~ATDRL_Item();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATDRL_Item(ATDRL_Item&&); \
	NO_API ATDRL_Item(const ATDRL_Item&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATDRL_Item); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATDRL_Item); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATDRL_Item) \
	NO_API virtual ~ATDRL_Item();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_16_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_INCLASS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class ATDRL_Item>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
