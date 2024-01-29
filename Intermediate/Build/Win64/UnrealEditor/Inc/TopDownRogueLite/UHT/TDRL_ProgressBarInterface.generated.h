// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Progressbar/TDRL_ProgressBarInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FLinearColor;
#ifdef TOPDOWNROGUELITE_TDRL_ProgressBarInterface_generated_h
#error "TDRL_ProgressBarInterface.generated.h already included, missing '#pragma once' in TDRL_ProgressBarInterface.h"
#endif
#define TOPDOWNROGUELITE_TDRL_ProgressBarInterface_generated_h

#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_RPC_WRAPPERS \
	virtual void EditProgressBarColor_Implementation(const FLinearColor NewColor, FGameplayTag Tag) {}; \
	virtual void EditProgressBarText_Implementation(FText const& NewText, FGameplayTag Tag) {}; \
	virtual void EditProgressBarFloat_Implementation(const float NewFloat, FGameplayTag Tag) {}; \
 \
	DECLARE_FUNCTION(execEditProgressBarColor); \
	DECLARE_FUNCTION(execEditProgressBarText); \
	DECLARE_FUNCTION(execEditProgressBarFloat);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EditProgressBarColor_Implementation(const FLinearColor NewColor, FGameplayTag Tag) {}; \
	virtual void EditProgressBarText_Implementation(FText const& NewText, FGameplayTag Tag) {}; \
	virtual void EditProgressBarFloat_Implementation(const float NewFloat, FGameplayTag Tag) {}; \
 \
	DECLARE_FUNCTION(execEditProgressBarColor); \
	DECLARE_FUNCTION(execEditProgressBarText); \
	DECLARE_FUNCTION(execEditProgressBarFloat);


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_ACCESSORS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOPDOWNROGUELITE_API UTDRL_ProgressBarInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_ProgressBarInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOPDOWNROGUELITE_API, UTDRL_ProgressBarInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_ProgressBarInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOPDOWNROGUELITE_API UTDRL_ProgressBarInterface(UTDRL_ProgressBarInterface&&); \
	TOPDOWNROGUELITE_API UTDRL_ProgressBarInterface(const UTDRL_ProgressBarInterface&); \
public: \
	TOPDOWNROGUELITE_API virtual ~UTDRL_ProgressBarInterface();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOPDOWNROGUELITE_API UTDRL_ProgressBarInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOPDOWNROGUELITE_API UTDRL_ProgressBarInterface(UTDRL_ProgressBarInterface&&); \
	TOPDOWNROGUELITE_API UTDRL_ProgressBarInterface(const UTDRL_ProgressBarInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOPDOWNROGUELITE_API, UTDRL_ProgressBarInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTDRL_ProgressBarInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTDRL_ProgressBarInterface) \
	TOPDOWNROGUELITE_API virtual ~UTDRL_ProgressBarInterface();


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTDRL_ProgressBarInterface(); \
	friend struct Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics; \
public: \
	DECLARE_CLASS(UTDRL_ProgressBarInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TopDownRogueLite"), TOPDOWNROGUELITE_API) \
	DECLARE_SERIALIZER(UTDRL_ProgressBarInterface)


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITDRL_ProgressBarInterface() {} \
public: \
	typedef UTDRL_ProgressBarInterface UClassType; \
	typedef ITDRL_ProgressBarInterface ThisClass; \
	static void Execute_EditProgressBarColor(UObject* O, const FLinearColor NewColor, FGameplayTag Tag); \
	static void Execute_EditProgressBarFloat(UObject* O, const float NewFloat, FGameplayTag Tag); \
	static void Execute_EditProgressBarText(UObject* O, FText const& NewText, FGameplayTag Tag); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ITDRL_ProgressBarInterface() {} \
public: \
	typedef UTDRL_ProgressBarInterface UClassType; \
	typedef ITDRL_ProgressBarInterface ThisClass; \
	static void Execute_EditProgressBarColor(UObject* O, const FLinearColor NewColor, FGameplayTag Tag); \
	static void Execute_EditProgressBarFloat(UObject* O, const float NewFloat, FGameplayTag Tag); \
	static void Execute_EditProgressBarText(UObject* O, FText const& NewText, FGameplayTag Tag); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_11_PROLOG
#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_ACCESSORS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOPDOWNROGUELITE_API UClass* StaticClass<class UTDRL_ProgressBarInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
