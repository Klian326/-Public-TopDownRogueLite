// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_SpawnVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_SpawnVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_SpawnVolume();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_SpawnVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(ATDRL_SpawnVolume::execSelectRelatedNPCSpawns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectRelatedNPCSpawns();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void ATDRL_SpawnVolume::StaticRegisterNativesATDRL_SpawnVolume()
	{
#if WITH_EDITOR
		UClass* Class = ATDRL_SpawnVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SelectRelatedNPCSpawns", &ATDRL_SpawnVolume::execSelectRelatedNPCSpawns },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ATDRL_SpawnVolume_SelectRelatedNPCSpawns_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_SpawnVolume_SelectRelatedNPCSpawns_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TDRL" },
		{ "Comment", "/*Select all the related NPCSpawns*/" },
		{ "DisplayName", "Select Related NPCSpawns" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_SpawnVolume.h" },
		{ "ToolTip", "Select all the related NPCSpawns" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_SpawnVolume_SelectRelatedNPCSpawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_SpawnVolume, nullptr, "SelectRelatedNPCSpawns", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_SpawnVolume_SelectRelatedNPCSpawns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_SpawnVolume_SelectRelatedNPCSpawns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_SpawnVolume_SelectRelatedNPCSpawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_SpawnVolume_SelectRelatedNPCSpawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_SpawnVolume);
	UClass* Z_Construct_UClass_ATDRL_SpawnVolume_NoRegister()
	{
		return ATDRL_SpawnVolume::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_SpawnVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_SpawnVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_SpawnVolume_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ATDRL_SpawnVolume_SelectRelatedNPCSpawns, "SelectRelatedNPCSpawns" }, // 3988130371
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_SpawnVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Gameplay/TDRL_SpawnVolume.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_SpawnVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_SpawnVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_SpawnVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_SpawnVolume_Statics::ClassParams = {
		&ATDRL_SpawnVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_SpawnVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_SpawnVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_SpawnVolume()
	{
		if (!Z_Registration_Info_UClass_ATDRL_SpawnVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_SpawnVolume.OuterSingleton, Z_Construct_UClass_ATDRL_SpawnVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_SpawnVolume.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_SpawnVolume>()
	{
		return ATDRL_SpawnVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_SpawnVolume);
	ATDRL_SpawnVolume::~ATDRL_SpawnVolume() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SpawnVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SpawnVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_SpawnVolume, ATDRL_SpawnVolume::StaticClass, TEXT("ATDRL_SpawnVolume"), &Z_Registration_Info_UClass_ATDRL_SpawnVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_SpawnVolume), 509894492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SpawnVolume_h_2844588497(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SpawnVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_SpawnVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
