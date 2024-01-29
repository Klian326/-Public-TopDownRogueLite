// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
#include "Engine/Public/SkeletalMeshMerge.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GameplayTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADecalActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EControlRotationType();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCosmeticParameterList();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCurrenciesList();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FDashEffect();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FDeathData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FHitEffectType();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffect();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FStunParameters();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarColor();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarFloat();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarText();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayersSapawnUnlockMethod;
	static UEnum* EPlayersSapawnUnlockMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayersSapawnUnlockMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayersSapawnUnlockMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EPlayersSapawnUnlockMethod"));
		}
		return Z_Registration_Info_UEnum_EPlayersSapawnUnlockMethod.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EPlayersSapawnUnlockMethod>()
	{
		return EPlayersSapawnUnlockMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics::Enumerators[] = {
		{ "EPlayersSapawnUnlockMethod::PSUM_None", (int64)EPlayersSapawnUnlockMethod::PSUM_None },
		{ "EPlayersSapawnUnlockMethod::PSUM_Overlap", (int64)EPlayersSapawnUnlockMethod::PSUM_Overlap },
		{ "EPlayersSapawnUnlockMethod::PSUM_Team", (int64)EPlayersSapawnUnlockMethod::PSUM_Team },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "PSUM_None.DisplayName", "None" },
		{ "PSUM_None.Name", "EPlayersSapawnUnlockMethod::PSUM_None" },
		{ "PSUM_Overlap.DisplayName", "Overlap" },
		{ "PSUM_Overlap.Name", "EPlayersSapawnUnlockMethod::PSUM_Overlap" },
		{ "PSUM_Team.DisplayName", "Team" },
		{ "PSUM_Team.Name", "EPlayersSapawnUnlockMethod::PSUM_Team" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EPlayersSapawnUnlockMethod",
		"EPlayersSapawnUnlockMethod",
		Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod()
	{
		if (!Z_Registration_Info_UEnum_EPlayersSapawnUnlockMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayersSapawnUnlockMethod.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnUnlockMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayersSapawnUnlockMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayersSapawnMethod;
	static UEnum* EPlayersSapawnMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayersSapawnMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayersSapawnMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EPlayersSapawnMethod"));
		}
		return Z_Registration_Info_UEnum_EPlayersSapawnMethod.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EPlayersSapawnMethod>()
	{
		return EPlayersSapawnMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics::Enumerators[] = {
		{ "EPlayersSapawnMethod::PSM_None", (int64)EPlayersSapawnMethod::PSM_None },
		{ "EPlayersSapawnMethod::PSM_Progressive", (int64)EPlayersSapawnMethod::PSM_Progressive },
		{ "EPlayersSapawnMethod::PSM_Random", (int64)EPlayersSapawnMethod::PSM_Random },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "PSM_None.DisplayName", "None" },
		{ "PSM_None.Name", "EPlayersSapawnMethod::PSM_None" },
		{ "PSM_Progressive.DisplayName", "Progressive" },
		{ "PSM_Progressive.Name", "EPlayersSapawnMethod::PSM_Progressive" },
		{ "PSM_Random.DisplayName", "Random" },
		{ "PSM_Random.Name", "EPlayersSapawnMethod::PSM_Random" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EPlayersSapawnMethod",
		"EPlayersSapawnMethod",
		Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod()
	{
		if (!Z_Registration_Info_UEnum_EPlayersSapawnMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayersSapawnMethod.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EPlayersSapawnMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayersSapawnMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRotationType;
	static UEnum* EControlRotationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRotationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRotationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EControlRotationType, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EControlRotationType"));
		}
		return Z_Registration_Info_UEnum_EControlRotationType.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EControlRotationType>()
	{
		return EControlRotationType_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics::Enumerators[] = {
		{ "EControlRotationType::ZPlane", (int64)EControlRotationType::ZPlane },
		{ "EControlRotationType::LockedTarget", (int64)EControlRotationType::LockedTarget },
		{ "EControlRotationType::TargetLocation", (int64)EControlRotationType::TargetLocation },
		{ "EControlRotationType::WorldRotation", (int64)EControlRotationType::WorldRotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LockedTarget.DisplayName", "LockedTarget" },
		{ "LockedTarget.Name", "EControlRotationType::LockedTarget" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "TargetLocation.DisplayName", "TargetLocation" },
		{ "TargetLocation.Name", "EControlRotationType::TargetLocation" },
		{ "WorldRotation.DisplayName", "WorldRotation" },
		{ "WorldRotation.Name", "EControlRotationType::WorldRotation" },
		{ "ZPlane.Comment", "//UnderMouse\x09\x09\x09UMETA(DisplayName = \"UnderMouse\"),\n" },
		{ "ZPlane.DisplayName", "ZPlane" },
		{ "ZPlane.Name", "EControlRotationType::ZPlane" },
		{ "ZPlane.ToolTip", "UnderMouse                      UMETA(DisplayName = \"UnderMouse\")," },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EControlRotationType",
		"EControlRotationType",
		Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EControlRotationType()
	{
		if (!Z_Registration_Info_UEnum_EControlRotationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRotationType.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EControlRotationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRotationType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DeathData;
class UScriptStruct* FDeathData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DeathData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DeathData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDeathData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("DeathData"));
	}
	return Z_Registration_Info_UScriptStruct_DeathData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FDeathData>()
{
	return FDeathData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDeathData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeathData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDeathData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDeathData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_bIsDead_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((FDeathData*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDeathData), &Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "Death" },
		{ "Comment", "// Dead character\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Dead character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeathData, Character), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "Death" },
		{ "Comment", "// Actor responsable for this death\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Actor responsable for this death" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeathData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Controller_MetaData[] = {
		{ "Category", "Death" },
		{ "Comment", "// Instigator (controller) responsable for this death\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Instigator (controller) responsable for this death" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeathData, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_LastDamage_MetaData[] = {
		{ "Category", "Death" },
		{ "Comment", "// Last damage received\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Last damage received" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_LastDamage = { "LastDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDeathData, LastDamage), METADATA_PARAMS(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_LastDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_LastDamage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDeathData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_bIsDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDeathData_Statics::NewProp_LastDamage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDeathData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"DeathData",
		sizeof(FDeathData),
		alignof(FDeathData),
		Z_Construct_UScriptStruct_FDeathData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeathData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDeathData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDeathData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDeathData()
	{
		if (!Z_Registration_Info_UScriptStruct_DeathData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DeathData.InnerSingleton, Z_Construct_UScriptStruct_FDeathData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DeathData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHitEffectType>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FHitEffectType cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitEffectType;
class UScriptStruct* FHitEffectType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitEffectType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitEffectType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitEffectType, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("HitEffectType"));
	}
	return Z_Registration_Info_UScriptStruct_HitEffectType.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FHitEffectType>()
{
	return FHitEffectType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitEffectType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitNiagaraEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitNiagaraEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitParticleEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticleEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedNiagaraEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedNiagaraEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedParticleEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedParticleEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DecalActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitEffectType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitEffectType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitNiagaraEffect_MetaData[] = {
		{ "Category", "HitVFXs" },
		{ "EditCondition", "HitParticleEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitNiagaraEffect = { "HitNiagaraEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, HitNiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitNiagaraEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitNiagaraEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitParticleEffect_MetaData[] = {
		{ "Category", "HitVFXs" },
		{ "EditCondition", "HitNiagaraEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitParticleEffect = { "HitParticleEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, HitParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitParticleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitParticleEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedNiagaraEffect_MetaData[] = {
		{ "Category", "AttachedVFXs" },
		{ "EditCondition", "AttachedParticleEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedNiagaraEffect = { "AttachedNiagaraEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, AttachedNiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedNiagaraEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedNiagaraEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedParticleEffect_MetaData[] = {
		{ "Category", "AttachedVFXs" },
		{ "EditCondition", "AttachedNiagaraEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedParticleEffect = { "AttachedParticleEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, AttachedParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedParticleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedParticleEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedMesh_MetaData[] = {
		{ "Category", "Actor" },
		{ "EditCondition", "ActorClass!=nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedMesh = { "AttachedMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, AttachedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalActorClass_MetaData[] = {
		{ "Category", "Decal" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalActorClass = { "DecalActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, DecalActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADecalActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decal" },
		{ "EditCondition", "DecalActorClass!=nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, DecalMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalScale_MetaData[] = {
		{ "Category", "Decal" },
		{ "EditCondition", "DecalActorClass!=nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalScale = { "DecalScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, DecalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_SoundEffect_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_SoundEffect = { "SoundEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHitEffectType, SoundEffect), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_SoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_SoundEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitEffectType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitNiagaraEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_HitParticleEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedNiagaraEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedParticleEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_AttachedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_DecalScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitEffectType_Statics::NewProp_SoundEffect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitEffectType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"HitEffectType",
		sizeof(FHitEffectType),
		alignof(FHitEffectType),
		Z_Construct_UScriptStruct_FHitEffectType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitEffectType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitEffectType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitEffectType()
	{
		if (!Z_Registration_Info_UScriptStruct_HitEffectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitEffectType.InnerSingleton, Z_Construct_UScriptStruct_FHitEffectType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitEffectType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DashEffect;
class UScriptStruct* FDashEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DashEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DashEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDashEffect, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("DashEffect"));
	}
	return Z_Registration_Info_UScriptStruct_DashEffect.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FDashEffect>()
{
	return FDashEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDashEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDashEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDashEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "EditCondition", "ParticleEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDashEffect, NiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_NiagaraEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_NiagaraEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_ParticleEffect_MetaData[] = {
		{ "Category", "VFX" },
		{ "EditCondition", "NiagaraEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_ParticleEffect = { "ParticleEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDashEffect, ParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_ParticleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_ParticleEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_SoundEffect_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_SoundEffect = { "SoundEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDashEffect, SoundEffect), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_SoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_SoundEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDashEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_NiagaraEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_ParticleEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDashEffect_Statics::NewProp_SoundEffect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDashEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"DashEffect",
		sizeof(FDashEffect),
		alignof(FDashEffect),
		Z_Construct_UScriptStruct_FDashEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDashEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDashEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDashEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDashEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_DashEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DashEffect.InnerSingleton, Z_Construct_UScriptStruct_FDashEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DashEffect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StunParameters;
class UScriptStruct* FStunParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StunParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StunParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStunParameters, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("StunParameters"));
	}
	return Z_Registration_Info_UScriptStruct_StunParameters.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FStunParameters>()
{
	return FStunParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStunParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Force;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StunAnimationLoop_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StunAnimationLoop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDropWeapon_MetaData[];
#endif
		static void NewProp_bDropWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDropWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StunIsSet_MetaData[];
#endif
		static void NewProp_StunIsSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StunIsSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStunParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStunParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Stun" },
		{ "Comment", "/*Amount of time the character will be unable to perform actions*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Amount of time the character will be unable to perform actions" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStunParameters, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Force_MetaData[] = {
		{ "Category", "Stun" },
		{ "Comment", "/*Force applied to the character*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Force applied to the character" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStunParameters, Force), METADATA_PARAMS(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Force_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunAnimationLoop_MetaData[] = {
		{ "Category", "Stun" },
		{ "Comment", "/*AnimMontage to play during stun*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "AnimMontage to play during stun" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunAnimationLoop = { "StunAnimationLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStunParameters, StunAnimationLoop), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunAnimationLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunAnimationLoop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_bDropWeapon_MetaData[] = {
		{ "Category", "Stun" },
		{ "Comment", "/*Should drop weapon?*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Should drop weapon?" },
	};
#endif
	void Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_bDropWeapon_SetBit(void* Obj)
	{
		((FStunParameters*)Obj)->bDropWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_bDropWeapon = { "bDropWeapon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStunParameters), &Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_bDropWeapon_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_bDropWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_bDropWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunIsSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunIsSet_SetBit(void* Obj)
	{
		((FStunParameters*)Obj)->StunIsSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunIsSet = { "StunIsSet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FStunParameters), &Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunIsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunIsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunIsSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStunParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_Force,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunAnimationLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_bDropWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStunParameters_Statics::NewProp_StunIsSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStunParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"StunParameters",
		sizeof(FStunParameters),
		alignof(FStunParameters),
		Z_Construct_UScriptStruct_FStunParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStunParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStunParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStunParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_StunParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StunParameters.InnerSingleton, Z_Construct_UScriptStruct_FStunParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StunParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StatusEffect;
class UScriptStruct* FStatusEffect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StatusEffect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StatusEffect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatusEffect, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("StatusEffect"));
	}
	return Z_Registration_Info_UScriptStruct_StatusEffect.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FStatusEffect>()
{
	return FStatusEffect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStatusEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffect_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatusEffect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatusEffect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_NiagaraEffect_MetaData[] = {
		{ "Category", "Status" },
		{ "EditCondition", "ParticleEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_NiagaraEffect = { "NiagaraEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStatusEffect, NiagaraEffect), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_NiagaraEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_NiagaraEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_ParticleEffect_MetaData[] = {
		{ "Category", "Status" },
		{ "EditCondition", "NiagaraEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_ParticleEffect = { "ParticleEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStatusEffect, ParticleEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_ParticleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_ParticleEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_Montage_MetaData[] = {
		{ "Category", "Status" },
		{ "EditCondition", "SoundEffect==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStatusEffect, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_Montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_Montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_SoundEffect_MetaData[] = {
		{ "Category", "Status" },
		{ "EditCondition", "StunAnimationLoop==nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_SoundEffect = { "SoundEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStatusEffect, SoundEffect), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_SoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_SoundEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatusEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_NiagaraEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_ParticleEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_Montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatusEffect_Statics::NewProp_SoundEffect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatusEffect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"StatusEffect",
		sizeof(FStatusEffect),
		alignof(FStatusEffect),
		Z_Construct_UScriptStruct_FStatusEffect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatusEffect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatusEffect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatusEffect()
	{
		if (!Z_Registration_Info_UScriptStruct_StatusEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StatusEffect.InnerSingleton, Z_Construct_UScriptStruct_FStatusEffect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StatusEffect.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCosmeticParameterList>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCosmeticParameterList cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CosmeticParameterList;
class UScriptStruct* FCosmeticParameterList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CosmeticParameterList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CosmeticParameterList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCosmeticParameterList, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("CosmeticParameterList"));
	}
	return Z_Registration_Info_UScriptStruct_CosmeticParameterList.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FCosmeticParameterList>()
{
	return FCosmeticParameterList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCosmeticParameterList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowPhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadowPhysicsAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCosmeticParameterList>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Meshes_MetaData[] = {
		{ "Category", "Cosmetic" },
		{ "Comment", "// The list of skeletal meshes to merge.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "The list of skeletal meshes to merge." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCosmeticParameterList, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Meshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Cosmetic" },
		{ "Comment", "// Skeleton that will be used for the merged mesh.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Skeleton that will be used for the merged mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCosmeticParameterList, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Cosmetic" },
		{ "Comment", "// Mesh Physics Asset to use.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Mesh Physics Asset to use." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCosmeticParameterList, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_ShadowPhysicsAsset_MetaData[] = {
		{ "Category", "Cosmetic" },
		{ "Comment", "// Mesh Physics Asset to use.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Mesh Physics Asset to use." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_ShadowPhysicsAsset = { "ShadowPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCosmeticParameterList, ShadowPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_ShadowPhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_ShadowPhysicsAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Meshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewProp_ShadowPhysicsAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CosmeticParameterList",
		sizeof(FCosmeticParameterList),
		alignof(FCosmeticParameterList),
		Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCosmeticParameterList()
	{
		if (!Z_Registration_Info_UScriptStruct_CosmeticParameterList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CosmeticParameterList.InnerSingleton, Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CosmeticParameterList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MergeSkeletalMeshesParameters;
class UScriptStruct* FMergeSkeletalMeshesParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MergeSkeletalMeshesParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MergeSkeletalMeshesParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("MergeSkeletalMeshesParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MergeSkeletalMeshesParameters.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FMergeSkeletalMeshesParameters>()
{
	return FMergeSkeletalMeshesParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshesToMerge_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshesToMerge_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshesToMerge;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSectionMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSectionMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MeshSectionMappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVTransformsPerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVTransformsPerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StripTopLODS_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StripTopLODS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsCpuAccess_MetaData[];
#endif
		static void NewProp_bNeedsCpuAccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsCpuAccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkeletonBefore_MetaData[];
#endif
		static void NewProp_bSkeletonBefore_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkeletonBefore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowPhysicsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShadowPhysicsAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Struct containing all parameters used to perform a Skeletal Mesh merge.\n*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Struct containing all parameters used to perform a Skeletal Mesh merge." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMergeSkeletalMeshesParameters>();
	}
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshesToMerge_Inner = { "MeshesToMerge", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshesToMerge_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// The list of skeletal meshes to merge.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "The list of skeletal meshes to merge." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshesToMerge = { "MeshesToMerge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeSkeletalMeshesParameters, MeshesToMerge), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshesToMerge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshesToMerge_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshSectionMappings_Inner = { "MeshSectionMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkelMeshMergeSectionMapping, METADATA_PARAMS(nullptr, 0) }; // 3059674993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshSectionMappings_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// Section mapping for this merge event\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Section mapping for this merge event" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshSectionMappings = { "MeshSectionMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeSkeletalMeshesParameters, MeshSectionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshSectionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshSectionMappings_MetaData)) }; // 3059674993
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_UVTransformsPerMesh_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// UVTransforms per each mesh in the list\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "UVTransforms per each mesh in the list" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_UVTransformsPerMesh = { "UVTransformsPerMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeSkeletalMeshesParameters, UVTransformsPerMesh), Z_Construct_UScriptStruct_FSkelMeshMergeUVTransformMapping, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_UVTransformsPerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_UVTransformsPerMesh_MetaData)) }; // 796782645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_StripTopLODS_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// The number of high LODs to remove from input meshes\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "The number of high LODs to remove from input meshes" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_StripTopLODS = { "StripTopLODS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeSkeletalMeshesParameters, StripTopLODS), METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_StripTopLODS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_StripTopLODS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bNeedsCpuAccess_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// Whether or not the resulting mesh needs to be accessed by the CPU for any reason (e.g. for spawning particle effects).\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Whether or not the resulting mesh needs to be accessed by the CPU for any reason (e.g. for spawning particle effects)." },
	};
#endif
	void Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bNeedsCpuAccess_SetBit(void* Obj)
	{
		((FMergeSkeletalMeshesParameters*)Obj)->bNeedsCpuAccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bNeedsCpuAccess = { "bNeedsCpuAccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMergeSkeletalMeshesParameters), &Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bNeedsCpuAccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bNeedsCpuAccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bNeedsCpuAccess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bSkeletonBefore_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// Update skeleton before merge. Otherwise, update after.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Update skeleton before merge. Otherwise, update after." },
	};
#endif
	void Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bSkeletonBefore_SetBit(void* Obj)
	{
		((FMergeSkeletalMeshesParameters*)Obj)->bSkeletonBefore = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bSkeletonBefore = { "bSkeletonBefore", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMergeSkeletalMeshesParameters), &Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bSkeletonBefore_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bSkeletonBefore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bSkeletonBefore_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// Skeleton that will be used for the merged mesh.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Skeleton that will be used for the merged mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeSkeletalMeshesParameters, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// Mesh Physics Asset to use.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Mesh Physics Asset to use." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeSkeletalMeshesParameters, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_ShadowPhysicsAsset_MetaData[] = {
		{ "Category", "SkeletalMerge" },
		{ "Comment", "// Mesh Physics Asset to use.\n" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
		{ "ToolTip", "Mesh Physics Asset to use." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_ShadowPhysicsAsset = { "ShadowPhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMergeSkeletalMeshesParameters, ShadowPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_ShadowPhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_ShadowPhysicsAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshesToMerge_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshesToMerge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshSectionMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_MeshSectionMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_UVTransformsPerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_StripTopLODS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bNeedsCpuAccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_bSkeletonBefore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_PhysicsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewProp_ShadowPhysicsAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"MergeSkeletalMeshesParameters",
		sizeof(FMergeSkeletalMeshesParameters),
		alignof(FMergeSkeletalMeshesParameters),
		Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MergeSkeletalMeshesParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MergeSkeletalMeshesParameters.InnerSingleton, Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MergeSkeletalMeshesParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurrencyData;
class UScriptStruct* FCurrencyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurrencyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurrencyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrencyData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("CurrencyData"));
	}
	return Z_Registration_Info_UScriptStruct_CurrencyData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FCurrencyData>()
{
	return FCurrencyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurrencyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ShortName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrencyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrencyData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_ShortName_MetaData[] = {
		{ "Category", "Currency" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_ShortName = { "ShortName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurrencyData, ShortName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_ShortName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_ShortName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Currency" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurrencyData, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_Icon_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrencyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_ShortName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrencyData_Statics::NewProp_Icon,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrencyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"CurrencyData",
		sizeof(FCurrencyData),
		alignof(FCurrencyData),
		Z_Construct_UScriptStruct_FCurrencyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrencyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrencyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrencyData()
	{
		if (!Z_Registration_Info_UScriptStruct_CurrencyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurrencyData.InnerSingleton, Z_Construct_UScriptStruct_FCurrencyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurrencyData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCurrenciesList>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCurrenciesList cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurrenciesList;
class UScriptStruct* FCurrenciesList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurrenciesList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurrenciesList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrenciesList, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("CurrenciesList"));
	}
	return Z_Registration_Info_UScriptStruct_CurrenciesList.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FCurrenciesList>()
{
	return FCurrenciesList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurrenciesList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_List_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_List_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_List;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrenciesList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrenciesList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List_ValueProp = { "List", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCurrencyData, METADATA_PARAMS(nullptr, 0) }; // 1091134001
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List_Key_KeyProp = { "List_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List_MetaData[] = {
		{ "Category", "Currency" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurrenciesList, List), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List_MetaData)) }; // 1091134001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrenciesList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewProp_List,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrenciesList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CurrenciesList",
		sizeof(FCurrenciesList),
		alignof(FCurrenciesList),
		Z_Construct_UScriptStruct_FCurrenciesList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrenciesList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrenciesList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrenciesList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrenciesList()
	{
		if (!Z_Registration_Info_UScriptStruct_CurrenciesList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurrenciesList.InnerSingleton, Z_Construct_UScriptStruct_FCurrenciesList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurrenciesList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TDRLProgressBarFloat;
class UScriptStruct* FTDRLProgressBarFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TDRLProgressBarFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TDRLProgressBarFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTDRLProgressBarFloat, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("TDRLProgressBarFloat"));
	}
	return Z_Registration_Info_UScriptStruct_TDRLProgressBarFloat.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FTDRLProgressBarFloat>()
{
	return FTDRLProgressBarFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTDRLProgressBarFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ProgressBar" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTDRLProgressBarFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "ProgressBar" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTDRLProgressBarFloat, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"TDRLProgressBarFloat",
		sizeof(FTDRLProgressBarFloat),
		alignof(FTDRLProgressBarFloat),
		Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_TDRLProgressBarFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TDRLProgressBarFloat.InnerSingleton, Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TDRLProgressBarFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TDRLProgressBarText;
class UScriptStruct* FTDRLProgressBarText::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TDRLProgressBarText.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TDRLProgressBarText.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTDRLProgressBarText, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("TDRLProgressBarText"));
	}
	return Z_Registration_Info_UScriptStruct_TDRLProgressBarText.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FTDRLProgressBarText>()
{
	return FTDRLProgressBarText::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTDRLProgressBarText>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ProgressBar" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTDRLProgressBarText, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "ProgressBar" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTDRLProgressBarText, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"TDRLProgressBarText",
		sizeof(FTDRLProgressBarText),
		alignof(FTDRLProgressBarText),
		Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarText()
	{
		if (!Z_Registration_Info_UScriptStruct_TDRLProgressBarText.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TDRLProgressBarText.InnerSingleton, Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TDRLProgressBarText.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TDRLProgressBarColor;
class UScriptStruct* FTDRLProgressBarColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TDRLProgressBarColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TDRLProgressBarColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTDRLProgressBarColor, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("TDRLProgressBarColor"));
	}
	return Z_Registration_Info_UScriptStruct_TDRLProgressBarColor.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FTDRLProgressBarColor>()
{
	return FTDRLProgressBarColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTDRLProgressBarColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ProgressBar" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTDRLProgressBarColor, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Tag_MetaData[] = {
		{ "Category", "ProgressBar" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GameplayTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTDRLProgressBarColor, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Tag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewProp_Tag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"TDRLProgressBarColor",
		sizeof(FTDRLProgressBarColor),
		alignof(FTDRLProgressBarColor),
		Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarColor()
	{
		if (!Z_Registration_Info_UScriptStruct_TDRLProgressBarColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TDRLProgressBarColor.InnerSingleton, Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TDRLProgressBarColor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_Statics::EnumInfo[] = {
		{ EPlayersSapawnUnlockMethod_StaticEnum, TEXT("EPlayersSapawnUnlockMethod"), &Z_Registration_Info_UEnum_EPlayersSapawnUnlockMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2940182189U) },
		{ EPlayersSapawnMethod_StaticEnum, TEXT("EPlayersSapawnMethod"), &Z_Registration_Info_UEnum_EPlayersSapawnMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4284479301U) },
		{ EControlRotationType_StaticEnum, TEXT("EControlRotationType"), &Z_Registration_Info_UEnum_EControlRotationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3904480817U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_Statics::ScriptStructInfo[] = {
		{ FDeathData::StaticStruct, Z_Construct_UScriptStruct_FDeathData_Statics::NewStructOps, TEXT("DeathData"), &Z_Registration_Info_UScriptStruct_DeathData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDeathData), 3112512265U) },
		{ FHitEffectType::StaticStruct, Z_Construct_UScriptStruct_FHitEffectType_Statics::NewStructOps, TEXT("HitEffectType"), &Z_Registration_Info_UScriptStruct_HitEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitEffectType), 558494942U) },
		{ FDashEffect::StaticStruct, Z_Construct_UScriptStruct_FDashEffect_Statics::NewStructOps, TEXT("DashEffect"), &Z_Registration_Info_UScriptStruct_DashEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDashEffect), 1179783710U) },
		{ FStunParameters::StaticStruct, Z_Construct_UScriptStruct_FStunParameters_Statics::NewStructOps, TEXT("StunParameters"), &Z_Registration_Info_UScriptStruct_StunParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStunParameters), 1924132683U) },
		{ FStatusEffect::StaticStruct, Z_Construct_UScriptStruct_FStatusEffect_Statics::NewStructOps, TEXT("StatusEffect"), &Z_Registration_Info_UScriptStruct_StatusEffect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStatusEffect), 540262957U) },
		{ FCosmeticParameterList::StaticStruct, Z_Construct_UScriptStruct_FCosmeticParameterList_Statics::NewStructOps, TEXT("CosmeticParameterList"), &Z_Registration_Info_UScriptStruct_CosmeticParameterList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCosmeticParameterList), 3104133227U) },
		{ FMergeSkeletalMeshesParameters::StaticStruct, Z_Construct_UScriptStruct_FMergeSkeletalMeshesParameters_Statics::NewStructOps, TEXT("MergeSkeletalMeshesParameters"), &Z_Registration_Info_UScriptStruct_MergeSkeletalMeshesParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMergeSkeletalMeshesParameters), 1858116200U) },
		{ FCurrencyData::StaticStruct, Z_Construct_UScriptStruct_FCurrencyData_Statics::NewStructOps, TEXT("CurrencyData"), &Z_Registration_Info_UScriptStruct_CurrencyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurrencyData), 1091134001U) },
		{ FCurrenciesList::StaticStruct, Z_Construct_UScriptStruct_FCurrenciesList_Statics::NewStructOps, TEXT("CurrenciesList"), &Z_Registration_Info_UScriptStruct_CurrenciesList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurrenciesList), 2762964859U) },
		{ FTDRLProgressBarFloat::StaticStruct, Z_Construct_UScriptStruct_FTDRLProgressBarFloat_Statics::NewStructOps, TEXT("TDRLProgressBarFloat"), &Z_Registration_Info_UScriptStruct_TDRLProgressBarFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTDRLProgressBarFloat), 962782315U) },
		{ FTDRLProgressBarText::StaticStruct, Z_Construct_UScriptStruct_FTDRLProgressBarText_Statics::NewStructOps, TEXT("TDRLProgressBarText"), &Z_Registration_Info_UScriptStruct_TDRLProgressBarText, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTDRLProgressBarText), 3636456670U) },
		{ FTDRLProgressBarColor::StaticStruct, Z_Construct_UScriptStruct_FTDRLProgressBarColor_Statics::NewStructOps, TEXT("TDRLProgressBarColor"), &Z_Registration_Info_UScriptStruct_TDRLProgressBarColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTDRLProgressBarColor), 586229899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_3862410360(TEXT("/Script/TopDownRogueLite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GameplayTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
