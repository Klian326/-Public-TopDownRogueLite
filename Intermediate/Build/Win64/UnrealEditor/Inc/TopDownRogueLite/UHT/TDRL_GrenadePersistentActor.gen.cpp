// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/GrenadePouch/TDRL_GrenadePersistentActor.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GrenadePersistentActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GrenadePersistentActor();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GrenadePersistentActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_GrenadePersistentActor::execEffectExpired)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EffectExpired();
		P_NATIVE_END;
	}
	void ATDRL_GrenadePersistentActor::StaticRegisterNativesATDRL_GrenadePersistentActor()
	{
		UClass* Class = ATDRL_GrenadePersistentActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EffectExpired", &ATDRL_GrenadePersistentActor::execEffectExpired },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_GrenadePersistentActor_EffectExpired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadePersistentActor_EffectExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePersistentActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadePersistentActor_EffectExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadePersistentActor, nullptr, "EffectExpired", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadePersistentActor_EffectExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadePersistentActor_EffectExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadePersistentActor_EffectExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadePersistentActor_EffectExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_GrenadePersistentActor);
	UClass* Z_Construct_UClass_ATDRL_GrenadePersistentActor_NoRegister()
	{
		return ATDRL_GrenadePersistentActor::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpirationTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpirationTimerHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_GrenadePersistentActor_EffectExpired, "EffectExpired" }, // 463001526
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GrenadePouch/TDRL_GrenadePersistentActor.h" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePersistentActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "TDRL|GrenadePersistent" },
		{ "Comment", "/*Grenade trail effect*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePersistentActor.h" },
		{ "ToolTip", "Grenade trail effect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_GrenadePersistentActor, Lifetime), METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_Lifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_Lifetime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_BaseEffect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePersistentActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_BaseEffect = { "BaseEffect", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_GrenadePersistentActor, BaseEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_BaseEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_BaseEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_ExpirationTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePersistentActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_ExpirationTimerHandle = { "ExpirationTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_GrenadePersistentActor, ExpirationTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_ExpirationTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_ExpirationTimerHandle_MetaData)) }; // 4017759265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_BaseEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::NewProp_ExpirationTimerHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_GrenadePersistentActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::ClassParams = {
		&ATDRL_GrenadePersistentActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_GrenadePersistentActor()
	{
		if (!Z_Registration_Info_UClass_ATDRL_GrenadePersistentActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_GrenadePersistentActor.OuterSingleton, Z_Construct_UClass_ATDRL_GrenadePersistentActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_GrenadePersistentActor.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_GrenadePersistentActor>()
	{
		return ATDRL_GrenadePersistentActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_GrenadePersistentActor);
	ATDRL_GrenadePersistentActor::~ATDRL_GrenadePersistentActor() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePersistentActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePersistentActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_GrenadePersistentActor, ATDRL_GrenadePersistentActor::StaticClass, TEXT("ATDRL_GrenadePersistentActor"), &Z_Registration_Info_UClass_ATDRL_GrenadePersistentActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_GrenadePersistentActor), 4087330448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePersistentActor_h_3018525437(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePersistentActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePersistentActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
