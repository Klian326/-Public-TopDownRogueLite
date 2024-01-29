// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_GameStateBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GameStateBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GameStateBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GameStateBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void ATDRL_GameStateBase::StaticRegisterNativesATDRL_GameStateBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_GameStateBase);
	UClass* Z_Construct_UClass_ATDRL_GameStateBase_NoRegister()
	{
		return ATDRL_GameStateBase::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_GameStateBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_GameStateBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GameStateBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gameplay/TDRL_GameStateBase.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_GameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_GameStateBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_GameStateBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_GameStateBase_Statics::ClassParams = {
		&ATDRL_GameStateBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_GameStateBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GameStateBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_GameStateBase()
	{
		if (!Z_Registration_Info_UClass_ATDRL_GameStateBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_GameStateBase.OuterSingleton, Z_Construct_UClass_ATDRL_GameStateBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_GameStateBase.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_GameStateBase>()
	{
		return ATDRL_GameStateBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_GameStateBase);
	ATDRL_GameStateBase::~ATDRL_GameStateBase() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameStateBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameStateBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_GameStateBase, ATDRL_GameStateBase::StaticClass, TEXT("ATDRL_GameStateBase"), &Z_Registration_Info_UClass_ATDRL_GameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_GameStateBase), 455532468U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameStateBase_h_1493536298(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameStateBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameStateBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
