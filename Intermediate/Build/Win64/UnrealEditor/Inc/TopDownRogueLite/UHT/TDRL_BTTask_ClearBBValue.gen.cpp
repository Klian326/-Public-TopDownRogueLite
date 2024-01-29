// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_ClearBBValue.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_ClearBBValue() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_ClearBBValue();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_ClearBBValue::StaticRegisterNativesUTDRL_BTTask_ClearBBValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_ClearBBValue);
	UClass* Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_NoRegister()
	{
		return UTDRL_BTTask_ClearBBValue::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBEntry_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BBEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Clear BB Value" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_ClearBBValue.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_ClearBBValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::NewProp_BBEntry_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Backboard entry you want to clear*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_ClearBBValue.h" },
		{ "ToolTip", "Backboard entry you want to clear" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::NewProp_BBEntry = { "BBEntry", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_ClearBBValue, BBEntry), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::NewProp_BBEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::NewProp_BBEntry_MetaData)) }; // 3025891527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::NewProp_BBEntry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_ClearBBValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::ClassParams = {
		&UTDRL_BTTask_ClearBBValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_ClearBBValue()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_ClearBBValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_ClearBBValue.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_ClearBBValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_ClearBBValue.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_ClearBBValue>()
	{
		return UTDRL_BTTask_ClearBBValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_ClearBBValue);
	UTDRL_BTTask_ClearBBValue::~UTDRL_BTTask_ClearBBValue() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_ClearBBValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_ClearBBValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_ClearBBValue, UTDRL_BTTask_ClearBBValue::StaticClass, TEXT("UTDRL_BTTask_ClearBBValue"), &Z_Registration_Info_UClass_UTDRL_BTTask_ClearBBValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_ClearBBValue), 565968349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_ClearBBValue_h_3540469352(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_ClearBBValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_ClearBBValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
