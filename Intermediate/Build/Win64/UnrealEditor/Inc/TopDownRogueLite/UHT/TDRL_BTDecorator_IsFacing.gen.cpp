// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTDecorator_IsFacing.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTDecorator_IsFacing() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_IsFacing();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTDecorator_IsFacing::StaticRegisterNativesUTDRL_BTDecorator_IsFacing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTDecorator_IsFacing);
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_NoRegister()
	{
		return UTDRL_BTDecorator_IsFacing::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetToFace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetToFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tollerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tollerance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsoluteWorldRotation_MetaData[];
#endif
		static void NewProp_bUseAbsoluteWorldRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsoluteWorldRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsWorldRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsWorldRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickCheckInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickCheckInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTDRL_BTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Is Facing" },
		{ "IncludePath", "AI/Nodes/TDRL_BTDecorator_IsFacing.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_IsFacing.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TargetToFace_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Target the character should be facing*/" },
		{ "EditCondition", "!bUseAbsoluteWorldRotation" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_IsFacing.h" },
		{ "ToolTip", "Target the character should be facing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TargetToFace = { "TargetToFace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_IsFacing, TargetToFace), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TargetToFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TargetToFace_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_Tollerance_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Tollerance in degrees*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_IsFacing.h" },
		{ "ToolTip", "Tollerance in degrees" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_Tollerance = { "Tollerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_IsFacing, Tollerance), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_Tollerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_Tollerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_bUseAbsoluteWorldRotation_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Should test against a constant absolute world rotation?*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_IsFacing.h" },
		{ "ToolTip", "Should test against a constant absolute world rotation?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_bUseAbsoluteWorldRotation_SetBit(void* Obj)
	{
		((UTDRL_BTDecorator_IsFacing*)Obj)->bUseAbsoluteWorldRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_bUseAbsoluteWorldRotation = { "bUseAbsoluteWorldRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTDecorator_IsFacing), &Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_bUseAbsoluteWorldRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_bUseAbsoluteWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_bUseAbsoluteWorldRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_AbsWorldRotation_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Constant absolute world rotation*/" },
		{ "EditCondition", "bUseAbsoluteWorldRotation" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_IsFacing.h" },
		{ "ToolTip", "Constant absolute world rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_AbsWorldRotation = { "AbsWorldRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_IsFacing, AbsWorldRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_AbsWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_AbsWorldRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TickCheckInterval_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_IsFacing.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TickCheckInterval = { "TickCheckInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_IsFacing, TickCheckInterval), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TickCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TickCheckInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TargetToFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_Tollerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_bUseAbsoluteWorldRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_AbsWorldRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::NewProp_TickCheckInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTDecorator_IsFacing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::ClassParams = {
		&UTDRL_BTDecorator_IsFacing::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_IsFacing()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTDecorator_IsFacing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTDecorator_IsFacing.OuterSingleton, Z_Construct_UClass_UTDRL_BTDecorator_IsFacing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTDecorator_IsFacing.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTDecorator_IsFacing>()
	{
		return UTDRL_BTDecorator_IsFacing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTDecorator_IsFacing);
	UTDRL_BTDecorator_IsFacing::~UTDRL_BTDecorator_IsFacing() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_IsFacing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_IsFacing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTDecorator_IsFacing, UTDRL_BTDecorator_IsFacing::StaticClass, TEXT("UTDRL_BTDecorator_IsFacing"), &Z_Registration_Info_UClass_UTDRL_BTDecorator_IsFacing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTDecorator_IsFacing), 363012147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_IsFacing_h_4115448686(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_IsFacing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_IsFacing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
