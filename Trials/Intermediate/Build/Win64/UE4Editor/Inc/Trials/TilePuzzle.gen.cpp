// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/TilePuzzle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTilePuzzle() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_ATilePuzzle_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_ATilePuzzle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Trials();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_UTilePiece_NoRegister();
// End Cross Module References
	void ATilePuzzle::StaticRegisterNativesATilePuzzle()
	{
	}
	UClass* Z_Construct_UClass_ATilePuzzle_NoRegister()
	{
		return ATilePuzzle::StaticClass();
	}
	struct Z_Construct_UClass_ATilePuzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_XLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_YLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spacing;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATilePuzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TilePuzzle.h" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_NewRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_NewRoot = { "NewRoot", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, NewRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_NewRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_NewRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_XLength_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_XLength = { "XLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, XLength), METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_XLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_XLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_YLength_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_YLength = { "YLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, YLength), METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_YLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_YLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, Spacing), METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_Inner = { "Grid", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTilePiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010008000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, Grid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATilePuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_NewRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_XLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_YLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATilePuzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATilePuzzle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATilePuzzle_Statics::ClassParams = {
		&ATilePuzzle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATilePuzzle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATilePuzzle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATilePuzzle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATilePuzzle, 1825416311);
	template<> TRIALS_API UClass* StaticClass<ATilePuzzle>()
	{
		return ATilePuzzle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATilePuzzle(Z_Construct_UClass_ATilePuzzle, &ATilePuzzle::StaticClass, TEXT("/Script/Trials"), TEXT("ATilePuzzle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATilePuzzle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
