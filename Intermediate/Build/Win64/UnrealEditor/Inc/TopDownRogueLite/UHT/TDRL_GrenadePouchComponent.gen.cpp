// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/GrenadePouch/TDRL_GrenadePouchComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_GrenadePouchComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_GrenadePouchComponent();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_GrenadePouchComponent_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FGrenadePouchElement();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GrenadePouchElement;
class UScriptStruct* FGrenadePouchElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GrenadePouchElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GrenadePouchElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrenadePouchElement, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("GrenadePouchElement"));
	}
	return Z_Registration_Info_UScriptStruct_GrenadePouchElement.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FGrenadePouchElement>()
{
	return FGrenadePouchElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGrenadePouchElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrenadePouchElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Grenade class*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Grenade class" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadePouchElement, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "StaticData" },
		{ "Comment", "/*Amount in the pouch*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Amount in the pouch" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGrenadePouchElement, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Amount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewProp_Amount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"GrenadePouchElement",
		sizeof(FGrenadePouchElement),
		alignof(FGrenadePouchElement),
		Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGrenadePouchElement()
	{
		if (!Z_Registration_Info_UScriptStruct_GrenadePouchElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GrenadePouchElement.InnerSingleton, Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GrenadePouchElement.InnerSingleton;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execCheckRemoveEmptySlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckRemoveEmptySlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execRemoveGrenadesFromPouch_Func)
	{
		P_GET_STRUCT(FGrenadePouchElement,Z_Param_Grenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGrenadesFromPouch_Func(Z_Param_Grenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execRemoveGrenadesFromPouch_Server)
	{
		P_GET_STRUCT(FGrenadePouchElement,Z_Param_Grenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGrenadesFromPouch_Server_Implementation(Z_Param_Grenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execAddGrenadeToPouchList_Func)
	{
		P_GET_STRUCT(FGrenadePouchElement,Z_Param_Grenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGrenadeToPouchList_Func(Z_Param_Grenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execAddGrenadeToPouchList_Server)
	{
		P_GET_STRUCT(FGrenadePouchElement,Z_Param_Grenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGrenadeToPouchList_Server_Implementation(Z_Param_Grenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execRemoveGrenadesFromPouch)
	{
		P_GET_STRUCT(FGrenadePouchElement,Z_Param_Grenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGrenadesFromPouch(Z_Param_Grenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execAddGrenadeToPouchList)
	{
		P_GET_STRUCT(FGrenadePouchElement,Z_Param_Grenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGrenadeToPouchList(Z_Param_Grenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execCanAddGrenadeByClass)
	{
		P_GET_STRUCT(FGrenadePouchElement,Z_Param_Grenade);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Excess);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SelectedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddGrenadeByClass(Z_Param_Grenade,Z_Param_Out_Excess,Z_Param_Out_SelectedIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetAmountGrenadesOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Grenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAmountGrenadesOfClass(Z_Param_Grenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execHasAnyGrenadeOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Grenade);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyGrenadeOfClass(Z_Param_Grenade,Z_Param_Out_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetGrenadePouchLimitByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGrenadePouchLimitByClass(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetGrenadePouchAmounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetGrenadePouchAmounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetGrenadePouchClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<ATDRL_GrenadeBase> >*)Z_Param__Result=P_THIS->GetGrenadePouchClasses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetGrenadePouchList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGrenadePouchElement>*)Z_Param__Result=P_THIS->GetGrenadePouchList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetGrenadeAvailableSlotsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGrenadeAvailableSlotsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetGrenadeTotalCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGrenadeTotalCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetGrenadeSlotsCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGrenadeSlotsCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execGetGrenadeSlotsIndexByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Grenade);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetGrenadeSlotsIndexByClass(Z_Param_Grenade);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_GrenadePouchComponent::execOnRep_GrenadePouchChanged)
	{
		P_GET_TARRAY(FGrenadePouchElement,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_GrenadePouchChanged(Z_Param_OldValue);
		P_NATIVE_END;
	}
	struct TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Server_Parms
	{
		FGrenadePouchElement Grenade;
	};
	struct TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Server_Parms
	{
		FGrenadePouchElement Grenade;
	};
	static FName NAME_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server = FName(TEXT("AddGrenadeToPouchList_Server"));
	void UTDRL_GrenadePouchComponent::AddGrenadeToPouchList_Server(FGrenadePouchElement Grenade)
	{
		TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Server_Parms Parms;
		Parms.Grenade=Grenade;
		ProcessEvent(FindFunctionChecked(NAME_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server),&Parms);
	}
	static FName NAME_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server = FName(TEXT("RemoveGrenadesFromPouch_Server"));
	void UTDRL_GrenadePouchComponent::RemoveGrenadesFromPouch_Server(FGrenadePouchElement Grenade)
	{
		TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Server_Parms Parms;
		Parms.Grenade=Grenade;
		ProcessEvent(FindFunctionChecked(NAME_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server),&Parms);
	}
	void UTDRL_GrenadePouchComponent::StaticRegisterNativesUTDRL_GrenadePouchComponent()
	{
		UClass* Class = UTDRL_GrenadePouchComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGrenadeToPouchList", &UTDRL_GrenadePouchComponent::execAddGrenadeToPouchList },
			{ "AddGrenadeToPouchList_Func", &UTDRL_GrenadePouchComponent::execAddGrenadeToPouchList_Func },
			{ "AddGrenadeToPouchList_Server", &UTDRL_GrenadePouchComponent::execAddGrenadeToPouchList_Server },
			{ "CanAddGrenadeByClass", &UTDRL_GrenadePouchComponent::execCanAddGrenadeByClass },
			{ "CheckRemoveEmptySlots", &UTDRL_GrenadePouchComponent::execCheckRemoveEmptySlots },
			{ "GetAmountGrenadesOfClass", &UTDRL_GrenadePouchComponent::execGetAmountGrenadesOfClass },
			{ "GetGrenadeAvailableSlotsCount", &UTDRL_GrenadePouchComponent::execGetGrenadeAvailableSlotsCount },
			{ "GetGrenadePouchAmounts", &UTDRL_GrenadePouchComponent::execGetGrenadePouchAmounts },
			{ "GetGrenadePouchClasses", &UTDRL_GrenadePouchComponent::execGetGrenadePouchClasses },
			{ "GetGrenadePouchLimitByClass", &UTDRL_GrenadePouchComponent::execGetGrenadePouchLimitByClass },
			{ "GetGrenadePouchList", &UTDRL_GrenadePouchComponent::execGetGrenadePouchList },
			{ "GetGrenadeSlotsCount", &UTDRL_GrenadePouchComponent::execGetGrenadeSlotsCount },
			{ "GetGrenadeSlotsIndexByClass", &UTDRL_GrenadePouchComponent::execGetGrenadeSlotsIndexByClass },
			{ "GetGrenadeTotalCount", &UTDRL_GrenadePouchComponent::execGetGrenadeTotalCount },
			{ "HasAnyGrenadeOfClass", &UTDRL_GrenadePouchComponent::execHasAnyGrenadeOfClass },
			{ "OnRep_GrenadePouchChanged", &UTDRL_GrenadePouchComponent::execOnRep_GrenadePouchChanged },
			{ "RemoveGrenadesFromPouch", &UTDRL_GrenadePouchComponent::execRemoveGrenadesFromPouch },
			{ "RemoveGrenadesFromPouch_Func", &UTDRL_GrenadePouchComponent::execRemoveGrenadesFromPouch_Func },
			{ "RemoveGrenadesFromPouch_Server", &UTDRL_GrenadePouchComponent::execRemoveGrenadesFromPouch_Server },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics
	{
		struct TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Parms
		{
			FGrenadePouchElement Grenade;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Parms, Grenade), Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::NewProp_Grenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Add specified class and amount to this grenade pouch, any excess will be removed from the game (use in combination with CanAddGrenadeByClass if you want to manage any excess)*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Add specified class and amount to this grenade pouch, any excess will be removed from the game (use in combination with CanAddGrenadeByClass if you want to manage any excess)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "AddGrenadeToPouchList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics
	{
		struct TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Func_Parms
		{
			FGrenadePouchElement Grenade;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Func_Parms, Grenade), Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::NewProp_Grenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "AddGrenadeToPouchList_Func", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Func_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Server_Parms, Grenade), Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::NewProp_Grenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "AddGrenadeToPouchList_Server", nullptr, nullptr, sizeof(TDRL_GrenadePouchComponent_eventAddGrenadeToPouchList_Server_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics
	{
		struct TDRL_GrenadePouchComponent_eventCanAddGrenadeByClass_Parms
		{
			FGrenadePouchElement Grenade;
			int32 Excess;
			int32 SelectedIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Excess;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventCanAddGrenadeByClass_Parms, Grenade), Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_Excess = { "Excess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventCanAddGrenadeByClass_Parms, Excess), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_SelectedIndex = { "SelectedIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventCanAddGrenadeByClass_Parms, SelectedIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_GrenadePouchComponent_eventCanAddGrenadeByClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_GrenadePouchComponent_eventCanAddGrenadeByClass_Parms), &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_Grenade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_Excess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_SelectedIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Perform a series of checks based on the user's preferences to determine if a given class can be added, will return excess and which slot index would be used*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Perform a series of checks based on the user's preferences to determine if a given class can be added, will return excess and which slot index would be used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "CanAddGrenadeByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::TDRL_GrenadePouchComponent_eventCanAddGrenadeByClass_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CheckRemoveEmptySlots_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CheckRemoveEmptySlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CheckRemoveEmptySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "CheckRemoveEmptySlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CheckRemoveEmptySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CheckRemoveEmptySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CheckRemoveEmptySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CheckRemoveEmptySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetAmountGrenadesOfClass_Parms
		{
			TSubclassOf<ATDRL_GrenadeBase>  Grenade;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetAmountGrenadesOfClass_Parms, Grenade), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetAmountGrenadesOfClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::NewProp_Grenade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the amount of grenades for a specified class, will return 0 even if the class can't be found*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the amount of grenades for a specified class, will return 0 even if the class can't be found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetAmountGrenadesOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::TDRL_GrenadePouchComponent_eventGetAmountGrenadesOfClass_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetGrenadeAvailableSlotsCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadeAvailableSlotsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the amount of slots that can be occupied by picking up new grenade classes (-1 when no limit)*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the amount of slots that can be occupied by picking up new grenade classes (-1 when no limit)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetGrenadeAvailableSlotsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::TDRL_GrenadePouchComponent_eventGetGrenadeAvailableSlotsCount_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetGrenadePouchAmounts_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadePouchAmounts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the list of quantities for each class found in this pouch*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the list of quantities for each class found in this pouch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetGrenadePouchAmounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::TDRL_GrenadePouchComponent_eventGetGrenadePouchAmounts_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetGrenadePouchClasses_Parms
		{
			TArray<TSubclassOf<ATDRL_GrenadeBase> > ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadePouchClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the list of classes found in this pouch*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the list of classes found in this pouch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetGrenadePouchClasses", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::TDRL_GrenadePouchComponent_eventGetGrenadePouchClasses_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetGrenadePouchLimitByClass_Parms
		{
			TSubclassOf<ATDRL_GrenadeBase>  Class;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadePouchLimitByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadePouchLimitByClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the max amount of grenades the character can carry for a given class*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the max amount of grenades the character can carry for a given class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetGrenadePouchLimitByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::TDRL_GrenadePouchComponent_eventGetGrenadePouchLimitByClass_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetGrenadePouchList_Parms
		{
			TArray<FGrenadePouchElement> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadePouchList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the list of grenades in this pouch, includes available amount for each class*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the list of grenades in this pouch, includes available amount for each class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetGrenadePouchList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::TDRL_GrenadePouchComponent_eventGetGrenadePouchList_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetGrenadeSlotsCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadeSlotsCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the amount of slots currently occupied by grenades (-1 is none)*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the amount of slots currently occupied by grenades (-1 is none)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetGrenadeSlotsCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::TDRL_GrenadePouchComponent_eventGetGrenadeSlotsCount_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetGrenadeSlotsIndexByClass_Parms
		{
			TSubclassOf<ATDRL_GrenadeBase>  Grenade;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadeSlotsIndexByClass_Parms, Grenade), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadeSlotsIndexByClass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::NewProp_Grenade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the grenade slot index, if found. Otherwise will return -1*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the grenade slot index, if found. Otherwise will return -1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetGrenadeSlotsIndexByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::TDRL_GrenadePouchComponent_eventGetGrenadeSlotsIndexByClass_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics
	{
		struct TDRL_GrenadePouchComponent_eventGetGrenadeTotalCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventGetGrenadeTotalCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return the total count of grenades in this grenade pouch*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return the total count of grenades in this grenade pouch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "GetGrenadeTotalCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::TDRL_GrenadePouchComponent_eventGetGrenadeTotalCount_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics
	{
		struct TDRL_GrenadePouchComponent_eventHasAnyGrenadeOfClass_Parms
		{
			TSubclassOf<ATDRL_GrenadeBase>  Grenade;
			int32 SlotIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventHasAnyGrenadeOfClass_Parms, Grenade), Z_Construct_UClass_UClass, Z_Construct_UClass_ATDRL_GrenadeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventHasAnyGrenadeOfClass_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TDRL_GrenadePouchComponent_eventHasAnyGrenadeOfClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_GrenadePouchComponent_eventHasAnyGrenadeOfClass_Parms), &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::NewProp_Grenade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Return true if the specified class can be found in this pouch*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Return true if the specified class can be found in this pouch" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "HasAnyGrenadeOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::TDRL_GrenadePouchComponent_eventHasAnyGrenadeOfClass_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics
	{
		struct TDRL_GrenadePouchComponent_eventOnRep_GrenadePouchChanged_Parms
		{
			TArray<FGrenadePouchElement> OldValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::NewProp_OldValue_Inner = { "OldValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventOnRep_GrenadePouchChanged_Parms, OldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::NewProp_OldValue_MetaData)) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::NewProp_OldValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "OnRep_GrenadePouchChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::TDRL_GrenadePouchComponent_eventOnRep_GrenadePouchChanged_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics
	{
		struct TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Parms
		{
			FGrenadePouchElement Grenade;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Parms, Grenade), Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::NewProp_Grenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "Comment", "/*Will remove a certan amount of grenades from this pouch, by the specified amount*/" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ToolTip", "Will remove a certan amount of grenades from this pouch, by the specified amount" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "RemoveGrenadesFromPouch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics
	{
		struct TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Func_Parms
		{
			FGrenadePouchElement Grenade;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Func_Parms, Grenade), Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::NewProp_Grenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "RemoveGrenadesFromPouch_Func", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Func_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Grenade;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::NewProp_Grenade = { "Grenade", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Server_Parms, Grenade), Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::NewProp_Grenade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_GrenadePouchComponent, nullptr, "RemoveGrenadesFromPouch_Server", nullptr, nullptr, sizeof(TDRL_GrenadePouchComponent_eventRemoveGrenadesFromPouch_Server_Parms), Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_GrenadePouchComponent);
	UClass* Z_Construct_UClass_UTDRL_GrenadePouchComponent_NoRegister()
	{
		return UTDRL_GrenadePouchComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrenadePouch_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrenadePouch_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GrenadePouch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitOnClasses_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LimitOnClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PouchLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PouchLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PouchLimits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList, "AddGrenadeToPouchList" }, // 2826100503
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Func, "AddGrenadeToPouchList_Func" }, // 2867732990
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_AddGrenadeToPouchList_Server, "AddGrenadeToPouchList_Server" }, // 458396611
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CanAddGrenadeByClass, "CanAddGrenadeByClass" }, // 2750424415
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_CheckRemoveEmptySlots, "CheckRemoveEmptySlots" }, // 2091330701
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetAmountGrenadesOfClass, "GetAmountGrenadesOfClass" }, // 2787923870
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeAvailableSlotsCount, "GetGrenadeAvailableSlotsCount" }, // 4217096594
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchAmounts, "GetGrenadePouchAmounts" }, // 1176694405
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchClasses, "GetGrenadePouchClasses" }, // 938852549
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchLimitByClass, "GetGrenadePouchLimitByClass" }, // 2625181835
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadePouchList, "GetGrenadePouchList" }, // 2633057257
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsCount, "GetGrenadeSlotsCount" }, // 3964290628
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeSlotsIndexByClass, "GetGrenadeSlotsIndexByClass" }, // 1615789258
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_GetGrenadeTotalCount, "GetGrenadeTotalCount" }, // 3447427385
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_HasAnyGrenadeOfClass, "HasAnyGrenadeOfClass" }, // 27983002
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_OnRep_GrenadePouchChanged, "OnRep_GrenadePouchChanged" }, // 787163152
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch, "RemoveGrenadesFromPouch" }, // 631987937
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Func, "RemoveGrenadesFromPouch_Func" }, // 2029481765
		{ &Z_Construct_UFunction_UTDRL_GrenadePouchComponent_RemoveGrenadesFromPouch_Server, "RemoveGrenadesFromPouch_Server" }, // 2229806128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "ImplementedBy", "ATDRL_Character" },
		{ "IncludePath", "GrenadePouch/TDRL_GrenadePouchComponent.h" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_GrenadePouch_Inner = { "GrenadePouch", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_GrenadePouch_MetaData[] = {
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_GrenadePouch = { "GrenadePouch", "OnRep_GrenadePouchChanged", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_GrenadePouchComponent, GrenadePouch), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_GrenadePouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_GrenadePouch_MetaData)) }; // 3547397121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_LimitOnClasses_MetaData[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_LimitOnClasses = { "LimitOnClasses", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_GrenadePouchComponent, LimitOnClasses), METADATA_PARAMS(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_LimitOnClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_LimitOnClasses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_PouchLimits_Inner = { "PouchLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGrenadePouchElement, METADATA_PARAMS(nullptr, 0) }; // 3547397121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_PouchLimits_MetaData[] = {
		{ "Category", "TDRL|GrenadePouch" },
		{ "ModuleRelativePath", "Public/GrenadePouch/TDRL_GrenadePouchComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_PouchLimits = { "PouchLimits", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_GrenadePouchComponent, PouchLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_PouchLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_PouchLimits_MetaData)) }; // 3547397121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_GrenadePouch_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_GrenadePouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_LimitOnClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_PouchLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::NewProp_PouchLimits,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_GrenadePouchComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::ClassParams = {
		&UTDRL_GrenadePouchComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_GrenadePouchComponent()
	{
		if (!Z_Registration_Info_UClass_UTDRL_GrenadePouchComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_GrenadePouchComponent.OuterSingleton, Z_Construct_UClass_UTDRL_GrenadePouchComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_GrenadePouchComponent.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_GrenadePouchComponent>()
	{
		return UTDRL_GrenadePouchComponent::StaticClass();
	}

	void UTDRL_GrenadePouchComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_GrenadePouch(TEXT("GrenadePouch"));
		static const FName Name_LimitOnClasses(TEXT("LimitOnClasses"));
		static const FName Name_PouchLimits(TEXT("PouchLimits"));

		const bool bIsValid = true
			&& Name_GrenadePouch == ClassReps[(int32)ENetFields_Private::GrenadePouch].Property->GetFName()
			&& Name_LimitOnClasses == ClassReps[(int32)ENetFields_Private::LimitOnClasses].Property->GetFName()
			&& Name_PouchLimits == ClassReps[(int32)ENetFields_Private::PouchLimits].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTDRL_GrenadePouchComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_GrenadePouchComponent);
	UTDRL_GrenadePouchComponent::~UTDRL_GrenadePouchComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_Statics::ScriptStructInfo[] = {
		{ FGrenadePouchElement::StaticStruct, Z_Construct_UScriptStruct_FGrenadePouchElement_Statics::NewStructOps, TEXT("GrenadePouchElement"), &Z_Registration_Info_UScriptStruct_GrenadePouchElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGrenadePouchElement), 3547397121U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_GrenadePouchComponent, UTDRL_GrenadePouchComponent::StaticClass, TEXT("UTDRL_GrenadePouchComponent"), &Z_Registration_Info_UClass_UTDRL_GrenadePouchComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_GrenadePouchComponent), 2555423316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_1503439058(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_GrenadePouch_TDRL_GrenadePouchComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
