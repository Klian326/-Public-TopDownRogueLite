// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_RotateTowardsRandom() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERandRotDirection;
	static UEnum* ERandRotDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERandRotDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERandRotDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("ERandRotDirection"));
		}
		return Z_Registration_Info_UEnum_ERandRotDirection.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<ERandRotDirection>()
	{
		return ERandRotDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics::Enumerators[] = {
		{ "ERandRotDirection::RRD_None", (int64)ERandRotDirection::RRD_None },
		{ "ERandRotDirection::RRD_Right", (int64)ERandRotDirection::RRD_Right },
		{ "ERandRotDirection::RRD_Left", (int64)ERandRotDirection::RRD_Left },
		{ "ERandRotDirection::RRD_Random", (int64)ERandRotDirection::RRD_Random },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
		{ "RRD_Left.DisplayName", "Left" },
		{ "RRD_Left.Name", "ERandRotDirection::RRD_Left" },
		{ "RRD_None.DisplayName", "None" },
		{ "RRD_None.Name", "ERandRotDirection::RRD_None" },
		{ "RRD_Random.DisplayName", "Random" },
		{ "RRD_Random.Name", "ERandRotDirection::RRD_Random" },
		{ "RRD_Right.DisplayName", "Right" },
		{ "RRD_Right.Name", "ERandRotDirection::RRD_Right" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"ERandRotDirection",
		"ERandRotDirection",
		Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection()
	{
		if (!Z_Registration_Info_UEnum_ERandRotDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERandRotDirection.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERandRotDirection.InnerSingleton;
	}
	void UTDRL_BTTask_RotateTowardsRandom::StaticRegisterNativesUTDRL_BTTask_RotateTowardsRandom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_RotateTowardsRandom);
	UClass* Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_NoRegister()
	{
		return UTDRL_BTTask_RotateTowardsRandom::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampRandomAngle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClampRandomAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExactAngle_MetaData[];
#endif
		static void NewProp_bUseExactAngle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExactAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExactAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExactAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Rotate Toward Random" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ClampRandomAngle_MetaData[] = {
		{ "Category", "Task" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/*Clamp random angle.*/" },
		{ "EditCondition", "!bUseExactAngle" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
		{ "ToolTip", "Clamp random angle." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ClampRandomAngle = { "ClampRandomAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsRandom, ClampRandomAngle), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ClampRandomAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ClampRandomAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_bUseExactAngle_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Should use an exact world rotation?*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
		{ "ToolTip", "Should use an exact world rotation?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_bUseExactAngle_SetBit(void* Obj)
	{
		((UTDRL_BTTask_RotateTowardsRandom*)Obj)->bUseExactAngle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_bUseExactAngle = { "bUseExactAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_RotateTowardsRandom), &Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_bUseExactAngle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_bUseExactAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_bUseExactAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ExactAngle_MetaData[] = {
		{ "Category", "Task" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/*World rotation Yaw to apply*/" },
		{ "EditCondition", "bUseExactAngle" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
		{ "ToolTip", "World rotation Yaw to apply" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ExactAngle = { "ExactAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsRandom, ExactAngle), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ExactAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ExactAngle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Rotation method*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
		{ "ToolTip", "Rotation method" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsRandom, Method), Z_Construct_UEnum_TopDownRogueLite_ERandRotDirection, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_Method_MetaData)) }; // 711621703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Rotation speed*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
		{ "ToolTip", "Rotation speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsRandom, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_RotateTowardsRandom.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_RotateTowardsRandom, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_TargetRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ClampRandomAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_bUseExactAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_ExactAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::NewProp_TargetRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_RotateTowardsRandom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::ClassParams = {
		&UTDRL_BTTask_RotateTowardsRandom::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_RotateTowardsRandom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_RotateTowardsRandom.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_RotateTowardsRandom.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_RotateTowardsRandom>()
	{
		return UTDRL_BTTask_RotateTowardsRandom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_RotateTowardsRandom);
	UTDRL_BTTask_RotateTowardsRandom::~UTDRL_BTTask_RotateTowardsRandom() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsRandom_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsRandom_h_Statics::EnumInfo[] = {
		{ ERandRotDirection_StaticEnum, TEXT("ERandRotDirection"), &Z_Registration_Info_UEnum_ERandRotDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 711621703U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsRandom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_RotateTowardsRandom, UTDRL_BTTask_RotateTowardsRandom::StaticClass, TEXT("UTDRL_BTTask_RotateTowardsRandom"), &Z_Registration_Info_UClass_UTDRL_BTTask_RotateTowardsRandom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_RotateTowardsRandom), 3828897377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsRandom_h_1012049615(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsRandom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsRandom_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsRandom_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_RotateTowardsRandom_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
