// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/PunchStartNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePunchStartNotify() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_UPunchStartNotify_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_UPunchStartNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_Trials();
// End Cross Module References
	void UPunchStartNotify::StaticRegisterNativesUPunchStartNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPunchStartNotify);
	UClass* Z_Construct_UClass_UPunchStartNotify_NoRegister()
	{
		return UPunchStartNotify::StaticClass();
	}
	struct Z_Construct_UClass_UPunchStartNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPunchStartNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunchStartNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PunchStartNotify.h" },
		{ "ModuleRelativePath", "Public/PunchStartNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPunchStartNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPunchStartNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPunchStartNotify_Statics::ClassParams = {
		&UPunchStartNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPunchStartNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPunchStartNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPunchStartNotify()
	{
		if (!Z_Registration_Info_UClass_UPunchStartNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPunchStartNotify.OuterSingleton, Z_Construct_UClass_UPunchStartNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPunchStartNotify.OuterSingleton;
	}
	template<> TRIALS_API UClass* StaticClass<UPunchStartNotify>()
	{
		return UPunchStartNotify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPunchStartNotify);
	struct Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PunchStartNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PunchStartNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPunchStartNotify, UPunchStartNotify::StaticClass, TEXT("UPunchStartNotify"), &Z_Registration_Info_UClass_UPunchStartNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPunchStartNotify), 1837241988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PunchStartNotify_h_284752021(TEXT("/Script/Trials"),
		Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PunchStartNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_PunchStartNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
