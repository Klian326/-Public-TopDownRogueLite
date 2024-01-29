// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_StopAnimMontage.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_StopAnimMontage() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_StopAnimMontage::StaticRegisterNativesUTDRL_BTTask_StopAnimMontage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_StopAnimMontage);
	UClass* Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_NoRegister()
	{
		return UTDRL_BTTask_StopAnimMontage::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseBlackboardKey_MetaData[];
#endif
		static void NewProp_bUseBlackboardKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseBlackboardKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearBBValue_MetaData[];
#endif
		static void NewProp_bClearBBValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBBValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopSpecificAnimMontage_MetaData[];
#endif
		static void NewProp_bStopSpecificAnimMontage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopSpecificAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontageAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimMontageAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Stop AnimMontage" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_StopAnimMontage.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_StopAnimMontage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bUseBlackboardKey_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Should use a selector to identify which AnimMontage to stop?*/" },
		{ "EditCondition", "!bStopSpecificAnimMontage" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_StopAnimMontage.h" },
		{ "ToolTip", "Should use a selector to identify which AnimMontage to stop?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bUseBlackboardKey_SetBit(void* Obj)
	{
		((UTDRL_BTTask_StopAnimMontage*)Obj)->bUseBlackboardKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bUseBlackboardKey = { "bUseBlackboardKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_StopAnimMontage), &Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bUseBlackboardKey_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bUseBlackboardKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bUseBlackboardKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimKey_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Specific target AnimMontage Selector*/" },
		{ "EditCondition", "bUseBlackboardKey" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_StopAnimMontage.h" },
		{ "ToolTip", "Specific target AnimMontage Selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimKey = { "AnimKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_StopAnimMontage, AnimKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimKey_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bClearBBValue_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Should clear the selector used for this animation once it's over?*/" },
		{ "EditCondition", "bUseBlackboardKey" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_StopAnimMontage.h" },
		{ "ToolTip", "Should clear the selector used for this animation once it's over?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bClearBBValue_SetBit(void* Obj)
	{
		((UTDRL_BTTask_StopAnimMontage*)Obj)->bClearBBValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bClearBBValue = { "bClearBBValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_StopAnimMontage), &Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bClearBBValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bClearBBValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bClearBBValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bStopSpecificAnimMontage_MetaData[] = {
		{ "Category", "Task|Asset" },
		{ "Comment", "/*Should stop a specific AnimMontage asset?*/" },
		{ "EditCondition", "!bUseBlackboardKey" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_StopAnimMontage.h" },
		{ "ToolTip", "Should stop a specific AnimMontage asset?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bStopSpecificAnimMontage_SetBit(void* Obj)
	{
		((UTDRL_BTTask_StopAnimMontage*)Obj)->bStopSpecificAnimMontage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bStopSpecificAnimMontage = { "bStopSpecificAnimMontage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_StopAnimMontage), &Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bStopSpecificAnimMontage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bStopSpecificAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bStopSpecificAnimMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimMontageAsset_MetaData[] = {
		{ "Category", "Task|Asset" },
		{ "Comment", "/*Specific AnimMontage to stop.*/" },
		{ "EditCondition", "bStopSpecificAnimMontage" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_StopAnimMontage.h" },
		{ "ToolTip", "Specific AnimMontage to stop." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimMontageAsset = { "AnimMontageAsset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_StopAnimMontage, AnimMontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimMontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimMontageAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bUseBlackboardKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bClearBBValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_bStopSpecificAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::NewProp_AnimMontageAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_StopAnimMontage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::ClassParams = {
		&UTDRL_BTTask_StopAnimMontage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_StopAnimMontage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_StopAnimMontage.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_StopAnimMontage.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_StopAnimMontage>()
	{
		return UTDRL_BTTask_StopAnimMontage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_StopAnimMontage);
	UTDRL_BTTask_StopAnimMontage::~UTDRL_BTTask_StopAnimMontage() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_StopAnimMontage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_StopAnimMontage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_StopAnimMontage, UTDRL_BTTask_StopAnimMontage::StaticClass, TEXT("UTDRL_BTTask_StopAnimMontage"), &Z_Registration_Info_UClass_UTDRL_BTTask_StopAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_StopAnimMontage), 3040899367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_StopAnimMontage_h_2739174933(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_StopAnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_StopAnimMontage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
