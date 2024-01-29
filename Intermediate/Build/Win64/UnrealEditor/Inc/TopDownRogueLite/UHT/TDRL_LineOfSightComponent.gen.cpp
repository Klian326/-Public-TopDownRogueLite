// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Player/TDRL_LineOfSightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_LineOfSightComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_LineOfSightComponent();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_LineOfSightComponent_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FLineOfSightParam();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineOfSightParam;
class UScriptStruct* FLineOfSightParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineOfSightParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineOfSightParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineOfSightParam, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("LineOfSightParam"));
	}
	return Z_Registration_Info_UScriptStruct_LineOfSightParam.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FLineOfSightParam>()
{
	return FLineOfSightParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLineOfSightParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TraceChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightAngle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SightAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubAngles_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SubAngles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHideActorsBasedOnClass_MetaData[];
#endif
		static void NewProp_bUseHideActorsBasedOnClass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHideActorsBasedOnClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickTraceForActorsEvery_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickTraceForActorsEvery;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceBodyRelativeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceBodyRelativeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestRadiusAroundOwner_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TestRadiusAroundOwner;
		static const UECodeGen_Private::FClassPropertyParams NewProp_HideClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HideClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HideClasses;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceForActorsChannels_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceForActorsChannels_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TraceForActorsChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineOfSightParam>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceChannels_ElementProp = { "TraceChannels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceChannels_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Trace channels for occlusion sight*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Trace channels for occlusion sight" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceChannels = { "TraceChannels", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, TraceChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceChannels_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SightAngle_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Angle of sight*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Angle of sight" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SightAngle = { "SightAngle", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, SightAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SightAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SightAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SubAngles_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Increase the trace resolution, quality doubles for each SubAngle*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Increase the trace resolution, quality doubles for each SubAngle" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SubAngles = { "SubAngles", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, SubAngles), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SubAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SubAngles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Max distance traced from the character*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Max distance traced from the character" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Collector_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Material Parameter Collection to use (follow the example)*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Material Parameter Collection to use (follow the example)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Collector = { "Collector", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, Collector), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Collector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Collector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TextureResolution_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Texture target resolution to use*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Texture target resolution to use" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, TextureResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TextureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TextureResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Canvas_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Canvas render target to use for sight drawing*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Canvas render target to use for sight drawing" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, Canvas), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Canvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_AreaScale_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Scale the area covered by the texture target*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Scale the area covered by the texture target" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_AreaScale = { "AreaScale", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, AreaScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_AreaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_AreaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_bUseHideActorsBasedOnClass_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Should hide a list of classes and use this trace to unhide them when they're in sight?*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Should hide a list of classes and use this trace to unhide them when they're in sight?" },
	};
#endif
	void Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_bUseHideActorsBasedOnClass_SetBit(void* Obj)
	{
		((FLineOfSightParam*)Obj)->bUseHideActorsBasedOnClass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_bUseHideActorsBasedOnClass = { "bUseHideActorsBasedOnClass", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLineOfSightParam), &Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_bUseHideActorsBasedOnClass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_bUseHideActorsBasedOnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_bUseHideActorsBasedOnClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TickTraceForActorsEvery_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Time between two traces for hidden actors*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Time between two traces for hidden actors" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TickTraceForActorsEvery = { "TickTraceForActorsEvery", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, TickTraceForActorsEvery), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TickTraceForActorsEvery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TickTraceForActorsEvery_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceBodyRelativeScale_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Use the capsule size of this character as base size for the capsule trace. Scale it by this value (X/Z)*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Use the capsule size of this character as base size for the capsule trace. Scale it by this value (X/Z)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceBodyRelativeScale = { "TraceBodyRelativeScale", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, TraceBodyRelativeScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceBodyRelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceBodyRelativeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TestRadiusAroundOwner_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Test radius around actor to show hidden classes*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Test radius around actor to show hidden classes" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TestRadiusAroundOwner = { "TestRadiusAroundOwner", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, TestRadiusAroundOwner), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TestRadiusAroundOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TestRadiusAroundOwner_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_HideClasses_Inner = { "HideClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_HideClasses_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Classes the system need to hide/unhide when enabled*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Classes the system need to hide/unhide when enabled" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_HideClasses = { "HideClasses", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, HideClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_HideClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_HideClasses_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceForActorsChannels_ElementProp = { "TraceForActorsChannels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceForActorsChannels_MetaData[] = {
		{ "Category", "LineOfSight" },
		{ "Comment", "/*Collision channels the system need to trace for actors*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Collision channels the system need to trace for actors" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceForActorsChannels = { "TraceForActorsChannels", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLineOfSightParam, TraceForActorsChannels), METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceForActorsChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceForActorsChannels_MetaData)) }; // 3629342158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineOfSightParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceChannels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SightAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_SubAngles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Collector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TextureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_AreaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_bUseHideActorsBasedOnClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TickTraceForActorsEvery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceBodyRelativeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TestRadiusAroundOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_HideClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_HideClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceForActorsChannels_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewProp_TraceForActorsChannels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineOfSightParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"LineOfSightParam",
		sizeof(FLineOfSightParam),
		alignof(FLineOfSightParam),
		Z_Construct_UScriptStruct_FLineOfSightParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineOfSightParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLineOfSightParam()
	{
		if (!Z_Registration_Info_UScriptStruct_LineOfSightParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineOfSightParam.InnerSingleton, Z_Construct_UScriptStruct_FLineOfSightParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LineOfSightParam.InnerSingleton;
	}
	DEFINE_FUNCTION(UTDRL_LineOfSightComponent::execPerformFinalUnhideActorsBasedOnClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformFinalUnhideActorsBasedOnClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_LineOfSightComponent::execPerformInitialHideActorsBasedOnClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PerformInitialHideActorsBasedOnClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_LineOfSightComponent::execDrawTriangles)
	{
		P_GET_TARRAY(FVector,Z_Param_InSightTraces);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DrawTriangles(Z_Param_InSightTraces);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_LineOfSightComponent::execTraceSightForActors)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_EndPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TraceSightForActors(Z_Param_Out_EndPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTDRL_LineOfSightComponent::execTraceSight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->TraceSight();
		P_NATIVE_END;
	}
	void UTDRL_LineOfSightComponent::StaticRegisterNativesUTDRL_LineOfSightComponent()
	{
		UClass* Class = UTDRL_LineOfSightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawTriangles", &UTDRL_LineOfSightComponent::execDrawTriangles },
			{ "PerformFinalUnhideActorsBasedOnClass", &UTDRL_LineOfSightComponent::execPerformFinalUnhideActorsBasedOnClass },
			{ "PerformInitialHideActorsBasedOnClass", &UTDRL_LineOfSightComponent::execPerformInitialHideActorsBasedOnClass },
			{ "TraceSight", &UTDRL_LineOfSightComponent::execTraceSight },
			{ "TraceSightForActors", &UTDRL_LineOfSightComponent::execTraceSightForActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics
	{
		struct TDRL_LineOfSightComponent_eventDrawTriangles_Parms
		{
			TArray<FVector> InSightTraces;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSightTraces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSightTraces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InSightTraces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::NewProp_InSightTraces_Inner = { "InSightTraces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::NewProp_InSightTraces_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::NewProp_InSightTraces = { "InSightTraces", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_LineOfSightComponent_eventDrawTriangles_Parms, InSightTraces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::NewProp_InSightTraces_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::NewProp_InSightTraces_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::NewProp_InSightTraces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::NewProp_InSightTraces,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_LineOfSightComponent, nullptr, "DrawTriangles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::TDRL_LineOfSightComponent_eventDrawTriangles_Parms), Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformFinalUnhideActorsBasedOnClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformFinalUnhideActorsBasedOnClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformFinalUnhideActorsBasedOnClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_LineOfSightComponent, nullptr, "PerformFinalUnhideActorsBasedOnClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformFinalUnhideActorsBasedOnClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformFinalUnhideActorsBasedOnClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformFinalUnhideActorsBasedOnClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformFinalUnhideActorsBasedOnClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformInitialHideActorsBasedOnClass_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformInitialHideActorsBasedOnClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformInitialHideActorsBasedOnClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_LineOfSightComponent, nullptr, "PerformInitialHideActorsBasedOnClass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformInitialHideActorsBasedOnClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformInitialHideActorsBasedOnClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformInitialHideActorsBasedOnClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformInitialHideActorsBasedOnClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics
	{
		struct TDRL_LineOfSightComponent_eventTraceSight_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_LineOfSightComponent_eventTraceSight_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_LineOfSightComponent, nullptr, "TraceSight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::TDRL_LineOfSightComponent_eventTraceSight_Parms), Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics
	{
		struct TDRL_LineOfSightComponent_eventTraceSightForActors_Parms
		{
			TArray<FVector> EndPoints;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EndPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::NewProp_EndPoints_Inner = { "EndPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::NewProp_EndPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::NewProp_EndPoints = { "EndPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_LineOfSightComponent_eventTraceSightForActors_Parms, EndPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::NewProp_EndPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::NewProp_EndPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::NewProp_EndPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::NewProp_EndPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_LineOfSightComponent, nullptr, "TraceSightForActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::TDRL_LineOfSightComponent_eventTraceSightForActors_Parms), Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_LineOfSightComponent);
	UClass* Z_Construct_UClass_UTDRL_LineOfSightComponent_NoRegister()
	{
		return UTDRL_LineOfSightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SightParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebug_MetaData[];
#endif
		static void NewProp_bEnableDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebug;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnhiddenActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnhiddenActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnhiddenActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanvasInUse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasInUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickAccum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TickAccum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_LineOfSightComponent_DrawTriangles, "DrawTriangles" }, // 2445208690
		{ &Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformFinalUnhideActorsBasedOnClass, "PerformFinalUnhideActorsBasedOnClass" }, // 1774741957
		{ &Z_Construct_UFunction_UTDRL_LineOfSightComponent_PerformInitialHideActorsBasedOnClass, "PerformInitialHideActorsBasedOnClass" }, // 1169126408
		{ &Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSight, "TraceSight" }, // 3294684209
		{ &Z_Construct_UFunction_UTDRL_LineOfSightComponent_TraceSightForActors, "TraceSightForActors" }, // 4255598985
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "ImplementedBy", "ATDRL_Character" },
		{ "IncludePath", "Player/TDRL_LineOfSightComponent.h" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_SightParameters_MetaData[] = {
		{ "Category", "TDRL|LineOfSight" },
		{ "Comment", "/*Sight parameters to use*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Sight parameters to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_SightParameters = { "SightParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_LineOfSightComponent, SightParameters), Z_Construct_UScriptStruct_FLineOfSightParam, METADATA_PARAMS(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_SightParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_SightParameters_MetaData)) }; // 3005814173
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_bEnableDebug_MetaData[] = {
		{ "Category", "TDRL|LineOfSight" },
		{ "Comment", "/*Should enable debugging?*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
		{ "ToolTip", "Should enable debugging?" },
	};
#endif
	void Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_bEnableDebug_SetBit(void* Obj)
	{
		((UTDRL_LineOfSightComponent*)Obj)->bEnableDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_bEnableDebug = { "bEnableDebug", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTDRL_LineOfSightComponent), &Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_bEnableDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_bEnableDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_bEnableDebug_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_UnhiddenActors_Inner = { "UnhiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_UnhiddenActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_UnhiddenActors = { "UnhiddenActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_LineOfSightComponent, UnhiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_UnhiddenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_UnhiddenActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_CanvasInUse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_CanvasInUse = { "CanvasInUse", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_LineOfSightComponent, CanvasInUse), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_CanvasInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_CanvasInUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_TickAccum_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_LineOfSightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_TickAccum = { "TickAccum", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTDRL_LineOfSightComponent, TickAccum), METADATA_PARAMS(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_TickAccum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_TickAccum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_SightParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_bEnableDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_UnhiddenActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_UnhiddenActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_CanvasInUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::NewProp_TickAccum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTDRL_LineOfSightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::ClassParams = {
		&UTDRL_LineOfSightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_LineOfSightComponent()
	{
		if (!Z_Registration_Info_UClass_UTDRL_LineOfSightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_LineOfSightComponent.OuterSingleton, Z_Construct_UClass_UTDRL_LineOfSightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_LineOfSightComponent.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_LineOfSightComponent>()
	{
		return UTDRL_LineOfSightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_LineOfSightComponent);
	UTDRL_LineOfSightComponent::~UTDRL_LineOfSightComponent() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_LineOfSightComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_LineOfSightComponent_h_Statics::ScriptStructInfo[] = {
		{ FLineOfSightParam::StaticStruct, Z_Construct_UScriptStruct_FLineOfSightParam_Statics::NewStructOps, TEXT("LineOfSightParam"), &Z_Registration_Info_UScriptStruct_LineOfSightParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineOfSightParam), 3005814173U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_LineOfSightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_LineOfSightComponent, UTDRL_LineOfSightComponent::StaticClass, TEXT("UTDRL_LineOfSightComponent"), &Z_Registration_Info_UClass_UTDRL_LineOfSightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_LineOfSightComponent), 1850632887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_LineOfSightComponent_h_1343628963(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_LineOfSightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_LineOfSightComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_LineOfSightComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_LineOfSightComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
