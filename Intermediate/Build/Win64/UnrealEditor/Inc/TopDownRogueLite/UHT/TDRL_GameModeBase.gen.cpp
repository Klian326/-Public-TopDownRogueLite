// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GameModeBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GameModeBase_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GameStateBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_GameModeBase::execGetGameStateTDRL)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATDRL_GameStateBase**)Z_Param__Result=P_THIS->GetGameStateTDRL();
		P_NATIVE_END;
	}
	void ATDRL_GameModeBase::StaticRegisterNativesATDRL_GameModeBase()
	{
		UClass* Class = ATDRL_GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameStateTDRL", &ATDRL_GameModeBase::execGetGameStateTDRL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics
	{
		struct TDRL_GameModeBase_eventGetGameStateTDRL_Parms
		{
			ATDRL_GameStateBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GameModeBase_eventGetGameStateTDRL_Parms, ReturnValue), Z_Construct_UClass_ATDRL_GameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GameMode" },
		{ "Comment", "/*Returns the current TDRL Game State*/" },
		{ "DisplayName", "GetGameState(TDRL)" },
		{ "Keywords", "Get Game State TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_GameModeBase.h" },
		{ "ToolTip", "Returns the current TDRL Game State" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GameModeBase, nullptr, "GetGameStateTDRL", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::TDRL_GameModeBase_eventGetGameStateTDRL_Parms), Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_GameModeBase);
	UClass* Z_Construct_UClass_ATDRL_GameModeBase_NoRegister()
	{
		return ATDRL_GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerSpawnTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultPlayerSpawnTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_GameModeBase_GetGameStateTDRL, "GetGameStateTDRL" }, // 4258001988
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gameplay/TDRL_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GameModeBase_Statics::NewProp_DefaultPlayerSpawnTag_MetaData[] = {
		{ "Category", "TDRL|GameMode" },
		{ "Comment", "/*StartTag to use on spawn. This will determine which spawn will be chosen.*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_GameModeBase.h" },
		{ "ToolTip", "StartTag to use on spawn. This will determine which spawn will be chosen." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_GameModeBase_Statics::NewProp_DefaultPlayerSpawnTag = { "DefaultPlayerSpawnTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_GameModeBase, DefaultPlayerSpawnTag), METADATA_PARAMS(Z_Construct_UClass_ATDRL_GameModeBase_Statics::NewProp_DefaultPlayerSpawnTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GameModeBase_Statics::NewProp_DefaultPlayerSpawnTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_GameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_GameModeBase_Statics::NewProp_DefaultPlayerSpawnTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_GameModeBase_Statics::ClassParams = {
		&ATDRL_GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_GameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATDRL_GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_GameModeBase.OuterSingleton, Z_Construct_UClass_ATDRL_GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_GameModeBase.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_GameModeBase>()
	{
		return ATDRL_GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_GameModeBase);
	ATDRL_GameModeBase::~ATDRL_GameModeBase() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_GameModeBase, ATDRL_GameModeBase::StaticClass, TEXT("ATDRL_GameModeBase"), &Z_Registration_Info_UClass_ATDRL_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_GameModeBase), 2263697292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameModeBase_h_3622108957(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
