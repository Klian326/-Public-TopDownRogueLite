// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Projectile/TDRL_ProjectilePhysics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_ProjectilePhysics() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectileBase();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectilePhysics();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_ProjectilePhysics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	void ATDRL_ProjectilePhysics::StaticRegisterNativesATDRL_ProjectilePhysics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATDRL_ProjectilePhysics);
	UClass* Z_Construct_UClass_ATDRL_ProjectilePhysics_NoRegister()
	{
		return ATDRL_ProjectilePhysics::StaticClass();
	}
	struct Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATDRL_ProjectileBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Projectile/TDRL_ProjectilePhysics.h" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectilePhysics.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectilePhysics.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectilePhysics, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_ProjectileMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Projectile/TDRL_ProjectilePhysics.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_ProjectileMovementComponent = { "ProjectileMovementComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATDRL_ProjectilePhysics, ProjectileMovementComponent), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_ProjectileMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_ProjectileMovementComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::NewProp_ProjectileMovementComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATDRL_ProjectilePhysics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::ClassParams = {
		&ATDRL_ProjectilePhysics::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATDRL_ProjectilePhysics()
	{
		if (!Z_Registration_Info_UClass_ATDRL_ProjectilePhysics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATDRL_ProjectilePhysics.OuterSingleton, Z_Construct_UClass_ATDRL_ProjectilePhysics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATDRL_ProjectilePhysics.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<ATDRL_ProjectilePhysics>()
	{
		return ATDRL_ProjectilePhysics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATDRL_ProjectilePhysics);
	ATDRL_ProjectilePhysics::~ATDRL_ProjectilePhysics() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectilePhysics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectilePhysics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATDRL_ProjectilePhysics, ATDRL_ProjectilePhysics::StaticClass, TEXT("ATDRL_ProjectilePhysics"), &Z_Registration_Info_UClass_ATDRL_ProjectilePhysics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATDRL_ProjectilePhysics), 1098538987U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectilePhysics_h_426742283(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectilePhysics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Projectile_TDRL_ProjectilePhysics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
