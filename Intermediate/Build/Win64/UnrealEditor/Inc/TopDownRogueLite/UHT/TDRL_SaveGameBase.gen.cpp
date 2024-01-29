// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_SaveGameBase.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_SaveGameBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_SaveGameBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_SaveGameBase_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCosmeticParameterList();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_SaveGameBase::StaticRegisterNativesUTDRL_SaveGameBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_SaveGameBase);
	UClass* Z_Construct_UClass_UTDRL_SaveGameBase_NoRegister()
	{
		return UTDRL_SaveGameBase::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_SaveGameBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCosmetics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCosmetics;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Currencies_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Currencies_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Currencies_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Currencies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_SaveGameBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_SaveGameBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Gameplay/TDRL_SaveGameBase.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_SaveGameBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_DefaultCosmetics_MetaData[] = {
		{ "Category", "TDRL|Savegame" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_SaveGameBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_DefaultCosmetics = { "DefaultCosmetics", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_SaveGameBase, DefaultCosmetics), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_DefaultCosmetics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_DefaultCosmetics_MetaData)) }; // 3104133227
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies_ValueProp = { "Currencies", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies_Key_KeyProp = { "Currencies_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies_MetaData[] = {
		{ "Category", "TDRL|Savegame" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_SaveGameBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies = { "Currencies", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_SaveGameBase, Currencies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_SaveGameBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_DefaultCosmetics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_SaveGameBase_Statics::NewProp_Currencies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_SaveGameBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_SaveGameBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_SaveGameBase_Statics::ClassParams = {
		&UTDRL_SaveGameBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_SaveGameBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_SaveGameBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_SaveGameBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_SaveGameBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_SaveGameBase()
	{
		if (!Z_Registration_Info_UClass_UTDRL_SaveGameBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_SaveGameBase.OuterSingleton, Z_Construct_UClass_UTDRL_SaveGameBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_SaveGameBase.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_SaveGameBase>()
	{
		return UTDRL_SaveGameBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_SaveGameBase);
	UTDRL_SaveGameBase::~UTDRL_SaveGameBase() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SaveGameBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SaveGameBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_SaveGameBase, UTDRL_SaveGameBase::StaticClass, TEXT("UTDRL_SaveGameBase"), &Z_Registration_Info_UClass_UTDRL_SaveGameBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_SaveGameBase), 2826391517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SaveGameBase_h_193904106(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SaveGameBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SaveGameBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
