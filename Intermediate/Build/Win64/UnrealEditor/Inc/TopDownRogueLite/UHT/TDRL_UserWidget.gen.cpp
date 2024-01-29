// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/HUD/TDRL_UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_UserWidget() {}
// Cross Module References
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_HUD_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_UserWidget();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_UserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(UTDRL_UserWidget::execSetHUDReference)
	{
		P_GET_OBJECT(ATDRL_HUD,Z_Param_Reference);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHUDReference(Z_Param_Reference);
		P_NATIVE_END;
	}
	void UTDRL_UserWidget::StaticRegisterNativesUTDRL_UserWidget()
	{
		UClass* Class = UTDRL_UserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHUDReference", &UTDRL_UserWidget::execSetHUDReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics
	{
		struct TDRL_UserWidget_eventSetHUDReference_Parms
		{
			ATDRL_HUD* Reference;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Reference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::NewProp_Reference = { "Reference", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_UserWidget_eventSetHUDReference_Parms, Reference), Z_Construct_UClass_ATDRL_HUD_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::NewProp_Reference,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|HUD" },
		{ "Comment", "/*Set a new pointer to the current HUD actor*/" },
		{ "DisplayName", "SetHUDReference" },
		{ "Keywords", "Set HUD Reference TDRL" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_UserWidget.h" },
		{ "ToolTip", "Set a new pointer to the current HUD actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_UserWidget, nullptr, "SetHUDReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::TDRL_UserWidget_eventSetHUDReference_Parms), Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_UserWidget);
	UClass* Z_Construct_UClass_UTDRL_UserWidget_NoRegister()
	{
		return UTDRL_UserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_UserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_UserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_UserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_UserWidget_SetHUDReference, "SetHUDReference" }, // 2402014930
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_UserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/TDRL_UserWidget.h" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_UserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_UserWidget_Statics::NewProp_HUDReference_MetaData[] = {
		{ "Category", "TDRL|HUD|Runtime" },
		{ "Comment", "/*Pointer to the current HUD actor*/" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_UserWidget.h" },
		{ "ToolTip", "Pointer to the current HUD actor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTDRL_UserWidget_Statics::NewProp_HUDReference = { "HUDReference", nullptr, (EPropertyFlags)0x0011000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_UserWidget, HUDReference), Z_Construct_UClass_ATDRL_HUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTDRL_UserWidget_Statics::NewProp_HUDReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_UserWidget_Statics::NewProp_HUDReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_UserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_UserWidget_Statics::NewProp_HUDReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_UserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_UserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_UserWidget_Statics::ClassParams = {
		&UTDRL_UserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_UserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_UserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_UserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_UserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_UserWidget()
	{
		if (!Z_Registration_Info_UClass_UTDRL_UserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_UserWidget.OuterSingleton, Z_Construct_UClass_UTDRL_UserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_UserWidget.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_UserWidget>()
	{
		return UTDRL_UserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_UserWidget);
	UTDRL_UserWidget::~UTDRL_UserWidget() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_UserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_UserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_UserWidget, UTDRL_UserWidget::StaticClass, TEXT("UTDRL_UserWidget"), &Z_Registration_Info_UClass_UTDRL_UserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_UserWidget), 1840400440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_UserWidget_h_2554267878(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_UserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_UserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
