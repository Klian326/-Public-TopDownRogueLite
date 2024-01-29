// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Progressbar/TDRL_ProgressBarInterface.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_ProgressBarInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_ProgressBarInterface();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_ProgressBarInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ITDRL_ProgressBarInterface::execEditProgressBarColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditProgressBarColor_Implementation(Z_Param_NewColor,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITDRL_ProgressBarInterface::execEditProgressBarText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditProgressBarText_Implementation(Z_Param_Out_NewText,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITDRL_ProgressBarInterface::execEditProgressBarFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFloat);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditProgressBarFloat_Implementation(Z_Param_NewFloat,Z_Param_Tag);
		P_NATIVE_END;
	}
	struct TDRL_ProgressBarInterface_eventEditProgressBarColor_Parms
	{
		FLinearColor NewColor;
		FGameplayTag Tag;
	};
	struct TDRL_ProgressBarInterface_eventEditProgressBarFloat_Parms
	{
		float NewFloat;
		FGameplayTag Tag;
	};
	struct TDRL_ProgressBarInterface_eventEditProgressBarText_Parms
	{
		FText NewText;
		FGameplayTag Tag;
	};
	void ITDRL_ProgressBarInterface::EditProgressBarColor(const FLinearColor NewColor, FGameplayTag Tag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EditProgressBarColor instead.");
	}
	void ITDRL_ProgressBarInterface::EditProgressBarFloat(const float NewFloat, FGameplayTag Tag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EditProgressBarFloat instead.");
	}
	void ITDRL_ProgressBarInterface::EditProgressBarText(FText const& NewText, FGameplayTag Tag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EditProgressBarText instead.");
	}
	void UTDRL_ProgressBarInterface::StaticRegisterNativesUTDRL_ProgressBarInterface()
	{
		UClass* Class = UTDRL_ProgressBarInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditProgressBarColor", &ITDRL_ProgressBarInterface::execEditProgressBarColor },
			{ "EditProgressBarFloat", &ITDRL_ProgressBarInterface::execEditProgressBarFloat },
			{ "EditProgressBarText", &ITDRL_ProgressBarInterface::execEditProgressBarText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarInterface_eventEditProgressBarColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::NewProp_NewColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarInterface_eventEditProgressBarColor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|ProgressBar" },
		{ "Comment", "/*Communicate a linear color value to the progress bar widget, using tags for scrpiting multiple options*/" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarInterface.h" },
		{ "ToolTip", "Communicate a linear color value to the progress bar widget, using tags for scrpiting multiple options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarInterface, nullptr, "EditProgressBarColor", nullptr, nullptr, sizeof(TDRL_ProgressBarInterface_eventEditProgressBarColor_Parms), Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFloat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::NewProp_NewFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::NewProp_NewFloat = { "NewFloat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarInterface_eventEditProgressBarFloat_Parms, NewFloat), METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::NewProp_NewFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::NewProp_NewFloat_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarInterface_eventEditProgressBarFloat_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::NewProp_NewFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|ProgressBar" },
		{ "Comment", "/*Communicate a float value to the progress bar widget, using tags for scrpiting multiple options*/" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarInterface.h" },
		{ "ToolTip", "Communicate a float value to the progress bar widget, using tags for scrpiting multiple options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarInterface, nullptr, "EditProgressBarFloat", nullptr, nullptr, sizeof(TDRL_ProgressBarInterface_eventEditProgressBarFloat_Parms), Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NewText;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarInterface_eventEditProgressBarText_Parms, NewText), METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::NewProp_NewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::NewProp_NewText_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarInterface_eventEditProgressBarText_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::NewProp_NewText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|ProgressBar" },
		{ "Comment", "/*Communicate a text value to the progress bar widget, using tags for scrpiting multiple options*/" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarInterface.h" },
		{ "ToolTip", "Communicate a text value to the progress bar widget, using tags for scrpiting multiple options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarInterface, nullptr, "EditProgressBarText", nullptr, nullptr, sizeof(TDRL_ProgressBarInterface_eventEditProgressBarText_Parms), Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_ProgressBarInterface);
	UClass* Z_Construct_UClass_UTDRL_ProgressBarInterface_NoRegister()
	{
		return UTDRL_ProgressBarInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarColor, "EditProgressBarColor" }, // 1800295216
		{ &Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarFloat, "EditProgressBarFloat" }, // 1595467852
		{ &Z_Construct_UFunction_UTDRL_ProgressBarInterface_EditProgressBarText, "EditProgressBarText" }, // 581845671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITDRL_ProgressBarInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics::ClassParams = {
		&UTDRL_ProgressBarInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_ProgressBarInterface()
	{
		if (!Z_Registration_Info_UClass_UTDRL_ProgressBarInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_ProgressBarInterface.OuterSingleton, Z_Construct_UClass_UTDRL_ProgressBarInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_ProgressBarInterface.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_ProgressBarInterface>()
	{
		return UTDRL_ProgressBarInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_ProgressBarInterface);
	UTDRL_ProgressBarInterface::~UTDRL_ProgressBarInterface() {}
	static FName NAME_UTDRL_ProgressBarInterface_EditProgressBarColor = FName(TEXT("EditProgressBarColor"));
	void ITDRL_ProgressBarInterface::Execute_EditProgressBarColor(UObject* O, const FLinearColor NewColor, FGameplayTag Tag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTDRL_ProgressBarInterface::StaticClass()));
		TDRL_ProgressBarInterface_eventEditProgressBarColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTDRL_ProgressBarInterface_EditProgressBarColor);
		if (Func)
		{
			Parms.NewColor=NewColor;
			Parms.Tag=Tag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITDRL_ProgressBarInterface*)(O->GetNativeInterfaceAddress(UTDRL_ProgressBarInterface::StaticClass())))
		{
			I->EditProgressBarColor_Implementation(NewColor,Tag);
		}
	}
	static FName NAME_UTDRL_ProgressBarInterface_EditProgressBarFloat = FName(TEXT("EditProgressBarFloat"));
	void ITDRL_ProgressBarInterface::Execute_EditProgressBarFloat(UObject* O, const float NewFloat, FGameplayTag Tag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTDRL_ProgressBarInterface::StaticClass()));
		TDRL_ProgressBarInterface_eventEditProgressBarFloat_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTDRL_ProgressBarInterface_EditProgressBarFloat);
		if (Func)
		{
			Parms.NewFloat=NewFloat;
			Parms.Tag=Tag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITDRL_ProgressBarInterface*)(O->GetNativeInterfaceAddress(UTDRL_ProgressBarInterface::StaticClass())))
		{
			I->EditProgressBarFloat_Implementation(NewFloat,Tag);
		}
	}
	static FName NAME_UTDRL_ProgressBarInterface_EditProgressBarText = FName(TEXT("EditProgressBarText"));
	void ITDRL_ProgressBarInterface::Execute_EditProgressBarText(UObject* O, FText const& NewText, FGameplayTag Tag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTDRL_ProgressBarInterface::StaticClass()));
		TDRL_ProgressBarInterface_eventEditProgressBarText_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTDRL_ProgressBarInterface_EditProgressBarText);
		if (Func)
		{
			Parms.NewText=NewText;
			Parms.Tag=Tag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITDRL_ProgressBarInterface*)(O->GetNativeInterfaceAddress(UTDRL_ProgressBarInterface::StaticClass())))
		{
			I->EditProgressBarText_Implementation(NewText,Tag);
		}
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_ProgressBarInterface, UTDRL_ProgressBarInterface::StaticClass, TEXT("UTDRL_ProgressBarInterface"), &Z_Registration_Info_UClass_UTDRL_ProgressBarInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_ProgressBarInterface), 629399106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_1832374639(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
