// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Player/TDRL_PlayerState.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_PlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PlayerState();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PlayerState_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCosmeticParameterList();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_PlayerState::execApplyCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCosmetic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerState::execSetCosmeticList)
	{
		P_GET_STRUCT(FCosmeticParameterList,Z_Param_InCosmeticList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCosmeticList(Z_Param_InCosmeticList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerState::execSetCosmeticList_Implementation)
	{
		P_GET_STRUCT(FCosmeticParameterList,Z_Param_InCosmeticList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCosmeticList_Implementation(Z_Param_InCosmeticList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerState::execSetCosmeticList_Serv)
	{
		P_GET_STRUCT(FCosmeticParameterList,Z_Param_InCosmeticList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCosmeticList_Serv_Implementation(Z_Param_InCosmeticList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerState::execGemerateCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GemerateCosmetic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerState::execOnRep_CosmeticList)
	{
		P_GET_STRUCT(FCosmeticParameterList,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CosmeticList(Z_Param_OldValue);
		P_NATIVE_END;
	}
	struct TDRL_PlayerState_eventSetCosmeticList_Serv_Parms
	{
		FCosmeticParameterList InCosmeticList;
	};
	static FName NAME_ATDRL_PlayerState_SetCosmeticList_Serv = FName(TEXT("SetCosmeticList_Serv"));
	void ATDRL_PlayerState::SetCosmeticList_Serv(FCosmeticParameterList InCosmeticList)
	{
		TDRL_PlayerState_eventSetCosmeticList_Serv_Parms Parms;
		Parms.InCosmeticList=InCosmeticList;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_PlayerState_SetCosmeticList_Serv),&Parms);
	}
	void ATDRL_PlayerState::StaticRegisterNativesATDRL_PlayerState()
	{
		UClass* Class = ATDRL_PlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCosmetic", &ATDRL_PlayerState::execApplyCosmetic },
			{ "GemerateCosmetic", &ATDRL_PlayerState::execGemerateCosmetic },
			{ "OnRep_CosmeticList", &ATDRL_PlayerState::execOnRep_CosmeticList },
			{ "SetCosmeticList", &ATDRL_PlayerState::execSetCosmeticList },
			{ "SetCosmeticList_Implementation", &ATDRL_PlayerState::execSetCosmeticList_Implementation },
			{ "SetCosmeticList_Serv", &ATDRL_PlayerState::execSetCosmeticList_Serv },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_PlayerState_ApplyCosmetic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerState_ApplyCosmetic_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerState|Cosmetic" },
		{ "DisplayName", "ApplyCosmetic" },
		{ "Keywords", "Apply Cosmetic TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerState_ApplyCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerState, nullptr, "ApplyCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerState_ApplyCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_ApplyCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerState_ApplyCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerState_ApplyCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerState_GemerateCosmetic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerState_GemerateCosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerState_GemerateCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerState, nullptr, "GemerateCosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerState_GemerateCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_GemerateCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerState_GemerateCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerState_GemerateCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics
	{
		struct TDRL_PlayerState_eventOnRep_CosmeticList_Parms
		{
			FCosmeticParameterList OldValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerState_eventOnRep_CosmeticList_Parms, OldValue), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::NewProp_OldValue_MetaData)) }; // 3104133227
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerState, nullptr, "OnRep_CosmeticList", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::TDRL_PlayerState_eventOnRep_CosmeticList_Parms), Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics
	{
		struct TDRL_PlayerState_eventSetCosmeticList_Parms
		{
			FCosmeticParameterList InCosmeticList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCosmeticList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::NewProp_InCosmeticList = { "InCosmeticList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerState_eventSetCosmeticList_Parms, InCosmeticList), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(nullptr, 0) }; // 3104133227
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::NewProp_InCosmeticList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerState|Cosmetic" },
		{ "DisplayName", "SetCosmeticList" },
		{ "Keywords", "Set Cosmetic List TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerState, nullptr, "SetCosmeticList", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::TDRL_PlayerState_eventSetCosmeticList_Parms), Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics
	{
		struct TDRL_PlayerState_eventSetCosmeticList_Implementation_Parms
		{
			FCosmeticParameterList InCosmeticList;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCosmeticList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::NewProp_InCosmeticList = { "InCosmeticList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerState_eventSetCosmeticList_Implementation_Parms, InCosmeticList), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(nullptr, 0) }; // 3104133227
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::NewProp_InCosmeticList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerState, nullptr, "SetCosmeticList_Implementation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::TDRL_PlayerState_eventSetCosmeticList_Implementation_Parms), Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCosmeticList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::NewProp_InCosmeticList = { "InCosmeticList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerState_eventSetCosmeticList_Serv_Parms, InCosmeticList), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(nullptr, 0) }; // 3104133227
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::NewProp_InCosmeticList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerState, nullptr, "SetCosmeticList_Serv", nullptr, nullptr, sizeof(TDRL_PlayerState_eventSetCosmeticList_Serv_Parms), Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_PlayerState);
	UClass* Z_Construct_UClass_ATDRL_PlayerState_NoRegister()
	{
		return ATDRL_PlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_PlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CosmeticList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CosmeticList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedCosmetic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedCosmetic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_PlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_PlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_PlayerState_ApplyCosmetic, "ApplyCosmetic" }, // 1929750259
		{ &Z_Construct_UFunction_ATDRL_PlayerState_GemerateCosmetic, "GemerateCosmetic" }, // 3828509065
		{ &Z_Construct_UFunction_ATDRL_PlayerState_OnRep_CosmeticList, "OnRep_CosmeticList" }, // 547251574
		{ &Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList, "SetCosmeticList" }, // 4021772898
		{ &Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Implementation, "SetCosmeticList_Implementation" }, // 4218147404
		{ &Z_Construct_UFunction_ATDRL_PlayerState_SetCosmeticList_Serv, "SetCosmeticList_Serv" }, // 1616777490
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/TDRL_PlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_CosmeticList_MetaData[] = {
		{ "Category", "TDRL|PlayerState|Cosmetic" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_CosmeticList = { "CosmeticList", "OnRep_CosmeticList", (EPropertyFlags)0x0010000100000024, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerState, CosmeticList), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_CosmeticList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_CosmeticList_MetaData)) }; // 3104133227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_GeneratedCosmetic_MetaData[] = {
		{ "Category", "TDRL|PlayerState|Cosmetic" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerState.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_GeneratedCosmetic = { "GeneratedCosmetic", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerState, GeneratedCosmetic), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_GeneratedCosmetic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_GeneratedCosmetic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_PlayerState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_CosmeticList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerState_Statics::NewProp_GeneratedCosmetic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_PlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_PlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_PlayerState_Statics::ClassParams = {
		&ATDRL_PlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_PlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_PlayerState()
	{
		if (!Z_Registration_Info_UClass_ATDRL_PlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_PlayerState.OuterSingleton, Z_Construct_UClass_ATDRL_PlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_PlayerState.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_PlayerState>()
	{
		return ATDRL_PlayerState::StaticClass();
	}

	void ATDRL_PlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CosmeticList(TEXT("CosmeticList"));

		const bool bIsValid = true
			&& Name_CosmeticList == ClassReps[(int32)ENetFields_Private::CosmeticList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDRL_PlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_PlayerState);
	ATDRL_PlayerState::~ATDRL_PlayerState() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_PlayerState, ATDRL_PlayerState::StaticClass, TEXT("ATDRL_PlayerState"), &Z_Registration_Info_UClass_ATDRL_PlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_PlayerState), 3956343890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_7254837(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
