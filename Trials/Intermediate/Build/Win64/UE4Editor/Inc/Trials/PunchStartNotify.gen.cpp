// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/PunchStartNotify.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_UPunchStartNotify_NoRegister()
	{
		return UPunchStartNotify::StaticClass();
	}
	struct Z_Construct_UClass_UPunchStartNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPunchStartNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPunchStartNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PunchStartNotify.h" },
		{ "ModuleRelativePath", "Public/PunchStartNotify.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPunchStartNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPunchStartNotify>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPunchStartNotify_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPunchStartNotify_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPunchStartNotify, 1668147424);
	template<> TRIALS_API UClass* StaticClass<UPunchStartNotify>()
	{
		return UPunchStartNotify::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPunchStartNotify(Z_Construct_UClass_UPunchStartNotify, &UPunchStartNotify::StaticClass, TEXT("/Script/Trials"), TEXT("UPunchStartNotify"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPunchStartNotify);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
