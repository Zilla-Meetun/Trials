// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/Interact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteract_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteract_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteract, nullptr, "Pickup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteract_Pickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteract_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteract_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteract_Use_Statics
	{
		struct Interact_eventUse_Parms
		{
			FVector NewLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteract_Use_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interact_eventUse_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteract_Use_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteract_Use_Statics::NewProp_NewLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteract_Use_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteract_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteract, nullptr, "Use", nullptr, nullptr, sizeof(Interact_eventUse_Parms), Z_Construct_UFunction_UInteract_Use_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Use_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteract_Use_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteract_Use_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteract_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteract_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteract_NoRegister()
	{
		return UInteract::StaticClass();
	}
	struct Z_Construct_UClass_UInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteract_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteract_Pickup, "Pickup" }, // 570740386
		{ &Z_Construct_UFunction_UInteract_Use, "Use" }, // 3617068371
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteract>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteract_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteract_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteract, 3768394087);
	template<> TRIALS_API UClass* StaticClass<UInteract>()
	{
		return UInteract::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteract(Z_Construct_UClass_UInteract, &UInteract::StaticClass, TEXT("/Script/Trials"), TEXT("UInteract"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteract);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
