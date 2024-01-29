// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Projectile/TDRL_ProjectileTrace.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_ProjectileTrace() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectileBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectileTrace();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectileTrace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_ProjectileTrace::execTrailVFXSpawnComplete)
	{
		P_GET_TARRAY_REF(UNiagaraComponent*,Z_Param_Out_SpawnedTrailEffects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TrailVFXSpawnComplete_Implementation(Z_Param_Out_SpawnedTrailEffects);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileTrace::execTraceProjectile)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TraceProjectile(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileTrace::execRegisterIgnoringActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterIgnoringActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileTrace::execProjectileHit)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_GET_PROPERTY(FIntProperty,Z_Param_TraceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileHit_Implementation(Z_Param_Hit,Z_Param_TraceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileTrace::execUpdateVFXs)
	{
		P_GET_TARRAY(FVector,Z_Param_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVFXs_Implementation(Z_Param_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileTrace::execSpawnVFXs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnVFXs_Implementation();
		P_NATIVE_END;
	}
	struct TDRL_ProjectileTrace_eventProjectileHit_Parms
	{
		FHitResult Hit;
		int32 TraceIndex;
	};
	struct TDRL_ProjectileTrace_eventTrailVFXSpawnComplete_Parms
	{
		TArray<UNiagaraComponent*> SpawnedTrailEffects;
	};
	struct TDRL_ProjectileTrace_eventUpdateVFXs_Parms
	{
		TArray<FVector> NewLocation;
	};
	static FName NAME_ATDRL_ProjectileTrace_ProjectileHit = FName(TEXT("ProjectileHit"));
	void ATDRL_ProjectileTrace::ProjectileHit(const FHitResult Hit, const int32 TraceIndex)
	{
		TDRL_ProjectileTrace_eventProjectileHit_Parms Parms;
		Parms.Hit=Hit;
		Parms.TraceIndex=TraceIndex;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_ProjectileTrace_ProjectileHit),&Parms);
	}
	static FName NAME_ATDRL_ProjectileTrace_SpawnVFXs = FName(TEXT("SpawnVFXs"));
	void ATDRL_ProjectileTrace::SpawnVFXs()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_ProjectileTrace_SpawnVFXs),NULL);
	}
	static FName NAME_ATDRL_ProjectileTrace_TrailVFXSpawnComplete = FName(TEXT("TrailVFXSpawnComplete"));
	void ATDRL_ProjectileTrace::TrailVFXSpawnComplete(TArray<UNiagaraComponent*> const& SpawnedTrailEffects)
	{
		TDRL_ProjectileTrace_eventTrailVFXSpawnComplete_Parms Parms;
		Parms.SpawnedTrailEffects=SpawnedTrailEffects;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_ProjectileTrace_TrailVFXSpawnComplete),&Parms);
	}
	static FName NAME_ATDRL_ProjectileTrace_UpdateVFXs = FName(TEXT("UpdateVFXs"));
	void ATDRL_ProjectileTrace::UpdateVFXs(TArray<FVector> const& NewLocation)
	{
		TDRL_ProjectileTrace_eventUpdateVFXs_Parms Parms;
		Parms.NewLocation=NewLocation;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_ProjectileTrace_UpdateVFXs),&Parms);
	}
	void ATDRL_ProjectileTrace::StaticRegisterNativesATDRL_ProjectileTrace()
	{
		UClass* Class = ATDRL_ProjectileTrace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProjectileHit", &ATDRL_ProjectileTrace::execProjectileHit },
			{ "RegisterIgnoringActors", &ATDRL_ProjectileTrace::execRegisterIgnoringActors },
			{ "SpawnVFXs", &ATDRL_ProjectileTrace::execSpawnVFXs },
			{ "TraceProjectile", &ATDRL_ProjectileTrace::execTraceProjectile },
			{ "TrailVFXSpawnComplete", &ATDRL_ProjectileTrace::execTrailVFXSpawnComplete },
			{ "UpdateVFXs", &ATDRL_ProjectileTrace::execUpdateVFXs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TraceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileTrace_eventProjectileHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_TraceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_TraceIndex = { "TraceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileTrace_eventProjectileHit_Parms, TraceIndex), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_TraceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_TraceIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_Hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::NewProp_TraceIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileTrace, nullptr, "ProjectileHit", nullptr, nullptr, sizeof(TDRL_ProjectileTrace_eventProjectileHit_Parms), Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileTrace_RegisterIgnoringActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_RegisterIgnoringActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileTrace_RegisterIgnoringActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileTrace, nullptr, "RegisterIgnoringActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_RegisterIgnoringActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_RegisterIgnoringActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileTrace_RegisterIgnoringActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileTrace_RegisterIgnoringActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileTrace_SpawnVFXs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_SpawnVFXs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileTrace_SpawnVFXs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileTrace, nullptr, "SpawnVFXs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_SpawnVFXs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_SpawnVFXs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileTrace_SpawnVFXs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileTrace_SpawnVFXs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics
	{
		struct TDRL_ProjectileTrace_eventTraceProjectile_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileTrace_eventTraceProjectile_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileTrace, nullptr, "TraceProjectile", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::TDRL_ProjectileTrace_eventTraceProjectile_Parms), Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedTrailEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedTrailEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedTrailEffects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::NewProp_SpawnedTrailEffects_Inner = { "SpawnedTrailEffects", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::NewProp_SpawnedTrailEffects_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::NewProp_SpawnedTrailEffects = { "SpawnedTrailEffects", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileTrace_eventTrailVFXSpawnComplete_Parms, SpawnedTrailEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::NewProp_SpawnedTrailEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::NewProp_SpawnedTrailEffects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::NewProp_SpawnedTrailEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::NewProp_SpawnedTrailEffects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Projectile|Trace" },
		{ "Comment", "/*Fired after all VFXs are spawned*/" },
		{ "DisplayName", "VFXs Spawn Complete" },
		{ "Keywords", "VFX Spawn Complete Trail TDRL" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
		{ "ToolTip", "Fired after all VFXs are spawned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileTrace, nullptr, "TrailVFXSpawnComplete", nullptr, nullptr, sizeof(TDRL_ProjectileTrace_eventTrailVFXSpawnComplete_Parms), Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::NewProp_NewLocation_Inner = { "NewLocation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileTrace_eventUpdateVFXs_Parms, NewLocation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::NewProp_NewLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::NewProp_NewLocation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileTrace, nullptr, "UpdateVFXs", nullptr, nullptr, sizeof(TDRL_ProjectileTrace_eventUpdateVFXs_Parms), Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_ProjectileTrace);
	UClass* Z_Construct_UClass_ATDRL_ProjectileTrace_NoRegister()
	{
		return ATDRL_ProjectileTrace::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_ProjectileTrace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletTrail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletTrail;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceChannels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailEffects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailEffects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrailEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastTraceLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTraceLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastTraceLocations;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnoreWhenTracing_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnoreWhenTracing_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnoreWhenTracing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDRL_ProjectileBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_ProjectileTrace_ProjectileHit, "ProjectileHit" }, // 1853047679
		{ &Z_Construct_UFunction_ATDRL_ProjectileTrace_RegisterIgnoringActors, "RegisterIgnoringActors" }, // 3488662883
		{ &Z_Construct_UFunction_ATDRL_ProjectileTrace_SpawnVFXs, "SpawnVFXs" }, // 2848256695
		{ &Z_Construct_UFunction_ATDRL_ProjectileTrace_TraceProjectile, "TraceProjectile" }, // 1499710342
		{ &Z_Construct_UFunction_ATDRL_ProjectileTrace_TrailVFXSpawnComplete, "TrailVFXSpawnComplete" }, // 3027890059
		{ &Z_Construct_UFunction_ATDRL_ProjectileTrace_UpdateVFXs, "UpdateVFXs" }, // 3301369911
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile/TDRL_ProjectileTrace.h" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceRadius_MetaData[] = {
		{ "Category", "TDRL|Projectile|Trace" },
		{ "Comment", "/*Trace thickness (Radius)*/" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
		{ "ToolTip", "Trace thickness (Radius)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceRadius = { "TraceRadius", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileTrace, TraceRadius), METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceSpeed_MetaData[] = {
		{ "Category", "TDRL|Projectile|Trace" },
		{ "Comment", "/*Trace speed*/" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
		{ "ToolTip", "Trace speed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceSpeed = { "TraceSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileTrace, TraceSpeed), METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_BulletTrail_MetaData[] = {
		{ "Category", "TDRL|Projectile|Trace" },
		{ "Comment", "/*VFX used to visualize this projectile while travielling*/" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
		{ "ToolTip", "VFX used to visualize this projectile while travielling" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_BulletTrail = { "BulletTrail", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileTrace, BulletTrail), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_BulletTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_BulletTrail_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceChannels_Inner = { "TraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceChannels_MetaData[] = {
		{ "Category", "TDRL|Projectile|Trace" },
		{ "Comment", "/*Channels to test against for hit results*/" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
		{ "ToolTip", "Channels to test against for hit results" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceChannels = { "TraceChannels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileTrace, TraceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceChannels_MetaData)) }; // 3629342158
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TrailEffects_Inner = { "TrailEffects", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TrailEffects_MetaData[] = {
		{ "Category", "TDRL|Projectile|Trace|VFX" },
		{ "Comment", "/*List of Niagara components spawnerd*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
		{ "ToolTip", "List of Niagara components spawnerd" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TrailEffects = { "TrailEffects", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileTrace, TrailEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TrailEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TrailEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileTrace, SpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_SpawnPoint_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_LastTraceLocations_Inner = { "LastTraceLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_LastTraceLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_LastTraceLocations = { "LastTraceLocations", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileTrace, LastTraceLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_LastTraceLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_LastTraceLocations_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_ActorsToIgnoreWhenTracing_Inner = { "ActorsToIgnoreWhenTracing", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_ActorsToIgnoreWhenTracing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileTrace.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_ActorsToIgnoreWhenTracing = { "ActorsToIgnoreWhenTracing", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileTrace, ActorsToIgnoreWhenTracing), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_ActorsToIgnoreWhenTracing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_ActorsToIgnoreWhenTracing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_BulletTrail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TraceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TrailEffects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_TrailEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_SpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_LastTraceLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_LastTraceLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_ActorsToIgnoreWhenTracing_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::NewProp_ActorsToIgnoreWhenTracing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_ProjectileTrace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::ClassParams = {
		&ATDRL_ProjectileTrace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_ProjectileTrace()
	{
		if (!Z_Registration_Info_UClass_ATDRL_ProjectileTrace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_ProjectileTrace.OuterSingleton, Z_Construct_UClass_ATDRL_ProjectileTrace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_ProjectileTrace.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_ProjectileTrace>()
	{
		return ATDRL_ProjectileTrace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_ProjectileTrace);
	ATDRL_ProjectileTrace::~ATDRL_ProjectileTrace() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_ProjectileTrace, ATDRL_ProjectileTrace::StaticClass, TEXT("ATDRL_ProjectileTrace"), &Z_Registration_Info_UClass_ATDRL_ProjectileTrace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_ProjectileTrace), 1496891942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_638545058(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileTrace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
