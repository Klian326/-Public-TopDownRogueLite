// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLiteEditor/Public/TDRL_ActorFactorySpawnVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_ActorFactorySpawnVolume() {}
// Cross Module References
	TOPDOWNROGUELITEEDITOR_API UClass* Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume();
	TOPDOWNROGUELITEEDITOR_API UClass* Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryVolume();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLiteEditor();
// End Cross Module References
	void UTDRL_ActorFactorySpawnVolume::StaticRegisterNativesUTDRL_ActorFactorySpawnVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_ActorFactorySpawnVolume);
	UClass* Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_NoRegister()
	{
		return UTDRL_ActorFactorySpawnVolume::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLiteEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "TDRL_ActorFactorySpawnVolume.h" },
		{ "ModuleRelativePath", "Public/TDRL_ActorFactorySpawnVolume.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_ActorFactorySpawnVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_Statics::ClassParams = {
		&UTDRL_ActorFactorySpawnVolume::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume()
	{
		if (!Z_Registration_Info_UClass_UTDRL_ActorFactorySpawnVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_ActorFactorySpawnVolume.OuterSingleton, Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_ActorFactorySpawnVolume.OuterSingleton;
	}
	template<> TOPDOWNROGUELITEEDITOR_API UClass* StaticClass<UTDRL_ActorFactorySpawnVolume>()
	{
		return UTDRL_ActorFactorySpawnVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_ActorFactorySpawnVolume);
	UTDRL_ActorFactorySpawnVolume::~UTDRL_ActorFactorySpawnVolume() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLiteEditor_Public_TDRL_ActorFactorySpawnVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLiteEditor_Public_TDRL_ActorFactorySpawnVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_ActorFactorySpawnVolume, UTDRL_ActorFactorySpawnVolume::StaticClass, TEXT("UTDRL_ActorFactorySpawnVolume"), &Z_Registration_Info_UClass_UTDRL_ActorFactorySpawnVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_ActorFactorySpawnVolume), 802203728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLiteEditor_Public_TDRL_ActorFactorySpawnVolume_h_3763371850(TEXT("/Script/TopDownRogueLiteEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLiteEditor_Public_TDRL_ActorFactorySpawnVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLiteEditor_Public_TDRL_ActorFactorySpawnVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
