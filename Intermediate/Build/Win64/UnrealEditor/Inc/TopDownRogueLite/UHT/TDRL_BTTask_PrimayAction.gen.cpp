// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_PrimayAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_PrimayAction() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_PrimayAction();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_PrimayAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(UTDRL_BTTask_PrimayAction::execEndAttackTimer)
	{
		P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_OwnerComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAttackTimer(Z_Param_OwnerComp);
		P_NATIVE_END;
	}
	void UTDRL_BTTask_PrimayAction::StaticRegisterNativesUTDRL_BTTask_PrimayAction()
	{
		UClass* Class = UTDRL_BTTask_PrimayAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndAttackTimer", &UTDRL_BTTask_PrimayAction::execEndAttackTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics
	{
		struct TDRL_BTTask_PrimayAction_eventEndAttackTimer_Parms
		{
			UBehaviorTreeComponent* OwnerComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::NewProp_OwnerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::NewProp_OwnerComp = { "OwnerComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BTTask_PrimayAction_eventEndAttackTimer_Parms, OwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::NewProp_OwnerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::NewProp_OwnerComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::NewProp_OwnerComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PrimayAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BTTask_PrimayAction, nullptr, "EndAttackTimer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::TDRL_BTTask_PrimayAction_eventEndAttackTimer_Parms), Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_PrimayAction);
	UClass* Z_Construct_UClass_UTDRL_BTTask_PrimayAction_NoRegister()
	{
		return UTDRL_BTTask_PrimayAction::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopAfter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopAfter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_BTTask_PrimayAction_EndAttackTimer, "EndAttackTimer" }, // 2825142447
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Enable Primary Action" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_PrimayAction.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PrimayAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_Enable_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Should enable Primary Action (will keep going untill it's disabled)*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PrimayAction.h" },
		{ "ToolTip", "Should enable Primary Action (will keep going untill it's disabled)" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((UTDRL_BTTask_PrimayAction*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_PrimayAction), &Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_Enable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_StopAfter_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Should stop after the first Primary Action is performed? (DoOnce)*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PrimayAction.h" },
		{ "ToolTip", "Should stop after the first Primary Action is performed? (DoOnce)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_StopAfter = { "StopAfter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_PrimayAction, StopAfter), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_StopAfter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_StopAfter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_Enable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::NewProp_StopAfter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_PrimayAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::ClassParams = {
		&UTDRL_BTTask_PrimayAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_PrimayAction()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_PrimayAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_PrimayAction.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_PrimayAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_PrimayAction.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_PrimayAction>()
	{
		return UTDRL_BTTask_PrimayAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_PrimayAction);
	UTDRL_BTTask_PrimayAction::~UTDRL_BTTask_PrimayAction() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PrimayAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PrimayAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_PrimayAction, UTDRL_BTTask_PrimayAction::StaticClass, TEXT("UTDRL_BTTask_PrimayAction"), &Z_Registration_Info_UClass_UTDRL_BTTask_PrimayAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_PrimayAction), 3517037812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PrimayAction_h_3439153505(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PrimayAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PrimayAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
