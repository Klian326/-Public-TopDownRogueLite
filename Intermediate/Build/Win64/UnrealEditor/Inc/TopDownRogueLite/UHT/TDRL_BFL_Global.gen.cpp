// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_BFL_Global.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_PhysicsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_BFL_Global() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GameModeBase_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GameStateBase_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_HUD_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PlayersSpawn_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BFL_Global();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_BFL_Global_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCosmeticParameterList();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffect();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FStunParameters();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(UTDRL_BFL_Global::execApplyRadialFieldAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FPhysicsFieldRadialHitData,Z_Param_RadialHitData);
		P_GET_STRUCT(FPhysicsFieldComponentsHitData,Z_Param_PhysHitComps);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTDRL_BFL_Global::ApplyRadialFieldAtLocation(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_RadialHitData,Z_Param_PhysHitComps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execSpawnStatusVFXs)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FStatusEffect,Z_Param_Value);
		P_GET_OBJECT(USceneComponent,Z_Param_TargetComp);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_GeneratedAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTDRL_BFL_Global::SpawnStatusVFXs(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_TargetComp,Z_Param_BoneName,Z_Param_Out_GeneratedAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execSpawnHitVFXsFromHit)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FHitResult,Z_Param_InHit);
		P_GET_OBJECT(UDataTable,Z_Param_EffectsDataTable);
		P_GET_TARRAY_REF(USceneComponent*,Z_Param_Out_GeneratedAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTDRL_BFL_Global::SpawnHitVFXsFromHit(Z_Param_WorldContextObject,Z_Param_InHit,Z_Param_EffectsDataTable,Z_Param_Out_GeneratedAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execSetActorHiddenInGameWithAttached)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_bShouldHide);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTDRL_BFL_Global::SetActorHiddenInGameWithAttached(Z_Param_WorldContextObject,Z_Param_InActor,Z_Param_bShouldHide);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execApplyCustomProperties)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TMAP(FName,FName,Z_Param_InProperties);
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UTDRL_BFL_Global::ApplyCustomProperties(Z_Param_WorldContextObject,Z_Param_InProperties,Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execCosmeticParamToMergeParam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FCosmeticParameterList,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMergeSkeletalMeshesParameters*)Z_Param__Result=UTDRL_BFL_Global::CosmeticParamToMergeParam(Z_Param_WorldContextObject,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execMergeSkeletalMeshes)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FMergeSkeletalMeshesParameters,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=UTDRL_BFL_Global::MergeSkeletalMeshes(Z_Param_WorldContextObject,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execIsValidStun)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FStunParameters,Z_Param_StunValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UTDRL_BFL_Global::IsValidStun(Z_Param_WorldContextObject,Z_Param_StunValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execGetAllPlayersSpawn)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ATDRL_PlayersSpawn*>*)Z_Param__Result=UTDRL_BFL_Global::GetAllPlayersSpawn(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execGetGameStateTDRL)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATDRL_GameStateBase**)Z_Param__Result=UTDRL_BFL_Global::GetGameStateTDRL(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execGetGameModeTDRL)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATDRL_GameModeBase**)Z_Param__Result=UTDRL_BFL_Global::GetGameModeTDRL(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execGetPlayerCharacterTDRL)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATDRL_Character**)Z_Param__Result=UTDRL_BFL_Global::GetPlayerCharacterTDRL(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_BFL_Global::execGetTDRLHUD)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(ACharacter,Z_Param_InCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATDRL_HUD**)Z_Param__Result=UTDRL_BFL_Global::GetTDRLHUD(Z_Param_WorldContextObject,Z_Param_InCharacter);
		P_NATIVE_END;
	}
	void UTDRL_BFL_Global::StaticRegisterNativesUTDRL_BFL_Global()
	{
		UClass* Class = UTDRL_BFL_Global::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCustomProperties", &UTDRL_BFL_Global::execApplyCustomProperties },
			{ "ApplyRadialFieldAtLocation", &UTDRL_BFL_Global::execApplyRadialFieldAtLocation },
			{ "CosmeticParamToMergeParam", &UTDRL_BFL_Global::execCosmeticParamToMergeParam },
			{ "GetAllPlayersSpawn", &UTDRL_BFL_Global::execGetAllPlayersSpawn },
			{ "GetGameModeTDRL", &UTDRL_BFL_Global::execGetGameModeTDRL },
			{ "GetGameStateTDRL", &UTDRL_BFL_Global::execGetGameStateTDRL },
			{ "GetPlayerCharacterTDRL", &UTDRL_BFL_Global::execGetPlayerCharacterTDRL },
			{ "GetTDRLHUD", &UTDRL_BFL_Global::execGetTDRLHUD },
			{ "IsValidStun", &UTDRL_BFL_Global::execIsValidStun },
			{ "MergeSkeletalMeshes", &UTDRL_BFL_Global::execMergeSkeletalMeshes },
			{ "SetActorHiddenInGameWithAttached", &UTDRL_BFL_Global::execSetActorHiddenInGameWithAttached },
			{ "SpawnHitVFXsFromHit", &UTDRL_BFL_Global::execSpawnHitVFXsFromHit },
			{ "SpawnStatusVFXs", &UTDRL_BFL_Global::execSpawnStatusVFXs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics
	{
		struct TDRL_BFL_Global_eventApplyCustomProperties_Parms
		{
			UObject* WorldContextObject;
			TMap<FName,FName> InProperties;
			AActor* InActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InProperties;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventApplyCustomProperties_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties_ValueProp = { "InProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties_Key_KeyProp = { "InProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties = { "InProperties", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventApplyCustomProperties_Parms, InProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventApplyCustomProperties_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|Utility" },
		{ "Comment", "/*Apply custom properties to any actor. Specify the name of the property and its value in the list. Supports: bool, int, float, byte, name, string and vector3D*/" },
		{ "DisplayName", "ApplyCustomProperties" },
		{ "Keywords", "Custom Properties Property" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Apply custom properties to any actor. Specify the name of the property and its value in the list. Supports: bool, int, float, byte, name, string and vector3D" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "ApplyCustomProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::TDRL_BFL_Global_eventApplyCustomProperties_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics
	{
		struct TDRL_BFL_Global_eventApplyRadialFieldAtLocation_Parms
		{
			UObject* WorldContextObject;
			FVector Origin;
			FPhysicsFieldRadialHitData RadialHitData;
			FPhysicsFieldComponentsHitData PhysHitComps;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialHitData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RadialHitData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysHitComps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventApplyRadialFieldAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventApplyRadialFieldAtLocation_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_Origin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_Origin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_RadialHitData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_RadialHitData = { "RadialHitData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventApplyRadialFieldAtLocation_Parms, RadialHitData), Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_RadialHitData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_RadialHitData_MetaData)) }; // 3229476067
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_PhysHitComps = { "PhysHitComps", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventApplyRadialFieldAtLocation_Parms, PhysHitComps), Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData, METADATA_PARAMS(nullptr, 0) }; // 2274387530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_RadialHitData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::NewProp_PhysHitComps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|VFXs" },
		{ "Comment", "/*Apply radial transient field at location*/" },
		{ "DisplayName", "ApplyRadialFieldAtLocation" },
		{ "Keywords", "Apply Radial Field At Location" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Apply radial transient field at location" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "ApplyRadialFieldAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::TDRL_BFL_Global_eventApplyRadialFieldAtLocation_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics
	{
		struct TDRL_BFL_Global_eventCosmeticParamToMergeParam_Parms
		{
			UObject* WorldContextObject;
			FCosmeticParameterList Params;
			FMergeSkeletalMeshesParameters ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventCosmeticParamToMergeParam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventCosmeticParamToMergeParam_Parms, Params), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_Params_MetaData)) }; // 3104133227
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventCosmeticParamToMergeParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters, METADATA_PARAMS(nullptr, 0) }; // 1858116200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|SkeletalMerge" },
		{ "Comment", "/*Converts a simplified Cosmetic Structure Parameter into a MergeSkeletalMeshesParameters*/" },
		{ "DisplayName", "CosmeticParameterToMergeParameter" },
		{ "Keywords", "Merge Skeletal Meshes Mesh Parameter Conversion Cosmetic" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Converts a simplified Cosmetic Structure Parameter into a MergeSkeletalMeshesParameters" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "CosmeticParamToMergeParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::TDRL_BFL_Global_eventCosmeticParamToMergeParam_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics
	{
		struct TDRL_BFL_Global_eventGetAllPlayersSpawn_Parms
		{
			UObject* WorldContextObject;
			TArray<ATDRL_PlayersSpawn*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetAllPlayersSpawn_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ATDRL_PlayersSpawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetAllPlayersSpawn_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|Gameplay" },
		{ "Comment", "/*Returns all the TDRL PlayersSpawn in the current game*/" },
		{ "DisplayName", "GetAllPlayersSpawn" },
		{ "Keywords", "Player Spawn All" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Returns all the TDRL PlayersSpawn in the current game" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "GetAllPlayersSpawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::TDRL_BFL_Global_eventGetAllPlayersSpawn_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics
	{
		struct TDRL_BFL_Global_eventGetGameModeTDRL_Parms
		{
			UObject* WorldContextObject;
			ATDRL_GameModeBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetGameModeTDRL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetGameModeTDRL_Parms, ReturnValue), Z_Construct_UClass_ATDRL_GameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|Gameplay" },
		{ "Comment", "/*Returns the TDRL Game Mode*/" },
		{ "DisplayName", "GetGameMode(TDRL)" },
		{ "Keywords", "Character TopDown TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Returns the TDRL Game Mode" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "GetGameModeTDRL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::TDRL_BFL_Global_eventGetGameModeTDRL_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics
	{
		struct TDRL_BFL_Global_eventGetGameStateTDRL_Parms
		{
			UObject* WorldContextObject;
			ATDRL_GameStateBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetGameStateTDRL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetGameStateTDRL_Parms, ReturnValue), Z_Construct_UClass_ATDRL_GameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|Gameplay" },
		{ "Comment", "/*Returns the TDRL Game State*/" },
		{ "DisplayName", "GetGameState(TDRL)" },
		{ "Keywords", "Character TopDown TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Returns the TDRL Game State" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "GetGameStateTDRL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::TDRL_BFL_Global_eventGetGameStateTDRL_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics
	{
		struct TDRL_BFL_Global_eventGetPlayerCharacterTDRL_Parms
		{
			UObject* WorldContextObject;
			ATDRL_Character* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetPlayerCharacterTDRL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetPlayerCharacterTDRL_Parms, ReturnValue), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|Gameplay" },
		{ "Comment", "/*Returns the local player TDRL Character*/" },
		{ "DisplayName", "GetPlayerCharacter(TDRL)" },
		{ "Keywords", "Character TopDown TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Returns the local player TDRL Character" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "GetPlayerCharacterTDRL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::TDRL_BFL_Global_eventGetPlayerCharacterTDRL_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics
	{
		struct TDRL_BFL_Global_eventGetTDRLHUD_Parms
		{
			UObject* WorldContextObject;
			ACharacter* InCharacter;
			ATDRL_HUD* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetTDRLHUD_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::NewProp_InCharacter = { "InCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetTDRLHUD_Parms, InCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventGetTDRLHUD_Parms, ReturnValue), Z_Construct_UClass_ATDRL_HUD_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::NewProp_InCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|HUD" },
		{ "Comment", "/*Returns the current TDRL_HUD actor for the local player*/" },
		{ "DisplayName", "GetPlayerHUD(TDRL)" },
		{ "Keywords", "HUD GUI TDRL TopDown" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Returns the current TDRL_HUD actor for the local player" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "GetTDRLHUD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::TDRL_BFL_Global_eventGetTDRLHUD_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics
	{
		struct TDRL_BFL_Global_eventIsValidStun_Parms
		{
			UObject* WorldContextObject;
			FStunParameters StunValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StunValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventIsValidStun_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::NewProp_StunValue = { "StunValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventIsValidStun_Parms, StunValue), Z_Construct_UScriptStruct_FStunParameters, METADATA_PARAMS(nullptr, 0) }; // 1924132683
	void Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_BFL_Global_eventIsValidStun_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_BFL_Global_eventIsValidStun_Parms), &Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::NewProp_StunValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|Gameplay" },
		{ "Comment", "/*Returns if the following Stun data structure can be used*/" },
		{ "CPP_Default_StunValue", "()" },
		{ "DisplayName", "IsValidStun" },
		{ "Keywords", "Stun Valid" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Returns if the following Stun data structure can be used" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "IsValidStun", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::TDRL_BFL_Global_eventIsValidStun_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics
	{
		struct TDRL_BFL_Global_eventMergeSkeletalMeshes_Parms
		{
			UObject* WorldContextObject;
			FMergeSkeletalMeshesParameters Params;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventMergeSkeletalMeshes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventMergeSkeletalMeshes_Parms, Params), Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_Params_MetaData)) }; // 1858116200
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventMergeSkeletalMeshes_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|SkeletalMerge" },
		{ "Comment", "/*Merges Skeletal Meshes runtime. Morph target is not supported after merging*/" },
		{ "DisplayName", "MergeSkeletalMeshes" },
		{ "Keywords", "Merge Skeletal Meshes Mesh" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Merges Skeletal Meshes runtime. Morph target is not supported after merging" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "MergeSkeletalMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::TDRL_BFL_Global_eventMergeSkeletalMeshes_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics
	{
		struct TDRL_BFL_Global_eventSetActorHiddenInGameWithAttached_Parms
		{
			UObject* WorldContextObject;
			AActor* InActor;
			bool bShouldHide;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHide_MetaData[];
#endif
		static void NewProp_bShouldHide_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHide;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSetActorHiddenInGameWithAttached_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSetActorHiddenInGameWithAttached_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_bShouldHide_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_bShouldHide_SetBit(void* Obj)
	{
		((TDRL_BFL_Global_eventSetActorHiddenInGameWithAttached_Parms*)Obj)->bShouldHide = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_bShouldHide = { "bShouldHide", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_BFL_Global_eventSetActorHiddenInGameWithAttached_Parms), &Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_bShouldHide_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_bShouldHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_bShouldHide_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::NewProp_bShouldHide,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|Utility" },
		{ "Comment", "/*Set an actor hidden in game and propagates the effect to attached actors*/" },
		{ "DisplayName", "SetActorHiddenInGameWithAttached" },
		{ "Keywords", "Hidden Attached Actor Visibility Visible Hide" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Set an actor hidden in game and propagates the effect to attached actors" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "SetActorHiddenInGameWithAttached", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::TDRL_BFL_Global_eventSetActorHiddenInGameWithAttached_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics
	{
		struct TDRL_BFL_Global_eventSpawnHitVFXsFromHit_Parms
		{
			UObject* WorldContextObject;
			FHitResult InHit;
			const UDataTable* EffectsDataTable;
			TArray<USceneComponent*> GeneratedAssets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectsDataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnHitVFXsFromHit_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_InHit = { "InHit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnHitVFXsFromHit_Parms, InHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_EffectsDataTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_EffectsDataTable = { "EffectsDataTable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnHitVFXsFromHit_Parms, EffectsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_EffectsDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_EffectsDataTable_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_GeneratedAssets_Inner = { "GeneratedAssets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_GeneratedAssets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_GeneratedAssets = { "GeneratedAssets", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnHitVFXsFromHit_Parms, GeneratedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_GeneratedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_GeneratedAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_InHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_EffectsDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_GeneratedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::NewProp_GeneratedAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|VFXs" },
		{ "Comment", "/*Spawn VFXs given an hit and a list of PhysMaterials/Effects*/" },
		{ "DisplayName", "SpawnVisualEffectsFromHit" },
		{ "Keywords", "VFX VFXs Hit Spawn Visual Effects" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Spawn VFXs given an hit and a list of PhysMaterials/Effects" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "SpawnHitVFXsFromHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::TDRL_BFL_Global_eventSpawnHitVFXsFromHit_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics
	{
		struct TDRL_BFL_Global_eventSpawnStatusVFXs_Parms
		{
			UObject* WorldContextObject;
			FStatusEffect Value;
			USceneComponent* TargetComp;
			FName BoneName;
			TArray<USceneComponent*> GeneratedAssets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeneratedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnStatusVFXs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnStatusVFXs_Parms, Value), Z_Construct_UScriptStruct_FStatusEffect, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_Value_MetaData)) }; // 540262957
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_TargetComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_TargetComp = { "TargetComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnStatusVFXs_Parms, TargetComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_TargetComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_TargetComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnStatusVFXs_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_GeneratedAssets_Inner = { "GeneratedAssets", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_GeneratedAssets_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_GeneratedAssets = { "GeneratedAssets", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_BFL_Global_eventSpawnStatusVFXs_Parms, GeneratedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_GeneratedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_GeneratedAssets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_TargetComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_GeneratedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::NewProp_GeneratedAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GlobalLibrary|VFXs" },
		{ "Comment", "/*Spawn status VFXs (usually on character)*/" },
		{ "DisplayName", "SpawnStatusVFXs" },
		{ "Keywords", "VFX VFXs Spawn Status Visual Effects" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
		{ "ToolTip", "Spawn status VFXs (usually on character)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_BFL_Global, nullptr, "SpawnStatusVFXs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::TDRL_BFL_Global_eventSpawnStatusVFXs_Parms), Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_BFL_Global);
	UClass* Z_Construct_UClass_UTDRL_BFL_Global_NoRegister()
	{
		return UTDRL_BFL_Global::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_BFL_Global_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_BFL_Global_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_BFL_Global_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_ApplyCustomProperties, "ApplyCustomProperties" }, // 2312612491
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_ApplyRadialFieldAtLocation, "ApplyRadialFieldAtLocation" }, // 1366655095
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_CosmeticParamToMergeParam, "CosmeticParamToMergeParam" }, // 1875385753
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_GetAllPlayersSpawn, "GetAllPlayersSpawn" }, // 3147620441
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_GetGameModeTDRL, "GetGameModeTDRL" }, // 2339300180
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_GetGameStateTDRL, "GetGameStateTDRL" }, // 632495187
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_GetPlayerCharacterTDRL, "GetPlayerCharacterTDRL" }, // 2512821474
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_GetTDRLHUD, "GetTDRLHUD" }, // 378633867
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_IsValidStun, "IsValidStun" }, // 3881212247
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_MergeSkeletalMeshes, "MergeSkeletalMeshes" }, // 1248842081
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_SetActorHiddenInGameWithAttached, "SetActorHiddenInGameWithAttached" }, // 2975397367
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_SpawnHitVFXsFromHit, "SpawnHitVFXsFromHit" }, // 1443940183
		{ &Z_Construct_UFunction_UTDRL_BFL_Global_SpawnStatusVFXs, "SpawnStatusVFXs" }, // 2469833921
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_BFL_Global_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Gameplay/TDRL_BFL_Global.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_BFL_Global.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_BFL_Global_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_BFL_Global>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_BFL_Global_Statics::ClassParams = {
		&UTDRL_BFL_Global::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_BFL_Global_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_BFL_Global_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_BFL_Global()
	{
		if (!Z_Registration_Info_UClass_UTDRL_BFL_Global.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_BFL_Global.OuterSingleton, Z_Construct_UClass_UTDRL_BFL_Global_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_BFL_Global.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_BFL_Global>()
	{
		return UTDRL_BFL_Global::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_BFL_Global);
	UTDRL_BFL_Global::~UTDRL_BFL_Global() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_BFL_Global, UTDRL_BFL_Global::StaticClass, TEXT("UTDRL_BFL_Global"), &Z_Registration_Info_UClass_UTDRL_BFL_Global, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_BFL_Global), 3692710679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_3429140055(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_BFL_Global_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
