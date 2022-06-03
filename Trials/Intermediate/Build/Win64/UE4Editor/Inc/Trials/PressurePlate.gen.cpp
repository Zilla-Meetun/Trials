// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/PressurePlate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePressurePlate() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_APressurePlate_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_APressurePlate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Trials();
// End Cross Module References
	void APressurePlate::StaticRegisterNativesAPressurePlate()
	{
	}
	UClass* Z_Construct_UClass_APressurePlate_NoRegister()
	{
		return APressurePlate::StaticClass();
	}
	struct Z_Construct_UClass_APressurePlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APressurePlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PressurePlate.h" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APressurePlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APressurePlate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APressurePlate_Statics::ClassParams = {
		&APressurePlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APressurePlate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APressurePlate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APressurePlate, 1271591780);
	template<> TRIALS_API UClass* StaticClass<APressurePlate>()
	{
		return APressurePlate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APressurePlate(Z_Construct_UClass_APressurePlate, &APressurePlate::StaticClass, TEXT("/Script/Trials"), TEXT("APressurePlate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APressurePlate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
