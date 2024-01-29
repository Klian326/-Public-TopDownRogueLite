// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Items/TDRL_Fists.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_Fists() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Fists();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Fists_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Melee();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void ATDRL_Fists::StaticRegisterNativesATDRL_Fists()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_Fists);
	UClass* Z_Construct_UClass_ATDRL_Fists_NoRegister()
	{
		return ATDRL_Fists::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_Fists_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightFist_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightFist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftFist_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftFist;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_Fists_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDRL_Melee,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Fists_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/TDRL_Fists.h" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Fists.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_RightFist_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Fists.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_RightFist = { "RightFist", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Fists, RightFist), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_RightFist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_RightFist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_LeftFist_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Fists.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_LeftFist = { "LeftFist", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Fists, LeftFist), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_LeftFist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_LeftFist_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_Fists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_RightFist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Fists_Statics::NewProp_LeftFist,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_Fists_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_Fists>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_Fists_Statics::ClassParams = {
		&ATDRL_Fists::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATDRL_Fists_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Fists_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_Fists_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Fists_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_Fists()
	{
		if (!Z_Registration_Info_UClass_ATDRL_Fists.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_Fists.OuterSingleton, Z_Construct_UClass_ATDRL_Fists_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_Fists.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_Fists>()
	{
		return ATDRL_Fists::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_Fists);
	ATDRL_Fists::~ATDRL_Fists() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Fists_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Fists_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_Fists, ATDRL_Fists::StaticClass, TEXT("ATDRL_Fists"), &Z_Registration_Info_UClass_ATDRL_Fists, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_Fists), 3269418999U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Fists_h_3072659784(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Fists_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Fists_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
