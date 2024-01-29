// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Projectile/TDRL_ProjectileBase.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_ItemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_ProjectileBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UCullingField_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialFalloff_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialVector_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectileBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectileBase_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileStaticData();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execDestroyProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyProjectile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execRegisterInstancesDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_MainLocationHit);
		P_GET_UBOOL(Z_Param_UsePitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterInstancesDirection_Implementation(Z_Param_MainLocationHit,Z_Param_UsePitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execGatherInstancesDirection_Client)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GatherInstancesDirection_Client_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execGatherInstancesDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GatherInstancesDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execApplyProjectileImpactField_MultiUnreliable)
	{
		P_GET_STRUCT(FVector,Z_Param_FieldOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyProjectileImpactField_MultiUnreliable_Implementation(Z_Param_FieldOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execApplyProjectileImpactField_MultiReliable)
	{
		P_GET_STRUCT(FVector,Z_Param_FieldOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyProjectileImpactField_MultiReliable_Implementation(Z_Param_FieldOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execApplyProjectileImpactField)
	{
		P_GET_STRUCT(FVector,Z_Param_FieldOrigin);
		P_GET_UBOOL(Z_Param_NetworkReliable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyProjectileImpactField(Z_Param_FieldOrigin,Z_Param_NetworkReliable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execGetRadialFalloff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URadialFalloff**)Z_Param__Result=P_THIS->GetRadialFalloff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execGetRadialVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URadialVector**)Z_Param__Result=P_THIS->GetRadialVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execGetCullingField)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCullingField**)Z_Param__Result=P_THIS->GetCullingField();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_ProjectileBase::execGetFieldSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFieldSystemComponent**)Z_Param__Result=P_THIS->GetFieldSystem();
		P_NATIVE_END;
	}
	struct TDRL_ProjectileBase_eventApplyProjectileImpactField_MultiReliable_Parms
	{
		FVector FieldOrigin;
	};
	struct TDRL_ProjectileBase_eventApplyProjectileImpactField_MultiUnreliable_Parms
	{
		FVector FieldOrigin;
	};
	struct TDRL_ProjectileBase_eventRegisterInstancesDirection_Parms
	{
		FVector MainLocationHit;
		bool UsePitch;
	};
	static FName NAME_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable = FName(TEXT("ApplyProjectileImpactField_MultiReliable"));
	void ATDRL_ProjectileBase::ApplyProjectileImpactField_MultiReliable(const FVector FieldOrigin)
	{
		TDRL_ProjectileBase_eventApplyProjectileImpactField_MultiReliable_Parms Parms;
		Parms.FieldOrigin=FieldOrigin;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable),&Parms);
	}
	static FName NAME_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable = FName(TEXT("ApplyProjectileImpactField_MultiUnreliable"));
	void ATDRL_ProjectileBase::ApplyProjectileImpactField_MultiUnreliable(const FVector FieldOrigin)
	{
		TDRL_ProjectileBase_eventApplyProjectileImpactField_MultiUnreliable_Parms Parms;
		Parms.FieldOrigin=FieldOrigin;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable),&Parms);
	}
	static FName NAME_ATDRL_ProjectileBase_GatherInstancesDirection_Client = FName(TEXT("GatherInstancesDirection_Client"));
	void ATDRL_ProjectileBase::GatherInstancesDirection_Client()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_ProjectileBase_GatherInstancesDirection_Client),NULL);
	}
	static FName NAME_ATDRL_ProjectileBase_RegisterInstancesDirection = FName(TEXT("RegisterInstancesDirection"));
	void ATDRL_ProjectileBase::RegisterInstancesDirection(const FVector MainLocationHit, bool UsePitch)
	{
		TDRL_ProjectileBase_eventRegisterInstancesDirection_Parms Parms;
		Parms.MainLocationHit=MainLocationHit;
		Parms.UsePitch=UsePitch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_ProjectileBase_RegisterInstancesDirection),&Parms);
	}
	void ATDRL_ProjectileBase::StaticRegisterNativesATDRL_ProjectileBase()
	{
		UClass* Class = ATDRL_ProjectileBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyProjectileImpactField", &ATDRL_ProjectileBase::execApplyProjectileImpactField },
			{ "ApplyProjectileImpactField_MultiReliable", &ATDRL_ProjectileBase::execApplyProjectileImpactField_MultiReliable },
			{ "ApplyProjectileImpactField_MultiUnreliable", &ATDRL_ProjectileBase::execApplyProjectileImpactField_MultiUnreliable },
			{ "DestroyProjectile", &ATDRL_ProjectileBase::execDestroyProjectile },
			{ "GatherInstancesDirection", &ATDRL_ProjectileBase::execGatherInstancesDirection },
			{ "GatherInstancesDirection_Client", &ATDRL_ProjectileBase::execGatherInstancesDirection_Client },
			{ "GetCullingField", &ATDRL_ProjectileBase::execGetCullingField },
			{ "GetFieldSystem", &ATDRL_ProjectileBase::execGetFieldSystem },
			{ "GetRadialFalloff", &ATDRL_ProjectileBase::execGetRadialFalloff },
			{ "GetRadialVector", &ATDRL_ProjectileBase::execGetRadialVector },
			{ "RegisterInstancesDirection", &ATDRL_ProjectileBase::execRegisterInstancesDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics
	{
		struct TDRL_ProjectileBase_eventApplyProjectileImpactField_Parms
		{
			FVector FieldOrigin;
			bool NetworkReliable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkReliable_MetaData[];
#endif
		static void NewProp_NetworkReliable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NetworkReliable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_FieldOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_FieldOrigin = { "FieldOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileBase_eventApplyProjectileImpactField_Parms, FieldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_FieldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_FieldOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_NetworkReliable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_NetworkReliable_SetBit(void* Obj)
	{
		((TDRL_ProjectileBase_eventApplyProjectileImpactField_Parms*)Obj)->NetworkReliable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_NetworkReliable = { "NetworkReliable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_ProjectileBase_eventApplyProjectileImpactField_Parms), &Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_NetworkReliable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_NetworkReliable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_NetworkReliable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_FieldOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::NewProp_NetworkReliable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Apply Field, used for Chaos destructions*/" },
		{ "DisplayName", "Apply Projectile Impact Field" },
		{ "Keywords", "Apply Projectile Impact Field TDRL" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
		{ "ToolTip", "Apply Field, used for Chaos destructions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "ApplyProjectileImpactField", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::TDRL_ProjectileBase_eventApplyProjectileImpactField_Parms), Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::NewProp_FieldOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::NewProp_FieldOrigin = { "FieldOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileBase_eventApplyProjectileImpactField_MultiReliable_Parms, FieldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::NewProp_FieldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::NewProp_FieldOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::NewProp_FieldOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "ApplyProjectileImpactField_MultiReliable", nullptr, nullptr, sizeof(TDRL_ProjectileBase_eventApplyProjectileImpactField_MultiReliable_Parms), Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin = { "FieldOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileBase_eventApplyProjectileImpactField_MultiUnreliable_Parms, FieldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "ApplyProjectileImpactField_MultiUnreliable", nullptr, nullptr, sizeof(TDRL_ProjectileBase_eventApplyProjectileImpactField_MultiUnreliable_Parms), Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_DestroyProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_DestroyProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_DestroyProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "DestroyProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_DestroyProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_DestroyProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_DestroyProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_DestroyProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "GatherInstancesDirection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Client_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Client_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Client_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "GatherInstancesDirection_Client", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Client_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Client_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Client()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Client_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics
	{
		struct TDRL_ProjectileBase_eventGetCullingField_Parms
		{
			UCullingField* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileBase_eventGetCullingField_Parms, ReturnValue), Z_Construct_UClass_UCullingField_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Components" },
		{ "DisplayName", "Get Culling Field" },
		{ "Keywords", "Get Culling Field TDRL" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "GetCullingField", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::TDRL_ProjectileBase_eventGetCullingField_Parms), Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics
	{
		struct TDRL_ProjectileBase_eventGetFieldSystem_Parms
		{
			UFieldSystemComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileBase_eventGetFieldSystem_Parms, ReturnValue), Z_Construct_UClass_UFieldSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Components" },
		{ "DisplayName", "Get Field System" },
		{ "Keywords", "Get Field System TDRL" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "GetFieldSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::TDRL_ProjectileBase_eventGetFieldSystem_Parms), Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics
	{
		struct TDRL_ProjectileBase_eventGetRadialFalloff_Parms
		{
			URadialFalloff* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileBase_eventGetRadialFalloff_Parms, ReturnValue), Z_Construct_UClass_URadialFalloff_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Components" },
		{ "DisplayName", "Get Radial Falloff" },
		{ "Keywords", "Get Radial Falloff TDRL" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "GetRadialFalloff", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::TDRL_ProjectileBase_eventGetRadialFalloff_Parms), Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics
	{
		struct TDRL_ProjectileBase_eventGetRadialVector_Parms
		{
			URadialVector* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileBase_eventGetRadialVector_Parms, ReturnValue), Z_Construct_UClass_URadialVector_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Components" },
		{ "DisplayName", "Get Culling Field" },
		{ "Keywords", "Get Culling Field TDRL" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "GetRadialVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::TDRL_ProjectileBase_eventGetRadialVector_Parms), Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainLocationHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainLocationHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsePitch_MetaData[];
#endif
		static void NewProp_UsePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_MainLocationHit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_MainLocationHit = { "MainLocationHit", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProjectileBase_eventRegisterInstancesDirection_Parms, MainLocationHit), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_MainLocationHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_MainLocationHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_UsePitch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_UsePitch_SetBit(void* Obj)
	{
		((TDRL_ProjectileBase_eventRegisterInstancesDirection_Parms*)Obj)->UsePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_UsePitch = { "UsePitch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_ProjectileBase_eventRegisterInstancesDirection_Parms), &Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_UsePitch_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_UsePitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_UsePitch_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_MainLocationHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::NewProp_UsePitch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_ProjectileBase, nullptr, "RegisterInstancesDirection", nullptr, nullptr, sizeof(TDRL_ProjectileBase_eventRegisterInstancesDirection_Parms), Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_ProjectileBase);
	UClass* Z_Construct_UClass_ATDRL_ProjectileBase_NoRegister()
	{
		return ATDRL_ProjectileBase::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_ProjectileBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileStaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectileStaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DebugLifetime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancesDirection_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancesDirection_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancesDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LifeTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullingField_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CullingField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialVector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialFalloff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_ProjectileBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_ProjectileBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField, "ApplyProjectileImpactField" }, // 1930752824
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiReliable, "ApplyProjectileImpactField_MultiReliable" }, // 979176256
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_ApplyProjectileImpactField_MultiUnreliable, "ApplyProjectileImpactField_MultiUnreliable" }, // 3635292653
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_DestroyProjectile, "DestroyProjectile" }, // 486498376
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection, "GatherInstancesDirection" }, // 3297265735
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_GatherInstancesDirection_Client, "GatherInstancesDirection_Client" }, // 2882631754
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_GetCullingField, "GetCullingField" }, // 2064512435
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_GetFieldSystem, "GetFieldSystem" }, // 4120616959
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialFalloff, "GetRadialFalloff" }, // 1983326724
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_GetRadialVector, "GetRadialVector" }, // 139755010
		{ &Z_Construct_UFunction_ATDRL_ProjectileBase_RegisterInstancesDirection, "RegisterInstancesDirection" }, // 1462560865
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Projectile/TDRL_ProjectileBase.h" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_ProjectileStaticData_MetaData[] = {
		{ "Category", "TDRL|Data|Projectile" },
		{ "Comment", "/*Projectile static data*/" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
		{ "ToolTip", "Projectile static data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_ProjectileStaticData = { "ProjectileStaticData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileBase, ProjectileStaticData), Z_Construct_UScriptStruct_FProjectileStaticData, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_ProjectileStaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_ProjectileStaticData_MetaData)) }; // 2620381584
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "TDRL|Projectile" },
		{ "Comment", "/*Enable visual debug*/" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
		{ "ToolTip", "Enable visual debug" },
	};
#endif
	void Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((ATDRL_ProjectileBase*)Obj)->bEnableDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_ProjectileBase), &Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_bEnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_bEnableDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_DebugLifetime_MetaData[] = {
		{ "Category", "TDRL|Projectile" },
		{ "Comment", "/*Debug lifetime*/" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
		{ "ToolTip", "Debug lifetime" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_DebugLifetime = { "DebugLifetime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileBase, DebugLifetime), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_DebugLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_DebugLifetime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_InstancesDirection_Inner = { "InstancesDirection", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_InstancesDirection_MetaData[] = {
		{ "Category", "TDRL|Projectile|Runtime" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_InstancesDirection = { "InstancesDirection", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileBase, InstancesDirection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_InstancesDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_InstancesDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_LifeTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_LifeTimerHandle = { "LifeTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileBase, LifeTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_LifeTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_LifeTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_FieldSystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TDRL|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_FieldSystem = { "FieldSystem", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileBase, FieldSystem), Z_Construct_UClass_UFieldSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_FieldSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_FieldSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_CullingField_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TDRL|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_CullingField = { "CullingField", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileBase, CullingField), Z_Construct_UClass_UCullingField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_CullingField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_CullingField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialVector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TDRL|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialVector = { "RadialVector", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileBase, RadialVector), Z_Construct_UClass_URadialVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialFalloff_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TDRL|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectileBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialFalloff = { "RadialFalloff", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectileBase, RadialFalloff), Z_Construct_UClass_URadialFalloff_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialFalloff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_ProjectileBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_ProjectileStaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_bEnableDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_DebugLifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_InstancesDirection_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_InstancesDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_LifeTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_FieldSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_CullingField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectileBase_Statics::NewProp_RadialFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_ProjectileBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_ProjectileBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_ProjectileBase_Statics::ClassParams = {
		&ATDRL_ProjectileBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_ProjectileBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectileBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_ProjectileBase()
	{
		if (!Z_Registration_Info_UClass_ATDRL_ProjectileBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_ProjectileBase.OuterSingleton, Z_Construct_UClass_ATDRL_ProjectileBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_ProjectileBase.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_ProjectileBase>()
	{
		return ATDRL_ProjectileBase::StaticClass();
	}

	void ATDRL_ProjectileBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InstancesDirection(TEXT("InstancesDirection"));

		const bool bIsValid = true
			&& Name_InstancesDirection == ClassReps[(int32)ENetFields_Private::InstancesDirection].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDRL_ProjectileBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_ProjectileBase);
	ATDRL_ProjectileBase::~ATDRL_ProjectileBase() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_ProjectileBase, ATDRL_ProjectileBase::StaticClass, TEXT("ATDRL_ProjectileBase"), &Z_Registration_Info_UClass_ATDRL_ProjectileBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_ProjectileBase), 3463076071U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileBase_h_2628343925(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectileBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
