// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Types/TDRL_PhysicsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_PhysicsTypes() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldFalloffType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldFilterType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldObjectType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldPositionType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UCullingField_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_UFieldSystemComponent_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialFalloff_NoRegister();
	FIELDSYSTEMENGINE_API UClass* Z_Construct_UClass_URadialVector_NoRegister();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData();
	TOPDOWNROGUELITE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsFieldComponentsHitData;
class UScriptStruct* FPhysicsFieldComponentsHitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsFieldComponentsHitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsFieldComponentsHitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("PhysicsFieldComponentsHitData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsFieldComponentsHitData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FPhysicsFieldComponentsHitData>()
{
	return FPhysicsFieldComponentsHitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FieldSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialFalloff_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialFalloff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialVector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RadialVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullingField_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CullingField;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsFieldComponentsHitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_FieldSystem_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_FieldSystem = { "FieldSystem", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldComponentsHitData, FieldSystem), Z_Construct_UClass_UFieldSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_FieldSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_FieldSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialFalloff_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialFalloff = { "RadialFalloff", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldComponentsHitData, RadialFalloff), Z_Construct_UClass_URadialFalloff_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialFalloff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialVector_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialVector = { "RadialVector", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldComponentsHitData, RadialVector), Z_Construct_UClass_URadialVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_CullingField_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_CullingField = { "CullingField", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldComponentsHitData, CullingField), Z_Construct_UClass_UCullingField_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_CullingField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_CullingField_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_FieldSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialFalloff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_RadialVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewProp_CullingField,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"PhysicsFieldComponentsHitData",
		sizeof(FPhysicsFieldComponentsHitData),
		alignof(FPhysicsFieldComponentsHitData),
		Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsFieldComponentsHitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsFieldComponentsHitData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsFieldComponentsHitData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsFieldRadialHitData;
class UScriptStruct* FPhysicsFieldRadialHitData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsFieldRadialHitData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsFieldRadialHitData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData, Z_Construct_UPackage__Script_TopDownRogueLite(), TEXT("PhysicsFieldRadialHitData"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsFieldRadialHitData.OuterSingleton;
}
template<> TOPDOWNROGUELITE_API UScriptStruct* StaticStruct<FPhysicsFieldRadialHitData>()
{
	return FPhysicsFieldRadialHitData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Magnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Magnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagnitudeRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MagnitudeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMagnitudeValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultMagnitudeValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMetaDataFilter_MetaData[];
#endif
		static void NewProp_bUseMetaDataFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMetaDataFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldFilterType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FieldFilterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FieldObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldPositionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_FieldPositionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsFieldRadialHitData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_Magnitude_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Magnitude of this field*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Magnitude of this field" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_Magnitude = { "Magnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, Magnitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_Magnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_Magnitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_MagnitudeRange_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Magnitude will be scaled by this range*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Magnitude will be scaled by this range" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_MagnitudeRange = { "MagnitudeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, MagnitudeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_MagnitudeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_MagnitudeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldRadius_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Max radius this field will affect*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Max radius this field will affect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldRadius = { "FieldRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, FieldRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_DefaultMagnitudeValue_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/**/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_DefaultMagnitudeValue = { "DefaultMagnitudeValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, DefaultMagnitudeValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_DefaultMagnitudeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_DefaultMagnitudeValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Type of falloff to use*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Type of falloff to use" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, FalloffType), Z_Construct_UEnum_Chaos_EFieldFalloffType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FalloffType_MetaData)) }; // 3385667513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_RadialVelocity_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Radial velocity to apply*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Radial velocity to apply" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_RadialVelocity = { "RadialVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, RadialVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_RadialVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_RadialVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_bUseMetaDataFilter_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Should use Meta Data Filters?*/" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Should use Meta Data Filters?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_bUseMetaDataFilter_SetBit(void* Obj)
	{
		((FPhysicsFieldRadialHitData*)Obj)->bUseMetaDataFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_bUseMetaDataFilter = { "bUseMetaDataFilter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FPhysicsFieldRadialHitData), &Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_bUseMetaDataFilter_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_bUseMetaDataFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_bUseMetaDataFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldFilterType_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Matadata Filter Type*/" },
		{ "EditCondition", "bUseMetaDataFilter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Matadata Filter Type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldFilterType = { "FieldFilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, FieldFilterType), Z_Construct_UEnum_Chaos_EFieldFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldFilterType_MetaData)) }; // 3814112388
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldObjectType_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Metadata Object Type*/" },
		{ "EditCondition", "bUseMetaDataFilter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Metadata Object Type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldObjectType = { "FieldObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, FieldObjectType), Z_Construct_UEnum_Chaos_EFieldObjectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldObjectType_MetaData)) }; // 1146931772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldPositionType_MetaData[] = {
		{ "Category", "TDRL|Projectile|PhysicsField" },
		{ "Comment", "/*Metadata Position Type*/" },
		{ "EditCondition", "bUseMetaDataFilter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Types/TDRL_PhysicsTypes.h" },
		{ "ToolTip", "Metadata Position Type" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldPositionType = { "FieldPositionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicsFieldRadialHitData, FieldPositionType), Z_Construct_UEnum_Chaos_EFieldPositionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldPositionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldPositionType_MetaData)) }; // 3188633104
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_Magnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_MagnitudeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_DefaultMagnitudeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_RadialVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_bUseMetaDataFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldFilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewProp_FieldPositionType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
		nullptr,
		&NewStructOps,
		"PhysicsFieldRadialHitData",
		sizeof(FPhysicsFieldRadialHitData),
		alignof(FPhysicsFieldRadialHitData),
		Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsFieldRadialHitData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsFieldRadialHitData.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsFieldRadialHitData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_PhysicsTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_PhysicsTypes_h_Statics::ScriptStructInfo[] = {
		{ FPhysicsFieldComponentsHitData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsFieldComponentsHitData_Statics::NewStructOps, TEXT("PhysicsFieldComponentsHitData"), &Z_Registration_Info_UScriptStruct_PhysicsFieldComponentsHitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsFieldComponentsHitData), 2274387530U) },
		{ FPhysicsFieldRadialHitData::StaticStruct, Z_Construct_UScriptStruct_FPhysicsFieldRadialHitData_Statics::NewStructOps, TEXT("PhysicsFieldRadialHitData"), &Z_Registration_Info_UScriptStruct_PhysicsFieldRadialHitData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsFieldRadialHitData), 3229476067U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_PhysicsTypes_h_1374300108(TEXT("/Script/TopDownRogueLite"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_PhysicsTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Types_TDRL_PhysicsTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
