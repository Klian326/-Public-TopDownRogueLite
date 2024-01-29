// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_SetWalking.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_SetWalking() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_SetWalking();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_SetWalking_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_SetWalking::StaticRegisterNativesUTDRL_BTTask_SetWalking()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_SetWalking);
	UClass* Z_Construct_UClass_UTDRL_BTTask_SetWalking_NoRegister()
	{
		return UTDRL_BTTask_SetWalking::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldWalk_MetaData[];
#endif
		static void NewProp_ShouldWalk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldWalk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Enable Walking" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_SetWalking.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SetWalking.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::NewProp_ShouldWalk_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Character should walk?*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SetWalking.h" },
		{ "ToolTip", "Character should walk?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::NewProp_ShouldWalk_SetBit(void* Obj)
	{
		((UTDRL_BTTask_SetWalking*)Obj)->ShouldWalk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::NewProp_ShouldWalk = { "ShouldWalk", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTTask_SetWalking), &Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::NewProp_ShouldWalk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::NewProp_ShouldWalk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::NewProp_ShouldWalk_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::NewProp_ShouldWalk,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_SetWalking>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::ClassParams = {
		&UTDRL_BTTask_SetWalking::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_SetWalking()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_SetWalking.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_SetWalking.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_SetWalking_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_SetWalking.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_SetWalking>()
	{
		return UTDRL_BTTask_SetWalking::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_SetWalking);
	UTDRL_BTTask_SetWalking::~UTDRL_BTTask_SetWalking() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetWalking_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetWalking_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_SetWalking, UTDRL_BTTask_SetWalking::StaticClass, TEXT("UTDRL_BTTask_SetWalking"), &Z_Registration_Info_UClass_UTDRL_BTTask_SetWalking, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_SetWalking), 553520070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetWalking_h_3542093261(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetWalking_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SetWalking_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
