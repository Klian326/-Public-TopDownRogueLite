// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/AI/TDRL_AISplineTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_AISplineTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_AISplineTool();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_AISplineTool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_AISplineTool::execGetSplineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USplineComponent**)Z_Param__Result=P_THIS->GetSplineComponent();
		P_NATIVE_END;
	}
	void ATDRL_AISplineTool::StaticRegisterNativesATDRL_AISplineTool()
	{
		UClass* Class = ATDRL_AISplineTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSplineComponent", &ATDRL_AISplineTool::execGetSplineComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics
	{
		struct TDRL_AISplineTool_eventGetSplineComponent_Parms
		{
			USplineComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_AISplineTool_eventGetSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Components" },
		{ "Comment", "/*Return AI SplineComponent*/" },
		{ "DisplayName", "GetSplineComponent" },
		{ "ModuleRelativePath", "Public/AI/TDRL_AISplineTool.h" },
		{ "ToolTip", "Return AI SplineComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_AISplineTool, nullptr, "GetSplineComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::TDRL_AISplineTool_eventGetSplineComponent_Parms), Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_AISplineTool);
	UClass* Z_Construct_UClass_ATDRL_AISplineTool_NoRegister()
	{
		return ATDRL_AISplineTool::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_AISplineTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_AISplineTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_AISplineTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_AISplineTool_GetSplineComponent, "GetSplineComponent" }, // 2092351897
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_AISplineTool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/TDRL_AISplineTool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AI/TDRL_AISplineTool.h" },
		{ "ShortTooltip", "AI Main Spline tool for movement managing. It can be assigned to AIs and can be used for custom logics." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/TDRL_AISplineTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_AISplineTool, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Spline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/TDRL_AISplineTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_AISplineTool, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Spline_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_AISplineTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_AISplineTool_Statics::NewProp_Spline,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_AISplineTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_AISplineTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_AISplineTool_Statics::ClassParams = {
		&ATDRL_AISplineTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_AISplineTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_AISplineTool_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_AISplineTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_AISplineTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_AISplineTool()
	{
		if (!Z_Registration_Info_UClass_ATDRL_AISplineTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_AISplineTool.OuterSingleton, Z_Construct_UClass_ATDRL_AISplineTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_AISplineTool.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_AISplineTool>()
	{
		return ATDRL_AISplineTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_AISplineTool);
	ATDRL_AISplineTool::~ATDRL_AISplineTool() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_AISplineTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_AISplineTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_AISplineTool, ATDRL_AISplineTool::StaticClass, TEXT("ATDRL_AISplineTool"), &Z_Registration_Info_UClass_ATDRL_AISplineTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_AISplineTool), 2403394425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_AISplineTool_h_1559303645(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_AISplineTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_AI_TDRL_AISplineTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
