// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Gameplay/TDRL_CameraOcclusionComponent.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_CameraOcclusionComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_CameraOcclusionComponent();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_CameraOcclusionComponent_NoRegister();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics
	{
		struct _Script_TopDownRogueLite_eventOnOcclusionChanged_Parms
		{
			bool Occluded;
			TArray<USceneComponent*> OcclusionComps;
		};
		static void NewProp_Occluded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Occluded;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OcclusionComps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionComps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OcclusionComps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_Occluded_SetBit(void* Obj)
	{
		((_Script_TopDownRogueLite_eventOnOcclusionChanged_Parms*)Obj)->Occluded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_Occluded = { "Occluded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_TopDownRogueLite_eventOnOcclusionChanged_Parms), &Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_Occluded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_OcclusionComps_Inner = { "OcclusionComps", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_OcclusionComps_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_OcclusionComps = { "OcclusionComps", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TopDownRogueLite_eventOnOcclusionChanged_Parms, OcclusionComps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_OcclusionComps_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_OcclusionComps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_Occluded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_OcclusionComps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::NewProp_OcclusionComps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TopDownRogueLite, nullptr, "OnOcclusionChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::_Script_TopDownRogueLite_eventOnOcclusionChanged_Parms), Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTDRL_CameraOcclusionComponent::execDefaultOcclusionEvent)
	{
		P_GET_UBOOL(Z_Param_Occluded);
		P_GET_TARRAY(USceneComponent*,Z_Param_OcclusionComps);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DefaultOcclusionEvent(Z_Param_Occluded,Z_Param_OcclusionComps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CameraOcclusionComponent::execSetOcclusionEnabled)
	{
		P_GET_UBOOL(Z_Param_Enabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOcclusionEnabled(Z_Param_Enabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CameraOcclusionComponent::execAddAffectedComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAffectedComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CameraOcclusionComponent::execAddAffectedComponents)
	{
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_InComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAffectedComponents(Z_Param_InComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CameraOcclusionComponent::execSetAffectedComponents)
	{
		P_GET_TARRAY(UPrimitiveComponent*,Z_Param_InComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAffectedComponents(Z_Param_InComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_CameraOcclusionComponent::execGetAffectedComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPrimitiveComponent*>*)Z_Param__Result=P_THIS->GetAffectedComponents();
		P_NATIVE_END;
	}
	void UTDRL_CameraOcclusionComponent::StaticRegisterNativesUTDRL_CameraOcclusionComponent()
	{
		UClass* Class = UTDRL_CameraOcclusionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAffectedComponent", &UTDRL_CameraOcclusionComponent::execAddAffectedComponent },
			{ "AddAffectedComponents", &UTDRL_CameraOcclusionComponent::execAddAffectedComponents },
			{ "DefaultOcclusionEvent", &UTDRL_CameraOcclusionComponent::execDefaultOcclusionEvent },
			{ "GetAffectedComponents", &UTDRL_CameraOcclusionComponent::execGetAffectedComponents },
			{ "SetAffectedComponents", &UTDRL_CameraOcclusionComponent::execSetAffectedComponents },
			{ "SetOcclusionEnabled", &UTDRL_CameraOcclusionComponent::execSetOcclusionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics
	{
		struct TDRL_CameraOcclusionComponent_eventAddAffectedComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CameraOcclusionComponent_eventAddAffectedComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "Comment", "/*Set affected component. This component will hide/hunide during the gameplay if they're on the way of the player's camera*/" },
		{ "DisplayName", "AddSingleAffectedComponent" },
		{ "Keywords", "Add Affected Component Camera Occlusion" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ToolTip", "Set affected component. This component will hide/hunide during the gameplay if they're on the way of the player's camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CameraOcclusionComponent, nullptr, "AddAffectedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::TDRL_CameraOcclusionComponent_eventAddAffectedComponent_Parms), Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics
	{
		struct TDRL_CameraOcclusionComponent_eventAddAffectedComponents_Parms
		{
			TArray<UPrimitiveComponent*> InComponents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::NewProp_InComponents_Inner = { "InComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::NewProp_InComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::NewProp_InComponents = { "InComponents", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CameraOcclusionComponent_eventAddAffectedComponents_Parms, InComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::NewProp_InComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::NewProp_InComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::NewProp_InComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::NewProp_InComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "Comment", "/*Add affected components. These components will hide/hunide during the gameplay if they're on the way of the player's camera*/" },
		{ "DisplayName", "AddAffectedComponents" },
		{ "Keywords", "Add Affected Components Camera Occlusion" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ToolTip", "Add affected components. These components will hide/hunide during the gameplay if they're on the way of the player's camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CameraOcclusionComponent, nullptr, "AddAffectedComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::TDRL_CameraOcclusionComponent_eventAddAffectedComponents_Parms), Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics
	{
		struct TDRL_CameraOcclusionComponent_eventDefaultOcclusionEvent_Parms
		{
			bool Occluded;
			TArray<USceneComponent*> OcclusionComps;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Occluded_MetaData[];
#endif
		static void NewProp_Occluded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Occluded;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OcclusionComps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionComps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OcclusionComps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_Occluded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_Occluded_SetBit(void* Obj)
	{
		((TDRL_CameraOcclusionComponent_eventDefaultOcclusionEvent_Parms*)Obj)->Occluded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_Occluded = { "Occluded", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_CameraOcclusionComponent_eventDefaultOcclusionEvent_Parms), &Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_Occluded_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_Occluded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_Occluded_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_OcclusionComps_Inner = { "OcclusionComps", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_OcclusionComps_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_OcclusionComps = { "OcclusionComps", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CameraOcclusionComponent_eventDefaultOcclusionEvent_Parms, OcclusionComps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_OcclusionComps_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_OcclusionComps_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_Occluded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_OcclusionComps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::NewProp_OcclusionComps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "Comment", "/*Default occlusion function (simple hide/unhide)*/" },
		{ "DisplayName", "Default Occlusion Event" },
		{ "Keywords", "Default Occlusion Event TDRL" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ToolTip", "Default occlusion function (simple hide/unhide)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CameraOcclusionComponent, nullptr, "DefaultOcclusionEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::TDRL_CameraOcclusionComponent_eventDefaultOcclusionEvent_Parms), Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics
	{
		struct TDRL_CameraOcclusionComponent_eventGetAffectedComponents_Parms
		{
			TArray<UPrimitiveComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800000058a, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CameraOcclusionComponent_eventGetAffectedComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "Comment", "/*Returns all the visibility affected components*/" },
		{ "DisplayName", "GetAffectedComponents" },
		{ "Keywords", "Get Affected Components Camera Occlusion" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ToolTip", "Returns all the visibility affected components" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CameraOcclusionComponent, nullptr, "GetAffectedComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::TDRL_CameraOcclusionComponent_eventGetAffectedComponents_Parms), Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics
	{
		struct TDRL_CameraOcclusionComponent_eventSetAffectedComponents_Parms
		{
			TArray<UPrimitiveComponent*> InComponents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::NewProp_InComponents_Inner = { "InComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::NewProp_InComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::NewProp_InComponents = { "InComponents", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_CameraOcclusionComponent_eventSetAffectedComponents_Parms, InComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::NewProp_InComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::NewProp_InComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::NewProp_InComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::NewProp_InComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "Comment", "/*Set affected components. These components will hide/hunide during the gameplay if they're on the way of the player's camera*/" },
		{ "DisplayName", "SetAffectedComponents" },
		{ "Keywords", "Set Affected Components Camera Occlusion" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ToolTip", "Set affected components. These components will hide/hunide during the gameplay if they're on the way of the player's camera" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CameraOcclusionComponent, nullptr, "SetAffectedComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::TDRL_CameraOcclusionComponent_eventSetAffectedComponents_Parms), Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics
	{
		struct TDRL_CameraOcclusionComponent_eventSetOcclusionEnabled_Parms
		{
			bool Enabled;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::NewProp_Enabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((TDRL_CameraOcclusionComponent_eventSetOcclusionEnabled_Parms*)Obj)->Enabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TDRL_CameraOcclusionComponent_eventSetOcclusionEnabled_Parms), &Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::NewProp_Enabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::NewProp_Enabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "Comment", "/*Enable or disable occlusion*/" },
		{ "DisplayName", "SetOcclusionEnabled" },
		{ "Keywords", "Enabled Camera Occlusion" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ToolTip", "Enable or disable occlusion" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_CameraOcclusionComponent, nullptr, "SetOcclusionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::TDRL_CameraOcclusionComponent_eventSetOcclusionEnabled_Parms), Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_CameraOcclusionComponent);
	UClass* Z_Construct_UClass_UTDRL_CameraOcclusionComponent_NoRegister()
	{
		return UTDRL_CameraOcclusionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestoreTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestoreTimer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AffectedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityTimerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityTimerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnOcclusionChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOcclusionChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponent, "AddAffectedComponent" }, // 2693113762
		{ &Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_AddAffectedComponents, "AddAffectedComponents" }, // 2989476661
		{ &Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_DefaultOcclusionEvent, "DefaultOcclusionEvent" }, // 3451120830
		{ &Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_GetAffectedComponents, "GetAffectedComponents" }, // 1290105848
		{ &Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetAffectedComponents, "SetAffectedComponents" }, // 30253610
		{ &Z_Construct_UFunction_UTDRL_CameraOcclusionComponent_SetOcclusionEnabled, "SetOcclusionEnabled" }, // 1055513945
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::Class_MetaDataParams[] = {
		{ "abstract", "" },
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "TDRL" },
		{ "DisplayName", "CameraOcclusionManager" },
		{ "IncludePath", "Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ShortTooltip", "This component will manage camera player's camera occlusion on the assigned object" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_RestoreTimer_MetaData[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "Comment", "/*Time to wait before restoring visibility to the affected components*/" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ToolTip", "Time to wait before restoring visibility to the affected components" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_RestoreTimer = { "RestoreTimer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CameraOcclusionComponent, RestoreTimer), METADATA_PARAMS(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_RestoreTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_RestoreTimer_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_AffectedComponents_Inner = { "AffectedComponents", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_AffectedComponents_MetaData[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "Comment", "/*List of objects that will be affected by this component*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
		{ "ToolTip", "List of objects that will be affected by this component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_AffectedComponents = { "AffectedComponents", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CameraOcclusionComponent, AffectedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_AffectedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_AffectedComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_VisibilityTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_VisibilityTimerHandle = { "VisibilityTimerHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CameraOcclusionComponent, VisibilityTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_VisibilityTimerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_VisibilityTimerHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_OnOcclusionChanged_MetaData[] = {
		{ "Category", "TDRL|CameraOcclusion" },
		{ "ModuleRelativePath", "Public/Gameplay/TDRL_CameraOcclusionComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_OnOcclusionChanged = { "OnOcclusionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_CameraOcclusionComponent, OnOcclusionChanged), Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_OnOcclusionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_OnOcclusionChanged_MetaData)) }; // 1101678772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_RestoreTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_AffectedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_AffectedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_VisibilityTimerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::NewProp_OnOcclusionChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_CameraOcclusionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::ClassParams = {
		&UTDRL_CameraOcclusionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_CameraOcclusionComponent()
	{
		if (!Z_Registration_Info_UClass_UTDRL_CameraOcclusionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_CameraOcclusionComponent.OuterSingleton, Z_Construct_UClass_UTDRL_CameraOcclusionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_CameraOcclusionComponent.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_CameraOcclusionComponent>()
	{
		return UTDRL_CameraOcclusionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_CameraOcclusionComponent);
	UTDRL_CameraOcclusionComponent::~UTDRL_CameraOcclusionComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_CameraOcclusionComponent, UTDRL_CameraOcclusionComponent::StaticClass, TEXT("UTDRL_CameraOcclusionComponent"), &Z_Registration_Info_UClass_UTDRL_CameraOcclusionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_CameraOcclusionComponent), 211762338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_3050609817(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Gameplay_TDRL_CameraOcclusionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
