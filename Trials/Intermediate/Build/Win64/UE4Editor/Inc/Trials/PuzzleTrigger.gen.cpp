// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/PuzzleTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleTrigger() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_UPuzzleTrigger_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_UPuzzleTrigger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Trials();
// End Cross Module References
	void IPuzzleTrigger::Activate()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Activate instead.");
	}
	void IPuzzleTrigger::Deactivate()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deactivate instead.");
	}
	void UPuzzleTrigger::StaticRegisterNativesUPuzzleTrigger()
	{
	}
	struct Z_Construct_UFunction_UPuzzleTrigger_Activate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTrigger_Activate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PuzzleTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTrigger_Activate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTrigger, nullptr, "Activate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTrigger_Activate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTrigger_Activate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleTrigger_Activate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleTrigger_Activate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleTrigger_Deactivate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleTrigger_Deactivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PuzzleTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleTrigger_Deactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleTrigger, nullptr, "Deactivate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleTrigger_Deactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzleTrigger_Deactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleTrigger_Deactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleTrigger_Deactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleTrigger_NoRegister()
	{
		return UPuzzleTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleTrigger_Activate, "Activate" }, // 86605657
		{ &Z_Construct_UFunction_UPuzzleTrigger_Deactivate, "Deactivate" }, // 1672671396
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PuzzleTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPuzzleTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleTrigger_Statics::ClassParams = {
		&UPuzzleTrigger::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzleTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleTrigger, 4135431907);
	template<> TRIALS_API UClass* StaticClass<UPuzzleTrigger>()
	{
		return UPuzzleTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleTrigger(Z_Construct_UClass_UPuzzleTrigger, &UPuzzleTrigger::StaticClass, TEXT("/Script/Trials"), TEXT("UPuzzleTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleTrigger);
	static FName NAME_UPuzzleTrigger_Activate = FName(TEXT("Activate"));
	void IPuzzleTrigger::Execute_Activate(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPuzzleTrigger_Activate);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UPuzzleTrigger_Deactivate = FName(TEXT("Deactivate"));
	void IPuzzleTrigger::Execute_Deactivate(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPuzzleTrigger::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPuzzleTrigger_Deactivate);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
