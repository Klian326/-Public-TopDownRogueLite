// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Types/TDRL_AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_AITypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UAIAnimMontageContainer();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UAIAnimMontageContainer_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRandomAnimMontageList();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMathComparisonMethod;
	static UEnum* EMathComparisonMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMathComparisonMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMathComparisonMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EMathComparisonMethod"));
		}
		return Z_Registration_Info_UEnum_EMathComparisonMethod.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EMathComparisonMethod>()
	{
		return EMathComparisonMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics::Enumerators[] = {
		{ "EMathComparisonMethod::MCM_Equal", (int64)EMathComparisonMethod::MCM_Equal },
		{ "EMathComparisonMethod::MCM_Less", (int64)EMathComparisonMethod::MCM_Less },
		{ "EMathComparisonMethod::MCM_LessOrEqual", (int64)EMathComparisonMethod::MCM_LessOrEqual },
		{ "EMathComparisonMethod::MCM_Greater", (int64)EMathComparisonMethod::MCM_Greater },
		{ "EMathComparisonMethod::MCM_GreaterOrEqual", (int64)EMathComparisonMethod::MCM_GreaterOrEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "MCM_Equal.DisplayName", "Equal" },
		{ "MCM_Equal.Name", "EMathComparisonMethod::MCM_Equal" },
		{ "MCM_Greater.DisplayName", "Greater" },
		{ "MCM_Greater.Name", "EMathComparisonMethod::MCM_Greater" },
		{ "MCM_GreaterOrEqual.DisplayName", "GreaterOrEqual" },
		{ "MCM_GreaterOrEqual.Name", "EMathComparisonMethod::MCM_GreaterOrEqual" },
		{ "MCM_Less.DisplayName", "Less" },
		{ "MCM_Less.Name", "EMathComparisonMethod::MCM_Less" },
		{ "MCM_LessOrEqual.DisplayName", "LessOrEqual" },
		{ "MCM_LessOrEqual.Name", "EMathComparisonMethod::MCM_LessOrEqual" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EMathComparisonMethod",
		"EMathComparisonMethod",
		Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod()
	{
		if (!Z_Registration_Info_UEnum_EMathComparisonMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMathComparisonMethod.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMathComparisonMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAISwitchWeaponMethod;
	static UEnum* EAISwitchWeaponMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAISwitchWeaponMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAISwitchWeaponMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EAISwitchWeaponMethod"));
		}
		return Z_Registration_Info_UEnum_EAISwitchWeaponMethod.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EAISwitchWeaponMethod>()
	{
		return EAISwitchWeaponMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics::Enumerators[] = {
		{ "EAISwitchWeaponMethod::ASW_Main", (int64)EAISwitchWeaponMethod::ASW_Main },
		{ "EAISwitchWeaponMethod::ASW_BestRarity", (int64)EAISwitchWeaponMethod::ASW_BestRarity },
		{ "EAISwitchWeaponMethod::ASW_WorstRarity", (int64)EAISwitchWeaponMethod::ASW_WorstRarity },
		{ "EAISwitchWeaponMethod::ASW_SpecificSlot", (int64)EAISwitchWeaponMethod::ASW_SpecificSlot },
		{ "EAISwitchWeaponMethod::ASW_WeaponClass", (int64)EAISwitchWeaponMethod::ASW_WeaponClass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics::Enum_MetaDataParams[] = {
		{ "ASW_BestRarity.DisplayName", "Best Rarity" },
		{ "ASW_BestRarity.Name", "EAISwitchWeaponMethod::ASW_BestRarity" },
		{ "ASW_Main.DisplayName", "Main" },
		{ "ASW_Main.Name", "EAISwitchWeaponMethod::ASW_Main" },
		{ "ASW_SpecificSlot.DisplayName", "Specific Slot" },
		{ "ASW_SpecificSlot.Name", "EAISwitchWeaponMethod::ASW_SpecificSlot" },
		{ "ASW_WeaponClass.DisplayName", "Weapon Class" },
		{ "ASW_WeaponClass.Name", "EAISwitchWeaponMethod::ASW_WeaponClass" },
		{ "ASW_WorstRarity.DisplayName", "Worst Rarity" },
		{ "ASW_WorstRarity.Name", "EAISwitchWeaponMethod::ASW_WorstRarity" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EAISwitchWeaponMethod",
		"EAISwitchWeaponMethod",
		Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod()
	{
		if (!Z_Registration_Info_UEnum_EAISwitchWeaponMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAISwitchWeaponMethod.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EAISwitchWeaponMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAISwitchWeaponMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemSlotNative;
	static UEnum* EItemSlotNative_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EItemSlotNative.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EItemSlotNative.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EItemSlotNative"));
		}
		return Z_Registration_Info_UEnum_EItemSlotNative.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EItemSlotNative>()
	{
		return EItemSlotNative_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics::Enumerators[] = {
		{ "EItemSlotNative::ISN_Slot_0", (int64)EItemSlotNative::ISN_Slot_0 },
		{ "EItemSlotNative::ISN_Slot_1", (int64)EItemSlotNative::ISN_Slot_1 },
		{ "EItemSlotNative::ISN_Slot_2", (int64)EItemSlotNative::ISN_Slot_2 },
		{ "EItemSlotNative::ISN_Slot_3", (int64)EItemSlotNative::ISN_Slot_3 },
		{ "EItemSlotNative::ISN_Slot_4", (int64)EItemSlotNative::ISN_Slot_4 },
		{ "EItemSlotNative::ISN_Slot_5", (int64)EItemSlotNative::ISN_Slot_5 },
		{ "EItemSlotNative::ISN_Slot_6", (int64)EItemSlotNative::ISN_Slot_6 },
		{ "EItemSlotNative::ISN_Slot_7", (int64)EItemSlotNative::ISN_Slot_7 },
		{ "EItemSlotNative::ISN_Slot_8", (int64)EItemSlotNative::ISN_Slot_8 },
		{ "EItemSlotNative::ISN_Slot_9", (int64)EItemSlotNative::ISN_Slot_9 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ISN_Slot_0.DisplayName", "Slot_0" },
		{ "ISN_Slot_0.Name", "EItemSlotNative::ISN_Slot_0" },
		{ "ISN_Slot_1.DisplayName", "Slot_1" },
		{ "ISN_Slot_1.Name", "EItemSlotNative::ISN_Slot_1" },
		{ "ISN_Slot_2.DisplayName", "Slot_2" },
		{ "ISN_Slot_2.Name", "EItemSlotNative::ISN_Slot_2" },
		{ "ISN_Slot_3.DisplayName", "Slot_3" },
		{ "ISN_Slot_3.Name", "EItemSlotNative::ISN_Slot_3" },
		{ "ISN_Slot_4.DisplayName", "Slot_4" },
		{ "ISN_Slot_4.Name", "EItemSlotNative::ISN_Slot_4" },
		{ "ISN_Slot_5.DisplayName", "Slot_5" },
		{ "ISN_Slot_5.Name", "EItemSlotNative::ISN_Slot_5" },
		{ "ISN_Slot_6.DisplayName", "Slot_6" },
		{ "ISN_Slot_6.Name", "EItemSlotNative::ISN_Slot_6" },
		{ "ISN_Slot_7.DisplayName", "Slot_7" },
		{ "ISN_Slot_7.Name", "EItemSlotNative::ISN_Slot_7" },
		{ "ISN_Slot_8.DisplayName", "Slot_8" },
		{ "ISN_Slot_8.Name", "EItemSlotNative::ISN_Slot_8" },
		{ "ISN_Slot_9.DisplayName", "Slot_9" },
		{ "ISN_Slot_9.Name", "EItemSlotNative::ISN_Slot_9" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EItemSlotNative",
		"EItemSlotNative",
		Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative()
	{
		if (!Z_Registration_Info_UEnum_EItemSlotNative.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemSlotNative.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EItemSlotNative_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EItemSlotNative.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIRandomAnimMontageList;
class UScriptStruct* FAIRandomAnimMontageList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIRandomAnimMontageList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIRandomAnimMontageList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIRandomAnimMontageList, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("AIRandomAnimMontageList"));
	}
	return Z_Registration_Info_UScriptStruct_AIRandomAnimMontageList.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FAIRandomAnimMontageList>()
{
	return FAIRandomAnimMontageList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Montages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Montages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Montages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIRandomAnimMontageList>();
	}
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewProp_Montages_Inner = { "Montages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewProp_Montages_MetaData[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewProp_Montages = { "Montages", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIRandomAnimMontageList, Montages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewProp_Montages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewProp_Montages_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewProp_Montages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewProp_Montages,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"AIRandomAnimMontageList",
		sizeof(FAIRandomAnimMontageList),
		alignof(FAIRandomAnimMontageList),
		Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIRandomAnimMontageList()
	{
		if (!Z_Registration_Info_UScriptStruct_AIRandomAnimMontageList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIRandomAnimMontageList.InnerSingleton, Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIRandomAnimMontageList.InnerSingleton;
	}
	DEFINE_FUNCTION(UAIAnimMontageContainer::execGetRandomAnimationMontageLength)
	{
		P_GET_ENUM(EMathComparisonMethod,Z_Param_InMethod);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetRandomAnimationMontageLength(EMathComparisonMethod(Z_Param_InMethod),Z_Param_InLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIAnimMontageContainer::execGetRandomAnimationMontage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimMontage**)Z_Param__Result=P_THIS->GetRandomAnimationMontage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIAnimMontageContainer::execGetRandomAnimationMontageIndex)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRandomAnimationMontageIndex(Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIAnimMontageContainer::execGetNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIAnimMontageContainer::execbHasValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->bHasValues();
		P_NATIVE_END;
	}
	void UAIAnimMontageContainer::StaticRegisterNativesUAIAnimMontageContainer()
	{
		UClass* Class = UAIAnimMontageContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "bHasValues", &UAIAnimMontageContainer::execbHasValues },
			{ "GetNum", &UAIAnimMontageContainer::execGetNum },
			{ "GetRandomAnimationMontage", &UAIAnimMontageContainer::execGetRandomAnimationMontage },
			{ "GetRandomAnimationMontageIndex", &UAIAnimMontageContainer::execGetRandomAnimationMontageIndex },
			{ "GetRandomAnimationMontageLength", &UAIAnimMontageContainer::execGetRandomAnimationMontageLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics
	{
		struct AIAnimMontageContainer_eventbHasValues_Parms
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
	void Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIAnimMontageContainer_eventbHasValues_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AIAnimMontageContainer_eventbHasValues_Parms), &Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "MontageContainer" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAnimMontageContainer, nullptr, "bHasValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::AIAnimMontageContainer_eventbHasValues_Parms), Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics
	{
		struct AIAnimMontageContainer_eventGetNum_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIAnimMontageContainer_eventGetNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "MontageContainer" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAnimMontageContainer, nullptr, "GetNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::AIAnimMontageContainer_eventGetNum_Parms), Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAnimMontageContainer_GetNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIAnimMontageContainer_GetNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics
	{
		struct AIAnimMontageContainer_eventGetRandomAnimationMontage_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIAnimMontageContainer_eventGetRandomAnimationMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MontageContainer" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAnimMontageContainer, nullptr, "GetRandomAnimationMontage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::AIAnimMontageContainer_eventGetRandomAnimationMontage_Parms), Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics
	{
		struct AIAnimMontageContainer_eventGetRandomAnimationMontageIndex_Parms
		{
			uint8 OutIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIAnimMontageContainer_eventGetRandomAnimationMontageIndex_Parms, OutIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIAnimMontageContainer_eventGetRandomAnimationMontageIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AIAnimMontageContainer_eventGetRandomAnimationMontageIndex_Parms), &Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::NewProp_OutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "MontageContainer" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAnimMontageContainer, nullptr, "GetRandomAnimationMontageIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::AIAnimMontageContainer_eventGetRandomAnimationMontageIndex_Parms), Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics
	{
		struct AIAnimMontageContainer_eventGetRandomAnimationMontageLength_Parms
		{
			EMathComparisonMethod InMethod;
			float InLength;
			UAnimMontage* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InMethod_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InMethod;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InLength;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::NewProp_InMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::NewProp_InMethod = { "InMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIAnimMontageContainer_eventGetRandomAnimationMontageLength_Parms, InMethod), Z_Construct_UEnum_TopDownRogueLite_EMathComparisonMethod, METADATA_PARAMS(nullptr, 0) }; // 2351270934
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::NewProp_InLength = { "InLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIAnimMontageContainer_eventGetRandomAnimationMontageLength_Parms, InLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIAnimMontageContainer_eventGetRandomAnimationMontageLength_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::NewProp_InMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::NewProp_InMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::NewProp_InLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "MontageContainer" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIAnimMontageContainer, nullptr, "GetRandomAnimationMontageLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::AIAnimMontageContainer_eventGetRandomAnimationMontageLength_Parms), Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIAnimMontageContainer);
	UClass* Z_Construct_UClass_UAIAnimMontageContainer_NoRegister()
	{
		return UAIAnimMontageContainer::StaticClass();
	}
	struct Z_Construct_UClass_UAIAnimMontageContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MontageList_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageList_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_MontageList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIAnimMontageContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIAnimMontageContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIAnimMontageContainer_bHasValues, "bHasValues" }, // 3619227104
		{ &Z_Construct_UFunction_UAIAnimMontageContainer_GetNum, "GetNum" }, // 4007981522
		{ &Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontage, "GetRandomAnimationMontage" }, // 379462024
		{ &Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageIndex, "GetRandomAnimationMontageIndex" }, // 1540413956
		{ &Z_Construct_UFunction_UAIAnimMontageContainer_GetRandomAnimationMontageLength, "GetRandomAnimationMontageLength" }, // 1872165765
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIAnimMontageContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Types/TDRL_AITypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAIAnimMontageContainer_Statics::NewProp_MontageList_ElementProp = { "MontageList", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIAnimMontageContainer_Statics::NewProp_MontageList_MetaData[] = {
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/Types/TDRL_AITypes.h" },
		{ "Set", "AddUnique" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAIAnimMontageContainer_Statics::NewProp_MontageList = { "MontageList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIAnimMontageContainer, MontageList), METADATA_PARAMS(Z_Construct_UClass_UAIAnimMontageContainer_Statics::NewProp_MontageList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIAnimMontageContainer_Statics::NewProp_MontageList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIAnimMontageContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAnimMontageContainer_Statics::NewProp_MontageList_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIAnimMontageContainer_Statics::NewProp_MontageList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIAnimMontageContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIAnimMontageContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIAnimMontageContainer_Statics::ClassParams = {
		&UAIAnimMontageContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAIAnimMontageContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIAnimMontageContainer_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIAnimMontageContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIAnimMontageContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIAnimMontageContainer()
	{
		if (!Z_Registration_Info_UClass_UAIAnimMontageContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIAnimMontageContainer.OuterSingleton, Z_Construct_UClass_UAIAnimMontageContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIAnimMontageContainer.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UAIAnimMontageContainer>()
	{
		return UAIAnimMontageContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIAnimMontageContainer);
	UAIAnimMontageContainer::~UAIAnimMontageContainer() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::EnumInfo[] = {
		{ EMathComparisonMethod_StaticEnum, TEXT("EMathComparisonMethod"), &Z_Registration_Info_UEnum_EMathComparisonMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2351270934U) },
		{ EAISwitchWeaponMethod_StaticEnum, TEXT("EAISwitchWeaponMethod"), &Z_Registration_Info_UEnum_EAISwitchWeaponMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 158569138U) },
		{ EItemSlotNative_StaticEnum, TEXT("EItemSlotNative"), &Z_Registration_Info_UEnum_EItemSlotNative, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2227436242U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::ScriptStructInfo[] = {
		{ FAIRandomAnimMontageList::StaticStruct, Z_Construct_UScriptStruct_FAIRandomAnimMontageList_Statics::NewStructOps, TEXT("AIRandomAnimMontageList"), &Z_Registration_Info_UScriptStruct_AIRandomAnimMontageList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIRandomAnimMontageList), 2944800502U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIAnimMontageContainer, UAIAnimMontageContainer::StaticClass, TEXT("UAIAnimMontageContainer"), &Z_Registration_Info_UClass_UAIAnimMontageContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIAnimMontageContainer), 1267316993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_2798034768(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_AITypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
