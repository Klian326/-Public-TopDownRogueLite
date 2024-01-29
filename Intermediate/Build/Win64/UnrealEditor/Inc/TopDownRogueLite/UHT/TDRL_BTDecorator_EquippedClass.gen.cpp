// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/Nodes/TDRL_BTDecorator_EquippedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BTDecorator_EquippedClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Item_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void UTDRL_BTDecorator_EquippedClass::StaticRegisterNativesUTDRL_BTDecorator_EquippedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BTDecorator_EquippedClass);
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_NoRegister()
	{
		return UTDRL_BTDecorator_EquippedClass::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeSubclass_MetaData[];
#endif
		static void NewProp_bCanBeSubclass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeSubclass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickCheckInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickCheckInterval;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTDRL_BTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Item Class is Equipped" },
		{ "IncludePath", "AI/Nodes/TDRL_BTDecorator_EquippedClass.h" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_EquippedClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Will return true if the equipped item is equal to this class*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_EquippedClass.h" },
		{ "ToolTip", "Will return true if the equipped item is equal to this class" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_EquippedClass, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_Item_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_bCanBeSubclass_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/*Can be a subclass of ParentClass*/" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_EquippedClass.h" },
		{ "ToolTip", "Can be a subclass of ParentClass" },
	};
#endif
	void Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_bCanBeSubclass_SetBit(void* Obj)
	{
		((UTDRL_BTDecorator_EquippedClass*)Obj)->bCanBeSubclass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_bCanBeSubclass = { "bCanBeSubclass", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_BTDecorator_EquippedClass), &Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_bCanBeSubclass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_bCanBeSubclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_bCanBeSubclass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_TickCheckInterval_MetaData[] = {
		{ "Category", "Tick" },
		{ "ModuleRelativePath", "Public/AI/Nodes/TDRL_BTDecorator_EquippedClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_TickCheckInterval = { "TickCheckInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_BTDecorator_EquippedClass, TickCheckInterval), METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_TickCheckInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_TickCheckInterval_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_bCanBeSubclass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::NewProp_TickCheckInterval,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BTDecorator_EquippedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::ClassParams = {
		&UTDRL_BTDecorator_EquippedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BTDecorator_EquippedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BTDecorator_EquippedClass.OuterSingleton, Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BTDecorator_EquippedClass.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BTDecorator_EquippedClass>()
	{
		return UTDRL_BTDecorator_EquippedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BTDecorator_EquippedClass);
	UTDRL_BTDecorator_EquippedClass::~UTDRL_BTDecorator_EquippedClass() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_EquippedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_EquippedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BTDecorator_EquippedClass, UTDRL_BTDecorator_EquippedClass::StaticClass, TEXT("UTDRL_BTDecorator_EquippedClass"), &Z_Registration_Info_UClass_UTDRL_BTDecorator_EquippedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BTDecorator_EquippedClass), 1162144354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_EquippedClass_h_2364541032(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_EquippedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_Nodes_TDRL_BTDecorator_EquippedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
