// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_PlayersSpawn.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_PlayersSpawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PlayersSpawn();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PlayersSpawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_PlayersSpawn::execGetRandomPlayerStartActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerStart**)Z_Param__Result=P_THIS->GetRandomPlayerStartActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayersSpawn::execRefreshLocationSpawnPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshLocationSpawnPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayersSpawn::execRefreshAllPlayerStartTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAllPlayerStartTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayersSpawn::execRefreshSpawnPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSpawnPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayersSpawn::execOverlapAreaEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapAreaEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PlayersSpawn::execOverlapAreaBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapAreaBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void ATDRL_PlayersSpawn::StaticRegisterNativesATDRL_PlayersSpawn()
	{
		UClass* Class = ATDRL_PlayersSpawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomPlayerStartActor", &ATDRL_PlayersSpawn::execGetRandomPlayerStartActor },
			{ "OverlapAreaBegin", &ATDRL_PlayersSpawn::execOverlapAreaBegin },
			{ "OverlapAreaEnd", &ATDRL_PlayersSpawn::execOverlapAreaEnd },
			{ "RefreshAllPlayerStartTags", &ATDRL_PlayersSpawn::execRefreshAllPlayerStartTags },
			{ "RefreshLocationSpawnPoints", &ATDRL_PlayersSpawn::execRefreshLocationSpawnPoints },
			{ "RefreshSpawnPoints", &ATDRL_PlayersSpawn::execRefreshSpawnPoints },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics
	{
		struct TDRL_PlayersSpawn_eventGetRandomPlayerStartActor_Parms
		{
			APlayerStart* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventGetRandomPlayerStartActor_Parms, ReturnValue), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PlayersSpawn" },
		{ "Comment", "/*Return a random APlayerStart actor operating for this PayersSpawn*/" },
		{ "CompactNodeTitle", "GetRandomStart" },
		{ "DisplayName", "GetRandomPlayerStartActor" },
		{ "Keywords", "Get Random Player Start Actor Spawn TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
		{ "ToolTip", "Return a random APlayerStart actor operating for this PayersSpawn" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayersSpawn, nullptr, "GetRandomPlayerStartActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::TDRL_PlayersSpawn_eventGetRandomPlayerStartActor_Parms), Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics
	{
		struct TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms), &Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayersSpawn, nullptr, "OverlapAreaBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::TDRL_PlayersSpawn_eventOverlapAreaBegin_Parms), Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics
	{
		struct TDRL_PlayersSpawn_eventOverlapAreaEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PlayersSpawn_eventOverlapAreaEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayersSpawn, nullptr, "OverlapAreaEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::TDRL_PlayersSpawn_eventOverlapAreaEnd_Parms), Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshAllPlayerStartTags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshAllPlayerStartTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshAllPlayerStartTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayersSpawn, nullptr, "RefreshAllPlayerStartTags", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshAllPlayerStartTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshAllPlayerStartTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshAllPlayerStartTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshAllPlayerStartTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshLocationSpawnPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshLocationSpawnPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshLocationSpawnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayersSpawn, nullptr, "RefreshLocationSpawnPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshLocationSpawnPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshLocationSpawnPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshLocationSpawnPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshLocationSpawnPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshSpawnPoints_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshSpawnPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshSpawnPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PlayersSpawn, nullptr, "RefreshSpawnPoints", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshSpawnPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshSpawnPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshSpawnPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshSpawnPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_PlayersSpawn);
	UClass* Z_Construct_UClass_ATDRL_PlayersSpawn_NoRegister()
	{
		return ATDRL_PlayersSpawn::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_PlayersSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStartTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerStartTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnsNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnsNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialGridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivationArea;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_PlayersSpawn_GetRandomPlayerStartActor, "GetRandomPlayerStartActor" }, // 2989096079
		{ &Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaBegin, "OverlapAreaBegin" }, // 1407063851
		{ &Z_Construct_UFunction_ATDRL_PlayersSpawn_OverlapAreaEnd, "OverlapAreaEnd" }, // 646374489
		{ &Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshAllPlayerStartTags, "RefreshAllPlayerStartTags" }, // 601755240
		{ &Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshLocationSpawnPoints, "RefreshLocationSpawnPoints" }, // 3286034442
		{ &Z_Construct_UFunction_ATDRL_PlayersSpawn_RefreshSpawnPoints, "RefreshSpawnPoints" }, // 1007282089
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/TDRL_PlayersSpawn.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_PlayerStartTag_MetaData[] = {
		{ "Category", "TDRL|PlayersSpawn" },
		{ "ClampMin", "1" },
		{ "Comment", "/*PlayerStartTag for this spawn (customized version of the default \"PlayerStartTag\" from APlayerStart*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
		{ "ToolTip", "PlayerStartTag for this spawn (customized version of the default \"PlayerStartTag\" from APlayerStart" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_PlayerStartTag = { "PlayerStartTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayersSpawn, PlayerStartTag), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_PlayerStartTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_PlayerStartTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnsNumber_MetaData[] = {
		{ "Category", "TDRL|PlayersSpawn" },
		{ "ClampMin", "1" },
		{ "Comment", "/*Number of APlayerStart to spawn in grid*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
		{ "ToolTip", "Number of APlayerStart to spawn in grid" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnsNumber = { "SpawnsNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayersSpawn, SpawnsNumber), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnsNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnsNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_InitialGridSize_MetaData[] = {
		{ "Category", "TDRL|PlayersSpawn" },
		{ "ClampMin", "50.0" },
		{ "Comment", "/*APlayerStart grid distancing*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
		{ "ToolTip", "APlayerStart grid distancing" },
		{ "UIMin", "50.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_InitialGridSize = { "InitialGridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayersSpawn, InitialGridSize), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_InitialGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_InitialGridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayersSpawn, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_ActivationArea_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_ActivationArea = { "ActivationArea", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayersSpawn, ActivationArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_ActivationArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_ActivationArea_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PlayersSpawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PlayersSpawn, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_PlayerStartTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnsNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_InitialGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_ActivationArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::NewProp_SpawnPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_PlayersSpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::ClassParams = {
		&ATDRL_PlayersSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_PlayersSpawn()
	{
		if (!Z_Registration_Info_UClass_ATDRL_PlayersSpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_PlayersSpawn.OuterSingleton, Z_Construct_UClass_ATDRL_PlayersSpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_PlayersSpawn.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_PlayersSpawn>()
	{
		return ATDRL_PlayersSpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_PlayersSpawn);
	ATDRL_PlayersSpawn::~ATDRL_PlayersSpawn() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PlayersSpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PlayersSpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_PlayersSpawn, ATDRL_PlayersSpawn::StaticClass, TEXT("ATDRL_PlayersSpawn"), &Z_Registration_Info_UClass_ATDRL_PlayersSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_PlayersSpawn), 2328708879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PlayersSpawn_h_3295085597(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PlayersSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PlayersSpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
