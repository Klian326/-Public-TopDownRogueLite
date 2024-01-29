// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/HUD/TDRL_HUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_HUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_HUD();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_HUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ATDRL_HUD::execRefreshGrenadeWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshGrenadeWidget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_HUD::execRefreshAmmoSlot)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshAmmoSlot_Implementation(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_HUD::execRefreshIcons)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshIcons_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_HUD::execSelectSlotUI)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectSlotUI_Implementation(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_HUD::execSetSlotsAmount)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlotsAmount_Implementation(Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATDRL_HUD::execCreateInGameUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInGameUI_Implementation();
		P_NATIVE_END;
	}
	struct TDRL_HUD_eventRefreshAmmoSlot_Parms
	{
		uint8 Slot;
	};
	struct TDRL_HUD_eventSelectSlotUI_Parms
	{
		uint8 Slot;
	};
	struct TDRL_HUD_eventSetSlotsAmount_Parms
	{
		uint8 Slot;
	};
	static FName NAME_ATDRL_HUD_CreateInGameUI = FName(TEXT("CreateInGameUI"));
	void ATDRL_HUD::CreateInGameUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_HUD_CreateInGameUI),NULL);
	}
	static FName NAME_ATDRL_HUD_RefreshAmmoSlot = FName(TEXT("RefreshAmmoSlot"));
	void ATDRL_HUD::RefreshAmmoSlot(const uint8 Slot)
	{
		TDRL_HUD_eventRefreshAmmoSlot_Parms Parms;
		Parms.Slot=Slot;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_HUD_RefreshAmmoSlot),&Parms);
	}
	static FName NAME_ATDRL_HUD_RefreshGrenadeWidget = FName(TEXT("RefreshGrenadeWidget"));
	void ATDRL_HUD::RefreshGrenadeWidget()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_HUD_RefreshGrenadeWidget),NULL);
	}
	static FName NAME_ATDRL_HUD_RefreshIcons = FName(TEXT("RefreshIcons"));
	void ATDRL_HUD::RefreshIcons()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_HUD_RefreshIcons),NULL);
	}
	static FName NAME_ATDRL_HUD_SelectSlotUI = FName(TEXT("SelectSlotUI"));
	void ATDRL_HUD::SelectSlotUI(const uint8 Slot)
	{
		TDRL_HUD_eventSelectSlotUI_Parms Parms;
		Parms.Slot=Slot;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_HUD_SelectSlotUI),&Parms);
	}
	static FName NAME_ATDRL_HUD_SetSlotsAmount = FName(TEXT("SetSlotsAmount"));
	void ATDRL_HUD::SetSlotsAmount(const uint8 Slot)
	{
		TDRL_HUD_eventSetSlotsAmount_Parms Parms;
		Parms.Slot=Slot;
		ProcessEvent(FindFunctionChecked(NAME_ATDRL_HUD_SetSlotsAmount),&Parms);
	}
	void ATDRL_HUD::StaticRegisterNativesATDRL_HUD()
	{
		UClass* Class = ATDRL_HUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateInGameUI", &ATDRL_HUD::execCreateInGameUI },
			{ "RefreshAmmoSlot", &ATDRL_HUD::execRefreshAmmoSlot },
			{ "RefreshGrenadeWidget", &ATDRL_HUD::execRefreshGrenadeWidget },
			{ "RefreshIcons", &ATDRL_HUD::execRefreshIcons },
			{ "SelectSlotUI", &ATDRL_HUD::execSelectSlotUI },
			{ "SetSlotsAmount", &ATDRL_HUD::execSetSlotsAmount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATDRL_HUD_CreateInGameUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_CreateInGameUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|HUD" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_HUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_HUD_CreateInGameUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_HUD, nullptr, "CreateInGameUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_CreateInGameUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_CreateInGameUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_HUD_CreateInGameUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_HUD_CreateInGameUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_HUD_eventRefreshAmmoSlot_Parms, Slot), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::NewProp_Slot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|HUD" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_HUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_HUD, nullptr, "RefreshAmmoSlot", nullptr, nullptr, sizeof(TDRL_HUD_eventRefreshAmmoSlot_Parms), Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_HUD_RefreshGrenadeWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_RefreshGrenadeWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|HUD" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_HUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_HUD_RefreshGrenadeWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_HUD, nullptr, "RefreshGrenadeWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_RefreshGrenadeWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_RefreshGrenadeWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_HUD_RefreshGrenadeWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_HUD_RefreshGrenadeWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_HUD_RefreshIcons_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_RefreshIcons_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|HUD" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_HUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_HUD_RefreshIcons_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_HUD, nullptr, "RefreshIcons", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_RefreshIcons_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_RefreshIcons_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_HUD_RefreshIcons()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_HUD_RefreshIcons_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_HUD_eventSelectSlotUI_Parms, Slot), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::NewProp_Slot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|HUD" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_HUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_HUD, nullptr, "SelectSlotUI", nullptr, nullptr, sizeof(TDRL_HUD_eventSelectSlotUI_Parms), Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::NewProp_Slot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_HUD_eventSetSlotsAmount_Parms, Slot), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::NewProp_Slot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::NewProp_Slot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|HUD" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_HUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATDRL_HUD, nullptr, "SetSlotsAmount", nullptr, nullptr, sizeof(TDRL_HUD_eventSetSlotsAmount_Parms), Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_HUD);
	UClass* Z_Construct_UClass_ATDRL_HUD_NoRegister()
	{
		return ATDRL_HUD::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedSlotUI_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectedSlotUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATDRL_HUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATDRL_HUD_CreateInGameUI, "CreateInGameUI" }, // 845251198
		{ &Z_Construct_UFunction_ATDRL_HUD_RefreshAmmoSlot, "RefreshAmmoSlot" }, // 3419986420
		{ &Z_Construct_UFunction_ATDRL_HUD_RefreshGrenadeWidget, "RefreshGrenadeWidget" }, // 2449388754
		{ &Z_Construct_UFunction_ATDRL_HUD_RefreshIcons, "RefreshIcons" }, // 3516443353
		{ &Z_Construct_UFunction_ATDRL_HUD_SelectSlotUI, "SelectSlotUI" }, // 3545894852
		{ &Z_Construct_UFunction_ATDRL_HUD_SetSlotsAmount, "SetSlotsAmount" }, // 3421355725
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/TDRL_HUD.h" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_HUD_Statics::NewProp_SelectedSlotUI_MetaData[] = {
		{ "Category", "TDRL|HUD" },
		{ "ModuleRelativePath", "Public/HUD/TDRL_HUD.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATDRL_HUD_Statics::NewProp_SelectedSlotUI = { "SelectedSlotUI", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_HUD, SelectedSlotUI), nullptr, METADATA_PARAMS(Z_Construct_UClass_ATDRL_HUD_Statics::NewProp_SelectedSlotUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_HUD_Statics::NewProp_SelectedSlotUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_HUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_HUD_Statics::NewProp_SelectedSlotUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_HUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_HUD_Statics::ClassParams = {
		&ATDRL_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATDRL_HUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_HUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_HUD()
	{
		if (!Z_Registration_Info_UClass_ATDRL_HUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_HUD.OuterSingleton, Z_Construct_UClass_ATDRL_HUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_HUD.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_HUD>()
	{
		return ATDRL_HUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_HUD);
	ATDRL_HUD::~ATDRL_HUD() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_HUD, ATDRL_HUD::StaticClass, TEXT("ATDRL_HUD"), &Z_Registration_Info_UClass_ATDRL_HUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_HUD), 3632981399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_1108724306(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_HUD_TDRL_HUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
