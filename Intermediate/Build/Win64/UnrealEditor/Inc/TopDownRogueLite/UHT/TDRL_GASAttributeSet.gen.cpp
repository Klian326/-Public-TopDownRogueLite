// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/GAS/TDRL_GASAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GASAttributeSet() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_GASAttributeSet();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_GASAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(UTDRL_GASAttributeSet::execOnRep_CustomAttribute3)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_Old);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CustomAttribute3(Z_Param_Out_Old);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GASAttributeSet::execOnRep_CustomAttribute2)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_Old);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CustomAttribute2(Z_Param_Out_Old);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GASAttributeSet::execOnRep_CustomAttribute1)
	{
		P_GET_STRUCT_REF(FGameplayAttributeData,Z_Param_Out_Old);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CustomAttribute1(Z_Param_Out_Old);
		P_NATIVE_END;
	}
	void UTDRL_GASAttributeSet::StaticRegisterNativesUTDRL_GASAttributeSet()
	{
		UClass* Class = UTDRL_GASAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_CustomAttribute1", &UTDRL_GASAttributeSet::execOnRep_CustomAttribute1 },
			{ "OnRep_CustomAttribute2", &UTDRL_GASAttributeSet::execOnRep_CustomAttribute2 },
			{ "OnRep_CustomAttribute3", &UTDRL_GASAttributeSet::execOnRep_CustomAttribute3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics
	{
		struct TDRL_GASAttributeSet_eventOnRep_CustomAttribute1_Parms
		{
			FGameplayAttributeData Old;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Old;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::NewProp_Old_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GASAttributeSet_eventOnRep_CustomAttribute1_Parms, Old), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::NewProp_Old_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::NewProp_Old_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::NewProp_Old,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GASAttributeSet, nullptr, "OnRep_CustomAttribute1", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::TDRL_GASAttributeSet_eventOnRep_CustomAttribute1_Parms), Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics
	{
		struct TDRL_GASAttributeSet_eventOnRep_CustomAttribute2_Parms
		{
			FGameplayAttributeData Old;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Old;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::NewProp_Old_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GASAttributeSet_eventOnRep_CustomAttribute2_Parms, Old), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::NewProp_Old_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::NewProp_Old_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::NewProp_Old,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GASAttributeSet, nullptr, "OnRep_CustomAttribute2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::TDRL_GASAttributeSet_eventOnRep_CustomAttribute2_Parms), Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics
	{
		struct TDRL_GASAttributeSet_eventOnRep_CustomAttribute3_Parms
		{
			FGameplayAttributeData Old;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Old;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::NewProp_Old_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GASAttributeSet_eventOnRep_CustomAttribute3_Parms, Old), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::NewProp_Old_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::NewProp_Old_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::NewProp_Old,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASAttributeSet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GASAttributeSet, nullptr, "OnRep_CustomAttribute3", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::TDRL_GASAttributeSet_eventOnRep_CustomAttribute3_Parms), Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_GASAttributeSet);
	UClass* Z_Construct_UClass_UTDRL_GASAttributeSet_NoRegister()
	{
		return UTDRL_GASAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_GASAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomAttribute1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomAttribute1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomAttribute2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomAttribute2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomAttribute3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomAttribute3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute1, "OnRep_CustomAttribute1" }, // 1690207449
		{ &Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute2, "OnRep_CustomAttribute2" }, // 2273176226
		{ &Z_Construct_UFunction_UTDRL_GASAttributeSet_OnRep_CustomAttribute3, "OnRep_CustomAttribute3" }, // 1736422031
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GAS/TDRL_GASAttributeSet.h" },
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute1_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/*Custom Attribute 1*/" },
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASAttributeSet.h" },
		{ "ToolTip", "Custom Attribute 1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute1 = { "CustomAttribute1", "OnRep_CustomAttribute1", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_GASAttributeSet, CustomAttribute1), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute1_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute2_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/*Custom Attribute 2*/" },
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASAttributeSet.h" },
		{ "ToolTip", "Custom Attribute 2" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute2 = { "CustomAttribute2", "OnRep_CustomAttribute2", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_GASAttributeSet, CustomAttribute2), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute2_MetaData)) }; // 1256614452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute3_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/*Custom Attribute 3*/" },
		{ "ModuleRelativePath", "Public/GAS/TDRL_GASAttributeSet.h" },
		{ "ToolTip", "Custom Attribute 3" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute3 = { "CustomAttribute3", "OnRep_CustomAttribute3", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_GASAttributeSet, CustomAttribute3), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute3_MetaData)) }; // 1256614452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::NewProp_CustomAttribute3,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_GASAttributeSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::ClassParams = {
		&UTDRL_GASAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_GASAttributeSet()
	{
		if (!Z_Registration_Info_UClass_UTDRL_GASAttributeSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_GASAttributeSet.OuterSingleton, Z_Construct_UClass_UTDRL_GASAttributeSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_GASAttributeSet.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_GASAttributeSet>()
	{
		return UTDRL_GASAttributeSet::StaticClass();
	}

	void UTDRL_GASAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CustomAttribute1(TEXT("CustomAttribute1"));
		static const FName Name_CustomAttribute2(TEXT("CustomAttribute2"));
		static const FName Name_CustomAttribute3(TEXT("CustomAttribute3"));

		const bool bIsValid = true
			&& Name_CustomAttribute1 == ClassReps[(int32)ENetFields_Private::CustomAttribute1].Property->GetFName()
			&& Name_CustomAttribute2 == ClassReps[(int32)ENetFields_Private::CustomAttribute2].Property->GetFName()
			&& Name_CustomAttribute3 == ClassReps[(int32)ENetFields_Private::CustomAttribute3].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTDRL_GASAttributeSet"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_GASAttributeSet);
	UTDRL_GASAttributeSet::~UTDRL_GASAttributeSet() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_GASAttributeSet, UTDRL_GASAttributeSet::StaticClass, TEXT("UTDRL_GASAttributeSet"), &Z_Registration_Info_UClass_UTDRL_GASAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_GASAttributeSet), 3080504930U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_1684050104(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GAS_TDRL_GASAttributeSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
