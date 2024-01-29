// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Player/TDRL_CharacterMovementComponent.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_CharacterMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_CharacterMovementComponent();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_CharacterMovementComponent_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FDashEffect();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomMovementMode;
	static UEnum* ECustomMovementMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("ECustomMovementMode"));
		}
		return Z_Registration_Info_UEnum_ECustomMovementMode.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<ECustomMovementMode>()
	{
		return ECustomMovementMode_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics::Enumerators[] = {
		{ "CMOVE_Dash", (int64)CMOVE_Dash },
		{ "CMOVE_MAX", (int64)CMOVE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CMOVE_Dash.DisplayName", "Dash" },
		{ "CMOVE_Dash.Name", "CMOVE_Dash" },
		{ "CMOVE_MAX.Hidden", "" },
		{ "CMOVE_MAX.Name", "CMOVE_MAX" },
		{ "Comment", "/** Custom movement modes for Characters. */" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Custom movement modes for Characters." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"ECustomMovementMode",
		"ECustomMovementMode",
		Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode()
	{
		if (!Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_ECustomMovementMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomMovementMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execOnRep_WantsToDash)
	{
		P_GET_UBOOL(Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_WantsToDash(Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execSpawnDashEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnDashEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execIsCustomMovementMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_custom_movement_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCustomMovementMode(Z_Param_custom_movement_mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execFindDashDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->FindDashDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execDashCDReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DashCDReset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execDash)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dash(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execSetAlternativeWalk)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlternativeWalk(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execIsDashing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDashing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execGetDashLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetDashLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execGetRemainingDashCDPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingDashCDPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CharacterMovementComponent::execGetRemainingDashCD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingDashCD();
		P_NATIVE_END;
	}
	void UTDRL_CharacterMovementComponent::StaticRegisterNativesUTDRL_CharacterMovementComponent()
	{
		UClass* Class = UTDRL_CharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dash", &UTDRL_CharacterMovementComponent::execDash },
			{ "DashCDReset", &UTDRL_CharacterMovementComponent::execDashCDReset },
			{ "FindDashDirection", &UTDRL_CharacterMovementComponent::execFindDashDirection },
			{ "GetDashLeft", &UTDRL_CharacterMovementComponent::execGetDashLeft },
			{ "GetRemainingDashCD", &UTDRL_CharacterMovementComponent::execGetRemainingDashCD },
			{ "GetRemainingDashCDPercent", &UTDRL_CharacterMovementComponent::execGetRemainingDashCDPercent },
			{ "IsCustomMovementMode", &UTDRL_CharacterMovementComponent::execIsCustomMovementMode },
			{ "IsDashing", &UTDRL_CharacterMovementComponent::execIsDashing },
			{ "OnRep_WantsToDash", &UTDRL_CharacterMovementComponent::execOnRep_WantsToDash },
			{ "SetAlternativeWalk", &UTDRL_CharacterMovementComponent::execSetAlternativeWalk },
			{ "SpawnDashEffects", &UTDRL_CharacterMovementComponent::execSpawnDashEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics
	{
		struct TDRL_CharacterMovementComponent_eventDash_Parms
		{
			bool Enable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::NewProp_Enable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((TDRL_CharacterMovementComponent_eventDash_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_CharacterMovementComponent_eventDash_Parms), &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::NewProp_Enable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Movements" },
		{ "Comment", "/* Requests that the character begins dashing. */" },
		{ "DisplayName", "Dash" },
		{ "Keywords", "Set Dash TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Requests that the character begins dashing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "Dash", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::TDRL_CharacterMovementComponent_eventDash_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_DashCDReset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_DashCDReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_DashCDReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "DashCDReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_DashCDReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_DashCDReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_DashCDReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_DashCDReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics
	{
		struct TDRL_CharacterMovementComponent_eventFindDashDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CharacterMovementComponent_eventFindDashDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "FindDashDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::TDRL_CharacterMovementComponent_eventFindDashDirection_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics
	{
		struct TDRL_CharacterMovementComponent_eventGetDashLeft_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CharacterMovementComponent_eventGetDashLeft_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Movements" },
		{ "Comment", "/*Return number of dashes left before the character will need to wait the countown before being able to dash again*/" },
		{ "DisplayName", "GetDashLeft" },
		{ "Keywords", "Get Dash Left TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Return number of dashes left before the character will need to wait the countown before being able to dash again" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "GetDashLeft", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::TDRL_CharacterMovementComponent_eventGetDashLeft_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics
	{
		struct TDRL_CharacterMovementComponent_eventGetRemainingDashCD_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CharacterMovementComponent_eventGetRemainingDashCD_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Movements" },
		{ "Comment", "/*Return remaining Dash Countdown*/" },
		{ "CompactNodeTitle", "DashCountdown" },
		{ "DisplayName", "GetRemainingDashCountdown" },
		{ "Keywords", "Get Remaining Dash Countdown TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Return remaining Dash Countdown" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "GetRemainingDashCD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::TDRL_CharacterMovementComponent_eventGetRemainingDashCD_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics
	{
		struct TDRL_CharacterMovementComponent_eventGetRemainingDashCDPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CharacterMovementComponent_eventGetRemainingDashCDPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Movements" },
		{ "Comment", "/*Return remaining Dash Countoun as percentage*/" },
		{ "CompactNodeTitle", "DashCountdownPercent" },
		{ "DisplayName", "GetRemainingDashCountdownPercent" },
		{ "Keywords", "Get Remaining Dash Countdown Percent TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Return remaining Dash Countoun as percentage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "GetRemainingDashCDPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::TDRL_CharacterMovementComponent_eventGetRemainingDashCDPercent_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics
	{
		struct TDRL_CharacterMovementComponent_eventIsCustomMovementMode_Parms
		{
			uint8 custom_movement_mode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_custom_movement_mode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_custom_movement_mode = { "custom_movement_mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CharacterMovementComponent_eventIsCustomMovementMode_Parms, custom_movement_mode), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_CharacterMovementComponent_eventIsCustomMovementMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_CharacterMovementComponent_eventIsCustomMovementMode_Parms), &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_custom_movement_mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "IsCustomMovementMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::TDRL_CharacterMovementComponent_eventIsCustomMovementMode_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics
	{
		struct TDRL_CharacterMovementComponent_eventIsDashing_Parms
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
	void Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_CharacterMovementComponent_eventIsDashing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_CharacterMovementComponent_eventIsDashing_Parms), &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Movements" },
		{ "Comment", "/*Return true if character is currently dashin*/" },
		{ "DisplayName", "IsDashing" },
		{ "Keywords", "Get Is Dashing TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Return true if character is currently dashin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "IsDashing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::TDRL_CharacterMovementComponent_eventIsDashing_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics
	{
		struct TDRL_CharacterMovementComponent_eventOnRep_WantsToDash_Parms
		{
			bool OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static void NewProp_OldValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::NewProp_OldValue_SetBit(void* Obj)
	{
		((TDRL_CharacterMovementComponent_eventOnRep_WantsToDash_Parms*)Obj)->OldValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_CharacterMovementComponent_eventOnRep_WantsToDash_Parms), &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::NewProp_OldValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::NewProp_OldValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "OnRep_WantsToDash", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::TDRL_CharacterMovementComponent_eventOnRep_WantsToDash_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics
	{
		struct TDRL_CharacterMovementComponent_eventSetAlternativeWalk_Parms
		{
			bool Enable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::NewProp_Enable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((TDRL_CharacterMovementComponent_eventSetAlternativeWalk_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_CharacterMovementComponent_eventSetAlternativeWalk_Parms), &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::NewProp_Enable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Movements" },
		{ "Comment", "/*Enable or disable alternative walk settings*/" },
		{ "DisplayName", "SetAlternativeWalk" },
		{ "Keywords", "Set Alternative Walk TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Enable or disable alternative walk settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "SetAlternativeWalk", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::TDRL_CharacterMovementComponent_eventSetAlternativeWalk_Parms), Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SpawnDashEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SpawnDashEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SpawnDashEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CharacterMovementComponent, nullptr, "SpawnDashEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SpawnDashEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SpawnDashEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SpawnDashEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SpawnDashEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_CharacterMovementComponent);
	UClass* Z_Construct_UClass_UTDRL_CharacterMovementComponent_NoRegister()
	{
		return UTDRL_CharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelerationA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelerationB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelerationB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDash_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaxDash;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DashGroundTestChannels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashGroundTestChannels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_DashGroundTestChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashCountdown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCountdown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashForce;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceForActorsPushChannels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceForActorsPushChannels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TraceForActorsPushChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashEffects_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DashEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowVisualDebug_MetaData[];
#endif
		static void NewProp_bShowVisualDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVisualDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DashTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashRequired_MetaData[];
#endif
		static void NewProp_DashRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DashRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlternativeWalkRequired_MetaData[];
#endif
		static void NewProp_AlternativeWalkRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AlternativeWalkRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WantsToAlternativeWalk_MetaData[];
#endif
		static void NewProp_WantsToAlternativeWalk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WantsToAlternativeWalk;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WantsToDash_MetaData[];
#endif
		static void NewProp_WantsToDash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WantsToDash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashPast_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashPast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DashDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DashCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_Dash, "Dash" }, // 1158031165
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_DashCDReset, "DashCDReset" }, // 1047076129
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_FindDashDirection, "FindDashDirection" }, // 3051180161
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetDashLeft, "GetDashLeft" }, // 3704560837
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCD, "GetRemainingDashCD" }, // 127757744
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_GetRemainingDashCDPercent, "GetRemainingDashCDPercent" }, // 2635453054
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsCustomMovementMode, "IsCustomMovementMode" }, // 2708195934
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_IsDashing, "IsDashing" }, // 3804265843
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_OnRep_WantsToDash, "OnRep_WantsToDash" }, // 3020678240
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SetAlternativeWalk, "SetAlternativeWalk" }, // 405897272
		{ &Z_Construct_UFunction_UTDRL_CharacterMovementComponent_SpawnDashEffects, "SpawnDashEffects" }, // 3401511141
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ImplementedBy", "ATDRL_Character" },
		{ "IncludePath", "Player/TDRL_CharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedA_MetaData[] = {
		{ "Category", "TDRL|Movements|Walk" },
		{ "Comment", "/*Main walking speed in cm/s*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Main walking speed in cm/s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedA = { "SpeedA", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, SpeedA), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedB_MetaData[] = {
		{ "Category", "TDRL|Movements|Walk" },
		{ "Comment", "/*Alternative walking speed in cm/s*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Alternative walking speed in cm/s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedB = { "SpeedB", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, SpeedB), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationA_MetaData[] = {
		{ "Category", "TDRL|Movements|Walk" },
		{ "Comment", "/*Main walking acceleration*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Main walking acceleration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationA = { "AccelerationA", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, AccelerationA), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationB_MetaData[] = {
		{ "Category", "TDRL|Movements|Walk" },
		{ "Comment", "/*Alternative walking acceleration*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Alternative walking acceleration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationB = { "AccelerationB", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, AccelerationB), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_MaxDash_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Max amount of Sprints this character can do before waiting for recharge*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Max amount of Sprints this character can do before waiting for recharge" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_MaxDash = { "MaxDash", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, MaxDash), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_MaxDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_MaxDash_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashGroundTestChannels_ElementProp = { "DashGroundTestChannels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashGroundTestChannels_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Trace channels to test for movement prevision*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Trace channels to test for movement prevision" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashGroundTestChannels = { "DashGroundTestChannels", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashGroundTestChannels), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashGroundTestChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashGroundTestChannels_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashSpeed_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Dash speed in cm/s*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Dash speed in cm/s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashSpeed = { "DashSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashSpeed), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashAcceleration_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Acceleration when dashing*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Acceleration when dashing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashAcceleration = { "DashAcceleration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashAcceleration), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashLength_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Dash length in seconds*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Dash length in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashLength = { "DashLength", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashLength), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCountdown_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Time needed to recharge the dash function*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Time needed to recharge the dash function" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCountdown = { "DashCountdown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashCountdown), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCountdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCountdown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashForce_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Force applied to any physics simulated body in front of the character while dashing*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Force applied to any physics simulated body in front of the character while dashing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashForce = { "DashForce", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashForce), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashForce_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_TraceForActorsPushChannels_ElementProp = { "TraceForActorsPushChannels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_TraceForActorsPushChannels_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Channels to test while tracing for push*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Channels to test while tracing for push" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_TraceForActorsPushChannels = { "TraceForActorsPushChannels", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, TraceForActorsPushChannels), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_TraceForActorsPushChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_TraceForActorsPushChannels_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashEffects_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Dash effects when dashing (VFX and SFX)*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Dash effects when dashing (VFX and SFX)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashEffects = { "DashEffects", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashEffects), Z_Construct_UScriptStruct_FDashEffect, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashEffects_MetaData)) }; // 1179783710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_bShowVisualDebug_MetaData[] = {
		{ "Category", "TDRL|Movements|Dash" },
		{ "Comment", "/*Show debug*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Show debug" },
	};
#endif
	void Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_bShowVisualDebug_SetBit(void* Obj)
	{
		((UTDRL_CharacterMovementComponent*)Obj)->bShowVisualDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_bShowVisualDebug = { "bShowVisualDebug", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_CharacterMovementComponent), &Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_bShowVisualDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_bShowVisualDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_bShowVisualDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashTimerHandle = { "DashTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashRequired_MetaData[] = {
		{ "Comment", "/* Requests */" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Requests" },
	};
#endif
	void Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashRequired_SetBit(void* Obj)
	{
		((UTDRL_CharacterMovementComponent*)Obj)->DashRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashRequired = { "DashRequired", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_CharacterMovementComponent), &Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AlternativeWalkRequired_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AlternativeWalkRequired_SetBit(void* Obj)
	{
		((UTDRL_CharacterMovementComponent*)Obj)->AlternativeWalkRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AlternativeWalkRequired = { "AlternativeWalkRequired", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_CharacterMovementComponent), &Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AlternativeWalkRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AlternativeWalkRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AlternativeWalkRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToAlternativeWalk_MetaData[] = {
		{ "Comment", "/* States */" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "States" },
	};
#endif
	void Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToAlternativeWalk_SetBit(void* Obj)
	{
		((UTDRL_CharacterMovementComponent*)Obj)->WantsToAlternativeWalk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToAlternativeWalk = { "WantsToAlternativeWalk", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_CharacterMovementComponent), &Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToAlternativeWalk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToAlternativeWalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToAlternativeWalk_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToDash_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToDash_SetBit(void* Obj)
	{
		((UTDRL_CharacterMovementComponent*)Obj)->WantsToDash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToDash = { "WantsToDash", "OnRep_WantsToDash", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_CharacterMovementComponent), &Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToDash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashPast_MetaData[] = {
		{ "Comment", "/* Actions data */" },
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
		{ "ToolTip", "Actions data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashPast = { "DashPast", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashPast), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashPast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashPast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashDirection_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashDirection = { "DashDirection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_CharacterMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCount = { "DashCount", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CharacterMovementComponent, DashCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_SpeedB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AccelerationB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_MaxDash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashGroundTestChannels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashGroundTestChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCountdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_TraceForActorsPushChannels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_TraceForActorsPushChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_bShowVisualDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_AlternativeWalkRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToAlternativeWalk,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_WantsToDash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashPast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::NewProp_DashCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_CharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::ClassParams = {
		&UTDRL_CharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_CharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UTDRL_CharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_CharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UTDRL_CharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_CharacterMovementComponent.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_CharacterMovementComponent>()
	{
		return UTDRL_CharacterMovementComponent::StaticClass();
	}

	void UTDRL_CharacterMovementComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WantsToDash(TEXT("WantsToDash"));

		const bool bIsValid = true
			&& Name_WantsToDash == ClassReps[(int32)ENetFields_Private::WantsToDash].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTDRL_CharacterMovementComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_CharacterMovementComponent);
	UTDRL_CharacterMovementComponent::~UTDRL_CharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_Statics::EnumInfo[] = {
		{ ECustomMovementMode_StaticEnum, TEXT("ECustomMovementMode"), &Z_Registration_Info_UEnum_ECustomMovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 132428980U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_CharacterMovementComponent, UTDRL_CharacterMovementComponent::StaticClass, TEXT("UTDRL_CharacterMovementComponent"), &Z_Registration_Info_UClass_UTDRL_CharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_CharacterMovementComponent), 652459886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_188466779(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_CharacterMovementComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
