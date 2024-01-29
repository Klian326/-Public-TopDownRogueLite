// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_CopyLocation.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_CopyLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_CopyLocation();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_CopyLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_CopyLocation::StaticRegisterNativesUTDRL_BTTask_CopyLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_CopyLocation);
	UClass* Z_Construct_UClass_UTDRL_BTTask_CopyLocation_NoRegister()
	{
		return UTDRL_BTTask_CopyLocation::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_From;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Copy BB Location" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_CopyLocation.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_CopyLocation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_From_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Copy value from this blackboard selector*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_CopyLocation.h" },
		{ "ToolTip", "Copy value from this blackboard selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_CopyLocation, From), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_From_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_From_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*To this blackboard selector*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_CopyLocation.h" },
		{ "ToolTip", "To this blackboard selector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_CopyLocation, Target), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_Target_MetaData)) }; // 3025891527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::NewProp_Target,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_CopyLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::ClassParams = {
		&UTDRL_BTTask_CopyLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_CopyLocation()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_CopyLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_CopyLocation.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_CopyLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_CopyLocation.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_CopyLocation>()
	{
		return UTDRL_BTTask_CopyLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_CopyLocation);
	UTDRL_BTTask_CopyLocation::~UTDRL_BTTask_CopyLocation() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_CopyLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_CopyLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_CopyLocation, UTDRL_BTTask_CopyLocation::StaticClass, TEXT("UTDRL_BTTask_CopyLocation"), &Z_Registration_Info_UClass_UTDRL_BTTask_CopyLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_CopyLocation), 2519536967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_CopyLocation_h_1723175205(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_CopyLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_CopyLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
