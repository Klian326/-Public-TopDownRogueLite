// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_NewPatrolLocation.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_NewPatrolLocation() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_NewPatrolLocation::StaticRegisterNativesUTDRL_BTTask_NewPatrolLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_NewPatrolLocation);
	UClass* Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_NoRegister()
	{
		return UTDRL_BTTask_NewPatrolLocation::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetToPatrol_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetToPatrol;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tollerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tollerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoredLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseRandomPoints_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UseRandomPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredAIPointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoredAIPointIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "New Patrol Target Location" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_NewPatrolLocation.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_NewPatrolLocation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_TargetToPatrol_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Target selector the AI is patrolling*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_NewPatrolLocation.h" },
		{ "ToolTip", "Target selector the AI is patrolling" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_TargetToPatrol = { "TargetToPatrol", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_NewPatrolLocation, TargetToPatrol), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_TargetToPatrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_TargetToPatrol_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_Tollerance_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Radius tollerance around the target/spline point*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_NewPatrolLocation.h" },
		{ "ToolTip", "Radius tollerance around the target/spline point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_Tollerance = { "Tollerance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_NewPatrolLocation, Tollerance), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_Tollerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_Tollerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredLocation_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Selector used to save the new patrol location*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_NewPatrolLocation.h" },
		{ "ToolTip", "Selector used to save the new patrol location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredLocation = { "StoredLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_NewPatrolLocation, StoredLocation), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredLocation_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_UseRandomPoints_MetaData[] = {
		{ "Category", "Task|SplineAITool" },
		{ "Comment", "/*[AISplineTool] Should pick random spline points? Or just follow the order (None = false)*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_NewPatrolLocation.h" },
		{ "ToolTip", "[AISplineTool] Should pick random spline points? Or just follow the order (None = false)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_UseRandomPoints = { "UseRandomPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_NewPatrolLocation, UseRandomPoints), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_UseRandomPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_UseRandomPoints_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredAIPointIndex_MetaData[] = {
		{ "Category", "Task|SplineAITool" },
		{ "Comment", "/*[AISplineTool] Used to cache the last assigned spline point*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_NewPatrolLocation.h" },
		{ "ToolTip", "[AISplineTool] Used to cache the last assigned spline point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredAIPointIndex = { "StoredAIPointIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_NewPatrolLocation, StoredAIPointIndex), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredAIPointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredAIPointIndex_MetaData)) }; // 3025891527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_TargetToPatrol,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_Tollerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_UseRandomPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::NewProp_StoredAIPointIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_NewPatrolLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::ClassParams = {
		&UTDRL_BTTask_NewPatrolLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_NewPatrolLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_NewPatrolLocation.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_NewPatrolLocation.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_NewPatrolLocation>()
	{
		return UTDRL_BTTask_NewPatrolLocation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_NewPatrolLocation);
	UTDRL_BTTask_NewPatrolLocation::~UTDRL_BTTask_NewPatrolLocation() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_NewPatrolLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_NewPatrolLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_NewPatrolLocation, UTDRL_BTTask_NewPatrolLocation::StaticClass, TEXT("UTDRL_BTTask_NewPatrolLocation"), &Z_Registration_Info_UClass_UTDRL_BTTask_NewPatrolLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_NewPatrolLocation), 3103401683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_NewPatrolLocation_h_890999787(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_NewPatrolLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_NewPatrolLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
