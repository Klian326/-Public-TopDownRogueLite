// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Items/TDRL_AUData_MeleeTraceFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_AUData_MeleeTraceFilter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_AUData_MeleeTraceFilter::StaticRegisterNativesUTDRL_AUData_MeleeTraceFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_AUData_MeleeTraceFilter);
	UClass* Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_NoRegister()
	{
		return UTDRL_AUData_MeleeTraceFilter::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagFilters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/TDRL_AUData_MeleeTraceFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_AUData_MeleeTraceFilter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::NewProp_TagFilters_Inner = { "TagFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::NewProp_TagFilters_MetaData[] = {
		{ "Category", "TDRL|Filters" },
		{ "ModuleRelativePath", "Public/Items/TDRL_AUData_MeleeTraceFilter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::NewProp_TagFilters = { "TagFilters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_AUData_MeleeTraceFilter, TagFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::NewProp_TagFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::NewProp_TagFilters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::NewProp_TagFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::NewProp_TagFilters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_AUData_MeleeTraceFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::ClassParams = {
		&UTDRL_AUData_MeleeTraceFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter()
	{
		if (!Z_Registration_Info_UClass_UTDRL_AUData_MeleeTraceFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_AUData_MeleeTraceFilter.OuterSingleton, Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_AUData_MeleeTraceFilter.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_AUData_MeleeTraceFilter>()
	{
		return UTDRL_AUData_MeleeTraceFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_AUData_MeleeTraceFilter);
	UTDRL_AUData_MeleeTraceFilter::~UTDRL_AUData_MeleeTraceFilter() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_AUData_MeleeTraceFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_AUData_MeleeTraceFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_AUData_MeleeTraceFilter, UTDRL_AUData_MeleeTraceFilter::StaticClass, TEXT("UTDRL_AUData_MeleeTraceFilter"), &Z_Registration_Info_UClass_UTDRL_AUData_MeleeTraceFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_AUData_MeleeTraceFilter), 605313029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_AUData_MeleeTraceFilter_h_178172956(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_AUData_MeleeTraceFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_AUData_MeleeTraceFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
