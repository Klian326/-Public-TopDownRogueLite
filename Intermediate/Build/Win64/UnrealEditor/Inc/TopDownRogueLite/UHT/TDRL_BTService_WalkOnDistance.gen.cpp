// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTService_WalkOnDistance.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTService_WalkOnDistance() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTService_WalkOnDistance();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTService_WalkOnDistance::StaticRegisterNativesUTDRL_BTService_WalkOnDistance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTService_WalkOnDistance);
	UClass* Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_NoRegister()
	{
		return UTDRL_BTService_WalkOnDistance::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreWhenFinish_MetaData[];
#endif
		static void NewProp_bRestoreWhenFinish_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreWhenFinish;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Start Walking on Distance" },
		{ "IncludePath", "AI/Nodes/TDRL_BTService_WalkOnDistance.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTService_WalkOnDistance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/*Target actor or location AI wants to reach*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTService_WalkOnDistance.h" },
		{ "ToolTip", "Target actor or location AI wants to reach" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTService_WalkOnDistance, Target), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Target_MetaData)) }; // 3025891527
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/*Comparison method*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTService_WalkOnDistance.h" },
		{ "ToolTip", "Comparison method" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTService_WalkOnDistance, Method), Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Method_MetaData)) }; // 2351270934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/*Trigger distance*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTService_WalkOnDistance.h" },
		{ "ToolTip", "Trigger distance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTService_WalkOnDistance, Distance), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_bRestoreWhenFinish_MetaData[] = {
		{ "Category", "Service" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTService_WalkOnDistance.h" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_bRestoreWhenFinish_SetBit(void* Obj)
	{
		((UTDRL_BTService_WalkOnDistance*)Obj)->bRestoreWhenFinish = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_bRestoreWhenFinish = { "bRestoreWhenFinish", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTService_WalkOnDistance), &Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_bRestoreWhenFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_bRestoreWhenFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_bRestoreWhenFinish_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::NewProp_bRestoreWhenFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTService_WalkOnDistance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::ClassParams = {
		&UTDRL_BTService_WalkOnDistance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTService_WalkOnDistance()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTService_WalkOnDistance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTService_WalkOnDistance.OuterSingleton, Z_Construct_UClass_UTDRL_BTService_WalkOnDistance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTService_WalkOnDistance.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTService_WalkOnDistance>()
	{
		return UTDRL_BTService_WalkOnDistance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTService_WalkOnDistance);
	UTDRL_BTService_WalkOnDistance::~UTDRL_BTService_WalkOnDistance() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_WalkOnDistance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_WalkOnDistance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTService_WalkOnDistance, UTDRL_BTService_WalkOnDistance::StaticClass, TEXT("UTDRL_BTService_WalkOnDistance"), &Z_Registration_Info_UClass_UTDRL_BTService_WalkOnDistance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTService_WalkOnDistance), 1202606542U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_WalkOnDistance_h_1795755797(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_WalkOnDistance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_WalkOnDistance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
