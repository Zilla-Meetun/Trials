// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/PickupWeight.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupWeight);
	UClass* Z_Construct_UClass_APickupWeight_NoRegister()
	{
		return APickupWeight::StaticClass();
	}
	struct Z_Construct_UClass_APickupWeight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupWeight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupWeight_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PickupWeight.h" },
		{ "ModuleRelativePath", "Public/PickupWeight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupWeight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupWeight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupWeight_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_APickupWeight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupWeight.OuterSingleton, Z_Construct_UClass_APickupWeight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupWeight.OuterSingleton;
	}
	template<> TRIALS_API UClass* StaticClass<APickupWeight>()
	{
		return APickupWeight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupWeight);
	struct Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PickupWeight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PickupWeight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupWeight, APickupWeight::StaticClass, TEXT("APickupWeight"), &Z_Registration_Info_UClass_APickupWeight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupWeight), 3671481215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PickupWeight_h_284244700(TEXT("/Script/Trials"),
		Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PickupWeight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PickupWeight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
