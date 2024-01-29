// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTService_UpdateAimOffset.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTService_UpdateAimOffset() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTService_UpdateAimOffset::StaticRegisterNativesUTDRL_BTService_UpdateAimOffset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTService_UpdateAimOffset);
	UClass* Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_NoRegister()
	{
		return UTDRL_BTService_UpdateAimOffset::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AimOffsetTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Update AnimOffset" },
		{ "IncludePath", "AI/Nodes/TDRL_BTService_UpdateAimOffset.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTService_UpdateAimOffset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::NewProp_AimOffsetTarget_MetaData[] = {
		{ "Category", "Service" },
		{ "Comment", "/*Target actor the AI should face*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTService_UpdateAimOffset.h" },
		{ "ToolTip", "Target actor the AI should face" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::NewProp_AimOffsetTarget = { "AimOffsetTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTService_UpdateAimOffset, AimOffsetTarget), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::NewProp_AimOffsetTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::NewProp_AimOffsetTarget_MetaData)) }; // 3025891527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::NewProp_AimOffsetTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTService_UpdateAimOffset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::ClassParams = {
		&UTDRL_BTService_UpdateAimOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTService_UpdateAimOffset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTService_UpdateAimOffset.OuterSingleton, Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTService_UpdateAimOffset.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTService_UpdateAimOffset>()
	{
		return UTDRL_BTService_UpdateAimOffset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTService_UpdateAimOffset);
	UTDRL_BTService_UpdateAimOffset::~UTDRL_BTService_UpdateAimOffset() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_UpdateAimOffset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_UpdateAimOffset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTService_UpdateAimOffset, UTDRL_BTService_UpdateAimOffset::StaticClass, TEXT("UTDRL_BTService_UpdateAimOffset"), &Z_Registration_Info_UClass_UTDRL_BTService_UpdateAimOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTService_UpdateAimOffset), 4217146811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_UpdateAimOffset_h_2433843376(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_UpdateAimOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTService_UpdateAimOffset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
