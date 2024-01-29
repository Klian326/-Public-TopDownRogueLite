// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Progressbar/TDRL_ProgressBarComponent.h"
#include "Engine/Classes/Engine/EngineTypes.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
#include "TopDownRogueLite/Public/Types/TDRL_GameplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_ProgressBarComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_ProgressBarComponent();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_ProgressBarComponent_NoRegister();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarColor();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarFloat();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FTDRLProgressBarText();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite, nullptr, "WidgetReadyOnClient__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execOnRep_ProgressBarColor)
	{
		P_GET_TARRAY(FTDRLProgressBarColor,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ProgressBarColor(Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execOnRep_ProgressBarText)
	{
		P_GET_TARRAY(FTDRLProgressBarText,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ProgressBarText(Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execOnRep_ProgressBarFloat)
	{
		P_GET_TARRAY(FTDRLProgressBarFloat,Z_Param_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ProgressBarFloat(Z_Param_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execEditProgressBarColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditProgressBarColor(Z_Param_NewColor,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execEditProgressBarText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_NewText);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditProgressBarText(Z_Param_Out_NewText,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execEditProgressBarFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFloat);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditProgressBarFloat(Z_Param_NewFloat,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execSetProgressBarVisibility)
	{
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgressBarVisibility(Z_Param_Visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execInactiveTimerOver)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InactiveTimerOver();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execStartInactiveTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartInactiveTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execBarShouldBeVisibleChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BarShouldBeVisibleChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execFadeProgressBarVisibility)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FadeProgressBarVisibility(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_ProgressBarComponent::execUpdateFollowPlayer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFollowPlayer(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UTDRL_ProgressBarComponent::StaticRegisterNativesUTDRL_ProgressBarComponent()
	{
		UClass* Class = UTDRL_ProgressBarComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BarShouldBeVisibleChanged", &UTDRL_ProgressBarComponent::execBarShouldBeVisibleChanged },
			{ "EditProgressBarColor", &UTDRL_ProgressBarComponent::execEditProgressBarColor },
			{ "EditProgressBarFloat", &UTDRL_ProgressBarComponent::execEditProgressBarFloat },
			{ "EditProgressBarText", &UTDRL_ProgressBarComponent::execEditProgressBarText },
			{ "FadeProgressBarVisibility", &UTDRL_ProgressBarComponent::execFadeProgressBarVisibility },
			{ "InactiveTimerOver", &UTDRL_ProgressBarComponent::execInactiveTimerOver },
			{ "OnRep_ProgressBarColor", &UTDRL_ProgressBarComponent::execOnRep_ProgressBarColor },
			{ "OnRep_ProgressBarFloat", &UTDRL_ProgressBarComponent::execOnRep_ProgressBarFloat },
			{ "OnRep_ProgressBarText", &UTDRL_ProgressBarComponent::execOnRep_ProgressBarText },
			{ "SetProgressBarVisibility", &UTDRL_ProgressBarComponent::execSetProgressBarVisibility },
			{ "StartInactiveTimer", &UTDRL_ProgressBarComponent::execStartInactiveTimer },
			{ "UpdateFollowPlayer", &UTDRL_ProgressBarComponent::execUpdateFollowPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_BarShouldBeVisibleChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_BarShouldBeVisibleChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_BarShouldBeVisibleChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "BarShouldBeVisibleChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_BarShouldBeVisibleChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_BarShouldBeVisibleChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_BarShouldBeVisibleChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_BarShouldBeVisibleChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics
	{
		struct TDRL_ProgressBarComponent_eventEditProgressBarColor_Parms
		{
			FLinearColor NewColor;
			FGameplayTag Tag;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventEditProgressBarColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::NewProp_NewColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventEditProgressBarColor_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|ProgressBar|Variables" },
		{ "Comment", "/*Will communicate throught blueprint interface (TDRL_ProgressBarInterface) a new color to the widget class. Can be further customized using GameplayTags (for example if you're using multiple progress bars)*/" },
		{ "DisplayName", "Edit ProgressBar Color" },
		{ "Keywords", "Edit ProgressBar Color TDRL" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Will communicate throught blueprint interface (TDRL_ProgressBarInterface) a new color to the widget class. Can be further customized using GameplayTags (for example if you're using multiple progress bars)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "EditProgressBarColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::TDRL_ProgressBarComponent_eventEditProgressBarColor_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics
	{
		struct TDRL_ProgressBarComponent_eventEditProgressBarFloat_Parms
		{
			float NewFloat;
			FGameplayTag Tag;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::NewProp_NewFloat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::NewProp_NewFloat = { "NewFloat", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventEditProgressBarFloat_Parms, NewFloat), METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::NewProp_NewFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::NewProp_NewFloat_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventEditProgressBarFloat_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::NewProp_NewFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|ProgressBar|Variables" },
		{ "Comment", "/*Will communicate throught interface (TDRL_ProgressBarInterface) a new progress bar value to the widget class. Can be further customized using GameplayTags (for example if you're using multiple progress bars)*/" },
		{ "DisplayName", "Edit ProgressBar Float" },
		{ "Keywords", "Edit ProgressBar Float TDRL" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Will communicate throught interface (TDRL_ProgressBarInterface) a new progress bar value to the widget class. Can be further customized using GameplayTags (for example if you're using multiple progress bars)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "EditProgressBarFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::TDRL_ProgressBarComponent_eventEditProgressBarFloat_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics
	{
		struct TDRL_ProgressBarComponent_eventEditProgressBarText_Parms
		{
			FText NewText;
			FGameplayTag Tag;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::NewProp_NewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::NewProp_NewText = { "NewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventEditProgressBarText_Parms, NewText), METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::NewProp_NewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::NewProp_NewText_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventEditProgressBarText_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::NewProp_NewText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|ProgressBar|Variables" },
		{ "Comment", "/*Will communicate throught blueprint interface (TDRL_ProgressBarInterface) a new text value to the widget class. Can be further customized using GameplayTags (for example if you're using multiple progress bars)*/" },
		{ "DisplayName", "Edit ProgressBar Text" },
		{ "Keywords", "Edit ProgressBar Text TDRL" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Will communicate throught blueprint interface (TDRL_ProgressBarInterface) a new text value to the widget class. Can be further customized using GameplayTags (for example if you're using multiple progress bars)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "EditProgressBarText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::TDRL_ProgressBarComponent_eventEditProgressBarText_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics
	{
		struct TDRL_ProgressBarComponent_eventFadeProgressBarVisibility_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventFadeProgressBarVisibility_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "FadeProgressBarVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::TDRL_ProgressBarComponent_eventFadeProgressBarVisibility_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_InactiveTimerOver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_InactiveTimerOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_InactiveTimerOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "InactiveTimerOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_InactiveTimerOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_InactiveTimerOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_InactiveTimerOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_InactiveTimerOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics
	{
		struct TDRL_ProgressBarComponent_eventOnRep_ProgressBarColor_Parms
		{
			TArray<FTDRLProgressBarColor> OldValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::NewProp_OldValue_Inner = { "OldValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTDRLProgressBarColor, METADATA_PARAMS(nullptr, 0) }; // 586229899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventOnRep_ProgressBarColor_Parms, OldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::NewProp_OldValue_MetaData)) }; // 586229899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::NewProp_OldValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "OnRep_ProgressBarColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::TDRL_ProgressBarComponent_eventOnRep_ProgressBarColor_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics
	{
		struct TDRL_ProgressBarComponent_eventOnRep_ProgressBarFloat_Parms
		{
			TArray<FTDRLProgressBarFloat> OldValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::NewProp_OldValue_Inner = { "OldValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTDRLProgressBarFloat, METADATA_PARAMS(nullptr, 0) }; // 962782315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventOnRep_ProgressBarFloat_Parms, OldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::NewProp_OldValue_MetaData)) }; // 962782315
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::NewProp_OldValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "OnRep_ProgressBarFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::TDRL_ProgressBarComponent_eventOnRep_ProgressBarFloat_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics
	{
		struct TDRL_ProgressBarComponent_eventOnRep_ProgressBarText_Parms
		{
			TArray<FTDRLProgressBarText> OldValue;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::NewProp_OldValue_Inner = { "OldValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTDRLProgressBarText, METADATA_PARAMS(nullptr, 0) }; // 3636456670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventOnRep_ProgressBarText_Parms, OldValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::NewProp_OldValue_MetaData)) }; // 3636456670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::NewProp_OldValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "OnRep_ProgressBarText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::TDRL_ProgressBarComponent_eventOnRep_ProgressBarText_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics
	{
		struct TDRL_ProgressBarComponent_eventSetProgressBarVisibility_Parms
		{
			bool Visible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visible_MetaData[];
#endif
		static void NewProp_Visible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::NewProp_Visible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((TDRL_ProgressBarComponent_eventSetProgressBarVisibility_Parms*)Obj)->Visible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_ProgressBarComponent_eventSetProgressBarVisibility_Parms), &Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::NewProp_Visible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::NewProp_Visible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|ProgressBar|Visibility" },
		{ "Comment", "/*Set progress bar visibility, this will trigger the \"inactive\" timer if enabled.*/" },
		{ "DisplayName", "Set ProgressBar Visibility" },
		{ "Keywords", "Set Progress Bar Visibility TDRL" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Set progress bar visibility, this will trigger the \"inactive\" timer if enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "SetProgressBarVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::TDRL_ProgressBarComponent_eventSetProgressBarVisibility_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020404, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_StartInactiveTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_StartInactiveTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_StartInactiveTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "StartInactiveTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_StartInactiveTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_StartInactiveTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_StartInactiveTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_StartInactiveTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics
	{
		struct TDRL_ProgressBarComponent_eventUpdateFollowPlayer_Parms
		{
			float DeltaTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_ProgressBarComponent_eventUpdateFollowPlayer_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_ProgressBarComponent, nullptr, "UpdateFollowPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::TDRL_ProgressBarComponent_eventUpdateFollowPlayer_Parms), Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_ProgressBarComponent);
	UClass* Z_Construct_UClass_UTDRL_ProgressBarComponent_NoRegister()
	{
		return UTDRL_ProgressBarComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetValidityClientHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetValidityClientHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetReadyOnClient_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_WidgetReadyOnClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowPlayer_MetaData[];
#endif
		static void NewProp_bFollowPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePitch_MetaData[];
#endif
		static void NewProp_bUsePitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLag_MetaData[];
#endif
		static void NewProp_bUseLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideInactive_MetaData[];
#endif
		static void NewProp_bHideInactive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideInactive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartHidden_MetaData[];
#endif
		static void NewProp_bStartHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InactiveTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFadeVisibility_MetaData[];
#endif
		static void NewProp_bUseFadeVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFadeVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InactiveTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBarShouldBeVisible_MetaData[];
#endif
		static void NewProp_bBarShouldBeVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBarShouldBeVisible;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressBarFloat_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarFloat_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProgressBarFloat;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressBarText_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarText_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProgressBarText;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProgressBarColor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarColor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProgressBarColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_BarShouldBeVisibleChanged, "BarShouldBeVisibleChanged" }, // 864147557
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarColor, "EditProgressBarColor" }, // 3993046450
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarFloat, "EditProgressBarFloat" }, // 1517180855
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_EditProgressBarText, "EditProgressBarText" }, // 983332880
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_FadeProgressBarVisibility, "FadeProgressBarVisibility" }, // 1722557153
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_InactiveTimerOver, "InactiveTimerOver" }, // 3342630522
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarColor, "OnRep_ProgressBarColor" }, // 1785609663
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarFloat, "OnRep_ProgressBarFloat" }, // 1716029210
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_OnRep_ProgressBarText, "OnRep_ProgressBarText" }, // 1721248000
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_SetProgressBarVisibility, "SetProgressBarVisibility" }, // 2615806581
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_StartInactiveTimer, "StartInactiveTimer" }, // 3186188149
		{ &Z_Construct_UFunction_UTDRL_ProgressBarComponent_UpdateFollowPlayer, "UpdateFollowPlayer" }, // 2548059940
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetValidityClientHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetValidityClientHandle = { "WidgetValidityClientHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, WidgetValidityClientHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetValidityClientHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetValidityClientHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetReadyOnClient_MetaData[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetReadyOnClient = { "WidgetReadyOnClient", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, WidgetReadyOnClient), Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetReadyOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetReadyOnClient_MetaData)) }; // 3605251727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bFollowPlayer_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|FollowPlayer" },
		{ "Comment", "/*Progress bar should constantly facing the player?*/" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Progress bar should constantly facing the player?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bFollowPlayer_SetBit(void* Obj)
	{
		((UTDRL_ProgressBarComponent*)Obj)->bFollowPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bFollowPlayer = { "bFollowPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_ProgressBarComponent), &Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bFollowPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bFollowPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bFollowPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUsePitch_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|FollowPlayer" },
		{ "Comment", "/*Should use pitch when facing the player?*/" },
		{ "EditCondition", "bFollowPlayer" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Should use pitch when facing the player?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUsePitch_SetBit(void* Obj)
	{
		((UTDRL_ProgressBarComponent*)Obj)->bUsePitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUsePitch = { "bUsePitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_ProgressBarComponent), &Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUsePitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUsePitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUsePitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseLag_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|FollowPlayer" },
		{ "Comment", "/*Use lag to smooth rotation*/" },
		{ "EditCondition", "bFollowPlayer" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Use lag to smooth rotation" },
	};
#endif
	void Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseLag_SetBit(void* Obj)
	{
		((UTDRL_ProgressBarComponent*)Obj)->bUseLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseLag = { "bUseLag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_ProgressBarComponent), &Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_LagSpeed_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|FollowPlayer" },
		{ "Comment", "/*Lag speed value*/" },
		{ "EditCondition", "bFollowPlayer && bUseLag" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Lag speed value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_LagSpeed = { "LagSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, LagSpeed), METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_LagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_LagSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bHideInactive_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|Inactive" },
		{ "Comment", "/*Should hide this progress bar component if it's inactive?*/" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Should hide this progress bar component if it's inactive?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bHideInactive_SetBit(void* Obj)
	{
		((UTDRL_ProgressBarComponent*)Obj)->bHideInactive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bHideInactive = { "bHideInactive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_ProgressBarComponent), &Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bHideInactive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bHideInactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bHideInactive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bStartHidden_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|Inactive" },
		{ "Comment", "/*This progress bar should start hidden?*/" },
		{ "EditCondition", "bHideInactive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "This progress bar should start hidden?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bStartHidden_SetBit(void* Obj)
	{
		((UTDRL_ProgressBarComponent*)Obj)->bStartHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bStartHidden = { "bStartHidden", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_ProgressBarComponent), &Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bStartHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bStartHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bStartHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTime_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|Inactive" },
		{ "Comment", "/*Inactive time before hiding the progress bar*/" },
		{ "EditCondition", "bHideInactive" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Inactive time before hiding the progress bar" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTime = { "InactiveTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, InactiveTime), METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseFadeVisibility_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|Visibility" },
		{ "Comment", "/*Should fade its visibility instead of just toggle it?*/" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Should fade its visibility instead of just toggle it?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseFadeVisibility_SetBit(void* Obj)
	{
		((UTDRL_ProgressBarComponent*)Obj)->bUseFadeVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseFadeVisibility = { "bUseFadeVisibility", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_ProgressBarComponent), &Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseFadeVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseFadeVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseFadeVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_FadeTime_MetaData[] = {
		{ "Category", "TDRL|ProgressBar|Visibility" },
		{ "Comment", "/*Fade time*/" },
		{ "EditCondition", "bUseFadeVisibility" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
		{ "ToolTip", "Fade time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, FadeTime), METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_FadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_FadeTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTimerHandle = { "InactiveTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, InactiveTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bBarShouldBeVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	void Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bBarShouldBeVisible_SetBit(void* Obj)
	{
		((UTDRL_ProgressBarComponent*)Obj)->bBarShouldBeVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bBarShouldBeVisible = { "bBarShouldBeVisible", "BarShouldBeVisibleChanged", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_ProgressBarComponent), &Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bBarShouldBeVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bBarShouldBeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bBarShouldBeVisible_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarFloat_Inner = { "ProgressBarFloat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTDRLProgressBarFloat, METADATA_PARAMS(nullptr, 0) }; // 962782315
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarFloat_MetaData[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarFloat = { "ProgressBarFloat", "OnRep_ProgressBarFloat", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, ProgressBarFloat), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarFloat_MetaData)) }; // 962782315
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarText_Inner = { "ProgressBarText", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTDRLProgressBarText, METADATA_PARAMS(nullptr, 0) }; // 3636456670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarText_MetaData[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarText = { "ProgressBarText", "OnRep_ProgressBarText", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, ProgressBarText), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarText_MetaData)) }; // 3636456670
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarColor_Inner = { "ProgressBarColor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTDRLProgressBarColor, METADATA_PARAMS(nullptr, 0) }; // 586229899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Progressbar/TDRL_ProgressBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarColor = { "ProgressBarColor", "OnRep_ProgressBarColor", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_ProgressBarComponent, ProgressBarColor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarColor_MetaData)) }; // 586229899
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetValidityClientHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_WidgetReadyOnClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bFollowPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUsePitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_LagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bHideInactive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bStartHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bUseFadeVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_FadeTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_InactiveTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_bBarShouldBeVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarFloat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarText_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarColor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::NewProp_ProgressBarColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_ProgressBarComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::ClassParams = {
		&UTDRL_ProgressBarComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_ProgressBarComponent()
	{
		if (!Z_Registration_Info_UClass_UTDRL_ProgressBarComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_ProgressBarComponent.OuterSingleton, Z_Construct_UClass_UTDRL_ProgressBarComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_ProgressBarComponent.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_ProgressBarComponent>()
	{
		return UTDRL_ProgressBarComponent::StaticClass();
	}

	void UTDRL_ProgressBarComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bBarShouldBeVisible(TEXT("bBarShouldBeVisible"));
		static const FName Name_ProgressBarFloat(TEXT("ProgressBarFloat"));
		static const FName Name_ProgressBarText(TEXT("ProgressBarText"));
		static const FName Name_ProgressBarColor(TEXT("ProgressBarColor"));

		const bool bIsValid = true
			&& Name_bBarShouldBeVisible == ClassReps[(int32)ENetFields_Private::bBarShouldBeVisible].Property->GetFName()
			&& Name_ProgressBarFloat == ClassReps[(int32)ENetFields_Private::ProgressBarFloat].Property->GetFName()
			&& Name_ProgressBarText == ClassReps[(int32)ENetFields_Private::ProgressBarText].Property->GetFName()
			&& Name_ProgressBarColor == ClassReps[(int32)ENetFields_Private::ProgressBarColor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTDRL_ProgressBarComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_ProgressBarComponent);
	UTDRL_ProgressBarComponent::~UTDRL_ProgressBarComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_ProgressBarComponent, UTDRL_ProgressBarComponent::StaticClass, TEXT("UTDRL_ProgressBarComponent"), &Z_Registration_Info_UClass_UTDRL_ProgressBarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_ProgressBarComponent), 3176319326U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_1845788613(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Progressbar_TDRL_ProgressBarComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
