// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTDecorator_PlayingMontage.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTDecorator_PlayingMontage() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTDecorator_PlayingMontage::StaticRegisterNativesUTDRL_BTDecorator_PlayingMontage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTDecorator_PlayingMontage);
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_NoRegister()
	{
		return UTDRL_BTDecorator_PlayingMontage::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BBMontage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BBMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectMontage_MetaData[];
#endif
		static void NewProp_bSelectMontage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectMontage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpecificMontages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecificMontages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpecificMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickCheckInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickCheckInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTDRL_BTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Is Playing Montage" },
		{ "IncludePath", "AI/Nodes/TDRL_BTDecorator_PlayingMontage.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_PlayingMontage.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_BBMontage_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Target to check if it's playing a montage*/" },
		{ "EditCondition", "bSelectMontage" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_PlayingMontage.h" },
		{ "ToolTip", "Target to check if it's playing a montage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_BBMontage = { "BBMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_PlayingMontage, BBMontage), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_BBMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_BBMontage_MetaData)) }; // 3025891527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_bSelectMontage_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Force to check for a specific montage, if this variable is false and \"SpecificMontages\" is null, the script will check for ANY montage.*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_PlayingMontage.h" },
		{ "ToolTip", "Force to check for a specific montage, if this variable is false and \"SpecificMontages\" is null, the script will check for ANY montage." },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_bSelectMontage_SetBit(void* Obj)
	{
		((UTDRL_BTDecorator_PlayingMontage*)Obj)->bSelectMontage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_bSelectMontage = { "bSelectMontage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTDecorator_PlayingMontage), &Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_bSelectMontage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_bSelectMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_bSelectMontage_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_SpecificMontages_Inner = { "SpecificMontages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_SpecificMontages_MetaData[] = {
		{ "Category", "Condition|AdditionalFilters" },
		{ "Comment", "/*Specific montage to check, will return false if it's playing any other montage.*/" },
		{ "EditCondition", "bSelectMontage" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_PlayingMontage.h" },
		{ "ToolTip", "Specific montage to check, will return false if it's playing any other montage." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_SpecificMontages = { "SpecificMontages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_PlayingMontage, SpecificMontages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_SpecificMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_SpecificMontages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_TickCheckInterval_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_PlayingMontage.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_TickCheckInterval = { "TickCheckInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_PlayingMontage, TickCheckInterval), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_TickCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_TickCheckInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_BBMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_bSelectMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_SpecificMontages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_SpecificMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::NewProp_TickCheckInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTDecorator_PlayingMontage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::ClassParams = {
		&UTDRL_BTDecorator_PlayingMontage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTDecorator_PlayingMontage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTDecorator_PlayingMontage.OuterSingleton, Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTDecorator_PlayingMontage.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTDecorator_PlayingMontage>()
	{
		return UTDRL_BTDecorator_PlayingMontage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTDecorator_PlayingMontage);
	UTDRL_BTDecorator_PlayingMontage::~UTDRL_BTDecorator_PlayingMontage() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_PlayingMontage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_PlayingMontage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTDecorator_PlayingMontage, UTDRL_BTDecorator_PlayingMontage::StaticClass, TEXT("UTDRL_BTDecorator_PlayingMontage"), &Z_Registration_Info_UClass_UTDRL_BTDecorator_PlayingMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTDecorator_PlayingMontage), 3206464659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_PlayingMontage_h_1101847367(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_PlayingMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_PlayingMontage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
