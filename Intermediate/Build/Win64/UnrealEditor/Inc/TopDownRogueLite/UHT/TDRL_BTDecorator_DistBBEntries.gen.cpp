// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTDecorator_DistBBEntries.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTDecorator_DistBBEntries() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTDecorator_DistBBEntries::StaticRegisterNativesUTDRL_BTDecorator_DistBBEntries()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTDecorator_DistBBEntries);
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_NoRegister()
	{
		return UTDRL_BTDecorator_DistBBEntries::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickCheckInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickCheckInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTDRL_BTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Distance between BB Entries" },
		{ "IncludePath", "AI/Nodes/TDRL_BTDecorator_DistBBEntries.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_DistBBEntries.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target1_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*From*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_DistBBEntries.h" },
		{ "ToolTip", "From" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target1 = { "Target1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_DistBBEntries, Target1), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target1_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target2_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*To*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_DistBBEntries.h" },
		{ "ToolTip", "To" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target2 = { "Target2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_DistBBEntries, Target2), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target2_MetaData)) }; // 3025891527
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Comparison method*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_DistBBEntries.h" },
		{ "ToolTip", "Comparison method" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_DistBBEntries, Method), Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Method_MetaData)) }; // 2351270934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Limit*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_DistBBEntries.h" },
		{ "ToolTip", "Limit" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_DistBBEntries, Distance), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_TickCheckInterval_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_DistBBEntries.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_TickCheckInterval = { "TickCheckInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_DistBBEntries, TickCheckInterval), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_TickCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_TickCheckInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Target2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::NewProp_TickCheckInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTDecorator_DistBBEntries>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::ClassParams = {
		&UTDRL_BTDecorator_DistBBEntries::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTDecorator_DistBBEntries.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTDecorator_DistBBEntries.OuterSingleton, Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTDecorator_DistBBEntries.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTDecorator_DistBBEntries>()
	{
		return UTDRL_BTDecorator_DistBBEntries::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTDecorator_DistBBEntries);
	UTDRL_BTDecorator_DistBBEntries::~UTDRL_BTDecorator_DistBBEntries() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_DistBBEntries_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_DistBBEntries_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTDecorator_DistBBEntries, UTDRL_BTDecorator_DistBBEntries::StaticClass, TEXT("UTDRL_BTDecorator_DistBBEntries"), &Z_Registration_Info_UClass_UTDRL_BTDecorator_DistBBEntries, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTDecorator_DistBBEntries), 90071885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_DistBBEntries_h_1471961964(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_DistBBEntries_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_DistBBEntries_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
