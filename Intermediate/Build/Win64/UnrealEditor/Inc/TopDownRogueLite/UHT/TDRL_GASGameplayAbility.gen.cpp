// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/GAS/TDRL_GASGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GASGameplayAbility() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_GASGameplayAbility();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_GASGameplayAbility_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_GASGameplayAbility::StaticRegisterNativesUTDRL_GASGameplayAbility()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_GASGameplayAbility);
	UClass* Z_Construct_UClass_UTDRL_GASGameplayAbility_NoRegister()
	{
		return UTDRL_GASGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityInputID_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputID_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityInputID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GAS/TDRL_GASGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASGameplayAbility.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::NewProp_AbilityInputID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::NewProp_AbilityInputID_MetaData[] = {
		{ "Category", "TDRL|Ability" },
		{ "Comment", "/*AbilityInputID for this ability class (used for inputs)*/" },
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASGameplayAbility.h" },
		{ "ToolTip", "AbilityInputID for this ability class (used for inputs)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::NewProp_AbilityInputID = { "AbilityInputID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_GASGameplayAbility, AbilityInputID), Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID, METADATA_PARAMS(Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::NewProp_AbilityInputID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::NewProp_AbilityInputID_MetaData)) }; // 2692864829
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::NewProp_AbilityInputID_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::NewProp_AbilityInputID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_GASGameplayAbility>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::ClassParams = {
		&UTDRL_GASGameplayAbility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_GASGameplayAbility()
	{
		if (!Z_Registration_Info_UClass_UTDRL_GASGameplayAbility.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_GASGameplayAbility.OuterSingleton, Z_Construct_UClass_UTDRL_GASGameplayAbility_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_GASGameplayAbility.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_GASGameplayAbility>()
	{
		return UTDRL_GASGameplayAbility::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_GASGameplayAbility);
	UTDRL_GASGameplayAbility::~UTDRL_GASGameplayAbility() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASGameplayAbility_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASGameplayAbility_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_GASGameplayAbility, UTDRL_GASGameplayAbility::StaticClass, TEXT("UTDRL_GASGameplayAbility"), &Z_Registration_Info_UClass_UTDRL_GASGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_GASGameplayAbility), 3333781650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASGameplayAbility_h_4192028443(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASGameplayAbility_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
