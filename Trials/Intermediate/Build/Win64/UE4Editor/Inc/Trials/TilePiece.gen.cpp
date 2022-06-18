// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/TilePiece.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTilePiece() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_ATilePiece_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_ATilePiece();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Trials();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(ATilePiece::execResetDo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATilePiece::execFlipTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlipTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATilePiece::execOnTileOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTileOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ATilePiece::StaticRegisterNativesATilePiece()
	{
		UClass* Class = ATilePiece::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FlipTile", &ATilePiece::execFlipTile },
			{ "OnTileOverlap", &ATilePiece::execOnTileOverlap },
			{ "ResetDo", &ATilePiece::execResetDo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATilePiece_FlipTile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_FlipTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePiece_FlipTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePiece, nullptr, "FlipTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_FlipTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_FlipTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePiece_FlipTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATilePiece_FlipTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics
	{
		struct TilePiece_eventOnTileOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TilePiece_eventOnTileOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TilePiece_eventOnTileOverlap_Parms), &Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePiece, nullptr, "OnTileOverlap", nullptr, nullptr, sizeof(TilePiece_eventOnTileOverlap_Parms), Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePiece_OnTileOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATilePiece_ResetDo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_ResetDo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePiece_ResetDo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePiece, nullptr, "ResetDo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_ResetDo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_ResetDo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePiece_ResetDo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATilePiece_ResetDo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATilePiece_NoRegister()
	{
		return ATilePiece::StaticClass();
	}
	struct Z_Construct_UClass_ATilePiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SMCube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMatInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOn_MetaData[];
#endif
		static void NewProp_bIsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFinished_MetaData[];
#endif
		static void NewProp_bFinished_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUndoable_MetaData[];
#endif
		static void NewProp_bUndoable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUndoable;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdjacentTiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjacentTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdjacentTiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoneOnce_MetaData[];
#endif
		static void NewProp_DoneOnce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DoneOnce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATilePiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATilePiece_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATilePiece_FlipTile, "FlipTile" }, // 2350020617
		{ &Z_Construct_UFunction_ATilePiece_OnTileOverlap, "OnTileOverlap" }, // 4078011126
		{ &Z_Construct_UFunction_ATilePiece_ResetDo, "ResetDo" }, // 2696450120
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TilePiece.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube_MetaData[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube = { "SMCube", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, SMCube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot_MetaData[] = {
		{ "Category", "Root" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot = { "NewRoot", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, NewRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TilePiece" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision = { "TileCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, TileCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileMaterial" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst = { "MatInst", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, MatInst), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileMaterial" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst = { "DynamicMatInst", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, DynamicMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour = { "OnColour", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, OnColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour = { "OffColour", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, OffColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->bIsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn = { "bIsOn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->bFinished = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished = { "bFinished", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->bUndoable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable = { "bUndoable", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_Inner = { "AdjacentTiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATilePiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles = { "AdjacentTiles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, AdjacentTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_MetaData[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->DoneOnce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce = { "DoneOnce", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATilePiece_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATilePiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATilePiece>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATilePiece_Statics::ClassParams = {
		&ATilePiece::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATilePiece_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::PropPointers),
		0,
		0x009004A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATilePiece()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATilePiece_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATilePiece, 3832674728);
	template<> TRIALS_API UClass* StaticClass<ATilePiece>()
	{
		return ATilePiece::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATilePiece(Z_Construct_UClass_ATilePiece, &ATilePiece::StaticClass, TEXT("/Script/Trials"), TEXT("ATilePiece"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATilePiece);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
