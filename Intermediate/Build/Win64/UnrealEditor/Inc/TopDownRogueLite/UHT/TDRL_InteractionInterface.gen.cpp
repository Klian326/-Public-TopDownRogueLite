// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TopDownRogueLite/Public/Player/TDRL_InteractionInterface.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTDRL_InteractionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_ATDRL_Character_NoRegister();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_InteractionInterface();
	TOPDOWNROGUELITE_API UClass* Z_Construct_UClass_UTDRL_InteractionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TopDownRogueLite();
// End Cross Module References
	DEFINE_FUNCTION(ITDRL_InteractionInterface::execInteract)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_Character);
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_Character,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITDRL_InteractionInterface::execEndInteractionFocus)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndInteractionFocus_Implementation(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITDRL_InteractionInterface::execBeginInteractionFocus)
	{
		P_GET_OBJECT(ATDRL_Character,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginInteractionFocus_Implementation(Z_Param_Character);
		P_NATIVE_END;
	}
	struct TDRL_InteractionInterface_eventBeginInteractionFocus_Parms
	{
		ATDRL_Character* Character;
	};
	struct TDRL_InteractionInterface_eventEndInteractionFocus_Parms
	{
		ATDRL_Character* Character;
	};
	struct TDRL_InteractionInterface_eventInteract_Parms
	{
		ATDRL_Character* Character;
		FGameplayTagContainer Tag;
	};
	void ITDRL_InteractionInterface::BeginInteractionFocus(ATDRL_Character* Character)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BeginInteractionFocus instead.");
	}
	void ITDRL_InteractionInterface::EndInteractionFocus(ATDRL_Character* Character)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndInteractionFocus instead.");
	}
	void ITDRL_InteractionInterface::Interact(ATDRL_Character* Character, FGameplayTagContainer Tag)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
	}
	void UTDRL_InteractionInterface::StaticRegisterNativesUTDRL_InteractionInterface()
	{
		UClass* Class = UTDRL_InteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginInteractionFocus", &ITDRL_InteractionInterface::execBeginInteractionFocus },
			{ "EndInteractionFocus", &ITDRL_InteractionInterface::execEndInteractionFocus },
			{ "Interact", &ITDRL_InteractionInterface::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_InteractionInterface_eventBeginInteractionFocus_Parms, Character), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRPB|Interaction" },
		{ "Comment", "/*Signals when a character is focussing the owning actor for interaction (locally)*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_InteractionInterface.h" },
		{ "ToolTip", "Signals when a character is focussing the owning actor for interaction (locally)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_InteractionInterface, nullptr, "BeginInteractionFocus", nullptr, nullptr, sizeof(TDRL_InteractionInterface_eventBeginInteractionFocus_Parms), Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_InteractionInterface_eventEndInteractionFocus_Parms, Character), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRPB|Interaction" },
		{ "Comment", "/*Signals when a character is no longer focussing the owning actor for interaction (locally)*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_InteractionInterface.h" },
		{ "ToolTip", "Signals when a character is no longer focussing the owning actor for interaction (locally)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_InteractionInterface, nullptr, "EndInteractionFocus", nullptr, nullptr, sizeof(TDRL_InteractionInterface_eventEndInteractionFocus_Parms), Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_InteractionInterface_eventInteract_Parms, Character), Z_Construct_UClass_ATDRL_Character_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TDRL_InteractionInterface_eventInteract_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRPB|Interaction" },
		{ "Comment", "/*Main interaction event*/" },
		{ "ModuleRelativePath", "Public/Player/TDRL_InteractionInterface.h" },
		{ "ToolTip", "Main interaction event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTDRL_InteractionInterface, nullptr, "Interact", nullptr, nullptr, sizeof(TDRL_InteractionInterface_eventInteract_Parms), Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTDRL_InteractionInterface_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTDRL_InteractionInterface_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTDRL_InteractionInterface);
	UClass* Z_Construct_UClass_UTDRL_InteractionInterface_NoRegister()
	{
		return UTDRL_InteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTDRL_InteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTDRL_InteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TopDownRogueLite,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTDRL_InteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTDRL_InteractionInterface_BeginInteractionFocus, "BeginInteractionFocus" }, // 1191476179
		{ &Z_Construct_UFunction_UTDRL_InteractionInterface_EndInteractionFocus, "EndInteractionFocus" }, // 2433537807
		{ &Z_Construct_UFunction_UTDRL_InteractionInterface_Interact, "Interact" }, // 1641414227
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTDRL_InteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/TDRL_InteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTDRL_InteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITDRL_InteractionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTDRL_InteractionInterface_Statics::ClassParams = {
		&UTDRL_InteractionInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTDRL_InteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTDRL_InteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTDRL_InteractionInterface()
	{
		if (!Z_Registration_Info_UClass_UTDRL_InteractionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTDRL_InteractionInterface.OuterSingleton, Z_Construct_UClass_UTDRL_InteractionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTDRL_InteractionInterface.OuterSingleton;
	}
	template<> TOPDOWNROGUELITE_API UClass* StaticClass<UTDRL_InteractionInterface>()
	{
		return UTDRL_InteractionInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTDRL_InteractionInterface);
	UTDRL_InteractionInterface::~UTDRL_InteractionInterface() {}
	static FName NAME_UTDRL_InteractionInterface_BeginInteractionFocus = FName(TEXT("BeginInteractionFocus"));
	void ITDRL_InteractionInterface::Execute_BeginInteractionFocus(UObject* O, ATDRL_Character* Character)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTDRL_InteractionInterface::StaticClass()));
		TDRL_InteractionInterface_eventBeginInteractionFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTDRL_InteractionInterface_BeginInteractionFocus);
		if (Func)
		{
			Parms.Character=Character;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITDRL_InteractionInterface*)(O->GetNativeInterfaceAddress(UTDRL_InteractionInterface::StaticClass())))
		{
			I->BeginInteractionFocus_Implementation(Character);
		}
	}
	static FName NAME_UTDRL_InteractionInterface_EndInteractionFocus = FName(TEXT("EndInteractionFocus"));
	void ITDRL_InteractionInterface::Execute_EndInteractionFocus(UObject* O, ATDRL_Character* Character)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTDRL_InteractionInterface::StaticClass()));
		TDRL_InteractionInterface_eventEndInteractionFocus_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTDRL_InteractionInterface_EndInteractionFocus);
		if (Func)
		{
			Parms.Character=Character;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITDRL_InteractionInterface*)(O->GetNativeInterfaceAddress(UTDRL_InteractionInterface::StaticClass())))
		{
			I->EndInteractionFocus_Implementation(Character);
		}
	}
	static FName NAME_UTDRL_InteractionInterface_Interact = FName(TEXT("Interact"));
	void ITDRL_InteractionInterface::Execute_Interact(UObject* O, ATDRL_Character* Character, FGameplayTagContainer Tag)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTDRL_InteractionInterface::StaticClass()));
		TDRL_InteractionInterface_eventInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTDRL_InteractionInterface_Interact);
		if (Func)
		{
			Parms.Character=Character;
			Parms.Tag=Tag;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITDRL_InteractionInterface*)(O->GetNativeInterfaceAddress(UTDRL_InteractionInterface::StaticClass())))
		{
			I->Interact_Implementation(Character,Tag);
		}
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTDRL_InteractionInterface, UTDRL_InteractionInterface::StaticClass, TEXT("UTDRL_InteractionInterface"), &Z_Registration_Info_UClass_UTDRL_InteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTDRL_InteractionInterface), 3137302961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_3695620772(TEXT("/Script/TopDownRogueLite"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_TopDownRogueLite_Source_TopDownRogueLite_Public_Player_TDRL_InteractionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
