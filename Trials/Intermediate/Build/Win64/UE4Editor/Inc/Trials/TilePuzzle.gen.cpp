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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_ATilePiece_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATilePuzzle::execCheckPuzzleState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckPuzzleState();
		P_NATIVE_END;
	}
	void ATilePuzzle::StaticRegisterNativesATilePuzzle()
	{
		UClass* Class = ATilePuzzle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckPuzzleState", &ATilePuzzle::execCheckPuzzleState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePuzzle, nullptr, "CheckPuzzleState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATilePuzzle_NoRegister()
	{
		return ATilePuzzle::StaticClass();
	}
	struct Z_Construct_UClass_ATilePuzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_XLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_YLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Spacing;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grid_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsComplete_MetaData[];
#endif
		static void NewProp_bIsComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUndoable_MetaData[];
#endif
		static void NewProp_bIsUndoable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUndoable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivationActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATilePuzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATilePuzzle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState, "CheckPuzzleState" }, // 4138863492
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TilePuzzle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootMesh_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootMesh = { "RootMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, RootMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootMesh_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, TileSize), METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, Spacing), METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_Inner = { "Grid", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATilePiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, Grid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	void Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_SetBit(void* Obj)
	{
		((ATilePuzzle*)Obj)->bIsComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete = { "bIsComplete", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePuzzle), &Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	void Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_SetBit(void* Obj)
	{
		((ATilePuzzle*)Obj)->bIsUndoable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable = { "bIsUndoable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePuzzle), &Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActor_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActor = { "ActivationActor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, ActivationActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATilePuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_XLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_YLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATilePuzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATilePuzzle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATilePuzzle_Statics::ClassParams = {
		&ATilePuzzle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATilePuzzle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ATilePuzzle, 1123187619);
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
