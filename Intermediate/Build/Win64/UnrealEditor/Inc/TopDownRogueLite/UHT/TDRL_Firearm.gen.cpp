// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Items/TDRL_Firearm.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_ItemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_Firearm() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Firearm();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Firearm_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Melee();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FFirearmStaticData();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_Firearm::execRefillAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RefillAmmo(Z_Param_Ammo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execReloadCountdownOverTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadCountdownOverTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execReloadWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReloadWeapon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execMagazineEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MagazineEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execFireRateTimerOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireRateTimerOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execFireBullet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireBullet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execStopFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execStartFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execGetMuzzleTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetMuzzleTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execGetMuzzleComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetMuzzleComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execHasQueuedShot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasQueuedShot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execIsFiring)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFiring();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Firearm::execOnRep_AmmunitionModified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_AmmunitionModified();
		P_NATIVE_END;
	}
	void ATDRL_Firearm::StaticRegisterNativesATDRL_Firearm()
	{
		UClass* Class = ATDRL_Firearm::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireBullet", &ATDRL_Firearm::execFireBullet },
			{ "FireRateTimerOver", &ATDRL_Firearm::execFireRateTimerOver },
			{ "GetMuzzleComponent", &ATDRL_Firearm::execGetMuzzleComponent },
			{ "GetMuzzleTransform", &ATDRL_Firearm::execGetMuzzleTransform },
			{ "HasQueuedShot", &ATDRL_Firearm::execHasQueuedShot },
			{ "IsFiring", &ATDRL_Firearm::execIsFiring },
			{ "MagazineEmpty", &ATDRL_Firearm::execMagazineEmpty },
			{ "OnRep_AmmunitionModified", &ATDRL_Firearm::execOnRep_AmmunitionModified },
			{ "RefillAmmo", &ATDRL_Firearm::execRefillAmmo },
			{ "ReloadCountdownOverTimer", &ATDRL_Firearm::execReloadCountdownOverTimer },
			{ "ReloadWeapon", &ATDRL_Firearm::execReloadWeapon },
			{ "StartFiring", &ATDRL_Firearm::execStartFiring },
			{ "StopFiring", &ATDRL_Firearm::execStopFiring },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_FireBullet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_FireBullet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_FireBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "FireBullet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_FireBullet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_FireBullet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_FireBullet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_FireBullet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_FireRateTimerOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_FireRateTimerOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_FireRateTimerOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "FireRateTimerOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_FireRateTimerOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_FireRateTimerOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_FireRateTimerOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_FireRateTimerOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics
	{
		struct TDRL_Firearm_eventGetMuzzleComponent_Parms
		{
			USceneComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Firearm_eventGetMuzzleComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Components" },
		{ "Comment", "/*Return the Muzzle component*/" },
		{ "DisplayName", "GetMuzzleComponent" },
		{ "Keywords", "Get Muzzle Component Firearm Weapon TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Return the Muzzle component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "GetMuzzleComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::TDRL_Firearm_eventGetMuzzleComponent_Parms), Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics
	{
		struct TDRL_Firearm_eventGetMuzzleTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Firearm_eventGetMuzzleTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*Return the Muzzle transform*/" },
		{ "DisplayName", "GetMuzzleTransform" },
		{ "Keywords", "Get Muzzle Transform Firearm Weapon TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Return the Muzzle transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "GetMuzzleTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::TDRL_Firearm_eventGetMuzzleTransform_Parms), Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics
	{
		struct TDRL_Firearm_eventHasQueuedShot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_Firearm_eventHasQueuedShot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Firearm_eventHasQueuedShot_Parms), &Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*This Firearm has a queued shot? Used with burst > 0*/" },
		{ "DisplayName", "HasQueuedShot" },
		{ "Keywords", "Has Queued Shot Firearm Weapon TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "This Firearm has a queued shot? Used with burst > 0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "HasQueuedShot", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::TDRL_Firearm_eventHasQueuedShot_Parms), Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics
	{
		struct TDRL_Firearm_eventIsFiring_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_Firearm_eventIsFiring_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Firearm_eventIsFiring_Parms), &Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*This Firearm is currently firing?*/" },
		{ "DisplayName", "IsFiring" },
		{ "Keywords", "Is Firing Firearm Weapon TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "This Firearm is currently firing?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "IsFiring", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::TDRL_Firearm_eventIsFiring_Parms), Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_IsFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_IsFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_MagazineEmpty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_MagazineEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_MagazineEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "MagazineEmpty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_MagazineEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_MagazineEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_MagazineEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_MagazineEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_OnRep_AmmunitionModified_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_OnRep_AmmunitionModified_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_OnRep_AmmunitionModified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "OnRep_AmmunitionModified", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_OnRep_AmmunitionModified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_OnRep_AmmunitionModified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_OnRep_AmmunitionModified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_OnRep_AmmunitionModified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics
	{
		struct TDRL_Firearm_eventRefillAmmo_Parms
		{
			int32 Ammo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_Ammo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Firearm_eventRefillAmmo_Parms, Ammo), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_Ammo_MetaData)) };
	void Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_Firearm_eventRefillAmmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Firearm_eventRefillAmmo_Parms), &Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_Ammo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*Refill Ammo*/" },
		{ "DisplayName", "Refill Ammo" },
		{ "Keywords", "Refill Ammo TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Refill Ammo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "RefillAmmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::TDRL_Firearm_eventRefillAmmo_Parms), Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_ReloadCountdownOverTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_ReloadCountdownOverTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_ReloadCountdownOverTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "ReloadCountdownOverTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_ReloadCountdownOverTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_ReloadCountdownOverTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_ReloadCountdownOverTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_ReloadCountdownOverTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics
	{
		struct TDRL_Firearm_eventReloadWeapon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_Firearm_eventReloadWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Firearm_eventReloadWeapon_Parms), &Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*Reload*/" },
		{ "DisplayName", "ReloadWeapon" },
		{ "Keywords", "Reload Firearm Weapon TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Reload" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "ReloadWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::TDRL_Firearm_eventReloadWeapon_Parms), Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics
	{
		struct TDRL_Firearm_eventStartFiring_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_Firearm_eventStartFiring_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Firearm_eventStartFiring_Parms), &Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*Start firing*/" },
		{ "DisplayName", "StartFiring" },
		{ "Keywords", "Start Firing Firearm Weapon TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Start firing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "StartFiring", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::TDRL_Firearm_eventStartFiring_Parms), Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_StartFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_StartFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Firearm_StopFiring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Firearm_StopFiring_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*Stop firing*/" },
		{ "DisplayName", "StopFiring" },
		{ "Keywords", "Stop FiringFirearm Weapon TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Stop firing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Firearm_StopFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Firearm, nullptr, "StopFiring", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Firearm_StopFiring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Firearm_StopFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Firearm_StopFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Firearm_StopFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_Firearm);
	UClass* Z_Construct_UClass_ATDRL_Firearm_NoRegister()
	{
		return ATDRL_Firearm::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_Firearm_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirearmStaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirearmStaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ammunition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ammunition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagazineAmmunition_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineAmmunition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Muzzle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Muzzle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BurstCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRateTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FireRateTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShotQueued_MetaData[];
#endif
		static void NewProp_bShotQueued_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShotQueued;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFiring_MetaData[];
#endif
		static void NewProp_bIsFiring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFiring;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_Firearm_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDRL_Melee,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_Firearm_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_Firearm_FireBullet, "FireBullet" }, // 2812661572
		{ &Z_Construct_UFunction_ATDRL_Firearm_FireRateTimerOver, "FireRateTimerOver" }, // 1715182502
		{ &Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleComponent, "GetMuzzleComponent" }, // 3169055052
		{ &Z_Construct_UFunction_ATDRL_Firearm_GetMuzzleTransform, "GetMuzzleTransform" }, // 1256275450
		{ &Z_Construct_UFunction_ATDRL_Firearm_HasQueuedShot, "HasQueuedShot" }, // 2067775131
		{ &Z_Construct_UFunction_ATDRL_Firearm_IsFiring, "IsFiring" }, // 2311617366
		{ &Z_Construct_UFunction_ATDRL_Firearm_MagazineEmpty, "MagazineEmpty" }, // 410057718
		{ &Z_Construct_UFunction_ATDRL_Firearm_OnRep_AmmunitionModified, "OnRep_AmmunitionModified" }, // 1839723117
		{ &Z_Construct_UFunction_ATDRL_Firearm_RefillAmmo, "RefillAmmo" }, // 2876122608
		{ &Z_Construct_UFunction_ATDRL_Firearm_ReloadCountdownOverTimer, "ReloadCountdownOverTimer" }, // 3743624687
		{ &Z_Construct_UFunction_ATDRL_Firearm_ReloadWeapon, "ReloadWeapon" }, // 3091826156
		{ &Z_Construct_UFunction_ATDRL_Firearm_StartFiring, "StartFiring" }, // 4190672978
		{ &Z_Construct_UFunction_ATDRL_Firearm_StopFiring, "StopFiring" }, // 3201601587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/TDRL_Firearm.h" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FirearmStaticData_MetaData[] = {
		{ "Category", "TDRL|Data|Firearm" },
		{ "Comment", "/* Static Data structure for FirearmItems*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Static Data structure for FirearmItems" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FirearmStaticData = { "FirearmStaticData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Firearm, FirearmStaticData), Z_Construct_UScriptStruct_FFirearmStaticData, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FirearmStaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FirearmStaticData_MetaData)) }; // 1871993193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Ammunition_MetaData[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*Current amount of ammunition for this weapon (excluding magazine)*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Current amount of ammunition for this weapon (excluding magazine)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Ammunition = { "Ammunition", "OnRep_AmmunitionModified", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Firearm, Ammunition), METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Ammunition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Ammunition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_MagazineAmmunition_MetaData[] = {
		{ "Category", "TDRL|Firearm" },
		{ "Comment", "/*Current amount of ammunition for this weapon in the magazine*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
		{ "ToolTip", "Current amount of ammunition for this weapon in the magazine" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_MagazineAmmunition = { "MagazineAmmunition", "OnRep_AmmunitionModified", (EPropertyFlags)0x0010000100000035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Firearm, MagazineAmmunition), METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_MagazineAmmunition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_MagazineAmmunition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Muzzle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Muzzle = { "Muzzle", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Firearm, Muzzle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Muzzle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Muzzle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_BurstCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_BurstCount = { "BurstCount", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Firearm, BurstCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_BurstCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_BurstCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FireRateTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FireRateTimerHandle = { "FireRateTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Firearm, FireRateTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FireRateTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FireRateTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bShotQueued_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bShotQueued_SetBit(void* Obj)
	{
		((ATDRL_Firearm*)Obj)->bShotQueued = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bShotQueued = { "bShotQueued", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_Firearm), &Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bShotQueued_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bShotQueued_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bShotQueued_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bIsFiring_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Firearm.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bIsFiring_SetBit(void* Obj)
	{
		((ATDRL_Firearm*)Obj)->bIsFiring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bIsFiring = { "bIsFiring", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_Firearm), &Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bIsFiring_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bIsFiring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bIsFiring_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_Firearm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FirearmStaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Ammunition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_MagazineAmmunition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_Muzzle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_BurstCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_FireRateTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bShotQueued,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Firearm_Statics::NewProp_bIsFiring,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_Firearm_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_Firearm>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_Firearm_Statics::ClassParams = {
		&ATDRL_Firearm::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_Firearm_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_Firearm_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Firearm_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_Firearm()
	{
		if (!Z_Registration_Info_UClass_ATDRL_Firearm.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_Firearm.OuterSingleton, Z_Construct_UClass_ATDRL_Firearm_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_Firearm.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_Firearm>()
	{
		return ATDRL_Firearm::StaticClass();
	}

	void ATDRL_Firearm::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Ammunition(TEXT("Ammunition"));
		static const FName Name_MagazineAmmunition(TEXT("MagazineAmmunition"));

		const bool bIsValid = true
			&& Name_Ammunition == ClassReps[(int32)ENetFields_Private::Ammunition].Property->GetFName()
			&& Name_MagazineAmmunition == ClassReps[(int32)ENetFields_Private::MagazineAmmunition].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDRL_Firearm"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_Firearm);
	ATDRL_Firearm::~ATDRL_Firearm() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_Firearm, ATDRL_Firearm::StaticClass, TEXT("ATDRL_Firearm"), &Z_Registration_Info_UClass_ATDRL_Firearm, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_Firearm), 4241759654U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_2043287771(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Firearm_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
