// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Items/TDRL_Item.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_ItemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_Item() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Item();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Item_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_InteractionInterface_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EItemInteractions();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FItemStaticData();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics
	{
		struct _Script_TopDownRogueLite_eventOnPickedUpDelegate_Parms
		{
			ATDRL_Character* InteractingCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownRogueLite_eventOnPickedUpDelegate_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite, nullptr, "OnPickedUpDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::_Script_TopDownRogueLite_eventOnPickedUpDelegate_Parms), Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics
	{
		struct _Script_TopDownRogueLite_eventOnDroppedDelegate_Parms
		{
			ATDRL_Character* InteractingCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownRogueLite_eventOnDroppedDelegate_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite, nullptr, "OnDroppedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::_Script_TopDownRogueLite_eventOnDroppedDelegate_Parms), Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics
	{
		struct _Script_TopDownRogueLite_eventOnEquippedDelegate_Parms
		{
			ATDRL_Character* InteractingCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownRogueLite_eventOnEquippedDelegate_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite, nullptr, "OnEquippedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::_Script_TopDownRogueLite_eventOnEquippedDelegate_Parms), Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics
	{
		struct _Script_TopDownRogueLite_eventOnHolsteredDelegate_Parms
		{
			ATDRL_Character* InteractingCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownRogueLite_eventOnHolsteredDelegate_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite, nullptr, "OnHolsteredDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::_Script_TopDownRogueLite_eventOnHolsteredDelegate_Parms), Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ATDRL_Item::execPlayAnimMontageOnOwningCharacter_Func)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AttackMontage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnimMontageOnOwningCharacter_Func(Z_Param_AttackMontage,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execPlayAnimMontageOnOwningCharacter_Clients)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AttackMontage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnimMontageOnOwningCharacter_Clients_Implementation(Z_Param_AttackMontage,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execPlayAnimMontageOnOwningCharacter)
	{
		P_GET_OBJECT(UAnimMontage,Z_Param_AttackMontage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayAnimMontageOnOwningCharacter(Z_Param_AttackMontage,Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execRAction)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RAction_Implementation(Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execSecondaryAction)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SecondaryAction_Implementation(Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execPrimaryAction)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrimaryAction_Implementation(Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execHolstered)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InteractingCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Holstered_Implementation(Z_Param_InteractingCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execHolster)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InteractingCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Holster(Z_Param_InteractingCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execEquipped)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InteractingCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Equipped_Implementation(Z_Param_InteractingCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execEquip)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InteractingCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Equip(Z_Param_InteractingCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execDropped)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InteractingCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dropped_Implementation(Z_Param_InteractingCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execDrop)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InteractingCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop(Z_Param_InteractingCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execPickedUp)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InteractingCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PickedUp_Implementation(Z_Param_InteractingCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execPickup)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InteractingCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup(Z_Param_InteractingCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execAssignToCharacter)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssignToCharacter(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execEnableItemOutliner)
	{
		P_GET_UBOOL(Z_Param_Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableItemOutliner(Z_Param_Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execGetMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execGetMeshOffsetComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USceneComponent**)Z_Param__Result=P_THIS->GetMeshOffsetComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execGetCapsuleComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCapsuleComponent**)Z_Param__Result=P_THIS->GetCapsuleComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execClearItemGlobalTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearItemGlobalTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execIsItemGlobalTimerOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsItemGlobalTimerOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execUpdateOwnerGAS)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
		P_GET_ENUM(EItemInteractions,Z_Param_InteractionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOwnerGAS(Z_Param_AbilitySystem,EItemInteractions(Z_Param_InteractionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execUpdateOwnerGASEffects)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
		P_GET_ENUM(EItemInteractions,Z_Param_InteractionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOwnerGASEffects(Z_Param_AbilitySystem,EItemInteractions(Z_Param_InteractionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execUpdateOwnerGASAbilities)
	{
		P_GET_OBJECT(UAbilitySystemComponent,Z_Param_AbilitySystem);
		P_GET_ENUM(EItemInteractions,Z_Param_InteractionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOwnerGASAbilities(Z_Param_AbilitySystem,EItemInteractions(Z_Param_InteractionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Item::execSetupSkeletalMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupSkeletalMeshComponent();
		P_NATIVE_END;
	}
	struct TDRL_Item_eventDropped_Parms
	{
		ATDRL_Character* InteractingCharacter;
	};
	struct TDRL_Item_eventEquipped_Parms
	{
		ATDRL_Character* InteractingCharacter;
	};
	struct TDRL_Item_eventHolstered_Parms
	{
		ATDRL_Character* InteractingCharacter;
	};
	struct TDRL_Item_eventPickedUp_Parms
	{
		ATDRL_Character* InteractingCharacter;
	};
	struct TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Clients_Parms
	{
		UAnimMontage* AttackMontage;
		float Rate;
	};
	struct TDRL_Item_eventPrimaryAction_Parms
	{
		bool Enabled;
	};
	struct TDRL_Item_eventRAction_Parms
	{
		bool Enabled;
	};
	struct TDRL_Item_eventSecondaryAction_Parms
	{
		bool Enabled;
	};
	static FName NAME_ATDRL_Item_Dropped = FName(TEXT("Dropped"));
	void ATDRL_Item::Dropped(ATDRL_Character* InteractingCharacter)
	{
		TDRL_Item_eventDropped_Parms Parms;
		Parms.InteractingCharacter=InteractingCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Item_Dropped),&Parms);
	}
	static FName NAME_ATDRL_Item_Equipped = FName(TEXT("Equipped"));
	void ATDRL_Item::Equipped(ATDRL_Character* InteractingCharacter)
	{
		TDRL_Item_eventEquipped_Parms Parms;
		Parms.InteractingCharacter=InteractingCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Item_Equipped),&Parms);
	}
	static FName NAME_ATDRL_Item_Holstered = FName(TEXT("Holstered"));
	void ATDRL_Item::Holstered(ATDRL_Character* InteractingCharacter)
	{
		TDRL_Item_eventHolstered_Parms Parms;
		Parms.InteractingCharacter=InteractingCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Item_Holstered),&Parms);
	}
	static FName NAME_ATDRL_Item_PickedUp = FName(TEXT("PickedUp"));
	void ATDRL_Item::PickedUp(ATDRL_Character* InteractingCharacter)
	{
		TDRL_Item_eventPickedUp_Parms Parms;
		Parms.InteractingCharacter=InteractingCharacter;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Item_PickedUp),&Parms);
	}
	static FName NAME_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients = FName(TEXT("PlayAnimMontageOnOwningCharacter_Clients"));
	void ATDRL_Item::PlayAnimMontageOnOwningCharacter_Clients(UAnimMontage* AttackMontage, const float Rate)
	{
		TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Clients_Parms Parms;
		Parms.AttackMontage=AttackMontage;
		Parms.Rate=Rate;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients),&Parms);
	}
	static FName NAME_ATDRL_Item_PrimaryAction = FName(TEXT("PrimaryAction"));
	void ATDRL_Item::PrimaryAction(bool Enabled)
	{
		TDRL_Item_eventPrimaryAction_Parms Parms;
		Parms.Enabled=Enabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Item_PrimaryAction),&Parms);
	}
	static FName NAME_ATDRL_Item_RAction = FName(TEXT("RAction"));
	void ATDRL_Item::RAction(bool Enabled)
	{
		TDRL_Item_eventRAction_Parms Parms;
		Parms.Enabled=Enabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Item_RAction),&Parms);
	}
	static FName NAME_ATDRL_Item_SecondaryAction = FName(TEXT("SecondaryAction"));
	void ATDRL_Item::SecondaryAction(bool Enabled)
	{
		TDRL_Item_eventSecondaryAction_Parms Parms;
		Parms.Enabled=Enabled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_Item_SecondaryAction),&Parms);
	}
	void ATDRL_Item::StaticRegisterNativesATDRL_Item()
	{
		UClass* Class = ATDRL_Item::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignToCharacter", &ATDRL_Item::execAssignToCharacter },
			{ "ClearItemGlobalTimer", &ATDRL_Item::execClearItemGlobalTimer },
			{ "Drop", &ATDRL_Item::execDrop },
			{ "Dropped", &ATDRL_Item::execDropped },
			{ "EnableItemOutliner", &ATDRL_Item::execEnableItemOutliner },
			{ "Equip", &ATDRL_Item::execEquip },
			{ "Equipped", &ATDRL_Item::execEquipped },
			{ "GetCapsuleComponent", &ATDRL_Item::execGetCapsuleComponent },
			{ "GetMeshComponent", &ATDRL_Item::execGetMeshComponent },
			{ "GetMeshOffsetComponent", &ATDRL_Item::execGetMeshOffsetComponent },
			{ "Holster", &ATDRL_Item::execHolster },
			{ "Holstered", &ATDRL_Item::execHolstered },
			{ "IsItemGlobalTimerOver", &ATDRL_Item::execIsItemGlobalTimerOver },
			{ "PickedUp", &ATDRL_Item::execPickedUp },
			{ "Pickup", &ATDRL_Item::execPickup },
			{ "PlayAnimMontageOnOwningCharacter", &ATDRL_Item::execPlayAnimMontageOnOwningCharacter },
			{ "PlayAnimMontageOnOwningCharacter_Clients", &ATDRL_Item::execPlayAnimMontageOnOwningCharacter_Clients },
			{ "PlayAnimMontageOnOwningCharacter_Func", &ATDRL_Item::execPlayAnimMontageOnOwningCharacter_Func },
			{ "PrimaryAction", &ATDRL_Item::execPrimaryAction },
			{ "RAction", &ATDRL_Item::execRAction },
			{ "SecondaryAction", &ATDRL_Item::execSecondaryAction },
			{ "SetupSkeletalMeshComponent", &ATDRL_Item::execSetupSkeletalMeshComponent },
			{ "UpdateOwnerGAS", &ATDRL_Item::execUpdateOwnerGAS },
			{ "UpdateOwnerGASAbilities", &ATDRL_Item::execUpdateOwnerGASAbilities },
			{ "UpdateOwnerGASEffects", &ATDRL_Item::execUpdateOwnerGASEffects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics
	{
		struct TDRL_Item_eventAssignToCharacter_Parms
		{
			ATDRL_Character* Character;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventAssignToCharacter_Parms, Character), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item" },
		{ "Comment", "/*Assign this item to a character. This way the item is binded to a specific character and can't be stolen*/" },
		{ "DisplayName", "AssignToCharacter" },
		{ "Keywords", "Assign To Character TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Assign this item to a character. This way the item is binded to a specific character and can't be stolen" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "AssignToCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::TDRL_Item_eventAssignToCharacter_Parms), Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_AssignToCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_AssignToCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_ClearItemGlobalTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_ClearItemGlobalTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|GlobalTimer" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_ClearItemGlobalTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "ClearItemGlobalTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_ClearItemGlobalTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_ClearItemGlobalTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_ClearItemGlobalTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_ClearItemGlobalTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_Drop_Statics
	{
		struct TDRL_Item_eventDrop_Parms
		{
			ATDRL_Character* InteractingCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_Drop_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventDrop_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_Drop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_Drop_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "Drop", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_Drop_Statics::TDRL_Item_eventDrop_Parms), Z_Construct_UFunction_ATDRL_Item_Drop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Drop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_Drop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_Dropped_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventDropped_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Input" },
		{ "DisplayName", "Dropped" },
		{ "Keywords", "Dropped TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "Dropped", nullptr, nullptr, sizeof(TDRL_Item_eventDropped_Parms), Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_Dropped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_Dropped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics
	{
		struct TDRL_Item_eventEnableItemOutliner_Parms
		{
			bool Enable;
		};
		static void NewProp_Enable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::NewProp_Enable_SetBit(void* Obj)
	{
		((TDRL_Item_eventEnableItemOutliner_Parms*)Obj)->Enable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Item_eventEnableItemOutliner_Parms), &Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::NewProp_Enable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Components" },
		{ "Comment", "/*Enable/disable its Outliner*/" },
		{ "CompactNodeTitle", "OutlinerOn" },
		{ "DisplayName", "EnableItemOutliner" },
		{ "Keywords", "Get Spawned Character TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Enable/disable its Outliner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "EnableItemOutliner", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::TDRL_Item_eventEnableItemOutliner_Parms), Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_Equip_Statics
	{
		struct TDRL_Item_eventEquip_Parms
		{
			ATDRL_Character* InteractingCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_Equip_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventEquip_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_Equip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_Equip_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_Equip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_Equip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "Equip", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_Equip_Statics::TDRL_Item_eventEquip_Parms), Z_Construct_UFunction_ATDRL_Item_Equip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Equip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_Equip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Equip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_Equip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_Equip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_Equipped_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventEquipped_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Input" },
		{ "DisplayName", "Equipped" },
		{ "Keywords", "Equipped TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "Equipped", nullptr, nullptr, sizeof(TDRL_Item_eventEquipped_Parms), Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_Equipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_Equipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics
	{
		struct TDRL_Item_eventGetCapsuleComponent_Parms
		{
			UCapsuleComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventGetCapsuleComponent_Parms, ReturnValue), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Components" },
		{ "Comment", "/*Return the Capsule component*/" },
		{ "CompactNodeTitle", "Capsule" },
		{ "DisplayName", "GetCapsuleComponent" },
		{ "Keywords", "Get Spawned Character TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Return the Capsule component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "GetCapsuleComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::TDRL_Item_eventGetCapsuleComponent_Parms), Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics
	{
		struct TDRL_Item_eventGetMeshComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventGetMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Components" },
		{ "Comment", "/*Return the Mesh component*/" },
		{ "CompactNodeTitle", "Mesh" },
		{ "DisplayName", "GetMeshComponent" },
		{ "Keywords", "Get Spawned Character TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Return the Mesh component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "GetMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::TDRL_Item_eventGetMeshComponent_Parms), Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_GetMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_GetMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics
	{
		struct TDRL_Item_eventGetMeshOffsetComponent_Parms
		{
			USceneComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventGetMeshOffsetComponent_Parms, ReturnValue), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Components" },
		{ "Comment", "/*Return the MeshOffset component*/" },
		{ "CompactNodeTitle", "MeshOffset" },
		{ "DisplayName", "GetMeshOffsetComponent" },
		{ "Keywords", "Get Spawned Character TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Return the MeshOffset component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "GetMeshOffsetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::TDRL_Item_eventGetMeshOffsetComponent_Parms), Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_Holster_Statics
	{
		struct TDRL_Item_eventHolster_Parms
		{
			ATDRL_Character* InteractingCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_Holster_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventHolster_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_Holster_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_Holster_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_Holster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_Holster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "Holster", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_Holster_Statics::TDRL_Item_eventHolster_Parms), Z_Construct_UFunction_ATDRL_Item_Holster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Holster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_Holster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Holster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_Holster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_Holster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_Holstered_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventHolstered_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Input" },
		{ "DisplayName", "Holstered" },
		{ "Keywords", "Holstered TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "Holstered", nullptr, nullptr, sizeof(TDRL_Item_eventHolstered_Parms), Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_Holstered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_Holstered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics
	{
		struct TDRL_Item_eventIsItemGlobalTimerOver_Parms
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
	void Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_Item_eventIsItemGlobalTimerOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Item_eventIsItemGlobalTimerOver_Parms), &Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|GlobalTimer" },
		{ "Comment", "/*Return true if the global timer is over and the item can perform a new task*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Return true if the global timer is over and the item can perform a new task" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "IsItemGlobalTimerOver", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::TDRL_Item_eventIsItemGlobalTimerOver_Parms), Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventPickedUp_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Input" },
		{ "DisplayName", "PickedUp" },
		{ "Keywords", "PickedUp TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "PickedUp", nullptr, nullptr, sizeof(TDRL_Item_eventPickedUp_Parms), Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_PickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_PickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_Pickup_Statics
	{
		struct TDRL_Item_eventPickup_Parms
		{
			ATDRL_Character* InteractingCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractingCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::NewProp_InteractingCharacter = { "InteractingCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventPickup_Parms, InteractingCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::NewProp_InteractingCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "Pickup", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::TDRL_Item_eventPickup_Parms), Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics
	{
		struct TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Parms
		{
			UAnimMontage* AttackMontage;
			float Rate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Parms, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::NewProp_Rate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Parms, Rate), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::NewProp_Rate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Animations" },
		{ "Comment", "/*This function will play an AnimMontage (usually attacks) to the owning pawn's skeletal mesh component*/" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "DisplayName", "PlayAnimMontageOnOwningCharacter" },
		{ "Keywords", "Play Anim Montage AnimMontage On Owning Character TDRL NPCSpawn" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "This function will play an AnimMontage (usually attacks) to the owning pawn's skeletal mesh component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "PlayAnimMontageOnOwningCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Parms), Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Clients_Parms, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::NewProp_Rate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Clients_Parms, Rate), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::NewProp_Rate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "PlayAnimMontageOnOwningCharacter_Clients", nullptr, nullptr, sizeof(TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Clients_Parms), Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics
	{
		struct TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Func_Parms
		{
			UAnimMontage* AttackMontage;
			float Rate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Func_Parms, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::NewProp_Rate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Func_Parms, Rate), METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::NewProp_Rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::NewProp_Rate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::NewProp_AttackMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "PlayAnimMontageOnOwningCharacter_Func", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::TDRL_Item_eventPlayAnimMontageOnOwningCharacter_Func_Parms), Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((TDRL_Item_eventPrimaryAction_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Item_eventPrimaryAction_Parms), &Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::NewProp_Enabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Input" },
		{ "DisplayName", "PrimaryAction" },
		{ "Keywords", "Primary Action TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "PrimaryAction", nullptr, nullptr, sizeof(TDRL_Item_eventPrimaryAction_Parms), Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_PrimaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_PrimaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_RAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_RAction_Statics::NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_Item_RAction_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((TDRL_Item_eventRAction_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Item_RAction_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Item_eventRAction_Parms), &Z_Construct_UFunction_ATDRL_Item_RAction_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_RAction_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_RAction_Statics::NewProp_Enabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_RAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_RAction_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_RAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Input" },
		{ "DisplayName", "RAction" },
		{ "Keywords", "RAction TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_RAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "RAction", nullptr, nullptr, sizeof(TDRL_Item_eventRAction_Parms), Z_Construct_UFunction_ATDRL_Item_RAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_RAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_RAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_RAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_RAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_RAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((TDRL_Item_eventSecondaryAction_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Item_eventSecondaryAction_Parms), &Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::NewProp_Enabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|Item|Input" },
		{ "DisplayName", "SecondaryAction" },
		{ "Keywords", "Secondary Action TDRL" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "SecondaryAction", nullptr, nullptr, sizeof(TDRL_Item_eventSecondaryAction_Parms), Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_SecondaryAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_SecondaryAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_SetupSkeletalMeshComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_SetupSkeletalMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*Runtime skeletal mesh component. Will be spawned and used when the weapon is equipped. Leave clear if you want to use the default static mesh*///UPROPERTY(BlueprintReadOnly, Category = \"TDRL|Item|Runtime\")\n//USkeletalMeshComponent* SkeletalMesh;\n" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Runtime skeletal mesh component. Will be spawned and used when the weapon is equipped. Leave clear if you want to use the default static mesh//UPROPERTY(BlueprintReadOnly, Category = \"TDRL|Item|Runtime\")\n//USkeletalMeshComponent* SkeletalMesh;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_SetupSkeletalMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "SetupSkeletalMeshComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_SetupSkeletalMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_SetupSkeletalMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_SetupSkeletalMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_SetupSkeletalMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics
	{
		struct TDRL_Item_eventUpdateOwnerGAS_Parms
		{
			UAbilitySystemComponent* AbilitySystem;
			EItemInteractions InteractionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventUpdateOwnerGAS_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_AbilitySystem_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_InteractionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventUpdateOwnerGAS_Parms, InteractionType), Z_Construct_UEnum_TopDownRogueLite_EItemInteractions, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_InteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_InteractionType_MetaData)) }; // 1688162922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_AbilitySystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_InteractionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::NewProp_InteractionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "UpdateOwnerGAS", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::TDRL_Item_eventUpdateOwnerGAS_Parms), Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics
	{
		struct TDRL_Item_eventUpdateOwnerGASAbilities_Parms
		{
			UAbilitySystemComponent* AbilitySystem;
			EItemInteractions InteractionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventUpdateOwnerGASAbilities_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_AbilitySystem_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_InteractionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventUpdateOwnerGASAbilities_Parms, InteractionType), Z_Construct_UEnum_TopDownRogueLite_EItemInteractions, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_InteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_InteractionType_MetaData)) }; // 1688162922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_AbilitySystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_InteractionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::NewProp_InteractionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "UpdateOwnerGASAbilities", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::TDRL_Item_eventUpdateOwnerGASAbilities_Parms), Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics
	{
		struct TDRL_Item_eventUpdateOwnerGASEffects_Parms
		{
			UAbilitySystemComponent* AbilitySystem;
			EItemInteractions InteractionType;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystem;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_AbilitySystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_AbilitySystem = { "AbilitySystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventUpdateOwnerGASEffects_Parms, AbilitySystem), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_AbilitySystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_AbilitySystem_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_InteractionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_InteractionType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_InteractionType = { "InteractionType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Item_eventUpdateOwnerGASEffects_Parms, InteractionType), Z_Construct_UEnum_TopDownRogueLite_EItemInteractions, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_InteractionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_InteractionType_MetaData)) }; // 1688162922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_AbilitySystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_InteractionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::NewProp_InteractionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Item, nullptr, "UpdateOwnerGASEffects", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::TDRL_Item_eventUpdateOwnerGASEffects_Parms), Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_Item);
	UClass* Z_Construct_UClass_ATDRL_Item_NoRegister()
	{
		return ATDRL_Item::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_Item_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVisualDebug_MetaData[];
#endif
		static void NewProp_bEnableVisualDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVisualDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquippedCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPickup_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDrop_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDrop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEquip_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEquip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnHolster_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHolster;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ESkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ESkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTimerCountdownHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTimerCountdownHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_Item_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_Item_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_Item_AssignToCharacter, "AssignToCharacter" }, // 2320874671
		{ &Z_Construct_UFunction_ATDRL_Item_ClearItemGlobalTimer, "ClearItemGlobalTimer" }, // 1593730924
		{ &Z_Construct_UFunction_ATDRL_Item_Drop, "Drop" }, // 1920410545
		{ &Z_Construct_UFunction_ATDRL_Item_Dropped, "Dropped" }, // 1885793951
		{ &Z_Construct_UFunction_ATDRL_Item_EnableItemOutliner, "EnableItemOutliner" }, // 2512576189
		{ &Z_Construct_UFunction_ATDRL_Item_Equip, "Equip" }, // 4044505636
		{ &Z_Construct_UFunction_ATDRL_Item_Equipped, "Equipped" }, // 2316860333
		{ &Z_Construct_UFunction_ATDRL_Item_GetCapsuleComponent, "GetCapsuleComponent" }, // 2087647932
		{ &Z_Construct_UFunction_ATDRL_Item_GetMeshComponent, "GetMeshComponent" }, // 3598193202
		{ &Z_Construct_UFunction_ATDRL_Item_GetMeshOffsetComponent, "GetMeshOffsetComponent" }, // 891202338
		{ &Z_Construct_UFunction_ATDRL_Item_Holster, "Holster" }, // 4039539946
		{ &Z_Construct_UFunction_ATDRL_Item_Holstered, "Holstered" }, // 2789594928
		{ &Z_Construct_UFunction_ATDRL_Item_IsItemGlobalTimerOver, "IsItemGlobalTimerOver" }, // 3099040819
		{ &Z_Construct_UFunction_ATDRL_Item_PickedUp, "PickedUp" }, // 452580009
		{ &Z_Construct_UFunction_ATDRL_Item_Pickup, "Pickup" }, // 2164317524
		{ &Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter, "PlayAnimMontageOnOwningCharacter" }, // 2960233724
		{ &Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Clients, "PlayAnimMontageOnOwningCharacter_Clients" }, // 1202439752
		{ &Z_Construct_UFunction_ATDRL_Item_PlayAnimMontageOnOwningCharacter_Func, "PlayAnimMontageOnOwningCharacter_Func" }, // 2029535665
		{ &Z_Construct_UFunction_ATDRL_Item_PrimaryAction, "PrimaryAction" }, // 370257576
		{ &Z_Construct_UFunction_ATDRL_Item_RAction, "RAction" }, // 2949192823
		{ &Z_Construct_UFunction_ATDRL_Item_SecondaryAction, "SecondaryAction" }, // 413767341
		{ &Z_Construct_UFunction_ATDRL_Item_SetupSkeletalMeshComponent, "SetupSkeletalMeshComponent" }, // 1880754595
		{ &Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGAS, "UpdateOwnerGAS" }, // 2680079694
		{ &Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASAbilities, "UpdateOwnerGASAbilities" }, // 4219002464
		{ &Z_Construct_UFunction_ATDRL_Item_UpdateOwnerGASEffects, "UpdateOwnerGASEffects" }, // 654861026
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Items/TDRL_Item.h" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "TDRL|Data|Item" },
		{ "Comment", "/* Static Data structure for Items*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Static Data structure for Items" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, StaticData), Z_Construct_UScriptStruct_FItemStaticData, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_StaticData_MetaData)) }; // 1929258153
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_bEnableVisualDebug_MetaData[] = {
		{ "Category", "TDRL|Data|Item" },
		{ "Comment", "/* Should enable Visual Debug? Mainly used for traces.*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Should enable Visual Debug? Mainly used for traces." },
	};
#endif
	void Z_Construct_UClass_ATDRL_Item_Statics::NewProp_bEnableVisualDebug_SetBit(void* Obj)
	{
		((ATDRL_Item*)Obj)->bEnableVisualDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_bEnableVisualDebug = { "bEnableVisualDebug", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ATDRL_Item), &Z_Construct_UClass_ATDRL_Item_Statics::NewProp_bEnableVisualDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_bEnableVisualDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_bEnableVisualDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_EquippedCharacter_MetaData[] = {
		{ "Category", "TDRL|Item|Runtime" },
		{ "Comment", "/*Will return the character holding this item. Must be equipped!*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Will return the character holding this item. Must be equipped!" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_EquippedCharacter = { "EquippedCharacter", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, EquippedCharacter), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_EquippedCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_EquippedCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnPickup_MetaData[] = {
		{ "Category", "TDRL|Item|Delegates" },
		{ "Comment", "/*Pickup delegate*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Pickup delegate" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnPickup = { "OnPickup", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, OnPickup), Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnPickup_MetaData)) }; // 910714377
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnDrop_MetaData[] = {
		{ "Category", "TDRL|Item|Delegates" },
		{ "Comment", "/*Drop delegate*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Drop delegate" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnDrop = { "OnDrop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, OnDrop), Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnDrop_MetaData)) }; // 367027216
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnEquip_MetaData[] = {
		{ "Category", "TDRL|Item|Delegates" },
		{ "Comment", "/*Equip delegate*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Equip delegate" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnEquip = { "OnEquip", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, OnEquip), Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnEquip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnEquip_MetaData)) }; // 2184682869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnHolster_MetaData[] = {
		{ "Category", "TDRL|Item|Delegates" },
		{ "Comment", "/*Holster delegate*/" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
		{ "ToolTip", "Holster delegate" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnHolster = { "OnHolster", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, OnHolster), Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnHolster_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnHolster_MetaData)) }; // 890688280
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Capsule_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_MeshOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_MeshOffset = { "MeshOffset", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, MeshOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_MeshOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_MeshOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_ESkeletalMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_ESkeletalMesh = { "ESkeletalMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, ESkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_ESkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_ESkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Item_Statics::NewProp_GlobalTimerCountdownHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Items/TDRL_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATDRL_Item_Statics::NewProp_GlobalTimerCountdownHandle = { "GlobalTimerCountdownHandle", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Item, GlobalTimerCountdownHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_GlobalTimerCountdownHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::NewProp_GlobalTimerCountdownHandle_MetaData)) }; // 4017759265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_Item_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_StaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_bEnableVisualDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_EquippedCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnPickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnEquip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_OnHolster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_MeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_ESkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Item_Statics::NewProp_GlobalTimerCountdownHandle,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATDRL_Item_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTDRL_InteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ATDRL_Item, ITDRL_InteractionInterface), false },  // 3137302961
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_Item_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_Item>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_Item_Statics::ClassParams = {
		&ATDRL_Item::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_Item_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_Item_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Item_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_Item()
	{
		if (!Z_Registration_Info_UClass_ATDRL_Item.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_Item.OuterSingleton, Z_Construct_UClass_ATDRL_Item_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_Item.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_Item>()
	{
		return ATDRL_Item::StaticClass();
	}

	void ATDRL_Item::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EquippedCharacter(TEXT("EquippedCharacter"));
		static const FName Name_GlobalTimerCountdownHandle(TEXT("GlobalTimerCountdownHandle"));

		const bool bIsValid = true
			&& Name_EquippedCharacter == ClassReps[(int32)ENetFields_Private::EquippedCharacter].Property->GetFName()
			&& Name_GlobalTimerCountdownHandle == ClassReps[(int32)ENetFields_Private::GlobalTimerCountdownHandle].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATDRL_Item"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_Item);
	ATDRL_Item::~ATDRL_Item() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_Item, ATDRL_Item::StaticClass, TEXT("ATDRL_Item"), &Z_Registration_Info_UClass_ATDRL_Item, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_Item), 3126226866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_859211907(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Items_TDRL_Item_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
