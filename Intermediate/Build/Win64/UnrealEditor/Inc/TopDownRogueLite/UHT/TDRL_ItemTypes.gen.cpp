// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Types/TDRL_ItemTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_GASTypes.h"
#include "TopDownRogueLite/Public/Types/TDRL_PhysicsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_ItemTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GrenadePersistentActor_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectileBase_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EItemInteractions();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EItemRarity();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FFirearmMontages();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FFirearmStaticData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FGASContainer();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FGrenadeStaticData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FItemAbilitiesEffects();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FItemStaticData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeStaticData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileStaticData();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemRarity;
	static UEnum* EItemRarity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemRarity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemRarity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EItemRarity, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EItemRarity"));
		}
		return Z_Registration_Info_UEnum_EItemRarity.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EItemRarity>()
	{
		return EItemRarity_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics::Enumerators[] = {
		{ "EItemRarity::IR_Trash", (int64)EItemRarity::IR_Trash },
		{ "EItemRarity::IR_Common", (int64)EItemRarity::IR_Common },
		{ "EItemRarity::IR_Uncommon", (int64)EItemRarity::IR_Uncommon },
		{ "EItemRarity::IR_Rare", (int64)EItemRarity::IR_Rare },
		{ "EItemRarity::IR_Epic", (int64)EItemRarity::IR_Epic },
		{ "EItemRarity::IR_Legend", (int64)EItemRarity::IR_Legend },
		{ "EItemRarity::IR_MAX", (int64)EItemRarity::IR_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IR_Common.DisplayName", "Common" },
		{ "IR_Common.Name", "EItemRarity::IR_Common" },
		{ "IR_Epic.DisplayName", "Epic" },
		{ "IR_Epic.Name", "EItemRarity::IR_Epic" },
		{ "IR_Legend.DisplayName", "Legend" },
		{ "IR_Legend.Name", "EItemRarity::IR_Legend" },
		{ "IR_MAX.DisplayName", "Max" },
		{ "IR_MAX.Name", "EItemRarity::IR_MAX" },
		{ "IR_Rare.DisplayName", "Rare" },
		{ "IR_Rare.Name", "EItemRarity::IR_Rare" },
		{ "IR_Trash.DisplayName", "Trash" },
		{ "IR_Trash.Name", "EItemRarity::IR_Trash" },
		{ "IR_Uncommon.DisplayName", "Uncommon" },
		{ "IR_Uncommon.Name", "EItemRarity::IR_Uncommon" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EItemRarity",
		"EItemRarity",
		Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EItemRarity()
	{
		if (!Z_Registration_Info_UEnum_EItemRarity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemRarity.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EItemRarity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemRarity.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemInteractions;
	static UEnum* EItemInteractions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemInteractions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemInteractions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EItemInteractions, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EItemInteractions"));
		}
		return Z_Registration_Info_UEnum_EItemInteractions.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EItemInteractions>()
	{
		return EItemInteractions_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics::Enumerators[] = {
		{ "EItemInteractions::II_Pickup", (int64)EItemInteractions::II_Pickup },
		{ "EItemInteractions::II_Drop", (int64)EItemInteractions::II_Drop },
		{ "EItemInteractions::II_Equip", (int64)EItemInteractions::II_Equip },
		{ "EItemInteractions::II_Holster", (int64)EItemInteractions::II_Holster },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "II_Drop.DisplayName", "Drop" },
		{ "II_Drop.Name", "EItemInteractions::II_Drop" },
		{ "II_Equip.DisplayName", "Equip" },
		{ "II_Equip.Name", "EItemInteractions::II_Equip" },
		{ "II_Holster.DisplayName", "Holster" },
		{ "II_Holster.Name", "EItemInteractions::II_Holster" },
		{ "II_Pickup.DisplayName", "Pickup" },
		{ "II_Pickup.Name", "EItemInteractions::II_Pickup" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EItemInteractions",
		"EItemInteractions",
		Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EItemInteractions()
	{
		if (!Z_Registration_Info_UEnum_EItemInteractions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemInteractions.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EItemInteractions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemInteractions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemAbilitiesEffects;
class UScriptStruct* FItemAbilitiesEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemAbilitiesEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemAbilitiesEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAbilitiesEffects, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("ItemAbilitiesEffects"));
	}
	return Z_Registration_Info_UScriptStruct_ItemAbilitiesEffects.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FItemAbilitiesEffects>()
{
	return FItemAbilitiesEffects::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddOnPickup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddOnPickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveOnPickup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveOnPickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddOnDrop_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddOnDrop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveOnDrop_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveOnDrop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddOnEquipped_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddOnEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveOnEquipped_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveOnEquipped;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddOnHolstered_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddOnHolstered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoveOnHolstered_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoveOnHolstered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAbilitiesEffects>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnPickup_MetaData[] = {
		{ "Category", "ItemAbilities" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnPickup = { "AddOnPickup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAbilitiesEffects, AddOnPickup), Z_Construct_UScriptStruct_FGASContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnPickup_MetaData)) }; // 2860880627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnPickup_MetaData[] = {
		{ "Category", "ItemAbilities" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnPickup = { "RemoveOnPickup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAbilitiesEffects, RemoveOnPickup), Z_Construct_UScriptStruct_FGASContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnPickup_MetaData)) }; // 2860880627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnDrop_MetaData[] = {
		{ "Category", "ItemAbilities" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnDrop = { "AddOnDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAbilitiesEffects, AddOnDrop), Z_Construct_UScriptStruct_FGASContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnDrop_MetaData)) }; // 2860880627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnDrop_MetaData[] = {
		{ "Category", "ItemAbilities" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnDrop = { "RemoveOnDrop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAbilitiesEffects, RemoveOnDrop), Z_Construct_UScriptStruct_FGASContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnDrop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnDrop_MetaData)) }; // 2860880627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnEquipped_MetaData[] = {
		{ "Category", "ItemAbilities" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnEquipped = { "AddOnEquipped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAbilitiesEffects, AddOnEquipped), Z_Construct_UScriptStruct_FGASContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnEquipped_MetaData)) }; // 2860880627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnEquipped_MetaData[] = {
		{ "Category", "ItemAbilities" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnEquipped = { "RemoveOnEquipped", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAbilitiesEffects, RemoveOnEquipped), Z_Construct_UScriptStruct_FGASContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnEquipped_MetaData)) }; // 2860880627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnHolstered_MetaData[] = {
		{ "Category", "ItemAbilities" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnHolstered = { "AddOnHolstered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAbilitiesEffects, AddOnHolstered), Z_Construct_UScriptStruct_FGASContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnHolstered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnHolstered_MetaData)) }; // 2860880627
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnHolstered_MetaData[] = {
		{ "Category", "ItemAbilities" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnHolstered = { "RemoveOnHolstered", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemAbilitiesEffects, RemoveOnHolstered), Z_Construct_UScriptStruct_FGASContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnHolstered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnHolstered_MetaData)) }; // 2860880627
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnPickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnPickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnDrop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnEquipped,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_AddOnHolstered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewProp_RemoveOnHolstered,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"ItemAbilitiesEffects",
		sizeof(FItemAbilitiesEffects),
		alignof(FItemAbilitiesEffects),
		Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemAbilitiesEffects()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemAbilitiesEffects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemAbilitiesEffects.InnerSingleton, Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemAbilitiesEffects.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStaticData;
class UScriptStruct* FItemStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStaticData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("ItemStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStaticData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FItemStaticData>()
{
	return FItemStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FItemStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rarity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rarity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerAnimInstance_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LayerAnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysEquipOnPickup_MetaData[];
#endif
		static void NewProp_bAlwaysEquipOnPickup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysEquipOnPickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GASData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GASData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Item name to display*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Item name to display" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStaticData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Rarity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Rarity_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Item rarity*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Item rarity" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Rarity = { "Rarity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStaticData, Rarity), Z_Construct_UEnum_TopDownRogueLite_EItemRarity, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Rarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Rarity_MetaData)) }; // 4204773355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Item icon*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Item icon" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStaticData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Socket this Item will be attached when equipped*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Socket this Item will be attached when equipped" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStaticData, Socket), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Socket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_LayerAnimInstance_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Layer Animation stance to use*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Layer Animation stance to use" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_LayerAnimInstance = { "LayerAnimInstance", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStaticData, LayerAnimInstance), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_LayerAnimInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_LayerAnimInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_bAlwaysEquipOnPickup_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Should always equip when picked up? Otherwise, if the player is selecting the main weapon, this one will just simply be place into the inventory*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Should always equip when picked up? Otherwise, if the player is selecting the main weapon, this one will just simply be place into the inventory" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_bAlwaysEquipOnPickup_SetBit(void* Obj)
	{
		((FItemStaticData*)Obj)->bAlwaysEquipOnPickup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_bAlwaysEquipOnPickup = { "bAlwaysEquipOnPickup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FItemStaticData), &Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_bAlwaysEquipOnPickup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_bAlwaysEquipOnPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_bAlwaysEquipOnPickup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Skeletal mesh asset to use when equipped. Will use the static mesh if this is null*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Skeletal mesh asset to use when equipped. Will use the static mesh if this is null" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStaticData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_AnimBlueprint_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*AnimBlueprint to assign to the SkeletalMesh*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "AnimBlueprint to assign to the SkeletalMesh" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_AnimBlueprint = { "AnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStaticData, AnimBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_AnimBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_AnimBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_GASData_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Abilities and effects to handle during the various events*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Abilities and effects to handle during the various events" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_GASData = { "GASData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FItemStaticData, GASData), Z_Construct_UScriptStruct_FItemAbilitiesEffects, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_GASData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_GASData_MetaData)) }; // 968283909
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Rarity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Rarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_Socket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_LayerAnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_bAlwaysEquipOnPickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_AnimBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStaticData_Statics::NewProp_GASData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"ItemStaticData",
		sizeof(FItemStaticData),
		alignof(FItemStaticData),
		Z_Construct_UScriptStruct_FItemStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_ItemStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStaticData.InnerSingleton, Z_Construct_UScriptStruct_FItemStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ItemStaticData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeleePrimaryAttackMontages;
class UScriptStruct* FMeleePrimaryAttackMontages::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeleePrimaryAttackMontages.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeleePrimaryAttackMontages.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("MeleePrimaryAttackMontages"));
	}
	return Z_Registration_Info_UScriptStruct_MeleePrimaryAttackMontages.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FMeleePrimaryAttackMontages>()
{
	return FMeleePrimaryAttackMontages::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Still_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Still_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Still;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Forward_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Forward_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Forward;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Backward_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Backward_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Backward;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Right_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Right;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Left_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Left;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Falling_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Falling_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Falling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleePrimaryAttackMontages>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Still_Inner = { "Still", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Still_MetaData[] = {
		{ "Category", "AttackMontages" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Still = { "Still", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleePrimaryAttackMontages, Still), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Still_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Still_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Forward_Inner = { "Forward", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Forward_MetaData[] = {
		{ "Category", "AttackMontages" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleePrimaryAttackMontages, Forward), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Forward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Forward_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Backward_Inner = { "Backward", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Backward_MetaData[] = {
		{ "Category", "AttackMontages" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Backward = { "Backward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleePrimaryAttackMontages, Backward), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Backward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Backward_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Right_Inner = { "Right", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "AttackMontages" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleePrimaryAttackMontages, Right), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Right_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Left_Inner = { "Left", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "AttackMontages" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleePrimaryAttackMontages, Left), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Left_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Falling_Inner = { "Falling", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Falling_MetaData[] = {
		{ "Category", "AttackMontages" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Falling = { "Falling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleePrimaryAttackMontages, Falling), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Falling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Falling_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Still_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Still,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Forward_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Forward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Backward_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Backward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Right_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Left_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Falling_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewProp_Falling,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"MeleePrimaryAttackMontages",
		sizeof(FMeleePrimaryAttackMontages),
		alignof(FMeleePrimaryAttackMontages),
		Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages()
	{
		if (!Z_Registration_Info_UScriptStruct_MeleePrimaryAttackMontages.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeleePrimaryAttackMontages.InnerSingleton, Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeleePrimaryAttackMontages.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeleeStaticData;
class UScriptStruct* FMeleeStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeleeStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeleeStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeStaticData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("MeleeStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_MeleeStaticData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FMeleeStaticData>()
{
	return FMeleeStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeleeStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontages_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeWindow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Countdown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Countdown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLoudness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitLoudness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NoiseTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNoiseTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitNoiseTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitVFXs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitVFXs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsFieldRadialData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsFieldRadialData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTagFilter_MetaData[];
#endif
		static void NewProp_bUseTagFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTagFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_AnimMontages_MetaData[] = {
		{ "Category", "StaticData" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, AnimMontages), Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_AnimMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_AnimMontages_MetaData)) }; // 4277860354
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Base damage to apply when this melee weapon hit something*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Base damage to apply when this melee weapon hit something" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Delay this time before start tracing the attack*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Delay this time before start tracing the attack" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_TimeWindow_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Time window, the attack duration*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Time window, the attack duration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_TimeWindow = { "TimeWindow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, TimeWindow), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_TimeWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_TimeWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Countdown_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Countdown before being able to attack again*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Countdown before being able to attack again" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Countdown = { "Countdown", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, Countdown), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Countdown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Countdown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Loudness_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Noise emitted by an attack without hit*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Noise emitted by an attack without hit" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, Loudness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Loudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Loudness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitLoudness_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Noise emitted by an actual hit*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Noise emitted by an actual hit" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitLoudness = { "HitLoudness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, HitLoudness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitLoudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitLoudness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_NoiseTag_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Noise Tag for normal Loudness*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Noise Tag for normal Loudness" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_NoiseTag = { "NoiseTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, NoiseTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_NoiseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_NoiseTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitNoiseTag_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Noise Tag for HitNoiseTag*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Noise Tag for HitNoiseTag" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitNoiseTag = { "HitNoiseTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, HitNoiseTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitNoiseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitNoiseTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Damage type to apply*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Damage type to apply" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitVFXs_MetaData[] = {
		{ "AllowedStructTypes", "FHitEffectType" },
		{ "Category", "StaticData" },
		{ "Comment", "/*Hit VFXs list to use on Hit*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Hit VFXs list to use on Hit" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitVFXs = { "HitVFXs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, HitVFXs), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitVFXs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitVFXs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_PhysicsFieldRadialData_MetaData[] = {
		{ "AllowedStructTypes", "FHitEffectType" },
		{ "Category", "StaticData" },
		{ "Comment", "/*Physics Field radial data, used for any Chaos Physics solver in the map. Destructables included.*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Physics Field radial data, used for any Chaos Physics solver in the map. Destructables included." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_PhysicsFieldRadialData = { "PhysicsFieldRadialData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeleeStaticData, PhysicsFieldRadialData), Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_PhysicsFieldRadialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_PhysicsFieldRadialData_MetaData)) }; // 3229476067
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_bUseTagFilter_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Should use tag filters? Using these tags you can decide which bodies will be traced depending on the animation playing*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Should use tag filters? Using these tags you can decide which bodies will be traced depending on the animation playing" },
	};
#endif
	void Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_bUseTagFilter_SetBit(void* Obj)
	{
		((FMeleeStaticData*)Obj)->bUseTagFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_bUseTagFilter = { "bUseTagFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMeleeStaticData), &Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_bUseTagFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_bUseTagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_bUseTagFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_AnimMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_TimeWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Countdown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_Loudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitLoudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_NoiseTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitNoiseTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_HitVFXs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_PhysicsFieldRadialData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewProp_bUseTagFilter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"MeleeStaticData",
		sizeof(FMeleeStaticData),
		alignof(FMeleeStaticData),
		Z_Construct_UScriptStruct_FMeleeStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeleeStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_MeleeStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeleeStaticData.InnerSingleton, Z_Construct_UScriptStruct_FMeleeStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeleeStaticData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FirearmMontages;
class UScriptStruct* FFirearmMontages::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FirearmMontages.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FirearmMontages.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirearmMontages, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("FirearmMontages"));
	}
	return Z_Registration_Info_UScriptStruct_FirearmMontages.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FFirearmMontages>()
{
	return FFirearmMontages::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFirearmMontages_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Primary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Primary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Secondary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Secondary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reload_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Reload;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmMontages_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirearmMontages>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Primary_MetaData[] = {
		{ "Category", "Montages" },
		{ "Comment", "/*Played when performing the Primary Action*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Played when performing the Primary Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Primary = { "Primary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmMontages, Primary), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Primary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Primary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Secondary_MetaData[] = {
		{ "Category", "Montages" },
		{ "Comment", "/*Played when performing the Secondary Action*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Played when performing the Secondary Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Secondary = { "Secondary", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmMontages, Secondary), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Secondary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Secondary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Reload_MetaData[] = {
		{ "Category", "Montages" },
		{ "Comment", "/*Played when Reloading*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Played when Reloading" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Reload = { "Reload", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmMontages, Reload), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Reload_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Reload_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirearmMontages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Primary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Secondary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewProp_Reload,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirearmMontages_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"FirearmMontages",
		sizeof(FFirearmMontages),
		alignof(FFirearmMontages),
		Z_Construct_UScriptStruct_FFirearmMontages_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmMontages_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmMontages_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmMontages_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirearmMontages()
	{
		if (!Z_Registration_Info_UScriptStruct_FirearmMontages.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FirearmMontages.InnerSingleton, Z_Construct_UScriptStruct_FFirearmMontages_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FirearmMontages.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FirearmStaticData;
class UScriptStruct* FFirearmStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FirearmStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FirearmStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFirearmStaticData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("FirearmStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_FirearmStaticData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FFirearmStaticData>()
{
	return FFirearmStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFirearmStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimMontages_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Burst_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Burst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagazineSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MagazineSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NoiseTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AmmoTag;
		static const UECodeGen_Private::FClassPropertyParams NewProp_MuzzleObstructionCheckIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleObstructionCheckIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MuzzleObstructionCheckIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFirearmStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AnimMontages_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Firearm montages to play*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Firearm montages to play" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AnimMontages = { "AnimMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, AnimMontages), Z_Construct_UScriptStruct_FFirearmMontages, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AnimMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AnimMontages_MetaData)) }; // 604135955
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Projectile class to spawn when fire*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Projectile class to spawn when fire" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_ProjectileBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Firerate of this firearm (IMPORTANT: firerate is Bullets/Second)*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Firerate of this firearm (IMPORTANT: firerate is Bullets/Second)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, FireRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireDelay_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Delay before firing*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Delay before firing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, FireDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Burst_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Burst length in bullets. 0 will not use burst*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Burst length in bullets. 0 will not use burst" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Burst = { "Burst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, Burst), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Burst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Burst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Max ammo this weapon can carry (excluding magazine)*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Max ammo this weapon can carry (excluding magazine)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, MaxAmmo), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MagazineSize_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Max ammo this weapon can carry into the magazine alone*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Max ammo this weapon can carry into the magazine alone" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MagazineSize = { "MagazineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, MagazineSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MagazineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MagazineSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Time required to reload this firearm*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Time required to reload this firearm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, ReloadTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Loudness_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Noise loudness when shot*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Noise loudness when shot" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, Loudness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Loudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Loudness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_NoiseTag_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Noise tag for AIPerception management*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Noise tag for AIPerception management" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_NoiseTag = { "NoiseTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, NoiseTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_NoiseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_NoiseTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AmmoTag_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Used for filtering ammo pickups*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Used for filtering ammo pickups" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AmmoTag = { "AmmoTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, AmmoTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AmmoTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AmmoTag_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MuzzleObstructionCheckIgnore_Inner = { "MuzzleObstructionCheckIgnore", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MuzzleObstructionCheckIgnore_MetaData[] = {
		{ "Category", "StaticData" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MuzzleObstructionCheckIgnore = { "MuzzleObstructionCheckIgnore", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFirearmStaticData, MuzzleObstructionCheckIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MuzzleObstructionCheckIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MuzzleObstructionCheckIgnore_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFirearmStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AnimMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_FireDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Burst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MaxAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MagazineSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_ReloadTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_Loudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_NoiseTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_AmmoTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MuzzleObstructionCheckIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewProp_MuzzleObstructionCheckIgnore,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFirearmStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"FirearmStaticData",
		sizeof(FFirearmStaticData),
		alignof(FFirearmStaticData),
		Z_Construct_UScriptStruct_FFirearmStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFirearmStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFirearmStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_FirearmStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FirearmStaticData.InnerSingleton, Z_Construct_UScriptStruct_FFirearmStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FirearmStaticData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectileStaticData;
class UScriptStruct* FProjectileStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectileStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectileStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileStaticData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("ProjectileStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectileStaticData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FProjectileStaticData>()
{
	return FProjectileStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProjectileStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Instances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrajectoryVariance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrajectoryVariance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLoudness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitLoudness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNoiseTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_HitNoiseTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleEffectNiagara_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleEffectNiagara;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleEffectParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleEffectParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitVFXs_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitVFXs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsFieldRadialData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsFieldRadialData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Instances_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Number of instances or traces to spawn*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Number of instances or traces to spawn" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, Instances), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Instances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_TrajectoryVariance_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Trajectory variance between instances (randomized direction)*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Trajectory variance between instances (randomized direction)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_TrajectoryVariance = { "TrajectoryVariance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, TrajectoryVariance), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_TrajectoryVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_TrajectoryVariance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Max time this projectile can operate before being destroyed*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Max time this projectile can operate before being destroyed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, Lifetime), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Lifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Lifetime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Base damage to apply when hit something*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Base damage to apply when hit something" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitLoudness_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Noise loudness when this projectile hit something*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Noise loudness when this projectile hit something" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitLoudness = { "HitLoudness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, HitLoudness), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitLoudness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitLoudness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitNoiseTag_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Noise tag for AIPerception management*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Noise tag for AIPerception management" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitNoiseTag = { "HitNoiseTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, HitNoiseTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitNoiseTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitNoiseTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Damage type to apply*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Damage type to apply" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_SoundEffect_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Projectile sound*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Projectile sound" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_SoundEffect = { "SoundEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, SoundEffect), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_SoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_SoundEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectNiagara_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Projectile muzzle vfx*/" },
		{ "EditCondition", "MuzzleEffectParticle==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Projectile muzzle vfx" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectNiagara = { "MuzzleEffectNiagara", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, MuzzleEffectNiagara), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectNiagara_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectNiagara_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectParticle_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Projectile muzzle vfx*/" },
		{ "EditCondition", "MuzzleEffectNiagara==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Projectile muzzle vfx" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectParticle = { "MuzzleEffectParticle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, MuzzleEffectParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitVFXs_MetaData[] = {
		{ "AllowedStructTypes", "FHitEffectType" },
		{ "Category", "StaticData" },
		{ "Comment", "/*Hit VFXs list to use on Hit*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Hit VFXs list to use on Hit" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitVFXs = { "HitVFXs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, HitVFXs), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitVFXs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitVFXs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_PhysicsFieldRadialData_MetaData[] = {
		{ "AllowedStructTypes", "FHitEffectType" },
		{ "Category", "StaticData" },
		{ "Comment", "/*Physics Field radial data, used for any Chaos Physics solver in the map. Destructables included.*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Physics Field radial data, used for any Chaos Physics solver in the map. Destructables included." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_PhysicsFieldRadialData = { "PhysicsFieldRadialData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProjectileStaticData, PhysicsFieldRadialData), Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData, METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_PhysicsFieldRadialData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_PhysicsFieldRadialData_MetaData)) }; // 3229476067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectileStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Instances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_TrajectoryVariance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitLoudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitNoiseTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_SoundEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectNiagara,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_MuzzleEffectParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_HitVFXs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewProp_PhysicsFieldRadialData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"ProjectileStaticData",
		sizeof(FProjectileStaticData),
		alignof(FProjectileStaticData),
		Z_Construct_UScriptStruct_FProjectileStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_ProjectileStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectileStaticData.InnerSingleton, Z_Construct_UScriptStruct_FProjectileStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProjectileStaticData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrenadeStaticData;
class UScriptStruct* FGrenadeStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrenadeStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrenadeStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrenadeStaticData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("GrenadeStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_GrenadeStaticData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FGrenadeStaticData>()
{
	return FGrenadeStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGrenadeStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxArchDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxArchDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrowMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrowMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeAdjustment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeAdjustment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PersistentEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PersistentEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrailEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrailEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionSoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExplosionSoundEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrenadeStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Grenade name to display*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Grenade name to display" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxArchDistance_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Max reaching distance from player*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Max reaching distance from player" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxArchDistance = { "MaxArchDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, MaxArchDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxArchDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxArchDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxForce_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Max force to apply, this will be scaled by the character's throwing multiplier value*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Max force to apply, this will be scaled by the character's throwing multiplier value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxForce = { "MaxForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, MaxForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Grenade icon*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Grenade icon" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Grenade preview mesh*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Grenade preview mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, PreviewMesh), Z_Construct_UClass_UStreamableRenderAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Socket this grenade will be attached while holding the toss*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Socket this grenade will be attached while holding the toss" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, Socket), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Socket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Delay_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Time needed before throwing once received the input (animation)*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Time needed before throwing once received the input (animation)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, Delay), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Delay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Delay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ThrowMontage_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Montage to play when throwing this grenade*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Montage to play when throwing this grenade" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ThrowMontage = { "ThrowMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, ThrowMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ThrowMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ThrowMontage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TimeAdjustment_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*AnimMontage time adjustment*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "AnimMontage time adjustment" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TimeAdjustment = { "TimeAdjustment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, TimeAdjustment), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TimeAdjustment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TimeAdjustment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Lifetime_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Time before exploding (the timer is triggered when launched)*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Time before exploding (the timer is triggered when launched)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, Lifetime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Lifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Lifetime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PersistentEffect_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Persistent effect class to spawn once the grenade explodes*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Persistent effect class to spawn once the grenade explodes" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PersistentEffect = { "PersistentEffect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, PersistentEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_GrenadePersistentActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PersistentEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PersistentEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TrailEffect_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Grenade trail effect*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Grenade trail effect" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TrailEffect = { "TrailEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, TrailEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TrailEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TrailEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Grenade explosion effect*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Grenade explosion effect" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionEffect = { "ExplosionEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, ExplosionEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionSoundEffect_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Grenade explosion sound effect*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_ItemTypes.h" },
		{ "ToolTip", "Grenade explosion sound effect" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionSoundEffect = { "ExplosionSoundEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadeStaticData, ExplosionSoundEffect), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionSoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionSoundEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxArchDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_MaxForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Socket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Delay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ThrowMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TimeAdjustment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_Lifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_PersistentEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_TrailEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewProp_ExplosionSoundEffect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"GrenadeStaticData",
		sizeof(FGrenadeStaticData),
		alignof(FGrenadeStaticData),
		Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrenadeStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_GrenadeStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrenadeStaticData.InnerSingleton, Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GrenadeStaticData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_Statics::EnumInfo[] = {
		{ EItemRarity_StaticEnum, TEXT("EItemRarity"), &Z_Registration_Info_UEnum_EItemRarity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4204773355U) },
		{ EItemInteractions_StaticEnum, TEXT("EItemInteractions"), &Z_Registration_Info_UEnum_EItemInteractions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1688162922U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_Statics::ScriptStructInfo[] = {
		{ FItemAbilitiesEffects::StaticStruct, Z_Construct_UScriptStruct_FItemAbilitiesEffects_Statics::NewStructOps, TEXT("ItemAbilitiesEffects"), &Z_Registration_Info_UScriptStruct_ItemAbilitiesEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemAbilitiesEffects), 968283909U) },
		{ FItemStaticData::StaticStruct, Z_Construct_UScriptStruct_FItemStaticData_Statics::NewStructOps, TEXT("ItemStaticData"), &Z_Registration_Info_UScriptStruct_ItemStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStaticData), 1929258153U) },
		{ FMeleePrimaryAttackMontages::StaticStruct, Z_Construct_UScriptStruct_FMeleePrimaryAttackMontages_Statics::NewStructOps, TEXT("MeleePrimaryAttackMontages"), &Z_Registration_Info_UScriptStruct_MeleePrimaryAttackMontages, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeleePrimaryAttackMontages), 4277860354U) },
		{ FMeleeStaticData::StaticStruct, Z_Construct_UScriptStruct_FMeleeStaticData_Statics::NewStructOps, TEXT("MeleeStaticData"), &Z_Registration_Info_UScriptStruct_MeleeStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeleeStaticData), 2689668820U) },
		{ FFirearmMontages::StaticStruct, Z_Construct_UScriptStruct_FFirearmMontages_Statics::NewStructOps, TEXT("FirearmMontages"), &Z_Registration_Info_UScriptStruct_FirearmMontages, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFirearmMontages), 604135955U) },
		{ FFirearmStaticData::StaticStruct, Z_Construct_UScriptStruct_FFirearmStaticData_Statics::NewStructOps, TEXT("FirearmStaticData"), &Z_Registration_Info_UScriptStruct_FirearmStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFirearmStaticData), 1871993193U) },
		{ FProjectileStaticData::StaticStruct, Z_Construct_UScriptStruct_FProjectileStaticData_Statics::NewStructOps, TEXT("ProjectileStaticData"), &Z_Registration_Info_UScriptStruct_ProjectileStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectileStaticData), 2620381584U) },
		{ FGrenadeStaticData::StaticStruct, Z_Construct_UScriptStruct_FGrenadeStaticData_Statics::NewStructOps, TEXT("GrenadeStaticData"), &Z_Registration_Info_UScriptStruct_GrenadeStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrenadeStaticData), 1230780390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_4009904678(TEXT("/Script/TopDownRogueLite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_ItemTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
