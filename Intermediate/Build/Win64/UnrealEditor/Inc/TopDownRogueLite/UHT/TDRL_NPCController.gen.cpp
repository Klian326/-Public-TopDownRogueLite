// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/TDRL_NPCController.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_NPCController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_NPCController();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_NPCController_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UAIAnimMontageContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_NPCController::execRefreshReduceAlertLevelWithTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RefreshReduceAlertLevelWithTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execEnableReduceAlertLevelWithTimer)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EnableReduceAlertLevelWithTimer(Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execReduceAlertLevelWithTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReduceAlertLevelWithTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execModifyAlertLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DeltaLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAlertStateIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->ModifyAlertLevel(Z_Param_DeltaLevel,Z_Param_MaxAlertStateIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execSetUseRandomAISplineToolPoints)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUseRandomAISplineToolPoints(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execGetUseRandomAISplineToolPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseRandomAISplineToolPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execSetAlertThreat)
	{
		P_GET_OBJECT(AActor,Z_Param_AlertThreat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAlertThreat(Z_Param_AlertThreat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execGetAlertThreat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAlertThreat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execSetPatrolTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToFollow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPatrolTarget(Z_Param_ActorToFollow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execGetPatrolTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetPatrolTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execSetMobilityState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetMobilityState(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execGetMobilityState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetMobilityState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execSetAlertState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAlertState(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execGetAlertState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetAlertState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execGetRandomMontageFromGroup)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GroupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetRandomMontageFromGroup(Z_Param_GroupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCController::execGetPossessedTDRLCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATDRL_Character**)Z_Param__Result=P_THIS->GetPossessedTDRLCharacter();
		P_NATIVE_END;
	}
	void ATDRL_NPCController::StaticRegisterNativesATDRL_NPCController()
	{
		UClass* Class = ATDRL_NPCController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableReduceAlertLevelWithTimer", &ATDRL_NPCController::execEnableReduceAlertLevelWithTimer },
			{ "GetAlertState", &ATDRL_NPCController::execGetAlertState },
			{ "GetAlertThreat", &ATDRL_NPCController::execGetAlertThreat },
			{ "GetMobilityState", &ATDRL_NPCController::execGetMobilityState },
			{ "GetPatrolTarget", &ATDRL_NPCController::execGetPatrolTarget },
			{ "GetPossessedTDRLCharacter", &ATDRL_NPCController::execGetPossessedTDRLCharacter },
			{ "GetRandomMontageFromGroup", &ATDRL_NPCController::execGetRandomMontageFromGroup },
			{ "GetUseRandomAISplineToolPoints", &ATDRL_NPCController::execGetUseRandomAISplineToolPoints },
			{ "ModifyAlertLevel", &ATDRL_NPCController::execModifyAlertLevel },
			{ "ReduceAlertLevelWithTimer", &ATDRL_NPCController::execReduceAlertLevelWithTimer },
			{ "RefreshReduceAlertLevelWithTimer", &ATDRL_NPCController::execRefreshReduceAlertLevelWithTimer },
			{ "SetAlertState", &ATDRL_NPCController::execSetAlertState },
			{ "SetAlertThreat", &ATDRL_NPCController::execSetAlertThreat },
			{ "SetMobilityState", &ATDRL_NPCController::execSetMobilityState },
			{ "SetPatrolTarget", &ATDRL_NPCController::execSetPatrolTarget },
			{ "SetUseRandomAISplineToolPoints", &ATDRL_NPCController::execSetUseRandomAISplineToolPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics
	{
		struct TDRL_NPCController_eventEnableReduceAlertLevelWithTimer_Parms
		{
			bool Enabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventEnableReduceAlertLevelWithTimer_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventEnableReduceAlertLevelWithTimer_Parms), &Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_Enabled_MetaData)) };
	void Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventEnableReduceAlertLevelWithTimer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventEnableReduceAlertLevelWithTimer_Parms), &Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_Enabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIBehavior" },
		{ "Comment", "/*Will enable the timer for Alert Level reduction. This timer will consider \"DefaultTimeForEachAlarmLevel\" and \"TimeForEachAlarmLevel\".*/" },
		{ "DisplayName", "ReduceAlertLevelWithTimer" },
		{ "Keywords", "Reduce Alert Level Timer AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Will enable the timer for Alert Level reduction. This timer will consider \"DefaultTimeForEachAlarmLevel\" and \"TimeForEachAlarmLevel\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "EnableReduceAlertLevelWithTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::TDRL_NPCController_eventEnableReduceAlertLevelWithTimer_Parms), Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics
	{
		struct TDRL_NPCController_eventGetAlertState_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventGetAlertState_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Return current AlertState as byte*/" },
		{ "DisplayName", "GetAlertState" },
		{ "Keywords", "Get Alert State AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Return current AlertState as byte" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "GetAlertState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::TDRL_NPCController_eventGetAlertState_Parms), Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_GetAlertState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_GetAlertState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics
	{
		struct TDRL_NPCController_eventGetAlertThreat_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventGetAlertThreat_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Return current Alert Threat.*/" },
		{ "DisplayName", "GetAlertThreat" },
		{ "Keywords", "Get Alert Threat AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Return current Alert Threat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "GetAlertThreat", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::TDRL_NPCController_eventGetAlertThreat_Parms), Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics
	{
		struct TDRL_NPCController_eventGetMobilityState_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventGetMobilityState_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Return current MobilityState as byte*/" },
		{ "DisplayName", "GetMobilityState" },
		{ "Keywords", "Get Mobility State AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Return current MobilityState as byte" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "GetMobilityState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::TDRL_NPCController_eventGetMobilityState_Parms), Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics
	{
		struct TDRL_NPCController_eventGetPatrolTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventGetPatrolTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Return current Patrol Target*/" },
		{ "DisplayName", "GetPatrolTarget" },
		{ "Keywords", "Get Patrol Target AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Return current Patrol Target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "GetPatrolTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::TDRL_NPCController_eventGetPatrolTarget_Parms), Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics
	{
		struct TDRL_NPCController_eventGetPossessedTDRLCharacter_Parms
		{
			ATDRL_Character* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventGetPossessedTDRLCharacter_Parms, ReturnValue), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Character" },
		{ "Comment", "/*Return the current possessed TDRL_Character*/" },
		{ "DisplayName", "GetPossessedCharacter(TDRL)" },
		{ "Keywords", "Possess Possessed Character TDRL Top Down" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Return the current possessed TDRL_Character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "GetPossessedTDRLCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::TDRL_NPCController_eventGetPossessedTDRLCharacter_Parms), Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics
	{
		struct TDRL_NPCController_eventGetRandomMontageFromGroup_Parms
		{
			FName GroupName;
			UAnimMontage* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventGetRandomMontageFromGroup_Parms, GroupName), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventGetRandomMontageFromGroup_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Will use GroupName to select a random AnimMontage from a specific group of \"RandomMontages\"*/" },
		{ "DisplayName", "GetRandomMontageFromGroup" },
		{ "Keywords", "Random Montage Group AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Will use GroupName to select a random AnimMontage from a specific group of \"RandomMontages\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "GetRandomMontageFromGroup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::TDRL_NPCController_eventGetRandomMontageFromGroup_Parms), Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics
	{
		struct TDRL_NPCController_eventGetUseRandomAISplineToolPoints_Parms
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
	void Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventGetUseRandomAISplineToolPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventGetUseRandomAISplineToolPoints_Parms), &Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Return current Alert Threat.*/" },
		{ "DisplayName", "GetUseRandomAISplineToolPoints" },
		{ "Keywords", "Get Use Random AI Spline Tool Points AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Return current Alert Threat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "GetUseRandomAISplineToolPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::TDRL_NPCController_eventGetUseRandomAISplineToolPoints_Parms), Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics
	{
		struct TDRL_NPCController_eventModifyAlertLevel_Parms
		{
			int32 DeltaLevel;
			int32 MaxAlertStateIndex;
			uint8 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DeltaLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAlertStateIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAlertStateIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_DeltaLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_DeltaLevel = { "DeltaLevel", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventModifyAlertLevel_Parms, DeltaLevel), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_DeltaLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_DeltaLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_MaxAlertStateIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_MaxAlertStateIndex = { "MaxAlertStateIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventModifyAlertLevel_Parms, MaxAlertStateIndex), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_MaxAlertStateIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_MaxAlertStateIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventModifyAlertLevel_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_DeltaLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_MaxAlertStateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIBehavior" },
		{ "Comment", "/*Modify the current Alert Level to a specific new level.*/" },
		{ "CPP_Default_MaxAlertStateIndex", "2" },
		{ "DisplayName", "ModifyAlertLevel" },
		{ "Keywords", "Alert Level Modify AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Modify the current Alert Level to a specific new level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "ModifyAlertLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::TDRL_NPCController_eventModifyAlertLevel_Parms), Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_ReduceAlertLevelWithTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_ReduceAlertLevelWithTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_ReduceAlertLevelWithTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "ReduceAlertLevelWithTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_ReduceAlertLevelWithTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_ReduceAlertLevelWithTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_ReduceAlertLevelWithTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_ReduceAlertLevelWithTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics
	{
		struct TDRL_NPCController_eventRefreshReduceAlertLevelWithTimer_Parms
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
	void Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventRefreshReduceAlertLevelWithTimer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventRefreshReduceAlertLevelWithTimer_Parms), &Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIBehavior" },
		{ "Comment", "/*Will refresh the current Alert Level reduction timer. Used to prevent level reduction while the enemy can be seen, the system will keep refreshing the timer until the AI enemy is no longer in its sight.*/" },
		{ "DisplayName", "RefreshAlertLevelTimer" },
		{ "Keywords", "Refresh Alert Level Timer AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Will refresh the current Alert Level reduction timer. Used to prevent level reduction while the enemy can be seen, the system will keep refreshing the timer until the AI enemy is no longer in its sight." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "RefreshReduceAlertLevelWithTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::TDRL_NPCController_eventRefreshReduceAlertLevelWithTimer_Parms), Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics
	{
		struct TDRL_NPCController_eventSetAlertState_Parms
		{
			uint8 NewState;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventSetAlertState_Parms, NewState), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventSetAlertState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventSetAlertState_Parms), &Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Set current AlertState as byte*/" },
		{ "DisplayName", "SetAlertState" },
		{ "Keywords", "Set Alert State AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Set current AlertState as byte" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "SetAlertState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::TDRL_NPCController_eventSetAlertState_Parms), Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_SetAlertState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_SetAlertState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics
	{
		struct TDRL_NPCController_eventSetAlertThreat_Parms
		{
			AActor* AlertThreat;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AlertThreat;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::NewProp_AlertThreat = { "AlertThreat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventSetAlertThreat_Parms, AlertThreat), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventSetAlertThreat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventSetAlertThreat_Parms), &Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::NewProp_AlertThreat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Set current Alert Threat.*/" },
		{ "DisplayName", "SetAlertThreat" },
		{ "Keywords", "Set Alert Threat AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Set current Alert Threat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "SetAlertThreat", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::TDRL_NPCController_eventSetAlertThreat_Parms), Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics
	{
		struct TDRL_NPCController_eventSetMobilityState_Parms
		{
			uint8 NewState;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventSetMobilityState_Parms, NewState), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventSetMobilityState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventSetMobilityState_Parms), &Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::NewProp_NewState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Set current MobilityState as byte*/" },
		{ "DisplayName", "SetMobilityState" },
		{ "Keywords", "Set Mobility State AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Set current MobilityState as byte" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "SetMobilityState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::TDRL_NPCController_eventSetMobilityState_Parms), Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics
	{
		struct TDRL_NPCController_eventSetPatrolTarget_Parms
		{
			AActor* ActorToFollow;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToFollow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::NewProp_ActorToFollow = { "ActorToFollow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCController_eventSetPatrolTarget_Parms, ActorToFollow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventSetPatrolTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventSetPatrolTarget_Parms), &Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::NewProp_ActorToFollow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Set current Patrol Target*/" },
		{ "DisplayName", "SetPatrolTarget" },
		{ "Keywords", "Set Patrol Target AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Set current Patrol Target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "SetPatrolTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::TDRL_NPCController_eventSetPatrolTarget_Parms), Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics
	{
		struct TDRL_NPCController_eventSetUseRandomAISplineToolPoints_Parms
		{
			bool NewValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventSetUseRandomAISplineToolPoints_Parms*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventSetUseRandomAISplineToolPoints_Parms), &Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_NewValue_MetaData)) };
	void Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_NPCController_eventSetUseRandomAISplineToolPoints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_NPCController_eventSetUseRandomAISplineToolPoints_Parms), &Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_NewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AIController" },
		{ "Comment", "/*Set current Alert Threat.*/" },
		{ "DisplayName", "SetUseRandomAISplineToolPoints" },
		{ "Keywords", "Set Use Random AI Spline Tool Points AI Behavior" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Set current Alert Threat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCController, nullptr, "SetUseRandomAISplineToolPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::TDRL_NPCController_eventSetUseRandomAISplineToolPoints_Parms), Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_NPCController);
	UClass* Z_Construct_UClass_ATDRL_NPCController_NoRegister()
	{
		return ATDRL_NPCController::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_NPCController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBName_AlertState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BBName_AlertState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBName_MobilityState_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BBName_MobilityState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBName_PatrolTarget_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BBName_PatrolTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBName_AISplineToolRandomPoints_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BBName_AISplineToolRandomPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBName_AlertThreat_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BBName_AlertThreat;
		static const UECodeGen_Private::FClassPropertyParams NewProp_RandomMontages_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RandomMontages_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomMontages_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RandomMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTimeForEachAlarmLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTimeForEachAlarmLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeForEachAlarmLevel_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeForEachAlarmLevel_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeForEachAlarmLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlertReductionTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlertReductionTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Perception_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Perception;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PossessedTDRLCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PossessedTDRLCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_NPCController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_NPCController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_NPCController_EnableReduceAlertLevelWithTimer, "EnableReduceAlertLevelWithTimer" }, // 3337701552
		{ &Z_Construct_UFunction_ATDRL_NPCController_GetAlertState, "GetAlertState" }, // 2951550625
		{ &Z_Construct_UFunction_ATDRL_NPCController_GetAlertThreat, "GetAlertThreat" }, // 3144348550
		{ &Z_Construct_UFunction_ATDRL_NPCController_GetMobilityState, "GetMobilityState" }, // 107474049
		{ &Z_Construct_UFunction_ATDRL_NPCController_GetPatrolTarget, "GetPatrolTarget" }, // 2471666017
		{ &Z_Construct_UFunction_ATDRL_NPCController_GetPossessedTDRLCharacter, "GetPossessedTDRLCharacter" }, // 2504043861
		{ &Z_Construct_UFunction_ATDRL_NPCController_GetRandomMontageFromGroup, "GetRandomMontageFromGroup" }, // 1530516148
		{ &Z_Construct_UFunction_ATDRL_NPCController_GetUseRandomAISplineToolPoints, "GetUseRandomAISplineToolPoints" }, // 2403377334
		{ &Z_Construct_UFunction_ATDRL_NPCController_ModifyAlertLevel, "ModifyAlertLevel" }, // 414523521
		{ &Z_Construct_UFunction_ATDRL_NPCController_ReduceAlertLevelWithTimer, "ReduceAlertLevelWithTimer" }, // 1524821490
		{ &Z_Construct_UFunction_ATDRL_NPCController_RefreshReduceAlertLevelWithTimer, "RefreshReduceAlertLevelWithTimer" }, // 3430621341
		{ &Z_Construct_UFunction_ATDRL_NPCController_SetAlertState, "SetAlertState" }, // 1634264040
		{ &Z_Construct_UFunction_ATDRL_NPCController_SetAlertThreat, "SetAlertThreat" }, // 3089717844
		{ &Z_Construct_UFunction_ATDRL_NPCController_SetMobilityState, "SetMobilityState" }, // 1341895245
		{ &Z_Construct_UFunction_ATDRL_NPCController_SetPatrolTarget, "SetPatrolTarget" }, // 5055772
		{ &Z_Construct_UFunction_ATDRL_NPCController_SetUseRandomAISplineToolPoints, "SetUseRandomAISplineToolPoints" }, // 1284534022
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/TDRL_NPCController.h" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertState_MetaData[] = {
		{ "Category", "TDRL|AIController|VariablesName" },
		{ "Comment", "/*(Enum) The blackboard's key name for the alert state status (ie. normal, suspicius, alerted...).*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "(Enum) The blackboard's key name for the alert state status (ie. normal, suspicius, alerted...)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertState = { "BBName_AlertState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, BBName_AlertState), METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_MobilityState_MetaData[] = {
		{ "Category", "TDRL|AIController|VariablesName" },
		{ "Comment", "/*(Enum) The blackboard's key name for the mobility status*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "(Enum) The blackboard's key name for the mobility status" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_MobilityState = { "BBName_MobilityState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, BBName_MobilityState), METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_MobilityState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_MobilityState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_PatrolTarget_MetaData[] = {
		{ "Category", "TDRL|AIController|VariablesName" },
		{ "Comment", "/*(Object) The blackboard's key name for the current main Patrol target actor*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "(Object) The blackboard's key name for the current main Patrol target actor" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_PatrolTarget = { "BBName_PatrolTarget", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, BBName_PatrolTarget), METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_PatrolTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_PatrolTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AISplineToolRandomPoints_MetaData[] = {
		{ "Category", "TDRL|AIController|VariablesName" },
		{ "Comment", "/*(Bool) The blackboard's key name for using random points when \"PatrolTarget\" is \"AISplineTool\"*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "(Bool) The blackboard's key name for using random points when \"PatrolTarget\" is \"AISplineTool\"" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AISplineToolRandomPoints = { "BBName_AISplineToolRandomPoints", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, BBName_AISplineToolRandomPoints), METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AISplineToolRandomPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AISplineToolRandomPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertThreat_MetaData[] = {
		{ "Category", "TDRL|AIController|VariablesName" },
		{ "Comment", "/*(Object) The blackboard's key name for the current main AlertThreat target actor (should be the main enemy target to attack)*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "(Object) The blackboard's key name for the current main AlertThreat target actor (should be the main enemy target to attack)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertThreat = { "BBName_AlertThreat", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, BBName_AlertThreat), METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertThreat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertThreat_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages_ValueProp = { "RandomMontages", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UAIAnimMontageContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages_Key_KeyProp = { "RandomMontages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages_MetaData[] = {
		{ "Category", "TDRL|AIController|Animations" },
		{ "Comment", "/*Random AnimMontage containers, used by nodes like \"QueueRandomAnimMontagetoBB\" in the Behavior Tree*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Random AnimMontage containers, used by nodes like \"QueueRandomAnimMontagetoBB\" in the Behavior Tree" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages = { "RandomMontages", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, RandomMontages), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_DefaultTimeForEachAlarmLevel_MetaData[] = {
		{ "Category", "TDRL|AIBehavior" },
		{ "Comment", "/*Time used for any Alert Level reduction, you can override it using \"TimeForEachAlarmLevel\" and following the Alert (Enum) order.*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Time used for any Alert Level reduction, you can override it using \"TimeForEachAlarmLevel\" and following the Alert (Enum) order." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_DefaultTimeForEachAlarmLevel = { "DefaultTimeForEachAlarmLevel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, DefaultTimeForEachAlarmLevel), METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_DefaultTimeForEachAlarmLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_DefaultTimeForEachAlarmLevel_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_TimeForEachAlarmLevel_Inner = { "TimeForEachAlarmLevel", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_TimeForEachAlarmLevel_MetaData[] = {
		{ "Category", "TDRL|AIBehavior" },
		{ "Comment", "/*Time used for each specific Alert Level reduction, follows the Alert (Enum) order.*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Time used for each specific Alert Level reduction, follows the Alert (Enum) order." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_TimeForEachAlarmLevel = { "TimeForEachAlarmLevel", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, TimeForEachAlarmLevel), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_TimeForEachAlarmLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_TimeForEachAlarmLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_AlertReductionTimerHandle_MetaData[] = {
		{ "Category", "TDRL|AIBehavior|Runtime" },
		{ "Comment", "/*Alert Reduction TimerHandle.*/" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
		{ "ToolTip", "Alert Reduction TimerHandle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_AlertReductionTimerHandle = { "AlertReductionTimerHandle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, AlertReductionTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_AlertReductionTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_AlertReductionTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_Perception_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_Perception = { "Perception", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, Perception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_Perception_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_Perception_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_PossessedTDRLCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/TDRL_NPCController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_PossessedTDRLCharacter = { "PossessedTDRLCharacter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCController, PossessedTDRLCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_PossessedTDRLCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_PossessedTDRLCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_NPCController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_MobilityState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_PatrolTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AISplineToolRandomPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_BBName_AlertThreat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_RandomMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_DefaultTimeForEachAlarmLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_TimeForEachAlarmLevel_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_TimeForEachAlarmLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_AlertReductionTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_Perception,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCController_Statics::NewProp_PossessedTDRLCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_NPCController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_NPCController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_NPCController_Statics::ClassParams = {
		&ATDRL_NPCController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_NPCController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_NPCController()
	{
		if (!Z_Registration_Info_UClass_ATDRL_NPCController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_NPCController.OuterSingleton, Z_Construct_UClass_ATDRL_NPCController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_NPCController.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_NPCController>()
	{
		return ATDRL_NPCController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_NPCController);
	ATDRL_NPCController::~ATDRL_NPCController() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_NPCController, ATDRL_NPCController::StaticClass, TEXT("ATDRL_NPCController"), &Z_Registration_Info_UClass_ATDRL_NPCController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_NPCController), 2485924008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_2043526907(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_NPCController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
