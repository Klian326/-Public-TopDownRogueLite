// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTTask_SwitchWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTTask_SwitchWeapon() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Item_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTTask_SwitchWeapon::StaticRegisterNativesUTDRL_BTTask_SwitchWeapon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTTask_SwitchWeapon);
	UClass* Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_NoRegister()
	{
		return UTDRL_BTTask_SwitchWeapon::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Method_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecificSlot_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpecificSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Switch Weapon Slot" },
		{ "IncludePath", "AI/Nodes/TDRL_BTTask_SwitchWeapon.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SwitchWeapon.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_Method_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_Method_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Which weapon should be selected?*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SwitchWeapon.h" },
		{ "ToolTip", "Which weapon should be selected?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_SwitchWeapon, Method), Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_Method_MetaData)) }; // 158569138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_SpecificSlot_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Specific slot to select*/" },
		{ "EditCondition", "Method == EAISwitchWeaponMethod::ASW_SpecificSlot" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SwitchWeapon.h" },
		{ "ToolTip", "Specific slot to select" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_SpecificSlot = { "SpecificSlot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_SwitchWeapon, SpecificSlot), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_SpecificSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_SpecificSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "/*Specific class to select*/" },
		{ "EditCondition", "Method == EAISwitchWeaponMethod::ASW_WeaponClass" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTTask_SwitchWeapon.h" },
		{ "ToolTip", "Specific class to select" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTTask_SwitchWeapon, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_Item_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_ItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_ItemClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_Method_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_Method,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_SpecificSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::NewProp_ItemClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTTask_SwitchWeapon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::ClassParams = {
		&UTDRL_BTTask_SwitchWeapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTTask_SwitchWeapon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTTask_SwitchWeapon.OuterSingleton, Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTTask_SwitchWeapon.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTTask_SwitchWeapon>()
	{
		return UTDRL_BTTask_SwitchWeapon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTTask_SwitchWeapon);
	UTDRL_BTTask_SwitchWeapon::~UTDRL_BTTask_SwitchWeapon() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SwitchWeapon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SwitchWeapon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTTask_SwitchWeapon, UTDRL_BTTask_SwitchWeapon::StaticClass, TEXT("UTDRL_BTTask_SwitchWeapon"), &Z_Registration_Info_UClass_UTDRL_BTTask_SwitchWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTTask_SwitchWeapon), 3514137959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SwitchWeapon_h_2720584465(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SwitchWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTTask_SwitchWeapon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
