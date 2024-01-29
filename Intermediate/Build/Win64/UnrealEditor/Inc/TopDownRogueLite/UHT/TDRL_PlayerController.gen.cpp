// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Player/TDRL_PlayerController.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_PlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PlayerController();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PlayerController_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PlayersSpawn_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EControlRotationType();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCosmeticParameterList();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_PlayerController::execPlayersSpawnAreaOverlapped)
	{
		P_GET_OBJECT(ATDRL_PlayersSpawn,Z_Param_Spawner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayersSpawnAreaOverlapped_Implementation(Z_Param_Spawner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execGetDefaultCharacterCosmetic)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCosmeticParameterList*)Z_Param__Result=P_THIS->GetDefaultCharacterCosmetic();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execSetShouldUsePitch)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldUsePitch(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execGetShouldUsePitch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldUsePitch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execUpdateOnServerTimerOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOnServerTimerOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execUpdateAimOffsetValue_Serv)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAimOffsetValue_Serv_Implementation(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execUpdateAimOffsetValue)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAimOffsetValue(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execUpdateAimOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAimOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execUpdateControlRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateControlRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execUpdateTraceUnderMouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTraceUnderMouse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execTDRLCharacterChanged_Server)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TDRLCharacterChanged_Server_Implementation(Z_Param_InPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execSetControlRotationLockedTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_NewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlRotationLockedTarget(Z_Param_NewTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execGetControlRotationLockedTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetControlRotationLockedTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execSetControlRotationTargetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlRotationTargetLocation(Z_Param_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execGetControlRotationTargetLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetControlRotationTargetLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execSetControlRotationType)
	{
		P_GET_ENUM(EControlRotationType,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControlRotationType(EControlRotationType(Z_Param_NewValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execGetControlRotationType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControlRotationType*)Z_Param__Result=P_THIS->GetControlRotationType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execGetClosestActorOfClassInRadiusUnderMouse)
	{
		P_GET_TARRAY(TSubclassOf<AActor> ,Z_Param_Classes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_Channels);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_IgnoreActors);
		P_GET_UBOOL(Z_Param_bDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetClosestActorOfClassInRadiusUnderMouse(Z_Param_Classes,Z_Param_Radius,Z_Param_Out_Channels,Z_Param_Out_IgnoreActors,Z_Param_bDebug);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayerController::execGetActorsOfClassInRadiusUnderMouse)
	{
		P_GET_TARRAY(TSubclassOf<AActor> ,Z_Param_Classes);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_Channels);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_IgnoreActors);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_GET_UBOOL(Z_Param_bDebug);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorsOfClassInRadiusUnderMouse(Z_Param_Classes,Z_Param_Radius,Z_Param_Out_Channels,Z_Param_Out_IgnoreActors,Z_Param_Out_OutActors,Z_Param_bDebug);
		P_NATIVE_END;
	}
	struct TDRL_PlayerController_eventPlayersSpawnAreaOverlapped_Parms
	{
		ATDRL_PlayersSpawn* Spawner;
	};
	struct TDRL_PlayerController_eventTDRLCharacterChanged_Server_Parms
	{
		APawn* InPawn;
	};
	struct TDRL_PlayerController_eventUpdateAimOffsetValue_Serv_Parms
	{
		FVector2D NewValue;
	};
	static FName NAME_ATDRL_PlayerController_PlayersSpawnAreaOverlapped = FName(TEXT("PlayersSpawnAreaOverlapped"));
	void ATDRL_PlayerController::PlayersSpawnAreaOverlapped(ATDRL_PlayersSpawn* Spawner)
	{
		TDRL_PlayerController_eventPlayersSpawnAreaOverlapped_Parms Parms;
		Parms.Spawner=Spawner;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_PlayerController_PlayersSpawnAreaOverlapped),&Parms);
	}
	static FName NAME_ATDRL_PlayerController_TDRLCharacterChanged_Server = FName(TEXT("TDRLCharacterChanged_Server"));
	void ATDRL_PlayerController::TDRLCharacterChanged_Server(APawn* InPawn)
	{
		TDRL_PlayerController_eventTDRLCharacterChanged_Server_Parms Parms;
		Parms.InPawn=InPawn;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_PlayerController_TDRLCharacterChanged_Server),&Parms);
	}
	static FName NAME_ATDRL_PlayerController_UpdateAimOffsetValue_Serv = FName(TEXT("UpdateAimOffsetValue_Serv"));
	void ATDRL_PlayerController::UpdateAimOffsetValue_Serv(const FVector2D NewValue)
	{
		TDRL_PlayerController_eventUpdateAimOffsetValue_Serv_Parms Parms;
		Parms.NewValue=NewValue;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_PlayerController_UpdateAimOffsetValue_Serv),&Parms);
	}
	void ATDRL_PlayerController::StaticRegisterNativesATDRL_PlayerController()
	{
		UClass* Class = ATDRL_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorsOfClassInRadiusUnderMouse", &ATDRL_PlayerController::execGetActorsOfClassInRadiusUnderMouse },
			{ "GetClosestActorOfClassInRadiusUnderMouse", &ATDRL_PlayerController::execGetClosestActorOfClassInRadiusUnderMouse },
			{ "GetControlRotationLockedTarget", &ATDRL_PlayerController::execGetControlRotationLockedTarget },
			{ "GetControlRotationTargetLocation", &ATDRL_PlayerController::execGetControlRotationTargetLocation },
			{ "GetControlRotationType", &ATDRL_PlayerController::execGetControlRotationType },
			{ "GetDefaultCharacterCosmetic", &ATDRL_PlayerController::execGetDefaultCharacterCosmetic },
			{ "GetShouldUsePitch", &ATDRL_PlayerController::execGetShouldUsePitch },
			{ "PlayersSpawnAreaOverlapped", &ATDRL_PlayerController::execPlayersSpawnAreaOverlapped },
			{ "SetControlRotationLockedTarget", &ATDRL_PlayerController::execSetControlRotationLockedTarget },
			{ "SetControlRotationTargetLocation", &ATDRL_PlayerController::execSetControlRotationTargetLocation },
			{ "SetControlRotationType", &ATDRL_PlayerController::execSetControlRotationType },
			{ "SetShouldUsePitch", &ATDRL_PlayerController::execSetShouldUsePitch },
			{ "TDRLCharacterChanged_Server", &ATDRL_PlayerController::execTDRLCharacterChanged_Server },
			{ "UpdateAimOffset", &ATDRL_PlayerController::execUpdateAimOffset },
			{ "UpdateAimOffsetValue", &ATDRL_PlayerController::execUpdateAimOffsetValue },
			{ "UpdateAimOffsetValue_Serv", &ATDRL_PlayerController::execUpdateAimOffsetValue_Serv },
			{ "UpdateControlRotation", &ATDRL_PlayerController::execUpdateControlRotation },
			{ "UpdateOnServerTimerOver", &ATDRL_PlayerController::execUpdateOnServerTimerOver },
			{ "UpdateTraceUnderMouse", &ATDRL_PlayerController::execUpdateTraceUnderMouse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics
	{
		struct TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms
		{
			TArray<TSubclassOf<AActor> > Classes;
			float Radius;
			TArray<TEnumAsByte<EObjectTypeQuery> > Channels;
			TArray<AActor*> IgnoreActors;
			TArray<AActor*> OutActors;
			bool bDebug;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Classes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Classes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Classes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms, Radius), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Channels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Channels_MetaData)) }; // 3629342158
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_Inner = { "IgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors = { "IgnoreActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms, IgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms), &Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_MetaData)) };
	void Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms), &Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Classes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Classes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Channels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_Channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_OutActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController|Utility" },
		{ "DisplayName", "Get Actors Of Class In Radius Under Mouse" },
		{ "Keywords", "Get Actors Of Class In Radius Under Mouse TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "GetActorsOfClassInRadiusUnderMouse", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::TDRL_PlayerController_eventGetActorsOfClassInRadiusUnderMouse_Parms), Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics
	{
		struct TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms
		{
			TArray<TSubclassOf<AActor> > Classes;
			float Radius;
			TArray<TEnumAsByte<EObjectTypeQuery> > Channels;
			TArray<AActor*> IgnoreActors;
			bool bDebug;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Classes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Channels;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoreActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Classes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Classes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Classes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Radius_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms, Radius), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Channels_Inner = { "Channels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Channels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms, Channels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Channels_MetaData)) }; // 3629342158
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_Inner = { "IgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors = { "IgnoreActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms, IgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms), &Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_bDebug_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Classes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Classes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Channels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_Channels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_IgnoreActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController|Utility" },
		{ "DisplayName", "Get Closest Actor Of Class In Radius Under Mouse" },
		{ "Keywords", "Get Closest Actor Of Class In Radius Under Mouse TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "GetClosestActorOfClassInRadiusUnderMouse", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::TDRL_PlayerController_eventGetClosestActorOfClassInRadiusUnderMouse_Parms), Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics
	{
		struct TDRL_PlayerController_eventGetControlRotationLockedTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetControlRotationLockedTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController|AimOffset" },
		{ "DisplayName", "Get Control Rotation Locked Target" },
		{ "Keywords", "Get Control Rotation Locked Target TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "GetControlRotationLockedTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::TDRL_PlayerController_eventGetControlRotationLockedTarget_Parms), Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics
	{
		struct TDRL_PlayerController_eventGetControlRotationTargetLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetControlRotationTargetLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "DisplayName", "Get Control Rotation Target Location" },
		{ "Keywords", "Get Control Rotation Target Location TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "GetControlRotationTargetLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::TDRL_PlayerController_eventGetControlRotationTargetLocation_Parms), Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics
	{
		struct TDRL_PlayerController_eventGetControlRotationType_Parms
		{
			EControlRotationType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetControlRotationType_Parms, ReturnValue), Z_Construct_UEnum_TopDownRogueLite_EControlRotationType, METADATA_PARAMS(nullptr, 0) }; // 3904480817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "DisplayName", "Get Control Rotation Type" },
		{ "Keywords", "Get Control Rotation Type TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "GetControlRotationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::TDRL_PlayerController_eventGetControlRotationType_Parms), Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics
	{
		struct TDRL_PlayerController_eventGetDefaultCharacterCosmetic_Parms
		{
			FCosmeticParameterList ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventGetDefaultCharacterCosmetic_Parms, ReturnValue), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(nullptr, 0) }; // 3104133227
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController|Cosmetic" },
		{ "DisplayName", "GetDefaultCharacterCosmetic" },
		{ "Keywords", "Get Default Character Cosmetic TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "GetDefaultCharacterCosmetic", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::TDRL_PlayerController_eventGetDefaultCharacterCosmetic_Parms), Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics
	{
		struct TDRL_PlayerController_eventGetShouldUsePitch_Parms
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
	void Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_PlayerController_eventGetShouldUsePitch_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PlayerController_eventGetShouldUsePitch_Parms), &Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "CompactNodeTitle", "UsePitch" },
		{ "DisplayName", "GetShouldUsePitch" },
		{ "Keywords", "Get Should Use Pitch TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "GetShouldUsePitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::TDRL_PlayerController_eventGetShouldUsePitch_Parms), Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spawner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventPlayersSpawnAreaOverlapped_Parms, Spawner), Z_Construct_UClass_ATDRL_PlayersSpawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::NewProp_Spawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController|Respawn" },
		{ "DisplayName", "PlayersSpawnAreaOverlapped" },
		{ "Keywords", "Players Spawn Area Overlapped TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "PlayersSpawnAreaOverlapped", nullptr, nullptr, sizeof(TDRL_PlayerController_eventPlayersSpawnAreaOverlapped_Parms), Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics
	{
		struct TDRL_PlayerController_eventSetControlRotationLockedTarget_Parms
		{
			AActor* NewTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventSetControlRotationLockedTarget_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::NewProp_NewTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController|AimOffset" },
		{ "DisplayName", "Set Control Rotation Locked Target" },
		{ "Keywords", "Set Control Rotation Locked Target TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "SetControlRotationLockedTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::TDRL_PlayerController_eventSetControlRotationLockedTarget_Parms), Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics
	{
		struct TDRL_PlayerController_eventSetControlRotationTargetLocation_Parms
		{
			FVector TargetLocation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventSetControlRotationTargetLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::NewProp_TargetLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "DisplayName", "Set Control Rotation Target Location" },
		{ "Keywords", "Set Control Rotation Target Location TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "SetControlRotationTargetLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::TDRL_PlayerController_eventSetControlRotationTargetLocation_Parms), Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics
	{
		struct TDRL_PlayerController_eventSetControlRotationType_Parms
		{
			EControlRotationType NewValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::NewProp_NewValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventSetControlRotationType_Parms, NewValue), Z_Construct_UEnum_TopDownRogueLite_EControlRotationType, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::NewProp_NewValue_MetaData)) }; // 3904480817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::NewProp_NewValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "DisplayName", "Set Control Rotation Type" },
		{ "Keywords", "Set Control Rotation Type TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "SetControlRotationType", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::TDRL_PlayerController_eventSetControlRotationType_Parms), Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics
	{
		struct TDRL_PlayerController_eventSetShouldUsePitch_Parms
		{
			bool Enable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enable_MetaData[];
#endif
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::NewProp_Enable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((TDRL_PlayerController_eventSetShouldUsePitch_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PlayerController_eventSetShouldUsePitch_Parms), &Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::NewProp_Enable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::NewProp_Enable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "DisplayName", "SetShouldUsePitch" },
		{ "Keywords", "Set Should Use Pitch TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "SetShouldUsePitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::TDRL_PlayerController_eventSetShouldUsePitch_Parms), Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventTDRLCharacterChanged_Server_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::NewProp_InPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "TDRLCharacterChanged_Server", nullptr, nullptr, sizeof(TDRL_PlayerController_eventTDRLCharacterChanged_Server_Parms), Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "UpdateAimOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics
	{
		struct TDRL_PlayerController_eventUpdateAimOffsetValue_Parms
		{
			FVector2D NewValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventUpdateAimOffsetValue_Parms, NewValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::NewProp_NewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayerController|AimOffset" },
		{ "DisplayName", "UpdateAimOffset" },
		{ "Keywords", "Update Aim Offset Value TDRL" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "UpdateAimOffsetValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::TDRL_PlayerController_eventUpdateAimOffsetValue_Parms), Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::NewProp_NewValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayerController_eventUpdateAimOffsetValue_Serv_Parms, NewValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::NewProp_NewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::NewProp_NewValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "UpdateAimOffsetValue_Serv", nullptr, nullptr, sizeof(TDRL_PlayerController_eventUpdateAimOffsetValue_Serv_Parms), Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00A80C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_UpdateControlRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_UpdateControlRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_UpdateControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "UpdateControlRotation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_UpdateControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_UpdateControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_UpdateControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_UpdateOnServerTimerOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_UpdateOnServerTimerOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_UpdateOnServerTimerOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "UpdateOnServerTimerOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_UpdateOnServerTimerOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateOnServerTimerOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_UpdateOnServerTimerOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_UpdateOnServerTimerOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayerController_UpdateTraceUnderMouse_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayerController_UpdateTraceUnderMouse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayerController_UpdateTraceUnderMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayerController, nullptr, "UpdateTraceUnderMouse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayerController_UpdateTraceUnderMouse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayerController_UpdateTraceUnderMouse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayerController_UpdateTraceUnderMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayerController_UpdateTraceUnderMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_PlayerController);
	UClass* Z_Construct_UClass_ATDRL_PlayerController_NoRegister()
	{
		return ATDRL_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CursorTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorTraceChannel_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CursorTraceChannel_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAimDebug_MetaData[];
#endif
		static void NewProp_bAimDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAimDebug;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlRotationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlRotationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadZoneAroundCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadZoneAroundCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRotationTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRotationTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LockedTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PossessedTDRLCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PossessedTDRLCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastValidHitUnderMouse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastValidHitUnderMouse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZPlaneTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZPlaneTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlockingUnderMouse_MetaData[];
#endif
		static void NewProp_bBlockingUnderMouse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlockingUnderMouse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimOffsetUpdateTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AimOffsetUpdateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZPlaneFloorHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZPlaneFloorHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateAimOffsetServerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateAimOffsetServerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUsePitch_MetaData[];
#endif
		static void NewProp_bShouldUsePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUsePitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnloadedCosmeticParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnloadedCosmeticParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestValidStartTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LatestValidStartTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_PlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_PlayerController_GetActorsOfClassInRadiusUnderMouse, "GetActorsOfClassInRadiusUnderMouse" }, // 4075350372
		{ &Z_Construct_UFunction_ATDRL_PlayerController_GetClosestActorOfClassInRadiusUnderMouse, "GetClosestActorOfClassInRadiusUnderMouse" }, // 1576868102
		{ &Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationLockedTarget, "GetControlRotationLockedTarget" }, // 643848924
		{ &Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationTargetLocation, "GetControlRotationTargetLocation" }, // 330090616
		{ &Z_Construct_UFunction_ATDRL_PlayerController_GetControlRotationType, "GetControlRotationType" }, // 3642431383
		{ &Z_Construct_UFunction_ATDRL_PlayerController_GetDefaultCharacterCosmetic, "GetDefaultCharacterCosmetic" }, // 3974633410
		{ &Z_Construct_UFunction_ATDRL_PlayerController_GetShouldUsePitch, "GetShouldUsePitch" }, // 2544718460
		{ &Z_Construct_UFunction_ATDRL_PlayerController_PlayersSpawnAreaOverlapped, "PlayersSpawnAreaOverlapped" }, // 633384953
		{ &Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationLockedTarget, "SetControlRotationLockedTarget" }, // 1718419991
		{ &Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationTargetLocation, "SetControlRotationTargetLocation" }, // 2721082060
		{ &Z_Construct_UFunction_ATDRL_PlayerController_SetControlRotationType, "SetControlRotationType" }, // 3277846120
		{ &Z_Construct_UFunction_ATDRL_PlayerController_SetShouldUsePitch, "SetShouldUsePitch" }, // 935723178
		{ &Z_Construct_UFunction_ATDRL_PlayerController_TDRLCharacterChanged_Server, "TDRLCharacterChanged_Server" }, // 1044574914
		{ &Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffset, "UpdateAimOffset" }, // 1401358402
		{ &Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue, "UpdateAimOffsetValue" }, // 3293658292
		{ &Z_Construct_UFunction_ATDRL_PlayerController_UpdateAimOffsetValue_Serv, "UpdateAimOffsetValue_Serv" }, // 3479223005
		{ &Z_Construct_UFunction_ATDRL_PlayerController_UpdateControlRotation, "UpdateControlRotation" }, // 4200577057
		{ &Z_Construct_UFunction_ATDRL_PlayerController_UpdateOnServerTimerOver, "UpdateOnServerTimerOver" }, // 1091335206
		{ &Z_Construct_UFunction_ATDRL_PlayerController_UpdateTraceUnderMouse, "UpdateTraceUnderMouse" }, // 741935918
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/TDRL_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel_MetaData[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel = { "CursorTraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, CursorTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel_Pitch_MetaData[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel_Pitch = { "CursorTraceChannel_Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, CursorTraceChannel_Pitch), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel_Pitch_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bAimDebug_MetaData[] = {
		{ "Category", "TDRL|PlayerController|Debug" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bAimDebug_SetBit(void* Obj)
	{
		((ATDRL_PlayerController*)Obj)->bAimDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bAimDebug = { "bAimDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_PlayerController), &Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bAimDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bAimDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bAimDebug_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationType_MetaData[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationType = { "ControlRotationType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, ControlRotationType), Z_Construct_UEnum_TopDownRogueLite_EControlRotationType, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationType_MetaData)) }; // 3904480817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_DeadZoneAroundCharacter_MetaData[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_DeadZoneAroundCharacter = { "DeadZoneAroundCharacter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, DeadZoneAroundCharacter), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_DeadZoneAroundCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_DeadZoneAroundCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationTargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationTargetLocation = { "ControlRotationTargetLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, ControlRotationTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationTargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LockedTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LockedTarget = { "LockedTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, LockedTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LockedTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LockedTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_PossessedTDRLCharacter_MetaData[] = {
		{ "Category", "TDRL|PlayerController|Runtime" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_PossessedTDRLCharacter = { "PossessedTDRLCharacter", nullptr, (EPropertyFlags)0x0010000000030025, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, PossessedTDRLCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_PossessedTDRLCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_PossessedTDRLCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LastValidHitUnderMouse_MetaData[] = {
		{ "Category", "TDRL|PlayerController|Runtime" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LastValidHitUnderMouse = { "LastValidHitUnderMouse", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, LastValidHitUnderMouse), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LastValidHitUnderMouse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LastValidHitUnderMouse_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneTargetLocation_MetaData[] = {
		{ "Category", "TDRL|PlayerController|Runtime" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneTargetLocation = { "ZPlaneTargetLocation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, ZPlaneTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneTargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bBlockingUnderMouse_MetaData[] = {
		{ "Category", "TDRL|PlayerController|Runtime" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bBlockingUnderMouse_SetBit(void* Obj)
	{
		((ATDRL_PlayerController*)Obj)->bBlockingUnderMouse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bBlockingUnderMouse = { "bBlockingUnderMouse", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_PlayerController), &Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bBlockingUnderMouse_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bBlockingUnderMouse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bBlockingUnderMouse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_AimOffsetUpdateTime_MetaData[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_AimOffsetUpdateTime = { "AimOffsetUpdateTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, AimOffsetUpdateTime), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_AimOffsetUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_AimOffsetUpdateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneFloorHeight_MetaData[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneFloorHeight = { "ZPlaneFloorHeight", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, ZPlaneFloorHeight), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneFloorHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneFloorHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UpdateAimOffsetServerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UpdateAimOffsetServerHandle = { "UpdateAimOffsetServerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, UpdateAimOffsetServerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UpdateAimOffsetServerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UpdateAimOffsetServerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bShouldUsePitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bShouldUsePitch_SetBit(void* Obj)
	{
		((ATDRL_PlayerController*)Obj)->bShouldUsePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bShouldUsePitch = { "bShouldUsePitch", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_PlayerController), &Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bShouldUsePitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bShouldUsePitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bShouldUsePitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UnloadedCosmeticParameter_MetaData[] = {
		{ "Category", "TDRL|PlayerController" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UnloadedCosmeticParameter = { "UnloadedCosmeticParameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, UnloadedCosmeticParameter), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UnloadedCosmeticParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UnloadedCosmeticParameter_MetaData)) }; // 3104133227
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LatestValidStartTag_MetaData[] = {
		{ "Category", "TDRL|PlayerController|Runtime" },
		{ "ModuleRelativePath", "Public/Player/TDRL_PlayerController.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LatestValidStartTag = { "LatestValidStartTag", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayerController, LatestValidStartTag), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LatestValidStartTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LatestValidStartTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_PlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_CursorTraceChannel_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bAimDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_DeadZoneAroundCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ControlRotationTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LockedTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_PossessedTDRLCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LastValidHitUnderMouse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bBlockingUnderMouse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_AimOffsetUpdateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_ZPlaneFloorHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UpdateAimOffsetServerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_bShouldUsePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_UnloadedCosmeticParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayerController_Statics::NewProp_LatestValidStartTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_PlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_PlayerController_Statics::ClassParams = {
		&ATDRL_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_PlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_PlayerController()
	{
		if (!Z_Registration_Info_UClass_ATDRL_PlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_PlayerController.OuterSingleton, Z_Construct_UClass_ATDRL_PlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_PlayerController.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_PlayerController>()
	{
		return ATDRL_PlayerController::StaticClass();
	}

	void ATDRL_PlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_PossessedTDRLCharacter(TEXT("PossessedTDRLCharacter"));
		static const FName Name_LatestValidStartTag(TEXT("LatestValidStartTag"));

		const bool bIsValid = true
			&& Name_PossessedTDRLCharacter == ClassReps[(int32)ENetFields_Private::PossessedTDRLCharacter].Property->GetFName()
			&& Name_LatestValidStartTag == ClassReps[(int32)ENetFields_Private::LatestValidStartTag].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDRL_PlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_PlayerController);
	ATDRL_PlayerController::~ATDRL_PlayerController() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_PlayerController, ATDRL_PlayerController::StaticClass, TEXT("ATDRL_PlayerController"), &Z_Registration_Info_UClass_ATDRL_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_PlayerController), 2232561946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_4286645539(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_PlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
