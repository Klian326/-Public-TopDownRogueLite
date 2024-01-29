// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Items/TDRL_Melee.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "TopDownRogueLite/Public/Types/TDRL_ItemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_Melee() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UCullingField_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialFalloff_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialVector_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Melee();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Melee_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Weapon();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeStaticData();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_Melee::execMeleeHit)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeleeHit(Z_Param_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execOpenAttackWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenAttackWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execAttackCountdownOverTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackCountdownOverTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execAttackWindowOverTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackWindowOverTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execTraceAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TraceAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execStopAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execStartAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execMeleeHit_Effects)
	{
		P_GET_STRUCT(FHitResult,Z_Param_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeleeHit_Effects_Implementation(Z_Param_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execApplyMeleeImpactField_MultiUnreliable)
	{
		P_GET_STRUCT(FVector,Z_Param_FieldOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyMeleeImpactField_MultiUnreliable_Implementation(Z_Param_FieldOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execApplyMeleeImpactField_MultiReliable)
	{
		P_GET_STRUCT(FVector,Z_Param_FieldOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyMeleeImpactField_MultiReliable_Implementation(Z_Param_FieldOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execApplyMeleeImpactField)
	{
		P_GET_STRUCT(FVector,Z_Param_FieldOrigin);
		P_GET_UBOOL(Z_Param_NetworkReliable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyMeleeImpactField(Z_Param_FieldOrigin,Z_Param_NetworkReliable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execGetAttackMontageBasedOnDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetAttackMontageBasedOnDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execClearDamageBodies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDamageBodies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execRemoveDamageBodies)
	{
		P_GET_TARRAY(UShapeComponent*,Z_Param_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDamageBodies(Z_Param_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execRemoveDamageBody)
	{
		P_GET_OBJECT(UShapeComponent,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveDamageBody(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execAddDamageBodies)
	{
		P_GET_TARRAY(UShapeComponent*,Z_Param_Items);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDamageBodies(Z_Param_Items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Melee::execAddDamageBody)
	{
		P_GET_OBJECT(UShapeComponent,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDamageBody(Z_Param_Item);
		P_NATIVE_END;
	}
	struct TDRL_Melee_eventApplyMeleeImpactField_MultiReliable_Parms
	{
		FVector FieldOrigin;
	};
	struct TDRL_Melee_eventApplyMeleeImpactField_MultiUnreliable_Parms
	{
		FVector FieldOrigin;
	};
	struct TDRL_Melee_eventMeleeHit_Effects_Parms
	{
		FHitResult Hit;
	};
	static FName NAME_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable = FName(TEXT("ApplyMeleeImpactField_MultiReliable"));
	void ATDRL_Melee::ApplyMeleeImpactField_MultiReliable(const FVector FieldOrigin)
	{
		TDRL_Melee_eventApplyMeleeImpactField_MultiReliable_Parms Parms;
		Parms.FieldOrigin=FieldOrigin;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable),&Parms);
	}
	static FName NAME_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable = FName(TEXT("ApplyMeleeImpactField_MultiUnreliable"));
	void ATDRL_Melee::ApplyMeleeImpactField_MultiUnreliable(const FVector FieldOrigin)
	{
		TDRL_Melee_eventApplyMeleeImpactField_MultiUnreliable_Parms Parms;
		Parms.FieldOrigin=FieldOrigin;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable),&Parms);
	}
	static FName NAME_ATDRL_Melee_MeleeHit_Effects = FName(TEXT("MeleeHit_Effects"));
	void ATDRL_Melee::MeleeHit_Effects(const FHitResult Hit)
	{
		TDRL_Melee_eventMeleeHit_Effects_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Melee_MeleeHit_Effects),&Parms);
	}
	void ATDRL_Melee::StaticRegisterNativesATDRL_Melee()
	{
		UClass* Class = ATDRL_Melee::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDamageBodies", &ATDRL_Melee::execAddDamageBodies },
			{ "AddDamageBody", &ATDRL_Melee::execAddDamageBody },
			{ "ApplyMeleeImpactField", &ATDRL_Melee::execApplyMeleeImpactField },
			{ "ApplyMeleeImpactField_MultiReliable", &ATDRL_Melee::execApplyMeleeImpactField_MultiReliable },
			{ "ApplyMeleeImpactField_MultiUnreliable", &ATDRL_Melee::execApplyMeleeImpactField_MultiUnreliable },
			{ "AttackCountdownOverTimer", &ATDRL_Melee::execAttackCountdownOverTimer },
			{ "AttackWindowOverTimer", &ATDRL_Melee::execAttackWindowOverTimer },
			{ "ClearDamageBodies", &ATDRL_Melee::execClearDamageBodies },
			{ "GetAttackMontageBasedOnDirection", &ATDRL_Melee::execGetAttackMontageBasedOnDirection },
			{ "MeleeHit", &ATDRL_Melee::execMeleeHit },
			{ "MeleeHit_Effects", &ATDRL_Melee::execMeleeHit_Effects },
			{ "OpenAttackWindow", &ATDRL_Melee::execOpenAttackWindow },
			{ "RemoveDamageBodies", &ATDRL_Melee::execRemoveDamageBodies },
			{ "RemoveDamageBody", &ATDRL_Melee::execRemoveDamageBody },
			{ "StartAttack", &ATDRL_Melee::execStartAttack },
			{ "StopAttack", &ATDRL_Melee::execStopAttack },
			{ "TraceAttack", &ATDRL_Melee::execTraceAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics
	{
		struct TDRL_Melee_eventAddDamageBodies_Parms
		{
			TArray<UShapeComponent*> Items;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::NewProp_Items_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventAddDamageBodies_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::NewProp_Items_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::NewProp_Items,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Melee" },
		{ "Comment", "/*Add multiple bodies to the \"DamageBodies\" list*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Add multiple bodies to the \"DamageBodies\" list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "AddDamageBodies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::TDRL_Melee_eventAddDamageBodies_Parms), Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics
	{
		struct TDRL_Melee_eventAddDamageBody_Parms
		{
			UShapeComponent* Item;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventAddDamageBody_Parms, Item), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Melee" },
		{ "Comment", "/*Add a body to the \"DamageBodies\" list*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Add a body to the \"DamageBodies\" list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "AddDamageBody", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::TDRL_Melee_eventAddDamageBody_Parms), Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_AddDamageBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_AddDamageBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics
	{
		struct TDRL_Melee_eventApplyMeleeImpactField_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_FieldOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_FieldOrigin = { "FieldOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventApplyMeleeImpactField_Parms, FieldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_FieldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_FieldOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_NetworkReliable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_NetworkReliable_SetBit(void* Obj)
	{
		((TDRL_Melee_eventApplyMeleeImpactField_Parms*)Obj)->NetworkReliable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_NetworkReliable = { "NetworkReliable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Melee_eventApplyMeleeImpactField_Parms), &Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_NetworkReliable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_NetworkReliable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_NetworkReliable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_FieldOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::NewProp_NetworkReliable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "DisplayName", "Apply Projectile Impact Field" },
		{ "Keywords", "Apply Projectile Impact Field TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "ApplyMeleeImpactField", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::TDRL_Melee_eventApplyMeleeImpactField_Parms), Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::NewProp_FieldOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::NewProp_FieldOrigin = { "FieldOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventApplyMeleeImpactField_MultiReliable_Parms, FieldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::NewProp_FieldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::NewProp_FieldOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::NewProp_FieldOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "ApplyMeleeImpactField_MultiReliable", nullptr, nullptr, sizeof(TDRL_Melee_eventApplyMeleeImpactField_MultiReliable_Parms), Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin = { "FieldOrigin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventApplyMeleeImpactField_MultiUnreliable_Parms, FieldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::NewProp_FieldOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "ApplyMeleeImpactField_MultiUnreliable", nullptr, nullptr, sizeof(TDRL_Melee_eventApplyMeleeImpactField_MultiUnreliable_Parms), Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_AttackCountdownOverTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_AttackCountdownOverTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_AttackCountdownOverTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "AttackCountdownOverTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_AttackCountdownOverTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_AttackCountdownOverTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_AttackCountdownOverTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_AttackCountdownOverTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_AttackWindowOverTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_AttackWindowOverTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_AttackWindowOverTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "AttackWindowOverTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_AttackWindowOverTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_AttackWindowOverTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_AttackWindowOverTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_AttackWindowOverTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_ClearDamageBodies_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_ClearDamageBodies_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Melee" },
		{ "Comment", "/*Clear \"DamageBodies\" list*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Clear \"DamageBodies\" list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_ClearDamageBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "ClearDamageBodies", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_ClearDamageBodies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_ClearDamageBodies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_ClearDamageBodies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_ClearDamageBodies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics
	{
		struct TDRL_Melee_eventGetAttackMontageBasedOnDirection_Parms
		{
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventGetAttackMontageBasedOnDirection_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Melee" },
		{ "Comment", "/*Return an attack montage based on the movement direction of the character using it*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Return an attack montage based on the movement direction of the character using it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "GetAttackMontageBasedOnDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::TDRL_Melee_eventGetAttackMontageBasedOnDirection_Parms), Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics
	{
		struct TDRL_Melee_eventMeleeHit_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventMeleeHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "MeleeHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::TDRL_Melee_eventMeleeHit_Parms), Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_MeleeHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventMeleeHit_Effects_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "MeleeHit_Effects", nullptr, nullptr, sizeof(TDRL_Melee_eventMeleeHit_Effects_Parms), Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_OpenAttackWindow_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_OpenAttackWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_OpenAttackWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "OpenAttackWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_OpenAttackWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_OpenAttackWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_OpenAttackWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_OpenAttackWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics
	{
		struct TDRL_Melee_eventRemoveDamageBodies_Parms
		{
			TArray<UShapeComponent*> Items;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::NewProp_Items_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010008000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventRemoveDamageBodies_Parms, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::NewProp_Items_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::NewProp_Items,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Melee" },
		{ "Comment", "/*Remove multiple bodies from the \"DamageBodies\" list*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Remove multiple bodies from the \"DamageBodies\" list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "RemoveDamageBodies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::TDRL_Melee_eventRemoveDamageBodies_Parms), Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics
	{
		struct TDRL_Melee_eventRemoveDamageBody_Parms
		{
			UShapeComponent* Item;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Melee_eventRemoveDamageBody_Parms, Item), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::NewProp_Item_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Melee" },
		{ "Comment", "/*Remove a body from the \"DamageBodies\" list*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Remove a body from the \"DamageBodies\" list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "RemoveDamageBody", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::TDRL_Melee_eventRemoveDamageBody_Parms), Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics
	{
		struct TDRL_Melee_eventStartAttack_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_Melee_eventStartAttack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Melee_eventStartAttack_Parms), &Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Melee" },
		{ "Comment", "/*Starts the melee attack*/" },
		{ "DisplayName", "StartAttack(Melee)" },
		{ "Keywords", "Start Melee Attack TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Starts the melee attack" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "StartAttack", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::TDRL_Melee_eventStartAttack_Parms), Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_StartAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_StartAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_StopAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_StopAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Melee" },
		{ "Comment", "/*Immediately stops the attack*/" },
		{ "DisplayName", "StopAttack(Melee)" },
		{ "Keywords", "Stop Melee Attack TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Immediately stops the attack" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_StopAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "StopAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_StopAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_StopAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_StopAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_StopAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Melee_TraceAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Melee_TraceAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Melee_TraceAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Melee, nullptr, "TraceAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Melee_TraceAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Melee_TraceAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Melee_TraceAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Melee_TraceAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_Melee);
	UClass* Z_Construct_UClass_ATDRL_Melee_NoRegister()
	{
		return ATDRL_Melee::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_Melee_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeleeStaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeleeStaticData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageBodies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageBodies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DamageBodies;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedVFXs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedVFXs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedVFXs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[];
#endif
		static void NewProp_bIsAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExcludeFromFutureHit_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeFromFutureHit_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeFromFutureHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimerWindowDelayHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTimerWindowDelayHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackTimerWindowHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttackTimerWindowHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastTraceLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTraceLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastTraceLocations;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TagFilter_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TagFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_Melee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDRL_Weapon,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_Melee_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_Melee_AddDamageBodies, "AddDamageBodies" }, // 2116151268
		{ &Z_Construct_UFunction_ATDRL_Melee_AddDamageBody, "AddDamageBody" }, // 2385146849
		{ &Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField, "ApplyMeleeImpactField" }, // 2047797221
		{ &Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiReliable, "ApplyMeleeImpactField_MultiReliable" }, // 3970242570
		{ &Z_Construct_UFunction_ATDRL_Melee_ApplyMeleeImpactField_MultiUnreliable, "ApplyMeleeImpactField_MultiUnreliable" }, // 1273446166
		{ &Z_Construct_UFunction_ATDRL_Melee_AttackCountdownOverTimer, "AttackCountdownOverTimer" }, // 4286507799
		{ &Z_Construct_UFunction_ATDRL_Melee_AttackWindowOverTimer, "AttackWindowOverTimer" }, // 1801361536
		{ &Z_Construct_UFunction_ATDRL_Melee_ClearDamageBodies, "ClearDamageBodies" }, // 4005810230
		{ &Z_Construct_UFunction_ATDRL_Melee_GetAttackMontageBasedOnDirection, "GetAttackMontageBasedOnDirection" }, // 2892797928
		{ &Z_Construct_UFunction_ATDRL_Melee_MeleeHit, "MeleeHit" }, // 3649328252
		{ &Z_Construct_UFunction_ATDRL_Melee_MeleeHit_Effects, "MeleeHit_Effects" }, // 1220731931
		{ &Z_Construct_UFunction_ATDRL_Melee_OpenAttackWindow, "OpenAttackWindow" }, // 1852324756
		{ &Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBodies, "RemoveDamageBodies" }, // 491454920
		{ &Z_Construct_UFunction_ATDRL_Melee_RemoveDamageBody, "RemoveDamageBody" }, // 3297341177
		{ &Z_Construct_UFunction_ATDRL_Melee_StartAttack, "StartAttack" }, // 2762776655
		{ &Z_Construct_UFunction_ATDRL_Melee_StopAttack, "StopAttack" }, // 2697065505
		{ &Z_Construct_UFunction_ATDRL_Melee_TraceAttack, "TraceAttack" }, // 1155628042
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/TDRL_Melee.h" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_FieldSystem_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TDRL|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_FieldSystem = { "FieldSystem", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, FieldSystem), Z_Construct_UClass_UFieldSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_FieldSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_FieldSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_CullingField_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TDRL|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_CullingField = { "CullingField", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, CullingField), Z_Construct_UClass_UCullingField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_CullingField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_CullingField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialVector_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TDRL|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialVector = { "RadialVector", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, RadialVector), Z_Construct_UClass_URadialVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialFalloff_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TDRL|Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialFalloff = { "RadialFalloff", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, RadialFalloff), Z_Construct_UClass_URadialFalloff_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_MeleeStaticData_MetaData[] = {
		{ "Category", "TDRL|Data|Melee" },
		{ "Comment", "/* Static Data structure for MeleeItems*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Static Data structure for MeleeItems" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_MeleeStaticData = { "MeleeStaticData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, MeleeStaticData), Z_Construct_UScriptStruct_FMeleeStaticData, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_MeleeStaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_MeleeStaticData_MetaData)) }; // 2689668820
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_DamageBodies_Inner = { "DamageBodies", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_DamageBodies_MetaData[] = {
		{ "Category", "TDRL|Melee|Runtime" },
		{ "Comment", "/*List of bodies used as reference for the melee trace*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "List of bodies used as reference for the melee trace" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_DamageBodies = { "DamageBodies", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, DamageBodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_DamageBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_DamageBodies_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_GeneratedVFXs_Inner = { "GeneratedVFXs", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_GeneratedVFXs_MetaData[] = {
		{ "Category", "TDRL|Melee|Runtime" },
		{ "Comment", "/*Cached pointers to all the GeneratedVFXs*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "Cached pointers to all the GeneratedVFXs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_GeneratedVFXs = { "GeneratedVFXs", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, GeneratedVFXs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_GeneratedVFXs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_GeneratedVFXs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "TDRL|Melee|Runtime" },
		{ "Comment", "/*True when this melee weapon is being used for attaking*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
		{ "ToolTip", "True when this melee weapon is being used for attaking" },
	};
#endif
	void Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
	{
		((ATDRL_Melee*)Obj)->bIsAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_Melee), &Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_bIsAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_bIsAttacking_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_ExcludeFromFutureHit_Inner = { "ExcludeFromFutureHit", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_ExcludeFromFutureHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_ExcludeFromFutureHit = { "ExcludeFromFutureHit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, ExcludeFromFutureHit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_ExcludeFromFutureHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_ExcludeFromFutureHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowDelayHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowDelayHandle = { "AttackTimerWindowDelayHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, AttackTimerWindowDelayHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowDelayHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowDelayHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowHandle = { "AttackTimerWindowHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, AttackTimerWindowHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowHandle_MetaData)) }; // 4017759265
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_LastTraceLocations_Inner = { "LastTraceLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_LastTraceLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_LastTraceLocations = { "LastTraceLocations", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, LastTraceLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_LastTraceLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_LastTraceLocations_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_TagFilter_Inner = { "TagFilter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_TagFilter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Melee.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_TagFilter = { "TagFilter", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Melee, TagFilter), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_TagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_TagFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_Melee_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_FieldSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_CullingField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_RadialFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_MeleeStaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_DamageBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_DamageBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_GeneratedVFXs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_GeneratedVFXs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_bIsAttacking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_ExcludeFromFutureHit_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_ExcludeFromFutureHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowDelayHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_AttackTimerWindowHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_LastTraceLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_LastTraceLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_TagFilter_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Melee_Statics::NewProp_TagFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_Melee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_Melee>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_Melee_Statics::ClassParams = {
		&ATDRL_Melee::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_Melee_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_Melee_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Melee_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_Melee()
	{
		if (!Z_Registration_Info_UClass_ATDRL_Melee.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_Melee.OuterSingleton, Z_Construct_UClass_ATDRL_Melee_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_Melee.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_Melee>()
	{
		return ATDRL_Melee::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_Melee);
	ATDRL_Melee::~ATDRL_Melee() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_Melee, ATDRL_Melee::StaticClass, TEXT("ATDRL_Melee"), &Z_Registration_Info_UClass_ATDRL_Melee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_Melee), 3104332099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_1451433406(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Melee_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
