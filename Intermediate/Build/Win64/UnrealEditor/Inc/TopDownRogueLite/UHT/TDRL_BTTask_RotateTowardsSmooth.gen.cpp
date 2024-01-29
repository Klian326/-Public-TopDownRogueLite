// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_RotateTowardsSmooth() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_RotateTowardsSmooth::StaticRegisterNativesUTDRL_BTTask_RotateTowardsSmooth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_RotateTowardsSmooth);
	UClass* Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_NoRegister()
	{
		return UTDRL_BTTask_RotateTowardsSmooth::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsWorldRotationYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsWorldRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Smoothly Rotate Towards" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Target the character should face*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h" },
		{ "ToolTip", "Target the character should face" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsSmooth, Target), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Target_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Rotation speed*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h" },
		{ "ToolTip", "Rotation speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsSmooth, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Tollerance_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Rotation tollerance*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h" },
		{ "ToolTip", "Rotation tollerance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Tollerance = { "Tollerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsSmooth, Tollerance), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Tollerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Tollerance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_bUseAbsoluteWorldRotation_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Should use an exact world rotation?*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h" },
		{ "ToolTip", "Should use an exact world rotation?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_bUseAbsoluteWorldRotation_SetBit(void* Obj)
	{
		((UTDRL_BTTask_RotateTowardsSmooth*)Obj)->bUseAbsoluteWorldRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_bUseAbsoluteWorldRotation = { "bUseAbsoluteWorldRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_RotateTowardsSmooth), &Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_bUseAbsoluteWorldRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_bUseAbsoluteWorldRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_bUseAbsoluteWorldRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_AbsWorldRotationYaw_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*World rotation Yaw to apply*/" },
		{ "EditCondition", "bUseAbsoluteWorldRotation" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h" },
		{ "ToolTip", "World rotation Yaw to apply" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_AbsWorldRotationYaw = { "AbsWorldRotationYaw", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsSmooth, AbsWorldRotationYaw), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_AbsWorldRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_AbsWorldRotationYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsSmooth.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsSmooth, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_TargetRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_Tollerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_bUseAbsoluteWorldRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_AbsWorldRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::NewProp_TargetRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_RotateTowardsSmooth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::ClassParams = {
		&UTDRL_BTTask_RotateTowardsSmooth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_RotateTowardsSmooth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_RotateTowardsSmooth.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_RotateTowardsSmooth.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_RotateTowardsSmooth>()
	{
		return UTDRL_BTTask_RotateTowardsSmooth::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_RotateTowardsSmooth);
	UTDRL_BTTask_RotateTowardsSmooth::~UTDRL_BTTask_RotateTowardsSmooth() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsSmooth_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsSmooth_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_RotateTowardsSmooth, UTDRL_BTTask_RotateTowardsSmooth::StaticClass, TEXT("UTDRL_BTTask_RotateTowardsSmooth"), &Z_Registration_Info_UClass_UTDRL_BTTask_RotateTowardsSmooth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_RotateTowardsSmooth), 1726665436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsSmooth_h_1894463959(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsSmooth_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsSmooth_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
