// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/PickupWeight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupWeight() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_APickupWeight_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_APickupWeight();
	TRIALS_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_Trials();
// End Cross Module References
	void APickupWeight::StaticRegisterNativesAPickupWeight()
	{
	}
	UClass* Z_Construct_UClass_APickupWeight_NoRegister()
	{
		return APickupWeight::StaticClass();
	}
	struct Z_Construct_UClass_APickupWeight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupWeight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupWeight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PickupWeight.h" },
		{ "ModuleRelativePath", "Public/PickupWeight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupWeight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupWeight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupWeight_Statics::ClassParams = {
		&APickupWeight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APickupWeight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupWeight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupWeight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupWeight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupWeight, 1583764799);
	template<> TRIALS_API UClass* StaticClass<APickupWeight>()
	{
		return APickupWeight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupWeight(Z_Construct_UClass_APickupWeight, &APickupWeight::StaticClass, TEXT("/Script/Trials"), TEXT("APickupWeight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupWeight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
