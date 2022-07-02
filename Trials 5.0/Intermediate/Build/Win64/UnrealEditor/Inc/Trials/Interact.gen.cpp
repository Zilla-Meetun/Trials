// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/Interact.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteract() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_UInteract_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_UInteract();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Trials();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IInteract::execUse)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Use(Z_Param_NewLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteract::execPickup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ItemIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup(Z_Param_ItemIndex);
		P_NATIVE_END;
	}
	void UInteract::StaticRegisterNativesUInteract()
	{
		UClass* Class = UInteract::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pickup", &IInteract::execPickup },
			{ "Use", &IInteract::execUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteract_Pickup_Statics
	{
		struct Interact_eventPickup_Parms
		{
			int32 ItemIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteract_Pickup_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInteract_Pickup_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interact_eventPickup_Parms, ItemIndex), METADATA_PARAMS(Z_Construct_UFunction_UInteract_Pickup_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Pickup_Statics::NewProp_ItemIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteract_Pickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteract_Pickup_Statics::NewProp_ItemIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteract_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteract_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteract, nullptr, "Pickup", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInteract_Pickup_Statics::Interact_eventPickup_Parms), Z_Construct_UFunction_UInteract_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteract_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteract_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteract_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteract_Use_Statics
	{
		struct Interact_eventUse_Parms
		{
			FVector NewLocation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteract_Use_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interact_eventUse_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteract_Use_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteract_Use_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteract_Use_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteract_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteract, nullptr, "Use", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInteract_Use_Statics::Interact_eventUse_Parms), Z_Construct_UFunction_UInteract_Use_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Use_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteract_Use_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Use_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteract_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteract_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteract);
	UClass* Z_Construct_UClass_UInteract_NoRegister()
	{
		return UInteract::StaticClass();
	}
	struct Z_Construct_UClass_UInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteract_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteract_Pickup, "Pickup" }, // 1211158282
		{ &Z_Construct_UFunction_UInteract_Use, "Use" }, // 358006764
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteract>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteract_Statics::ClassParams = {
		&UInteract::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteract()
	{
		if (!Z_Registration_Info_UClass_UInteract.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteract.OuterSingleton, Z_Construct_UClass_UInteract_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteract.OuterSingleton;
	}
	template<> TRIALS_API UClass* StaticClass<UInteract>()
	{
		return UInteract::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteract);
	struct Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_Interact_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_Interact_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteract, UInteract::StaticClass, TEXT("UInteract"), &Z_Registration_Info_UClass_UInteract, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteract), 2061551922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_Interact_h_3219250664(TEXT("/Script/Trials"),
		Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_Interact_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_Interact_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
