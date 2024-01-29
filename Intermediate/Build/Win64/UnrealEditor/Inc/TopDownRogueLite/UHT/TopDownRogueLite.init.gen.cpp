// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopDownRogueLite_init() {}
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnDeathDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnGrenadeThrownDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnIsThrowingGrenadeChanged__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature();
	TOPDOWNROGUELITE_API UFunction* Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TopDownRogueLite;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TopDownRogueLite()
	{
		if (!Z_Registration_Info_UPackage__Script_TopDownRogueLite.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnDroppedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnEquippedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnGrenadeThrownDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnHolsteredDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnIsThrowingGrenadeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnOcclusionChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnPickedUpDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_OnSpawnedDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_TopDownRogueLite_WidgetReadyOnClient__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TopDownRogueLite",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE02DE815,
				0x98281793,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TopDownRogueLite.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TopDownRogueLite.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TopDownRogueLite(Z_Construct_UPackage__Script_TopDownRogueLite, TEXT("/Script/TopDownRogueLite"), Z_Registration_Info_UPackage__Script_TopDownRogueLite, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE02DE815, 0x98281793));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
