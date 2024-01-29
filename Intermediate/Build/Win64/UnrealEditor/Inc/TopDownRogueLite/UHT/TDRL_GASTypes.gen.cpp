// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Types/TDRL_GASTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GASTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_GASGameplayAbility_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FGASContainer();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETDRLGASAbilityInputID;
	static UEnum* ETDRLGASAbilityInputID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETDRLGASAbilityInputID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETDRLGASAbilityInputID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("ETDRLGASAbilityInputID"));
		}
		return Z_Registration_Info_UEnum_ETDRLGASAbilityInputID.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<ETDRLGASAbilityInputID>()
	{
		return ETDRLGASAbilityInputID_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics::Enumerators[] = {
		{ "ETDRLGASAbilityInputID::None", (int64)ETDRLGASAbilityInputID::None },
		{ "ETDRLGASAbilityInputID::Confirm", (int64)ETDRLGASAbilityInputID::Confirm },
		{ "ETDRLGASAbilityInputID::Cancel", (int64)ETDRLGASAbilityInputID::Cancel },
		{ "ETDRLGASAbilityInputID::Move", (int64)ETDRLGASAbilityInputID::Move },
		{ "ETDRLGASAbilityInputID::Interact", (int64)ETDRLGASAbilityInputID::Interact },
		{ "ETDRLGASAbilityInputID::Drop", (int64)ETDRLGASAbilityInputID::Drop },
		{ "ETDRLGASAbilityInputID::PrimaryAction", (int64)ETDRLGASAbilityInputID::PrimaryAction },
		{ "ETDRLGASAbilityInputID::SecondaryAction", (int64)ETDRLGASAbilityInputID::SecondaryAction },
		{ "ETDRLGASAbilityInputID::RAction", (int64)ETDRLGASAbilityInputID::RAction },
		{ "ETDRLGASAbilityInputID::CameraRotation", (int64)ETDRLGASAbilityInputID::CameraRotation },
		{ "ETDRLGASAbilityInputID::Crouch", (int64)ETDRLGASAbilityInputID::Crouch },
		{ "ETDRLGASAbilityInputID::Jump", (int64)ETDRLGASAbilityInputID::Jump },
		{ "ETDRLGASAbilityInputID::Dash", (int64)ETDRLGASAbilityInputID::Dash },
		{ "ETDRLGASAbilityInputID::Walk", (int64)ETDRLGASAbilityInputID::Walk },
		{ "ETDRLGASAbilityInputID::PitchAim", (int64)ETDRLGASAbilityInputID::PitchAim },
		{ "ETDRLGASAbilityInputID::SwitchWeapon", (int64)ETDRLGASAbilityInputID::SwitchWeapon },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraRotation.Name", "ETDRLGASAbilityInputID::CameraRotation" },
		{ "Cancel.Name", "ETDRLGASAbilityInputID::Cancel" },
		{ "Confirm.Name", "ETDRLGASAbilityInputID::Confirm" },
		{ "Crouch.Name", "ETDRLGASAbilityInputID::Crouch" },
		{ "Dash.Name", "ETDRLGASAbilityInputID::Dash" },
		{ "Drop.Name", "ETDRLGASAbilityInputID::Drop" },
		{ "Interact.Name", "ETDRLGASAbilityInputID::Interact" },
		{ "Jump.Name", "ETDRLGASAbilityInputID::Jump" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GASTypes.h" },
		{ "Move.Name", "ETDRLGASAbilityInputID::Move" },
		{ "None.Name", "ETDRLGASAbilityInputID::None" },
		{ "PitchAim.Name", "ETDRLGASAbilityInputID::PitchAim" },
		{ "PrimaryAction.Name", "ETDRLGASAbilityInputID::PrimaryAction" },
		{ "RAction.Name", "ETDRLGASAbilityInputID::RAction" },
		{ "SecondaryAction.Name", "ETDRLGASAbilityInputID::SecondaryAction" },
		{ "SwitchWeapon.Name", "ETDRLGASAbilityInputID::SwitchWeapon" },
		{ "Walk.Name", "ETDRLGASAbilityInputID::Walk" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"ETDRLGASAbilityInputID",
		"ETDRLGASAbilityInputID",
		Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID()
	{
		if (!Z_Registration_Info_UEnum_ETDRLGASAbilityInputID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETDRLGASAbilityInputID.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_ETDRLGASAbilityInputID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETDRLGASAbilityInputID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GASContainer;
class UScriptStruct* FGASContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GASContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GASContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGASContainer, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("GASContainer"));
	}
	return Z_Registration_Info_UScriptStruct_GASContainer.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FGASContainer>()
{
	return FGASContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGASContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_Abilities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GASTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGASContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGASContainer>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UTDRL_GASGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "TDRL|GAS" },
		{ "Comment", "/*Abilities List*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GASTypes.h" },
		{ "ToolTip", "Abilities List" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASContainer, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Abilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Abilities_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "TDRL|GAS" },
		{ "Comment", "/*Effects List*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_GASTypes.h" },
		{ "ToolTip", "Effects List" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGASContainer, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Effects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Effects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGASContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Abilities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Abilities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGASContainer_Statics::NewProp_Effects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGASContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"GASContainer",
		sizeof(FGASContainer),
		alignof(FGASContainer),
		Z_Construct_UScriptStruct_FGASContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGASContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGASContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGASContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_GASContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GASContainer.InnerSingleton, Z_Construct_UScriptStruct_FGASContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GASContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_Statics::EnumInfo[] = {
		{ ETDRLGASAbilityInputID_StaticEnum, TEXT("ETDRLGASAbilityInputID"), &Z_Registration_Info_UEnum_ETDRLGASAbilityInputID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2692864829U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_Statics::ScriptStructInfo[] = {
		{ FGASContainer::StaticStruct, Z_Construct_UScriptStruct_FGASContainer_Statics::NewStructOps, TEXT("GASContainer"), &Z_Registration_Info_UScriptStruct_GASContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGASContainer), 2860880627U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_3538370764(TEXT("/Script/TopDownRogueLite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_GASTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
