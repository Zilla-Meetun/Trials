// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/TilePuzzle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTilePuzzle() {}
// Cross Module References
	TRIALS_API UEnum* Z_Construct_UEnum_Trials_EPuzzleSetUp();
	UPackage* Z_Construct_UPackage__Script_Trials();
	TRIALS_API UClass* Z_Construct_UClass_ATilePuzzle_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_ATilePuzzle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	TRIALS_API UClass* Z_Construct_UClass_ATilePiece_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPuzzleSetUp;
	static UEnum* EPuzzleSetUp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPuzzleSetUp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPuzzleSetUp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Trials_EPuzzleSetUp, Z_Construct_UPackage__Script_Trials(), TEXT("EPuzzleSetUp"));
		}
		return Z_Registration_Info_UEnum_EPuzzleSetUp.OuterSingleton;
	}
	template<> TRIALS_API UEnum* StaticEnum<EPuzzleSetUp>()
	{
		return EPuzzleSetUp_StaticEnum();
	}
	struct Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics::Enumerators[] = {
		{ "NoSetup", (int64)NoSetup },
		{ "Adjacent", (int64)Adjacent },
		{ "AllAdjacent", (int64)AllAdjacent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics::Enum_MetaDataParams[] = {
		{ "Adjacent.DisplayName", "Tiles linked to adjacent tiles not diagonly" },
		{ "Adjacent.Name", "Adjacent" },
		{ "AllAdjacent.DIsplayName", "Tiles linked to adjacent and diagonal tiles" },
		{ "AllAdjacent.Name", "AllAdjacent" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
		{ "NoSetup.DisplayName", "Tiles have no links" },
		{ "NoSetup.Name", "NoSetup" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Trials,
		nullptr,
		"EPuzzleSetUp",
		"EPuzzleSetUp",
		Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Trials_EPuzzleSetUp()
	{
		if (!Z_Registration_Info_UEnum_EPuzzleSetUp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPuzzleSetUp.InnerSingleton, Z_Construct_UEnum_Trials_EPuzzleSetUp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPuzzleSetUp.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePuzzle, nullptr, "CheckPuzzleState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATilePuzzle);
	UClass* Z_Construct_UClass_ATilePuzzle_NoRegister()
	{
		return ATilePuzzle::StaticClass();
	}
	struct Z_Construct_UClass_ATilePuzzle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Spacing;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Grid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileLinks_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileLinks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsComplete_MetaData[];
#endif
		static void NewProp_bIsComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUndoable_MetaData[];
#endif
		static void NewProp_bIsUndoable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUndoable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOnColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultOnColour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOffColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultOffColour;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivationActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivationActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATilePuzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATilePuzzle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATilePuzzle_CheckPuzzleState, "CheckPuzzleState" }, // 3594525254
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TilePuzzle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootComp_MetaData[] = {
		{ "Category", "Root" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootComp = { "RootComp", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, RootComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Dimensions_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, Dimensions), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Dimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, TileSize), METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing = { "Spacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, Spacing), METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_Inner = { "Grid", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATilePiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, Grid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileLinks_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileLinks = { "TileLinks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, TileLinks), Z_Construct_UEnum_Trials_EPuzzleSetUp, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileLinks_MetaData)) }; // 2470509746
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	void Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_SetBit(void* Obj)
	{
		((ATilePuzzle*)Obj)->bIsComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete = { "bIsComplete", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePuzzle), &Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	void Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_SetBit(void* Obj)
	{
		((ATilePuzzle*)Obj)->bIsUndoable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable = { "bIsUndoable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePuzzle), &Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOnColour_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOnColour = { "DefaultOnColour", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, DefaultOnColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOnColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOnColour_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOffColour_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOffColour = { "DefaultOffColour", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, DefaultOffColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOffColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOffColour_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActors_Inner = { "ActivationActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActors_MetaData[] = {
		{ "Category", "State | Activation" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActors = { "ActivationActors", nullptr, (EPropertyFlags)0x0010000000000815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, ActivationActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATilePuzzle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_RootComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_TileLinks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_bIsUndoable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOnColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_DefaultOffColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_ActivationActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATilePuzzle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATilePuzzle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATilePuzzle_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_ATilePuzzle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATilePuzzle.OuterSingleton, Z_Construct_UClass_ATilePuzzle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATilePuzzle.OuterSingleton;
	}
	template<> TRIALS_API UClass* StaticClass<ATilePuzzle>()
	{
		return ATilePuzzle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATilePuzzle);
	struct Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePuzzle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePuzzle_h_Statics::EnumInfo[] = {
		{ EPuzzleSetUp_StaticEnum, TEXT("EPuzzleSetUp"), &Z_Registration_Info_UEnum_EPuzzleSetUp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2470509746U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePuzzle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATilePuzzle, ATilePuzzle::StaticClass, TEXT("ATilePuzzle"), &Z_Registration_Info_UClass_ATilePuzzle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATilePuzzle), 1206028988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePuzzle_h_1518703574(TEXT("/Script/Trials"),
		Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePuzzle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePuzzle_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePuzzle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePuzzle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
