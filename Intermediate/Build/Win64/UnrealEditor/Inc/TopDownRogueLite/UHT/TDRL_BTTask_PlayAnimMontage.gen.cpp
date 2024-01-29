// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_PlayAnimMontage() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(UTDRL_BTTask_PlayAnimMontage::execAnimIsOver)
	{
		P_GET_OBJECT(UBehaviorTreeComponent,Z_Param_OwnerComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimIsOver(Z_Param_OwnerComp);
		P_NATIVE_END;
	}
	void UTDRL_BTTask_PlayAnimMontage::StaticRegisterNativesUTDRL_BTTask_PlayAnimMontage()
	{
		UClass* Class = UTDRL_BTTask_PlayAnimMontage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimIsOver", &UTDRL_BTTask_PlayAnimMontage::execAnimIsOver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics
	{
		struct TDRL_BTTask_PlayAnimMontage_eventAnimIsOver_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::NewProp_OwnerComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::NewProp_OwnerComp = { "OwnerComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BTTask_PlayAnimMontage_eventAnimIsOver_Parms, OwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::NewProp_OwnerComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::NewProp_OwnerComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::NewProp_OwnerComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage, nullptr, "AnimIsOver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::TDRL_BTTask_PlayAnimMontage_eventAnimIsOver_Parms), Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_PlayAnimMontage);
	UClass* Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_NoRegister()
	{
		return UTDRL_BTTask_PlayAnimMontage::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimPlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimPlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAnimMontageAsset_MetaData[];
#endif
		static void NewProp_bUseAnimMontageAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAnimMontageAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontageAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontageAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopMontageOnAbort_MetaData[];
#endif
		static void NewProp_bStopMontageOnAbort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopMontageOnAbort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearBBValue_MetaData[];
#endif
		static void NewProp_bClearBBValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBBValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimEndHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimEndHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_BTTask_PlayAnimMontage_AnimIsOver, "AnimIsOver" }, // 2590876578
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Play AnimMontage" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Selector Animation Montage to play*/" },
		{ "EditCondition", "!bUseAnimMontageAsset" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
		{ "ToolTip", "Selector Animation Montage to play" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_PlayAnimMontage, AnimMontage), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontage_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimPlayRate_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Playrate to apply to this animation*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
		{ "ToolTip", "Playrate to apply to this animation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimPlayRate = { "AnimPlayRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_PlayAnimMontage, AnimPlayRate), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimPlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimPlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bUseAnimMontageAsset_MetaData[] = {
		{ "Category", "Task|Asset" },
		{ "Comment", "/*Use specific AnimMontage asset*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
		{ "ToolTip", "Use specific AnimMontage asset" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bUseAnimMontageAsset_SetBit(void* Obj)
	{
		((UTDRL_BTTask_PlayAnimMontage*)Obj)->bUseAnimMontageAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bUseAnimMontageAsset = { "bUseAnimMontageAsset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_PlayAnimMontage), &Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bUseAnimMontageAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bUseAnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bUseAnimMontageAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontageAsset_MetaData[] = {
		{ "Category", "Task|Asset" },
		{ "Comment", "/*AnimMontage Asset to use*/" },
		{ "EditCondition", "bUseAnimMontageAsset" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
		{ "ToolTip", "AnimMontage Asset to use" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontageAsset = { "AnimMontageAsset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_PlayAnimMontage, AnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontageAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bStopMontageOnAbort_MetaData[] = {
		{ "Category", "Task|Ending" },
		{ "Comment", "/*Should stop montage on abort or keep playing?*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
		{ "ToolTip", "Should stop montage on abort or keep playing?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bStopMontageOnAbort_SetBit(void* Obj)
	{
		((UTDRL_BTTask_PlayAnimMontage*)Obj)->bStopMontageOnAbort = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bStopMontageOnAbort = { "bStopMontageOnAbort", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_PlayAnimMontage), &Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bStopMontageOnAbort_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bStopMontageOnAbort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bStopMontageOnAbort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bClearBBValue_MetaData[] = {
		{ "Category", "Task|Ending" },
		{ "Comment", "/*Should clear \"AnimMontage\" selector after stop playing?*/" },
		{ "EditCondition", "!bUseAnimMontageAsset" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
		{ "ToolTip", "Should clear \"AnimMontage\" selector after stop playing?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bClearBBValue_SetBit(void* Obj)
	{
		((UTDRL_BTTask_PlayAnimMontage*)Obj)->bClearBBValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bClearBBValue = { "bClearBBValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_PlayAnimMontage), &Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bClearBBValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bClearBBValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bClearBBValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimEndHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_PlayAnimMontage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimEndHandle = { "AnimEndHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_PlayAnimMontage, AnimEndHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimEndHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimEndHandle_MetaData)) }; // 4017759265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimPlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bUseAnimMontageAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimMontageAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bStopMontageOnAbort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_bClearBBValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::NewProp_AnimEndHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_PlayAnimMontage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::ClassParams = {
		&UTDRL_BTTask_PlayAnimMontage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_PlayAnimMontage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_PlayAnimMontage.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_PlayAnimMontage.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_PlayAnimMontage>()
	{
		return UTDRL_BTTask_PlayAnimMontage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_PlayAnimMontage);
	UTDRL_BTTask_PlayAnimMontage::~UTDRL_BTTask_PlayAnimMontage() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PlayAnimMontage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PlayAnimMontage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_PlayAnimMontage, UTDRL_BTTask_PlayAnimMontage::StaticClass, TEXT("UTDRL_BTTask_PlayAnimMontage"), &Z_Registration_Info_UClass_UTDRL_BTTask_PlayAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_PlayAnimMontage), 562226184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PlayAnimMontage_h_3926055368(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PlayAnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_PlayAnimMontage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
