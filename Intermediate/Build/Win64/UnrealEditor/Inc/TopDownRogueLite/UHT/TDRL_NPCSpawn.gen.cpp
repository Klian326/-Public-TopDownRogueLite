// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_NPCSpawn.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_NPCSpawn() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Item_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_NPCController_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_NPCSpawn();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_NPCSpawn_NoRegister();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCosmeticParameterList();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FDeathData();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics
	{
		struct _Script_TopDownRogueLite_eventOnSpawnedDeathDelegate_Parms
		{
			FDeathData DeathData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeathData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::NewProp_DeathData = { "DeathData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownRogueLite_eventOnSpawnedDeathDelegate_Parms, DeathData), Z_Construct_UScriptStruct_FDeathData, METADATA_PARAMS(nullptr, 0) }; // 3112512265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::NewProp_DeathData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite, nullptr, "OnSpawnedDeathDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::_Script_TopDownRogueLite_eventOnSpawnedDeathDelegate_Parms), Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execSpawnRestored)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnRestored_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execNPCDied)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_NPCCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NPCDied_Implementation(Z_Param_NPCCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execNPCDespawning)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_NPCCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NPCDespawning_Implementation(Z_Param_NPCCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execNPCSpawned)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_NPCCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NPCSpawned_Implementation(Z_Param_NPCCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execRestoreSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestoreSpawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execDespawnNPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DespawnNPC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execSpawnNPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnNPC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execGetSpawnedController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATDRL_NPCController**)Z_Param__Result=P_THIS->GetSpawnedController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execGetSpawnedCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ATDRL_Character**)Z_Param__Result=P_THIS->GetSpawnedCharacter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execCharacterDied)
	{
		P_GET_STRUCT(FDeathData,Z_Param_OutDeathData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CharacterDied(Z_Param_OutDeathData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execRefreshSpawnName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshSpawnName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execOverlapTriggerEnd)
	{
		P_GET_OBJECT(AActor,Z_Param_ThisActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapTriggerEnd(Z_Param_ThisActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execOverlapTriggerBegin)
	{
		P_GET_OBJECT(AActor,Z_Param_ThisActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapTriggerBegin(Z_Param_ThisActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execSelectTriggers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectTriggers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execSelectNPCSpawnsMatchingTriggers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNPCSpawnsMatchingTriggers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execSelectNPCSpawnsSharingOneTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNPCSpawnsSharingOneTrigger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_NPCSpawn::execSelectAllNPCSpawns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectAllNPCSpawns();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	struct TDRL_NPCSpawn_eventNPCDespawning_Parms
	{
		ATDRL_Character* NPCCharacter;
	};
	struct TDRL_NPCSpawn_eventNPCDied_Parms
	{
		ATDRL_Character* NPCCharacter;
	};
	struct TDRL_NPCSpawn_eventNPCSpawned_Parms
	{
		ATDRL_Character* NPCCharacter;
	};
	static FName NAME_ATDRL_NPCSpawn_NPCDespawning = FName(TEXT("NPCDespawning"));
	void ATDRL_NPCSpawn::NPCDespawning(ATDRL_Character* NPCCharacter)
	{
		TDRL_NPCSpawn_eventNPCDespawning_Parms Parms;
		Parms.NPCCharacter=NPCCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_NPCSpawn_NPCDespawning),&Parms);
	}
	static FName NAME_ATDRL_NPCSpawn_NPCDied = FName(TEXT("NPCDied"));
	void ATDRL_NPCSpawn::NPCDied(ATDRL_Character* NPCCharacter)
	{
		TDRL_NPCSpawn_eventNPCDied_Parms Parms;
		Parms.NPCCharacter=NPCCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_NPCSpawn_NPCDied),&Parms);
	}
	static FName NAME_ATDRL_NPCSpawn_NPCSpawned = FName(TEXT("NPCSpawned"));
	void ATDRL_NPCSpawn::NPCSpawned(ATDRL_Character* NPCCharacter)
	{
		TDRL_NPCSpawn_eventNPCSpawned_Parms Parms;
		Parms.NPCCharacter=NPCCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_NPCSpawn_NPCSpawned),&Parms);
	}
	static FName NAME_ATDRL_NPCSpawn_SpawnRestored = FName(TEXT("SpawnRestored"));
	void ATDRL_NPCSpawn::SpawnRestored()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_NPCSpawn_SpawnRestored),NULL);
	}
	void ATDRL_NPCSpawn::StaticRegisterNativesATDRL_NPCSpawn()
	{
		UClass* Class = ATDRL_NPCSpawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CharacterDied", &ATDRL_NPCSpawn::execCharacterDied },
			{ "DespawnNPC", &ATDRL_NPCSpawn::execDespawnNPC },
			{ "GetSpawnedCharacter", &ATDRL_NPCSpawn::execGetSpawnedCharacter },
			{ "GetSpawnedController", &ATDRL_NPCSpawn::execGetSpawnedController },
			{ "NPCDespawning", &ATDRL_NPCSpawn::execNPCDespawning },
			{ "NPCDied", &ATDRL_NPCSpawn::execNPCDied },
			{ "NPCSpawned", &ATDRL_NPCSpawn::execNPCSpawned },
			{ "OverlapTriggerBegin", &ATDRL_NPCSpawn::execOverlapTriggerBegin },
			{ "OverlapTriggerEnd", &ATDRL_NPCSpawn::execOverlapTriggerEnd },
			{ "RefreshSpawnName", &ATDRL_NPCSpawn::execRefreshSpawnName },
			{ "RestoreSpawn", &ATDRL_NPCSpawn::execRestoreSpawn },
#if WITH_EDITOR
			{ "SelectAllNPCSpawns", &ATDRL_NPCSpawn::execSelectAllNPCSpawns },
			{ "SelectNPCSpawnsMatchingTriggers", &ATDRL_NPCSpawn::execSelectNPCSpawnsMatchingTriggers },
			{ "SelectNPCSpawnsSharingOneTrigger", &ATDRL_NPCSpawn::execSelectNPCSpawnsSharingOneTrigger },
			{ "SelectTriggers", &ATDRL_NPCSpawn::execSelectTriggers },
#endif // WITH_EDITOR
			{ "SpawnNPC", &ATDRL_NPCSpawn::execSpawnNPC },
			{ "SpawnRestored", &ATDRL_NPCSpawn::execSpawnRestored },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics
	{
		struct TDRL_NPCSpawn_eventCharacterDied_Parms
		{
			FDeathData OutDeathData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDeathData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::NewProp_OutDeathData = { "OutDeathData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventCharacterDied_Parms, OutDeathData), Z_Construct_UScriptStruct_FDeathData, METADATA_PARAMS(nullptr, 0) }; // 3112512265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::NewProp_OutDeathData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "CharacterDied", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::TDRL_NPCSpawn_eventCharacterDied_Parms), Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_DespawnNPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_DespawnNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Server Only: This function will despawn its associated character*/" },
		{ "DisplayName", "Despawn NPC" },
		{ "Keywords", "Despawn NPC" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Server Only: This function will despawn its associated character" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_DespawnNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "DespawnNPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_DespawnNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_DespawnNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_DespawnNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_DespawnNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics
	{
		struct TDRL_NPCSpawn_eventGetSpawnedCharacter_Parms
		{
			ATDRL_Character* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventGetSpawnedCharacter_Parms, ReturnValue), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn|Components" },
		{ "Comment", "/*Returns the spawned character pointer*/" },
		{ "CompactNodeTitle", "Character" },
		{ "DisplayName", "GetSpawnedCharacter" },
		{ "Keywords", "Get Spawned Character TDRL NPCSpawn" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Returns the spawned character pointer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "GetSpawnedCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::TDRL_NPCSpawn_eventGetSpawnedCharacter_Parms), Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics
	{
		struct TDRL_NPCSpawn_eventGetSpawnedController_Parms
		{
			ATDRL_NPCController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventGetSpawnedController_Parms, ReturnValue), Z_Construct_UClass_ATDRL_NPCController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn|Components" },
		{ "Comment", "/*Returns the spawned npc's controller pointer*/" },
		{ "CompactNodeTitle", "AIController" },
		{ "DisplayName", "GetSpawnedController" },
		{ "Keywords", "Get Spawned Controller TDRL NPCSpawn" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Returns the spawned npc's controller pointer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "GetSpawnedController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::TDRL_NPCSpawn_eventGetSpawnedController_Parms), Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::NewProp_NPCCharacter = { "NPCCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventNPCDespawning_Parms, NPCCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::NewProp_NPCCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Called when the NPC is despawned (but still alive)*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Called when the NPC is despawned (but still alive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "NPCDespawning", nullptr, nullptr, sizeof(TDRL_NPCSpawn_eventNPCDespawning_Parms), Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::NewProp_NPCCharacter = { "NPCCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventNPCDied_Parms, NPCCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::NewProp_NPCCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Called when the NPC is despawned (but still alive)*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Called when the NPC is despawned (but still alive)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "NPCDied", nullptr, nullptr, sizeof(TDRL_NPCSpawn_eventNPCDied_Parms), Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NPCCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::NewProp_NPCCharacter = { "NPCCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventNPCSpawned_Parms, NPCCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::NewProp_NPCCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Called when the NPC is spawned*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Called when the NPC is spawned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "NPCSpawned", nullptr, nullptr, sizeof(TDRL_NPCSpawn_eventNPCSpawned_Parms), Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics
	{
		struct TDRL_NPCSpawn_eventOverlapTriggerBegin_Parms
		{
			AActor* ThisActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThisActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::NewProp_ThisActor = { "ThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventOverlapTriggerBegin_Parms, ThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventOverlapTriggerBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::NewProp_ThisActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "OverlapTriggerBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::TDRL_NPCSpawn_eventOverlapTriggerBegin_Parms), Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics
	{
		struct TDRL_NPCSpawn_eventOverlapTriggerEnd_Parms
		{
			AActor* ThisActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThisActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::NewProp_ThisActor = { "ThisActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventOverlapTriggerEnd_Parms, ThisActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_NPCSpawn_eventOverlapTriggerEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::NewProp_ThisActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "OverlapTriggerEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::TDRL_NPCSpawn_eventOverlapTriggerEnd_Parms), Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_RefreshSpawnName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_RefreshSpawnName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_RefreshSpawnName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "RefreshSpawnName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_RefreshSpawnName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_RefreshSpawnName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_RefreshSpawnName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_RefreshSpawnName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_RestoreSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_RestoreSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Server Only: This function will restore the spawn functions after its associated character is dead*/" },
		{ "DisplayName", "Restore Spawn" },
		{ "Keywords", "Restore Spawn Reset TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Server Only: This function will restore the spawn functions after its associated character is dead" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_RestoreSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "RestoreSpawn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_RestoreSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_RestoreSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_RestoreSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_RestoreSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_SelectAllNPCSpawns_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_SelectAllNPCSpawns_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TDRL" },
		{ "Comment", "/*Select all the NPCSpawns*/" },
		{ "DisplayName", "Select All NPCSpawns" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Select all the NPCSpawns" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_SelectAllNPCSpawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "SelectAllNPCSpawns", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_SelectAllNPCSpawns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_SelectAllNPCSpawns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_SelectAllNPCSpawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_SelectAllNPCSpawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsMatchingTriggers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsMatchingTriggers_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TDRL" },
		{ "Comment", "/*Select all the NPCSpawns sharing the same triggers list (order is not important)*/" },
		{ "DisplayName", "Select NPCSpawns Matching Triggers" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Select all the NPCSpawns sharing the same triggers list (order is not important)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsMatchingTriggers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "SelectNPCSpawnsMatchingTriggers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsMatchingTriggers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsMatchingTriggers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsMatchingTriggers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsMatchingTriggers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsSharingOneTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsSharingOneTrigger_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TDRL" },
		{ "Comment", "/*Select all the NPCSpawns sharing at least one trigger*/" },
		{ "DisplayName", "Select NPC Spawns Sharing One Trigger" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Select all the NPCSpawns sharing at least one trigger" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsSharingOneTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "SelectNPCSpawnsSharingOneTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsSharingOneTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsSharingOneTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsSharingOneTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsSharingOneTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_SelectTriggers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_SelectTriggers_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "TDRL" },
		{ "Comment", "/*Select all triggers affecting this spawn*/" },
		{ "DisplayName", "Select Triggers" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Select all triggers affecting this spawn" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_SelectTriggers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "SelectTriggers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_SelectTriggers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_SelectTriggers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_SelectTriggers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_SelectTriggers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnNPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnNPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Server Only: Spawn NPC*/" },
		{ "DisplayName", "Spawn NPC" },
		{ "Keywords", "Spawn NPC" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Server Only: Spawn NPC" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnNPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "SpawnNPC", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnNPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnNPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnNPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnNPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnRestored_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnRestored_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Called when the NPCSpawn instance is restored*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Called when the NPCSpawn instance is restored" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnRestored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_NPCSpawn, nullptr, "SpawnRestored", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnRestored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnRestored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnRestored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnRestored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_NPCSpawn);
	UClass* Z_Construct_UClass_ATDRL_NPCSpawn_NoRegister()
	{
		return ATDRL_NPCSpawn::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_NPCSpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnOnBegin_MetaData[];
#endif
		static void NewProp_bSpawnOnBegin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AIControllerClass;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnInventory_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInventory_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnInventory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnInSightArea_MetaData[];
#endif
		static void NewProp_bSpawnInSightArea_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnInSightArea;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDespawn_MetaData[];
#endif
		static void NewProp_bDisableDespawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDespawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DespawnDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DespawnDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrolTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAISplineToolRandomPoints_MetaData[];
#endif
		static void NewProp_bUseAISplineToolRandomPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAISplineToolRandomPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIBlackBoard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIBlackBoard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StencilValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StencilValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnCosmeticParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnCosmeticParameter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterCustomProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterCustomProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterCustomProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CharacterCustomProperties;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerCustomProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControllerCustomProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerCustomProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControllerCustomProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpawnedDeath_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpawnedDeath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTitle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Billboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DespawnDelayHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DespawnDelayHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCharacterIsDead_MetaData[];
#endif
		static void NewProp_bCharacterIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCharacterIsDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_NPCSpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_NPCSpawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_CharacterDied, "CharacterDied" }, // 94945868
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_DespawnNPC, "DespawnNPC" }, // 2571392426
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedCharacter, "GetSpawnedCharacter" }, // 2277023312
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_GetSpawnedController, "GetSpawnedController" }, // 992949058
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDespawning, "NPCDespawning" }, // 364550743
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_NPCDied, "NPCDied" }, // 2249939980
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_NPCSpawned, "NPCSpawned" }, // 1123023556
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerBegin, "OverlapTriggerBegin" }, // 2607917007
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_OverlapTriggerEnd, "OverlapTriggerEnd" }, // 3808037877
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_RefreshSpawnName, "RefreshSpawnName" }, // 1299177526
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_RestoreSpawn, "RestoreSpawn" }, // 574536474
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_SelectAllNPCSpawns, "SelectAllNPCSpawns" }, // 1410379497
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsMatchingTriggers, "SelectNPCSpawnsMatchingTriggers" }, // 2506018909
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_SelectNPCSpawnsSharingOneTrigger, "SelectNPCSpawnsSharingOneTrigger" }, // 3610296149
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_SelectTriggers, "SelectTriggers" }, // 3030147189
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnNPC, "SpawnNPC" }, // 1915630693
		{ &Z_Construct_UFunction_ATDRL_NPCSpawn_SpawnRestored, "SpawnRestored" }, // 936517665
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/TDRL_NPCSpawn.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnOnBegin_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Force spawn OnBeginPlay*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Force spawn OnBeginPlay" },
	};
