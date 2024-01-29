// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/TDRL_BFL_AI.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BFL_AI() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_NPCController_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BFL_AI();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BFL_AI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(UTDRL_BFL_AI::execGetLocationFromActorOrVectorFromBB)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UBlackboardComponent,Z_Param_BBComp);
		P_GET_STRUCT(FBlackboardKeySelector,Z_Param_KeySelector);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTDRL_BFL_AI::GetLocationFromActorOrVectorFromBB(Z_Param_WorldContextObject,Z_Param_BBComp,Z_Param_KeySelector,Z_Param_Out_OutLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_AI::execExecuteAIToTDRLExecuteAI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AAIController,Z_Param_ControllerIn);
		P_GET_OBJECT(APawn,Z_Param_PawnIn);
		P_GET_OBJECT_REF(ATDRL_NPCController,Z_Param_Out_ControllerOut);
		P_GET_OBJECT_REF(ATDRL_Character,Z_Param_Out_CharacterOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTDRL_BFL_AI::ExecuteAIToTDRLExecuteAI(Z_Param_WorldContextObject,Z_Param_ControllerIn,Z_Param_PawnIn,Z_Param_Out_ControllerOut,Z_Param_Out_CharacterOut);
		P_NATIVE_END;
	}
	void UTDRL_BFL_AI::StaticRegisterNativesUTDRL_BFL_AI()
	{
		UClass* Class = UTDRL_BFL_AI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteAIToTDRLExecuteAI", &UTDRL_BFL_AI::execExecuteAIToTDRLExecuteAI },
			{ "GetLocationFromActorOrVectorFromBB", &UTDRL_BFL_AI::execGetLocationFromActorOrVectorFromBB },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics
	{
		struct TDRL_BFL_AI_eventExecuteAIToTDRLExecuteAI_Parms
		{
			UObject* WorldContextObject;
			AAIController* ControllerIn;
			APawn* PawnIn;
			ATDRL_NPCController* ControllerOut;
			ATDRL_Character* CharacterOut;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnIn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControllerOut;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventExecuteAIToTDRLExecuteAI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_ControllerIn = { "ControllerIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventExecuteAIToTDRLExecuteAI_Parms, ControllerIn), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_PawnIn = { "PawnIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventExecuteAIToTDRLExecuteAI_Parms, PawnIn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_ControllerOut = { "ControllerOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventExecuteAIToTDRLExecuteAI_Parms, ControllerOut), Z_Construct_UClass_ATDRL_NPCController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_CharacterOut = { "CharacterOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventExecuteAIToTDRLExecuteAI_Parms, CharacterOut), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_ControllerIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_PawnIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_ControllerOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::NewProp_CharacterOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AILibrary" },
		{ "Comment", "/*Useful conversion for BTTasks etc...*/" },
		{ "DisplayName", "ExecuteAI Conversion" },
		{ "Keywords", "AI Execute Conversion Task Decorator Service" },
		{ "ModuleRelativePath", "Public/AI/TDRL_BFL_AI.h" },
		{ "ToolTip", "Useful conversion for BTTasks etc..." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_AI, nullptr, "ExecuteAIToTDRLExecuteAI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::TDRL_BFL_AI_eventExecuteAIToTDRLExecuteAI_Parms), Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics
	{
		struct TDRL_BFL_AI_eventGetLocationFromActorOrVectorFromBB_Parms
		{
			UObject* WorldContextObject;
			const UBlackboardComponent* BBComp;
			FBlackboardKeySelector KeySelector;
			FVector OutLocation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BBComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeySelector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeySelector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventGetLocationFromActorOrVectorFromBB_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_BBComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_BBComp = { "BBComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventGetLocationFromActorOrVectorFromBB_Parms, BBComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_BBComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_BBComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_KeySelector_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_KeySelector = { "KeySelector", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventGetLocationFromActorOrVectorFromBB_Parms, KeySelector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_KeySelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_KeySelector_MetaData)) }; // 3025891527
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_AI_eventGetLocationFromActorOrVectorFromBB_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_BFL_AI_eventGetLocationFromActorOrVectorFromBB_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_BFL_AI_eventGetLocationFromActorOrVectorFromBB_Parms), &Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_BBComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_KeySelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_OutLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|AILibrary" },
		{ "Comment", "/*Will return the same value if the selector is Vector type. Otherwise this function will find the location of the Object store in this blackboard selector and will return it.*/" },
		{ "DisplayName", "GetLocationFromBlackboardVectorOrActor" },
		{ "Keywords", "AI Blackboard Vector Actor Location" },
		{ "ModuleRelativePath", "Public/AI/TDRL_BFL_AI.h" },
		{ "ToolTip", "Will return the same value if the selector is Vector type. Otherwise this function will find the location of the Object store in this blackboard selector and will return it." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_AI, nullptr, "GetLocationFromActorOrVectorFromBB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::TDRL_BFL_AI_eventGetLocationFromActorOrVectorFromBB_Parms), Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BFL_AI);
	UClass* Z_Construct_UClass_UTDRL_BFL_AI_NoRegister()
	{
		return UTDRL_BFL_AI::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BFL_AI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BFL_AI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_BFL_AI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_BFL_AI_ExecuteAIToTDRLExecuteAI, "ExecuteAIToTDRLExecuteAI" }, // 247362189
		{ &Z_Construct_UFunction_UTDRL_BFL_AI_GetLocationFromActorOrVectorFromBB, "GetLocationFromActorOrVectorFromBB" }, // 32210124
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BFL_AI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/TDRL_BFL_AI.h" },
		{ "ModuleRelativePath", "Public/AI/TDRL_BFL_AI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BFL_AI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BFL_AI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BFL_AI_Statics::ClassParams = {
		&UTDRL_BFL_AI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BFL_AI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BFL_AI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BFL_AI()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BFL_AI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BFL_AI.OuterSingleton, Z_Construct_UClass_UTDRL_BFL_AI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BFL_AI.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BFL_AI>()
	{
		return UTDRL_BFL_AI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BFL_AI);
	UTDRL_BFL_AI::~UTDRL_BFL_AI() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BFL_AI, UTDRL_BFL_AI::StaticClass, TEXT("UTDRL_BFL_AI"), &Z_Registration_Info_UClass_UTDRL_BFL_AI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BFL_AI), 1378726102U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_966427444(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_BFL_AI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
