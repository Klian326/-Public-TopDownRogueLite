// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_Ammo.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_Ammo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Ammo();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Ammo_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UEnum* Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAmmoRefillMethod;
	static UEnum* EAmmoRefillMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAmmoRefillMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAmmoRefillMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("EAmmoRefillMethod"));
		}
		return Z_Registration_Info_UEnum_EAmmoRefillMethod.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UEnum* StaticEnum<EAmmoRefillMethod>()
	{
		return EAmmoRefillMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics::Enumerators[] = {
		{ "EAmmoRefillMethod::ARM_Percentage", (int64)EAmmoRefillMethod::ARM_Percentage },
		{ "EAmmoRefillMethod::ARM_Exact", (int64)EAmmoRefillMethod::ARM_Exact },
		{ "EAmmoRefillMethod::ARM_Full", (int64)EAmmoRefillMethod::ARM_Full },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics::Enum_MetaDataParams[] = {
		{ "ARM_Exact.DisplayName", "Exact" },
		{ "ARM_Exact.Name", "EAmmoRefillMethod::ARM_Exact" },
		{ "ARM_Full.DisplayName", "Full" },
		{ "ARM_Full.Name", "EAmmoRefillMethod::ARM_Full" },
		{ "ARM_Percentage.DisplayName", "Percentage" },
		{ "ARM_Percentage.Name", "EAmmoRefillMethod::ARM_Percentage" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		"EAmmoRefillMethod",
		"EAmmoRefillMethod",
		Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod()
	{
		if (!Z_Registration_Info_UEnum_EAmmoRefillMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAmmoRefillMethod.InnerSingleton, Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAmmoRefillMethod.InnerSingleton;
	}
	DEFINE_FUNCTION(ATDRL_Ammo::execRefillCharacter)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_InChar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefillCharacter(Z_Param_InChar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_Ammo::execOverlapAreaBegin)
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
	void ATDRL_Ammo::StaticRegisterNativesATDRL_Ammo()
	{
		UClass* Class = ATDRL_Ammo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverlapAreaBegin", &ATDRL_Ammo::execOverlapAreaBegin },
			{ "RefillCharacter", &ATDRL_Ammo::execRefillCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics
	{
		struct TDRL_Ammo_eventOverlapAreaBegin_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Ammo_eventOverlapAreaBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Ammo_eventOverlapAreaBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Ammo_eventOverlapAreaBegin_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Ammo_eventOverlapAreaBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TDRL_Ammo_eventOverlapAreaBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_Ammo_eventOverlapAreaBegin_Parms), &Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Ammo_eventOverlapAreaBegin_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Ammo, nullptr, "OverlapAreaBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::TDRL_Ammo_eventOverlapAreaBegin_Parms), Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics
	{
		struct TDRL_Ammo_eventRefillCharacter_Parms
		{
			ATDRL_Character* InChar;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InChar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::NewProp_InChar = { "InChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_Ammo_eventRefillCharacter_Parms, InChar), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::NewProp_InChar,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|PhysDoor" },
		{ "DisplayName", "RefillCharacter" },
		{ "Keywords", "Refill Character Firearm Ammo TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_Ammo, nullptr, "RefillCharacter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::TDRL_Ammo_eventRefillCharacter_Parms), Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_Ammo);
	UClass* Z_Construct_UClass_ATDRL_Ammo_NoRegister()
	{
		return ATDRL_Ammo::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_Ammo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AmmoTag;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RefillMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefillMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RefillMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefillPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RefillPercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefillExact_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RefillExact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Trigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_Ammo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_Ammo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_Ammo_OverlapAreaBegin, "OverlapAreaBegin" }, // 3198605299
		{ &Z_Construct_UFunction_ATDRL_Ammo_RefillCharacter, "RefillCharacter" }, // 3848375211
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Ammo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Gameplay/TDRL_Ammo.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_AmmoTag_MetaData[] = {
		{ "Category", "TDRL|Ammo" },
		{ "Comment", "/*Tag for ammo filtering. Setting this value to something different from \"None\" will force the player to equip a weapon with the same AmmoTag to be activated*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
		{ "ToolTip", "Tag for ammo filtering. Setting this value to something different from \"None\" will force the player to equip a weapon with the same AmmoTag to be activated" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_AmmoTag = { "AmmoTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Ammo, AmmoTag), METADATA_PARAMS(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_AmmoTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_AmmoTag_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillMethod_MetaData[] = {
		{ "Category", "TDRL|Ammo" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillMethod = { "RefillMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Ammo, RefillMethod), Z_Construct_UEnum_TopDownRogueLite_EAmmoRefillMethod, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillMethod_MetaData)) }; // 4051351009
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillPercentage_MetaData[] = {
		{ "Category", "TDRL|Ammo" },
		{ "EditCondition", "RefillMethod==EAmmoRefillMethod::ARM_Percentage" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillPercentage = { "RefillPercentage", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Ammo, RefillPercentage), METADATA_PARAMS(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillPercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillExact_MetaData[] = {
		{ "Category", "TDRL|Ammo" },
		{ "EditCondition", "RefillMethod==EAmmoRefillMethod::ARM_Exact" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillExact = { "RefillExact", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Ammo, RefillExact), METADATA_PARAMS(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillExact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillExact_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Ammo, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Trigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_Ammo.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_Ammo, Trigger), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Trigger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_Ammo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_AmmoTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_RefillExact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_Ammo_Statics::NewProp_Trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_Ammo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_Ammo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_Ammo_Statics::ClassParams = {
		&ATDRL_Ammo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_Ammo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Ammo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_Ammo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_Ammo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_Ammo()
	{
		if (!Z_Registration_Info_UClass_ATDRL_Ammo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_Ammo.OuterSingleton, Z_Construct_UClass_ATDRL_Ammo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_Ammo.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_Ammo>()
	{
		return ATDRL_Ammo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_Ammo);
	ATDRL_Ammo::~ATDRL_Ammo() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_Statics::EnumInfo[] = {
		{ EAmmoRefillMethod_StaticEnum, TEXT("EAmmoRefillMethod"), &Z_Registration_Info_UEnum_EAmmoRefillMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4051351009U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_Ammo, ATDRL_Ammo::StaticClass, TEXT("ATDRL_Ammo"), &Z_Registration_Info_UClass_ATDRL_Ammo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_Ammo), 2480553880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_3605709847(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_Ammo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
