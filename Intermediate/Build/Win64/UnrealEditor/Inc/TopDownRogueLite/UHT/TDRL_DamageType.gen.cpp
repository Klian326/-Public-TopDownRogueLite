// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Types/TDRL_DamageType.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_DamageType() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDamageType();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_DamageType();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_DamageType_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FStunParameters();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_DamageType::StaticRegisterNativesUTDRL_DamageType()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_DamageType);
	UClass* Z_Construct_UClass_UTDRL_DamageType_NoRegister()
	{
		return UTDRL_DamageType::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_DamageType_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CriticalProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CriticalProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StunProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StunProbability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stun_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stun;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_DamageType_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDamageType,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_DamageType_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Types/TDRL_DamageType.h" },
		{ "ModuleRelativePath", "Public/Types/TDRL_DamageType.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_CriticalProbability_MetaData[] = {
		{ "Category", "TDRL|DamageType" },
		{ "ModuleRelativePath", "Public/Types/TDRL_DamageType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_CriticalProbability = { "CriticalProbability", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_DamageType, CriticalProbability), METADATA_PARAMS(Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_CriticalProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_CriticalProbability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_StunProbability_MetaData[] = {
		{ "Category", "TDRL|DamageType" },
		{ "ModuleRelativePath", "Public/Types/TDRL_DamageType.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_StunProbability = { "StunProbability", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_DamageType, StunProbability), METADATA_PARAMS(Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_StunProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_StunProbability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_Stun_MetaData[] = {
		{ "Category", "TDRL|DamageType" },
		{ "ModuleRelativePath", "Public/Types/TDRL_DamageType.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_Stun = { "Stun", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_DamageType, Stun), Z_Construct_UScriptStruct_FStunParameters, METADATA_PARAMS(Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_Stun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_Stun_MetaData)) }; // 1924132683
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_DamageType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_CriticalProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_StunProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_DamageType_Statics::NewProp_Stun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_DamageType_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_DamageType>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_DamageType_Statics::ClassParams = {
		&UTDRL_DamageType::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_DamageType_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_DamageType_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_DamageType_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_DamageType_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_DamageType()
	{
		if (!Z_Registration_Info_UClass_UTDRL_DamageType.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_DamageType.OuterSingleton, Z_Construct_UClass_UTDRL_DamageType_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_DamageType.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_DamageType>()
	{
		return UTDRL_DamageType::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_DamageType);
	UTDRL_DamageType::~UTDRL_DamageType() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_DamageType_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_DamageType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_DamageType, UTDRL_DamageType::StaticClass, TEXT("UTDRL_DamageType"), &Z_Registration_Info_UClass_UTDRL_DamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_DamageType), 2207581201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_DamageType_h_303744360(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_DamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_DamageType_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
