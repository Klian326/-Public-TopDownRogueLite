// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/GrenadePouch/TDRL_GrenadeBase.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_ItemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GrenadeBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GrenadeBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FGrenadeStaticData();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execSetProjectileInitialVelocity)
	{
		P_GET_STRUCT(FVector,Z_Param_LocalNewVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectileInitialVelocity(Z_Param_LocalNewVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execGetProjectileMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UProjectileMovementComponent**)Z_Param__Result=P_THIS->GetProjectileMovementComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execInt_SpawnExplosionEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Int_SpawnExplosionEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execSpawnExplosionEffects_Multi)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnExplosionEffects_Multi_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execSpawnExplosionEffects_Server)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnExplosionEffects_Server_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execSpawnExplosionEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnExplosionEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execGrenadeExploded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrenadeExploded_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execTrailEffectDeactivated)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraPtr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrailEffectDeactivated(Z_Param_NiagaraPtr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_GrenadeBase::execInt_Exploded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Int_Exploded();
		P_NATIVE_END;
	}
	static FName NAME_ATDRL_GrenadeBase_GrenadeExploded = FName(TEXT("GrenadeExploded"));
	void ATDRL_GrenadeBase::GrenadeExploded()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_GrenadeBase_GrenadeExploded),NULL);
	}
	static FName NAME_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi = FName(TEXT("SpawnExplosionEffects_Multi"));
	void ATDRL_GrenadeBase::SpawnExplosionEffects_Multi()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi),NULL);
	}
	static FName NAME_ATDRL_GrenadeBase_SpawnExplosionEffects_Server = FName(TEXT("SpawnExplosionEffects_Server"));
	void ATDRL_GrenadeBase::SpawnExplosionEffects_Server()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_GrenadeBase_SpawnExplosionEffects_Server),NULL);
	}
	void ATDRL_GrenadeBase::StaticRegisterNativesATDRL_GrenadeBase()
	{
		UClass* Class = ATDRL_GrenadeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectileMovementComponent", &ATDRL_GrenadeBase::execGetProjectileMovementComponent },
			{ "GrenadeExploded", &ATDRL_GrenadeBase::execGrenadeExploded },
			{ "Int_Exploded", &ATDRL_GrenadeBase::execInt_Exploded },
			{ "Int_SpawnExplosionEffects", &ATDRL_GrenadeBase::execInt_SpawnExplosionEffects },
			{ "SetProjectileInitialVelocity", &ATDRL_GrenadeBase::execSetProjectileInitialVelocity },
			{ "SpawnExplosionEffects", &ATDRL_GrenadeBase::execSpawnExplosionEffects },
			{ "SpawnExplosionEffects_Multi", &ATDRL_GrenadeBase::execSpawnExplosionEffects_Multi },
			{ "SpawnExplosionEffects_Server", &ATDRL_GrenadeBase::execSpawnExplosionEffects_Server },
			{ "TrailEffectDeactivated", &ATDRL_GrenadeBase::execTrailEffectDeactivated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics
	{
		struct TDRL_GrenadeBase_eventGetProjectileMovementComponent_Parms
		{
			UProjectileMovementComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadeBase_eventGetProjectileMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Grenades" },
		{ "Comment", "/*Return the ProjectileMovementComponent for this grenade*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
		{ "ToolTip", "Return the ProjectileMovementComponent for this grenade" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "GetProjectileMovementComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::TDRL_GrenadeBase_eventGetProjectileMovementComponent_Parms), Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_GrenadeExploded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_GrenadeExploded_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Grenade" },
		{ "Comment", "/*Trigger grenade explosion, will evenctually happen when Lifetime (StaticData) expires*/" },
		{ "DisplayName", "Grenade Exploded" },
		{ "Keywords", "Grenade Exploded TDRL" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
		{ "ToolTip", "Trigger grenade explosion, will evenctually happen when Lifetime (StaticData) expires" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_GrenadeExploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "GrenadeExploded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_GrenadeExploded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_GrenadeExploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_GrenadeExploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_GrenadeExploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_Int_Exploded_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_Int_Exploded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_Int_Exploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "Int_Exploded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_Int_Exploded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_Int_Exploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_Int_Exploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_Int_Exploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_Int_SpawnExplosionEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_Int_SpawnExplosionEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_Int_SpawnExplosionEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "Int_SpawnExplosionEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_Int_SpawnExplosionEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_Int_SpawnExplosionEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_Int_SpawnExplosionEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_Int_SpawnExplosionEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics
	{
		struct TDRL_GrenadeBase_eventSetProjectileInitialVelocity_Parms
		{
			FVector LocalNewVelocity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalNewVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalNewVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::NewProp_LocalNewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::NewProp_LocalNewVelocity = { "LocalNewVelocity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadeBase_eventSetProjectileInitialVelocity_Parms, LocalNewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::NewProp_LocalNewVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::NewProp_LocalNewVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::NewProp_LocalNewVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Grenades" },
		{ "Comment", "/*Set InitialVelocity for this grenade*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
		{ "ToolTip", "Set InitialVelocity for this grenade" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "SetProjectileInitialVelocity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::TDRL_GrenadeBase_eventSetProjectileInitialVelocity_Parms), Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Grenade" },
		{ "Comment", "/*Spawn explosion effects (replicated)*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
		{ "ToolTip", "Spawn explosion effects (replicated)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "SpawnExplosionEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "SpawnExplosionEffects_Multi", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Server_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "SpawnExplosionEffects_Server", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics
	{
		struct TDRL_GrenadeBase_eventTrailEffectDeactivated_Parms
		{
			UNiagaraComponent* NiagaraPtr;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::NewProp_NiagaraPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::NewProp_NiagaraPtr = { "NiagaraPtr", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadeBase_eventTrailEffectDeactivated_Parms, NiagaraPtr), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::NewProp_NiagaraPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::NewProp_NiagaraPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::NewProp_NiagaraPtr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_GrenadeBase, nullptr, "TrailEffectDeactivated", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::TDRL_GrenadeBase_eventTrailEffectDeactivated_Parms), Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_GrenadeBase);
	UClass* Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister()
	{
		return ATDRL_GrenadeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_GrenadeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadeStaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadeStaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplosionTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_GrenadeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_GrenadeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_GetProjectileMovementComponent, "GetProjectileMovementComponent" }, // 3403704542
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_GrenadeExploded, "GrenadeExploded" }, // 2104060135
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_Int_Exploded, "Int_Exploded" }, // 1825507397
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_Int_SpawnExplosionEffects, "Int_SpawnExplosionEffects" }, // 3979855407
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_SetProjectileInitialVelocity, "SetProjectileInitialVelocity" }, // 3258982639
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects, "SpawnExplosionEffects" }, // 966615537
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Multi, "SpawnExplosionEffects_Multi" }, // 4201136503
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_SpawnExplosionEffects_Server, "SpawnExplosionEffects_Server" }, // 1395554447
		{ &Z_Construct_UFunction_ATDRL_GrenadeBase_TrailEffectDeactivated, "TrailEffectDeactivated" }, // 2569329910
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GrenadePouch/TDRL_GrenadeBase.h" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_GrenadeStaticData_MetaData[] = {
		{ "Category", "TDRL|Grenade" },
		{ "Comment", "/*Static data for this grenade class*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
		{ "ToolTip", "Static data for this grenade class" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_GrenadeStaticData = { "GrenadeStaticData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_GrenadeBase, GrenadeStaticData), Z_Construct_UScriptStruct_FGrenadeStaticData, METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_GrenadeStaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_GrenadeStaticData_MetaData)) }; // 1230780390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ExplosionTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ExplosionTimerHandle = { "ExplosionTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_GrenadeBase, ExplosionTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ExplosionTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ExplosionTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_GrenadeBase, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_TrailEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadeBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_TrailEffect = { "TrailEffect", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_GrenadeBase, TrailEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_TrailEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_TrailEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_GrenadeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_GrenadeStaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ExplosionTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_ProjectileMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_GrenadeBase_Statics::NewProp_TrailEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_GrenadeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_GrenadeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_GrenadeBase_Statics::ClassParams = {
		&ATDRL_GrenadeBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_GrenadeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_GrenadeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_GrenadeBase()
	{
		if (!Z_Registration_Info_UClass_ATDRL_GrenadeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_GrenadeBase.OuterSingleton, Z_Construct_UClass_ATDRL_GrenadeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_GrenadeBase.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_GrenadeBase>()
	{
		return ATDRL_GrenadeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_GrenadeBase);
	ATDRL_GrenadeBase::~ATDRL_GrenadeBase() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_GrenadeBase, ATDRL_GrenadeBase::StaticClass, TEXT("ATDRL_GrenadeBase"), &Z_Registration_Info_UClass_ATDRL_GrenadeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_GrenadeBase), 2555276032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_698626364(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
