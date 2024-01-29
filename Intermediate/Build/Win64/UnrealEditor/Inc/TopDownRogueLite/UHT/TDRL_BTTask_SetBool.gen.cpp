// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_SetBool.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_SetBool() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_SetBool();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_SetBool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_SetBool::StaticRegisterNativesUTDRL_BTTask_SetBool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_SetBool);
	UClass* Z_Construct_UClass_UTDRL_BTTask_SetBool_NoRegister()
	{
		return UTDRL_BTTask_SetBool::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBBool_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BBBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Set BB Bool" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_SetBool.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SetBool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_BBBool_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Target bool selector*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SetBool.h" },
		{ "ToolTip", "Target bool selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_BBBool = { "BBBool", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_SetBool, BBBool), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_BBBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_BBBool_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_NewValue_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*New bool value*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SetBool.h" },
		{ "ToolTip", "New bool value" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((UTDRL_BTTask_SetBool*)Obj)->NewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_SetBool), &Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_NewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_BBBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::NewProp_NewValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_SetBool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::ClassParams = {
		&UTDRL_BTTask_SetBool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_SetBool()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_SetBool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_SetBool.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_SetBool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_SetBool.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_SetBool>()
	{
		return UTDRL_BTTask_SetBool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_SetBool);
	UTDRL_BTTask_SetBool::~UTDRL_BTTask_SetBool() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetBool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetBool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_SetBool, UTDRL_BTTask_SetBool::StaticClass, TEXT("UTDRL_BTTask_SetBool"), &Z_Registration_Info_UClass_UTDRL_BTTask_SetBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_SetBool), 254546258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetBool_h_2317003724(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetBool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetBool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
