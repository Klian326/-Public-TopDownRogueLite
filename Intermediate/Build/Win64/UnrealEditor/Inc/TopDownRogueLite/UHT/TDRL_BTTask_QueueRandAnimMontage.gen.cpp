// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_QueueRandAnimMontage.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_QueueRandAnimMontage() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UAIAnimMontageContainer_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_QueueRandAnimMontage::StaticRegisterNativesUTDRL_BTTask_QueueRandAnimMontage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_QueueRandAnimMontage);
	UClass* Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_NoRegister()
	{
		return UTDRL_BTTask_QueueRandAnimMontage::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueueAnimKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueueAnimKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomContainer_MetaData[];
#endif
		static void NewProp_bUseCustomContainer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomAnimMontageContainer_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CustomAnimMontageContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Queue Random AnimMontage to BB" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_QueueRandAnimMontage.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_QueueRandAnimMontage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_QueueAnimKey_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Target selector where the result will be stored*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_QueueRandAnimMontage.h" },
		{ "ToolTip", "Target selector where the result will be stored" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_QueueAnimKey = { "QueueAnimKey", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_QueueRandAnimMontage, QueueAnimKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_QueueAnimKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_QueueAnimKey_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*You can select a group of AnimMontage asset by name. A random AnimMontage will be selected from that group. IMPORTANT: these groups are stored inside the TDRL_AIController class*/" },
		{ "EditCondition", "!bUseCustomContainer" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_QueueRandAnimMontage.h" },
		{ "ToolTip", "You can select a group of AnimMontage asset by name. A random AnimMontage will be selected from that group. IMPORTANT: these groups are stored inside the TDRL_AIController class" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_QueueRandAnimMontage, GroupName), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_GroupName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_bUseCustomContainer_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Should use a custom container for random AnimMontages.*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_QueueRandAnimMontage.h" },
		{ "ToolTip", "Should use a custom container for random AnimMontages." },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_bUseCustomContainer_SetBit(void* Obj)
	{
		((UTDRL_BTTask_QueueRandAnimMontage*)Obj)->bUseCustomContainer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_bUseCustomContainer = { "bUseCustomContainer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_QueueRandAnimMontage), &Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_bUseCustomContainer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_bUseCustomContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_bUseCustomContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_CustomAnimMontageContainer_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Custom AnimMontage container*/" },
		{ "EditCondition", "bUseCustomContainer" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_QueueRandAnimMontage.h" },
		{ "ToolTip", "Custom AnimMontage container" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_CustomAnimMontageContainer = { "CustomAnimMontageContainer", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_QueueRandAnimMontage, CustomAnimMontageContainer), Z_Construct_UClass_UClass, Z_Construct_UClass_UAIAnimMontageContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_CustomAnimMontageContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_CustomAnimMontageContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_QueueAnimKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_bUseCustomContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::NewProp_CustomAnimMontageContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_QueueRandAnimMontage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::ClassParams = {
		&UTDRL_BTTask_QueueRandAnimMontage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_QueueRandAnimMontage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_QueueRandAnimMontage.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_QueueRandAnimMontage.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_QueueRandAnimMontage>()
	{
		return UTDRL_BTTask_QueueRandAnimMontage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_QueueRandAnimMontage);
	UTDRL_BTTask_QueueRandAnimMontage::~UTDRL_BTTask_QueueRandAnimMontage() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_QueueRandAnimMontage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_QueueRandAnimMontage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_QueueRandAnimMontage, UTDRL_BTTask_QueueRandAnimMontage::StaticClass, TEXT("UTDRL_BTTask_QueueRandAnimMontage"), &Z_Registration_Info_UClass_UTDRL_BTTask_QueueRandAnimMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_QueueRandAnimMontage), 3585982777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_QueueRandAnimMontage_h_2414969991(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_QueueRandAnimMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_QueueRandAnimMontage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
