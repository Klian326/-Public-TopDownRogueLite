// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/TDRL_InteractionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATDRL_Character;
struct FGameplayTagContainer;
#ifdef TOPDOWNROGUELITE_TDRL_InteractionInterface_generated_h
#error "TDRL_InteractionInterface.generated.h already included, missing '#pragma once' in TDRL_InteractionInterface.h"
#endif
#define TOPDOWNROGUELITE_TDRL_InteractionInterface_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_RPC_WRAPPERS \
	virtual void Interact_Implementation(ATDRL_Character* Character, FGameplayTagContainer Tag) {}; \
	virtual void EndInteractionFocus_Implementation(ATDRL_Character* Character) {}; \
	virtual void BeginInteractionFocus_Implementation(ATDRL_Character* Character) {}; \
 \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execEndInteractionFocus); \
	DECLARE_FUNCTION(execBeginInteractionFocus);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(ATDRL_Character* Character, FGameplayTagContainer Tag) {}; \
	virtual void EndInteractionFocus_Implementation(ATDRL_Character* Character) {}; \
	virtual void BeginInteractionFocus_Implementation(ATDRL_Character* Character) {}; \
 \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execEndInteractionFocus); \
	DECLARE_FUNCTION(execBeginInteractionFocus);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOPDOWNROGUELITE_API UTDRL_InteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_InteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOPDOWNROGUELITE_API, UTDRL_InteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_InteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOPDOWNROGUELITE_API UTDRL_InteractionInterface(UTDRL_InteractionInterface&&); \
	TOPDOWNROGUELITE_API UTDRL_InteractionInterface(const UTDRL_InteractionInterface&); \
public: \
	TOPDOWNROGUELITE_API virtual ~UTDRL_InteractionInterface();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOPDOWNROGUELITE_API UTDRL_InteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOPDOWNROGUELITE_API UTDRL_InteractionInterface(UTDRL_InteractionInterface&&); \
	TOPDOWNROGUELITE_API UTDRL_InteractionInterface(const UTDRL_InteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOPDOWNROGUELITE_API, UTDRL_InteractionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_InteractionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_InteractionInterface) \
	TOPDOWNROGUELITE_API virtual ~UTDRL_InteractionInterface();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTDRL_InteractionInterface(); \
	friend struct Z_Construct_UClass_UTDRL_InteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UTDRL_InteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), TOPDOWNROGUELITE_API) \
	DECLARE_SERIALIZER(UTDRL_InteractionInterface)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITDRL_InteractionInterface() {} \
public: \
	typedef UTDRL_InteractionInterface UClassType; \
	typedef ITDRL_InteractionInterface ThisClass; \
	static void Execute_BeginInteractionFocus(UObject* O, ATDRL_Character* Character); \
	static void Execute_EndInteractionFocus(UObject* O, ATDRL_Character* Character); \
	static void Execute_Interact(UObject* O, ATDRL_Character* Character, FGameplayTagContainer Tag); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ITDRL_InteractionInterface() {} \
public: \
	typedef UTDRL_InteractionInterface UClassType; \
	typedef ITDRL_InteractionInterface ThisClass; \
	static void Execute_BeginInteractionFocus(UObject* O, ATDRL_Character* Character); \
	static void Execute_EndInteractionFocus(UObject* O, ATDRL_Character* Character); \
	static void Execute_Interact(UObject* O, ATDRL_Character* Character, FGameplayTagContainer Tag); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_11_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_InteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
