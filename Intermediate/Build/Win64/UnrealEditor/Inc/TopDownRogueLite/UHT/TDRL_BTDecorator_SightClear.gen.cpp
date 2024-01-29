// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTDecorator_SightClear.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTDecorator_SightClear() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_SightClear();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_SightClear_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTDecorator_SightClear::StaticRegisterNativesUTDRL_BTDecorator_SightClear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTDecorator_SightClear);
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_SightClear_NoRegister()
	{
		return UTDRL_BTDecorator_SightClear::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tollerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tollerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBool_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickCheckInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickCheckInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTDRL_BTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Is Sight Clear" },
		{ "IncludePath", "AI/Nodes/TDRL_BTDecorator_SightClear.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_SightClear.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Target*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_SightClear.h" },
		{ "ToolTip", "Target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_SightClear, Target), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Target_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Sight trace radius, larger values will require more space free space between the target and the AI to return true.*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_SightClear.h" },
		{ "ToolTip", "Sight trace radius, larger values will require more space free space between the target and the AI to return true." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_SightClear, TraceRadius), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TraceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Tollerance_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Tollerance between the hit result and the target location, it is applied if the trace will hit a different actor then the target*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_SightClear.h" },
		{ "ToolTip", "Tollerance between the hit result and the target location, it is applied if the trace will hit a different actor then the target" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Tollerance = { "Tollerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_SightClear, Tollerance), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Tollerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Tollerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_CachedBool_MetaData[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_SightClear.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_CachedBool = { "CachedBool", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_SightClear, CachedBool), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_CachedBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_CachedBool_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TickCheckInterval_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_SightClear.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TickCheckInterval = { "TickCheckInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_SightClear, TickCheckInterval), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TickCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TickCheckInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_Tollerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_CachedBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::NewProp_TickCheckInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTDecorator_SightClear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::ClassParams = {
		&UTDRL_BTDecorator_SightClear::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_SightClear()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTDecorator_SightClear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTDecorator_SightClear.OuterSingleton, Z_Construct_UClass_UTDRL_BTDecorator_SightClear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTDecorator_SightClear.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTDecorator_SightClear>()
	{
		return UTDRL_BTDecorator_SightClear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTDecorator_SightClear);
	UTDRL_BTDecorator_SightClear::~UTDRL_BTDecorator_SightClear() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_SightClear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_SightClear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTDecorator_SightClear, UTDRL_BTDecorator_SightClear::StaticClass, TEXT("UTDRL_BTDecorator_SightClear"), &Z_Registration_Info_UClass_UTDRL_BTDecorator_SightClear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTDecorator_SightClear), 1068103118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_SightClear_h_248863454(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_SightClear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_SightClear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
