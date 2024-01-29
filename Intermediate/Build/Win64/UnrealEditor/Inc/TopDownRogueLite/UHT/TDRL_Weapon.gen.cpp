// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Items/TDRL_Weapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_Weapon() {}
// Cross Module References
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Item();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Weapon();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Weapon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void ATDRL_Weapon::StaticRegisterNativesATDRL_Weapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_Weapon);
	UClass* Z_Construct_UClass_ATDRL_Weapon_NoRegister()
	{
		return ATDRL_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDRL_Item,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Weapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/TDRL_Weapon.h" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Weapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_Weapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_Weapon_Statics::ClassParams = {
		&ATDRL_Weapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_Weapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_Weapon()
	{
		if (!Z_Registration_Info_UClass_ATDRL_Weapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_Weapon.OuterSingleton, Z_Construct_UClass_ATDRL_Weapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_Weapon.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_Weapon>()
	{
		return ATDRL_Weapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_Weapon);
	ATDRL_Weapon::~ATDRL_Weapon() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Weapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Weapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_Weapon, ATDRL_Weapon::StaticClass, TEXT("ATDRL_Weapon"), &Z_Registration_Info_UClass_ATDRL_Weapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_Weapon), 3983583287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Weapon_h_755151395(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Weapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
