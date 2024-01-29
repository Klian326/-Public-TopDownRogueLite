// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_PhysicsDoor.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_PhysicsDoor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PhysicsDoor();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_PhysicsDoor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execAddImpulseAtLocation_Multicast)
	{
		P_GET_STRUCT(FVector,Z_Param_Impulse);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddImpulseAtLocation_Multicast_Implementation(Z_Param_Impulse,Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execSetDoorLocked)
	{
		P_GET_UBOOL(Z_Param_InLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoorLocked(Z_Param_InLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execSetDoorOpen)
	{
		P_GET_UBOOL(Z_Param_bOpen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDoorOpen(Z_Param_bOpen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execGetIsLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execGetIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsOpen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execGetDoorMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetDoorMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execOverlapAreaEnd)
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
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execOverlapAreaBegin)
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
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execAdjustYawOnClients)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdjustYawOnClients(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execGatherYawOnServer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GatherYawOnServer(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_PhysicsDoor::execOnRep_bIsOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsOpen();
		P_NATIVE_END;
	}
	struct TDRL_PhysicsDoor_eventAddImpulseAtLocation_Multicast_Parms
	{
		FVector Impulse;
		FVector Location;
	};
	static FName NAME_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast = FName(TEXT("AddImpulseAtLocation_Multicast"));
	void ATDRL_PhysicsDoor::AddImpulseAtLocation_Multicast(const FVector Impulse, const FVector Location)
	{
		TDRL_PhysicsDoor_eventAddImpulseAtLocation_Multicast_Parms Parms;
		Parms.Impulse=Impulse;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast),&Parms);
	}
	void ATDRL_PhysicsDoor::StaticRegisterNativesATDRL_PhysicsDoor()
	{
		UClass* Class = ATDRL_PhysicsDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddImpulseAtLocation_Multicast", &ATDRL_PhysicsDoor::execAddImpulseAtLocation_Multicast },
			{ "AdjustYawOnClients", &ATDRL_PhysicsDoor::execAdjustYawOnClients },
			{ "GatherYawOnServer", &ATDRL_PhysicsDoor::execGatherYawOnServer },
			{ "GetDoorMesh", &ATDRL_PhysicsDoor::execGetDoorMesh },
			{ "GetIsLocked", &ATDRL_PhysicsDoor::execGetIsLocked },
			{ "GetIsOpen", &ATDRL_PhysicsDoor::execGetIsOpen },
			{ "OnRep_bIsOpen", &ATDRL_PhysicsDoor::execOnRep_bIsOpen },
			{ "OverlapAreaBegin", &ATDRL_PhysicsDoor::execOverlapAreaBegin },
			{ "OverlapAreaEnd", &ATDRL_PhysicsDoor::execOverlapAreaEnd },
			{ "SetDoorLocked", &ATDRL_PhysicsDoor::execSetDoorLocked },
			{ "SetDoorOpen", &ATDRL_PhysicsDoor::execSetDoorOpen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Impulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Impulse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventAddImpulseAtLocation_Multicast_Parms, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Impulse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventAddImpulseAtLocation_Multicast_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Impulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "AddImpulseAtLocation_Multicast", nullptr, nullptr, sizeof(TDRL_PhysicsDoor_eventAddImpulseAtLocation_Multicast_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics
	{
		struct TDRL_PhysicsDoor_eventAdjustYawOnClients_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventAdjustYawOnClients_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "AdjustYawOnClients", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::TDRL_PhysicsDoor_eventAdjustYawOnClients_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics
	{
		struct TDRL_PhysicsDoor_eventGatherYawOnServer_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventGatherYawOnServer_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "GatherYawOnServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::TDRL_PhysicsDoor_eventGatherYawOnServer_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics
	{
		struct TDRL_PhysicsDoor_eventGetDoorMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventGetDoorMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PhysDoor|Components" },
		{ "Comment", "/*Get the static mesh component for this door*/" },
		{ "DisplayName", "GetDoorMesh" },
		{ "Keywords", "Get Door Mesh TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Get the static mesh component for this door" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "GetDoorMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::TDRL_PhysicsDoor_eventGetDoorMesh_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics
	{
		struct TDRL_PhysicsDoor_eventGetIsLocked_Parms
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
	void Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_PhysicsDoor_eventGetIsLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PhysicsDoor_eventGetIsLocked_Parms), &Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PhysDoor" },
		{ "Comment", "/*Returns true if it's locked*/" },
		{ "DisplayName", "GetIsLocked" },
		{ "Keywords", "Get Is Locked TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Returns true if it's locked" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "GetIsLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::TDRL_PhysicsDoor_eventGetIsLocked_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics
	{
		struct TDRL_PhysicsDoor_eventGetIsOpen_Parms
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
	void Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_PhysicsDoor_eventGetIsOpen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PhysicsDoor_eventGetIsOpen_Parms), &Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PhysDoor" },
		{ "Comment", "/*Returns true if it's open (is simulating physics)*/" },
		{ "DisplayName", "GetIsOpen" },
		{ "Keywords", "Get Is Open TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Returns true if it's open (is simulating physics)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "GetIsOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::TDRL_PhysicsDoor_eventGetIsOpen_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_OnRep_bIsOpen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_OnRep_bIsOpen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OnRep_bIsOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "OnRep_bIsOpen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_OnRep_bIsOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OnRep_bIsOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_OnRep_bIsOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_OnRep_bIsOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics
	{
		struct TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms), &Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "OverlapAreaBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::TDRL_PhysicsDoor_eventOverlapAreaBegin_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics
	{
		struct TDRL_PhysicsDoor_eventOverlapAreaEnd_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_PhysicsDoor_eventOverlapAreaEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "OverlapAreaEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::TDRL_PhysicsDoor_eventOverlapAreaEnd_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics
	{
		struct TDRL_PhysicsDoor_eventSetDoorLocked_Parms
		{
			bool InLocked;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocked_MetaData[];
#endif
		static void NewProp_InLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::NewProp_InLocked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::NewProp_InLocked_SetBit(void* Obj)
	{
		((TDRL_PhysicsDoor_eventSetDoorLocked_Parms*)Obj)->InLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::NewProp_InLocked = { "InLocked", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PhysicsDoor_eventSetDoorLocked_Parms), &Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::NewProp_InLocked_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::NewProp_InLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::NewProp_InLocked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::NewProp_InLocked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PhysDoor" },
		{ "Comment", "/*Lock or unlock this door*/" },
		{ "DisplayName", "SetDoorLocked" },
		{ "Keywords", "Set Door Locked TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Lock or unlock this door" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "SetDoorLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::TDRL_PhysicsDoor_eventSetDoorLocked_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics
	{
		struct TDRL_PhysicsDoor_eventSetDoorOpen_Parms
		{
			bool bOpen;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpen_MetaData[];
#endif
		static void NewProp_bOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::NewProp_bOpen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::NewProp_bOpen_SetBit(void* Obj)
	{
		((TDRL_PhysicsDoor_eventSetDoorOpen_Parms*)Obj)->bOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::NewProp_bOpen = { "bOpen", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_PhysicsDoor_eventSetDoorOpen_Parms), &Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::NewProp_bOpen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::NewProp_bOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::NewProp_bOpen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::NewProp_bOpen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PhysDoor" },
		{ "Comment", "/*Open or close this door*/" },
		{ "DisplayName", "SetDoorOpen" },
		{ "Keywords", "Set Door Open TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Open or close this door" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_PhysicsDoor, nullptr, "SetDoorOpen", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::TDRL_PhysicsDoor_eventSetDoorOpen_Parms), Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_PhysicsDoor);
	UClass* Z_Construct_UClass_ATDRL_PhysicsDoor_NoRegister()
	{
		return ATDRL_PhysicsDoor::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_PhysicsDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartLocked_MetaData[];
#endif
		static void NewProp_bStartLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartLocked;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActivationClasses_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationClasses_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ActivationClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileNameOpen_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileNameOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavClassOpen_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NavClassOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileNameClose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CollisionProfileNameClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavClassClose_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NavClassClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationArea_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivationArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawDoor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[];
#endif
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsToLock_MetaData[];
#endif
		static void NewProp_bWantsToLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsToLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_AddImpulseAtLocation_Multicast, "AddImpulseAtLocation_Multicast" }, // 2384742866
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_AdjustYawOnClients, "AdjustYawOnClients" }, // 1250097572
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_GatherYawOnServer, "GatherYawOnServer" }, // 4269815330
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_GetDoorMesh, "GetDoorMesh" }, // 3652046621
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsLocked, "GetIsLocked" }, // 3202809978
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_GetIsOpen, "GetIsOpen" }, // 3022859586
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_OnRep_bIsOpen, "OnRep_bIsOpen" }, // 3240882040
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaBegin, "OverlapAreaBegin" }, // 2290367681
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_OverlapAreaEnd, "OverlapAreaEnd" }, // 1972835404
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorLocked, "SetDoorLocked" }, // 2936418800
		{ &Z_Construct_UFunction_ATDRL_PhysicsDoor_SetDoorOpen, "SetDoorOpen" }, // 3672674803
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/TDRL_PhysicsDoor.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bStartLocked_MetaData[] = {
		{ "Category", "TDRL|PhysDoor" },
		{ "Comment", "/*Should start locked?*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Should start locked?" },
	};
#endif
	void Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bStartLocked_SetBit(void* Obj)
	{
		((ATDRL_PhysicsDoor*)Obj)->bStartLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bStartLocked = { "bStartLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_PhysicsDoor), &Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bStartLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bStartLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bStartLocked_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationClasses_ElementProp = { "ActivationClasses", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationClasses_MetaData[] = {
		{ "Category", "TDRL|PhysDoor" },
		{ "Comment", "/*Which classes are accepted for physics activation*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Which classes are accepted for physics activation" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationClasses = { "ActivationClasses", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, ActivationClasses), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameOpen_MetaData[] = {
		{ "Category", "TDRL|PhysDoor|Open" },
		{ "Comment", "/*Collision profile when open*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Collision profile when open" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameOpen = { "CollisionProfileNameOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, CollisionProfileNameOpen), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassOpen_MetaData[] = {
		{ "Category", "TDRL|PhysDoor|Open" },
		{ "Comment", "/*NavMesh class when open*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "NavMesh class when open" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassOpen = { "NavClassOpen", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, NavClassOpen), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameClose_MetaData[] = {
		{ "Category", "TDRL|PhysDoor|Close" },
		{ "Comment", "/*Collision profile when closed*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "Collision profile when closed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameClose = { "CollisionProfileNameClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, CollisionProfileNameClose), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameClose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassClose_MetaData[] = {
		{ "Category", "TDRL|PhysDoor|Close" },
		{ "Comment", "/*NavMesh class when closed*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
		{ "ToolTip", "NavMesh class when closed" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassClose = { "NavClassClose", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, NavClassClose), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassClose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_RootMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_RootMesh = { "RootMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, RootMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_RootMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_RootMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationArea_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationArea = { "ActivationArea", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, ActivationArea), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationArea_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Constraint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, Constraint), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Constraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Constraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_DoorMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_DoorMesh = { "DoorMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, DoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_DoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_DoorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavModifier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavModifier = { "NavModifier", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, NavModifier), Z_Construct_UClass_UNavModifierComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_YawDoor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_YawDoor = { "YawDoor", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_PhysicsDoor, YawDoor), METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_YawDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_YawDoor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bIsOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((ATDRL_PhysicsDoor*)Obj)->bIsOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bIsOpen = { "bIsOpen", "OnRep_bIsOpen", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_PhysicsDoor), &Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bIsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bIsOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bWantsToLock_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bWantsToLock_SetBit(void* Obj)
	{
		((ATDRL_PhysicsDoor*)Obj)->bWantsToLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bWantsToLock = { "bWantsToLock", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_PhysicsDoor), &Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bWantsToLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bWantsToLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bWantsToLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_PhysicsDoor.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((ATDRL_PhysicsDoor*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_PhysicsDoor), &Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bLocked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bStartLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationClasses_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_CollisionProfileNameClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavClassClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_RootMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_ActivationArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_Constraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_DoorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_NavModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_YawDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bIsOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bWantsToLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::NewProp_bLocked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_PhysicsDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::ClassParams = {
		&ATDRL_PhysicsDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_PhysicsDoor()
	{
		if (!Z_Registration_Info_UClass_ATDRL_PhysicsDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_PhysicsDoor.OuterSingleton, Z_Construct_UClass_ATDRL_PhysicsDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_PhysicsDoor.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_PhysicsDoor>()
	{
		return ATDRL_PhysicsDoor::StaticClass();
	}

	void ATDRL_PhysicsDoor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_YawDoor(TEXT("YawDoor"));
		static const FName Name_bIsOpen(TEXT("bIsOpen"));

		const bool bIsValid = true
			&& Name_YawDoor == ClassReps[(int32)ENetFields_Private::YawDoor].Property->GetFName()
			&& Name_bIsOpen == ClassReps[(int32)ENetFields_Private::bIsOpen].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDRL_PhysicsDoor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_PhysicsDoor);
	ATDRL_PhysicsDoor::~ATDRL_PhysicsDoor() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_PhysicsDoor, ATDRL_PhysicsDoor::StaticClass, TEXT("ATDRL_PhysicsDoor"), &Z_Registration_Info_UClass_ATDRL_PhysicsDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_PhysicsDoor), 1729680702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_1611641392(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_PhysicsDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