#endif
	void Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnOnBegin_SetBit(void* Obj)
	{
		((ATDRL_NPCSpawn*)Obj)->bSpawnOnBegin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnOnBegin = { "bSpawnOnBegin", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_NPCSpawn), &Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnOnBegin_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnOnBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnOnBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnClass_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Character class to spawn*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Character class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnClass = { "SpawnClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, SpawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIControllerClass_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Controller class to spawn, this controller will possess the SpawnedCharacter*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Controller class to spawn, this controller will possess the SpawnedCharacter" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIControllerClass = { "AIControllerClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, AIControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_NPCController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIControllerClass_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnInventory_Inner = { "SpawnInventory", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_Item_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnInventory_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*List of item to assign when the new character is spawned*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "List of item to assign when the new character is spawned" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnInventory = { "SpawnInventory", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, SpawnInventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnInventory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnInSightArea_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn" },
		{ "Comment", "/*Is this spawner in a \"SightArea\"? This will spawn the character as invisible and the Sight component will do the rest*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Is this spawner in a \"SightArea\"? This will spawn the character as invisible and the Sight component will do the rest" },
	};
#endif
	void Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnInSightArea_SetBit(void* Obj)
	{
		((ATDRL_NPCSpawn*)Obj)->bSpawnInSightArea = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnInSightArea = { "bSpawnInSightArea", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_NPCSpawn), &Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnInSightArea_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnInSightArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnInSightArea_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Triggers_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Triggers" },
		{ "Comment", "/*Trigger volumes used to enable this spawn*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Trigger volumes used to enable this spawn" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Triggers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bDisableDespawn_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Triggers" },
		{ "Comment", "/*Should keep the character in the map, even if the player run away from the spawn area*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Should keep the character in the map, even if the player run away from the spawn area" },
	};
#endif
	void Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bDisableDespawn_SetBit(void* Obj)
	{
		((ATDRL_NPCSpawn*)Obj)->bDisableDespawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bDisableDespawn = { "bDisableDespawn", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_NPCSpawn), &Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bDisableDespawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bDisableDespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bDisableDespawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelay_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Triggers" },
		{ "Comment", "/*Time to wait before despawning the character when the player exits the spawn area*/" },
		{ "EditCondition", "!bDisableDespawn" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Time to wait before despawning the character when the player exits the spawn area" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelay = { "DespawnDelay", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, DespawnDelay), METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_PatrolTarget_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Patrol" },
		{ "Comment", "/*When spawned, assign this patrol target to the Character. Can be any actor but \"AISplineTool\" has many additional settings.*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "When spawned, assign this patrol target to the Character. Can be any actor but \"AISplineTool\" has many additional settings." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_PatrolTarget = { "PatrolTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, PatrolTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_PatrolTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_PatrolTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bUseAISplineToolRandomPoints_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Patrol" },
		{ "Comment", "/*When spawned, if target is \"AISplineTool\", use random point order*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "When spawned, if target is \"AISplineTool\", use random point order" },
	};
#endif
	void Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bUseAISplineToolRandomPoints_SetBit(void* Obj)
	{
		((ATDRL_NPCSpawn*)Obj)->bUseAISplineToolRandomPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bUseAISplineToolRandomPoints = { "bUseAISplineToolRandomPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_NPCSpawn), &Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bUseAISplineToolRandomPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bUseAISplineToolRandomPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bUseAISplineToolRandomPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBehavior_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|AI" },
		{ "Comment", "/*Use this behavior tree when spawned*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Use this behavior tree when spawned" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBehavior = { "AIBehavior", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, AIBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBlackBoard_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|AI" },
		{ "Comment", "/*Use this blackboard when spawned*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Use this blackboard when spawned" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBlackBoard = { "AIBlackBoard", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, AIBlackBoard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBlackBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBlackBoard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_StencilValue_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Stencil" },
		{ "Comment", "/*Which stencil value should be assigned to the skeletal mesh component?*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Which stencil value should be assigned to the skeletal mesh component?" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_StencilValue = { "StencilValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, StencilValue), METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_StencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_StencilValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnCosmeticParameter_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Cosmetic" },
		{ "Comment", "/*Cosmetics to use when spawned. Cosmetics system will merge all the skeletal meshes together, reducing drawcalls*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Cosmetics to use when spawned. Cosmetics system will merge all the skeletal meshes together, reducing drawcalls" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnCosmeticParameter = { "SpawnCosmeticParameter", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, SpawnCosmeticParameter), Z_Construct_UScriptStruct_FCosmeticParameterList, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnCosmeticParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnCosmeticParameter_MetaData)) }; // 3104133227
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties_ValueProp = { "CharacterCustomProperties", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties_Key_KeyProp = { "CharacterCustomProperties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|CustomProperties" },
		{ "Comment", "/*Custom properties to apply once spawned (Character). Use the key value to identify the variable through its name. Use the value to set the parameter itself. Supports: bool, int, float, byte, name, string and vector3D*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Custom properties to apply once spawned (Character). Use the key value to identify the variable through its name. Use the value to set the parameter itself. Supports: bool, int, float, byte, name, string and vector3D" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties = { "CharacterCustomProperties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, CharacterCustomProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties_ValueProp = { "ControllerCustomProperties", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties_Key_KeyProp = { "ControllerCustomProperties_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|CustomProperties" },
		{ "Comment", "/*Custom properties to apply once spawned (AIController). Use the key value to identify the variable through its name. Use the value to set the parameter itself. Supports: bool, int, float, byte, name, string and vector3D*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Custom properties to apply once spawned (AIController). Use the key value to identify the variable through its name. Use the value to set the parameter itself. Supports: bool, int, float, byte, name, string and vector3D" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties = { "ControllerCustomProperties", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, ControllerCustomProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_OnSpawnedDeath_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Delegates|Death" },
		{ "Comment", "/*Death delegate*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Death delegate" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_OnSpawnedDeath = { "OnSpawnedDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, OnSpawnedDeath), Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_OnSpawnedDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_OnSpawnedDeath_MetaData)) }; // 3218016344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Capsule_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Direction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, Direction), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnTitle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnTitle = { "SpawnTitle", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, SpawnTitle), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Billboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, Billboard), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Billboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnedCharacter_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Runtime" },
		{ "Comment", "/*Runtime pointer to the spawned character*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Runtime pointer to the spawned character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnedCharacter = { "SpawnedCharacter", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, SpawnedCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnedCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "TDRL|NPCSpawn|Runtime" },
		{ "Comment", "/*Runtime pointer to the spawned controller*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
		{ "ToolTip", "Runtime pointer to the spawned controller" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, AIController), Z_Construct_UClass_ATDRL_NPCController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelayHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelayHandle = { "DespawnDelayHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_NPCSpawn, DespawnDelayHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelayHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelayHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bCharacterIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_NPCSpawn.h" },
	};
#endif
	void Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bCharacterIsDead_SetBit(void* Obj)
	{
		((ATDRL_NPCSpawn*)Obj)->bCharacterIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bCharacterIsDead = { "bCharacterIsDead", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_NPCSpawn), &Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bCharacterIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bCharacterIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bCharacterIsDead_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_NPCSpawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnOnBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnInventory_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnInventory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bSpawnInSightArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Triggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bDisableDespawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_PatrolTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bUseAISplineToolRandomPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIBlackBoard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_StencilValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnCosmeticParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_CharacterCustomProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_ControllerCustomProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_OnSpawnedDeath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_Billboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_SpawnedCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_AIController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_DespawnDelayHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_NPCSpawn_Statics::NewProp_bCharacterIsDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_NPCSpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_NPCSpawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_NPCSpawn_Statics::ClassParams = {
		&ATDRL_NPCSpawn::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_NPCSpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_NPCSpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_NPCSpawn()
	{
		if (!Z_Registration_Info_UClass_ATDRL_NPCSpawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_NPCSpawn.OuterSingleton, Z_Construct_UClass_ATDRL_NPCSpawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_NPCSpawn.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_NPCSpawn>()
	{
		return ATDRL_NPCSpawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_NPCSpawn);
	ATDRL_NPCSpawn::~ATDRL_NPCSpawn() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_NPCSpawn, ATDRL_NPCSpawn::StaticClass, TEXT("ATDRL_NPCSpawn"), &Z_Registration_Info_UClass_ATDRL_NPCSpawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_NPCSpawn), 1448492636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_3405040987(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_NPCSpawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
