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
	TRIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTile();
	UPackage* Z_Construct_UPackage__Script_Trials();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_ATilePuzzle_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_ATilePuzzle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
class UScriptStruct* FTile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIALS_API uint32 Get_Z_Construct_UScriptStruct_FTile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTile, Z_Construct_UPackage__Script_Trials(), TEXT("Tile"), sizeof(FTile), Get_Z_Construct_UScriptStruct_FTile_Hash());
	}
	return Singleton;
}
template<> TRIALS_API UScriptStruct* StaticStruct<FTile>()
{
	return FTile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTile(FTile::StaticStruct, TEXT("/Script/Trials"), TEXT("Tile"), false, nullptr, nullptr);
static struct FScriptStruct_Trials_StaticRegisterNativesFTile
{
	FScriptStruct_Trials_StaticRegisterNativesFTile()
	{
		UScriptStruct::DeferCppStructOps<FTile>(FName(TEXT("Tile")));
	}
} ScriptStruct_Trials_StaticRegisterNativesFTile;
	struct Z_Construct_UScriptStruct_FTile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileCollision;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AdjacentIndex_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjacentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdjacentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOn_MetaData[];
#endif
		static void NewProp_bIsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicMatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicMatInst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileMesh_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTile, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileCollision_MetaData[] = {
		{ "Category", "Tile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileCollision = { "TileCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTile, TileCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileCollision_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_AdjacentIndex_Inner = { "AdjacentIndex", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::NewProp_AdjacentIndex_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_AdjacentIndex = { "AdjacentIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTile, AdjacentIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTile_Statics::NewProp_AdjacentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::NewProp_AdjacentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::NewProp_bIsOn_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTile_Statics::NewProp_bIsOn_SetBit(void* Obj)
	{
		((FTile*)Obj)->bIsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_bIsOn = { "bIsOn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTile), &Z_Construct_UScriptStruct_FTile_Statics::NewProp_bIsOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTile_Statics::NewProp_bIsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::NewProp_bIsOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTile_Statics::NewProp_DynamicMatInst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileMaterial" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTile_Statics::NewProp_DynamicMatInst = { "DynamicMatInst", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTile, DynamicMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTile_Statics::NewProp_DynamicMatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::NewProp_DynamicMatInst_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_TileCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_AdjacentIndex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_AdjacentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_bIsOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTile_Statics::NewProp_DynamicMatInst,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
		nullptr,
		&NewStructOps,
		"Tile",
		sizeof(FTile),
		alignof(FTile),
		Z_Construct_UScriptStruct_FTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Trials();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Tile"), sizeof(FTile), Get_Z_Construct_UScriptStruct_FTile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTile_Hash() { return 1461646517U; }
	DEFINE_FUNCTION(ATilePuzzle::execOnTileOverlap)
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
	void ATilePuzzle::StaticRegisterNativesATilePuzzle()
	{
		UClass* Class = ATilePuzzle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTileOverlap", &ATilePuzzle::execOnTileOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics
	{
		struct TilePuzzle_eventOnTileOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePuzzle_eventOnTileOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePuzzle_eventOnTileOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePuzzle_eventOnTileOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePuzzle_eventOnTileOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TilePuzzle_eventOnTileOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TilePuzzle_eventOnTileOverlap_Parms), &Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePuzzle_eventOnTileOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePuzzle, nullptr, "OnTileOverlap", nullptr, nullptr, sizeof(TilePuzzle_eventOnTileOverlap_Parms), Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePuzzle_OnTileOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATilePuzzle_OnTileOverlap_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Grid_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Grid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridCollision_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GridCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MatInst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATilePuzzle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATilePuzzle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATilePuzzle_OnTileOverlap, "OnTileOverlap" }, // 2148235100
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TilePuzzle.h" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_Inner = { "Grid", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTile, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, Grid), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_GridCollision_Inner = { "GridCollision", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_GridCollision_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_GridCollision = { "GridCollision", nullptr, (EPropertyFlags)0x001000800002000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, GridCollision), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_GridCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_GridCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePuzzle_Statics::NewProp_MatInst_MetaData[] = {
		{ "Category", "TilePuzzle" },
		{ "ModuleRelativePath", "Public/TilePuzzle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePuzzle_Statics::NewProp_MatInst = { "MatInst", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePuzzle, MatInst), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_MatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePuzzle_Statics::NewProp_MatInst_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATilePuzzle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_XLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_YLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Spacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_Grid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_GridCollision_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_GridCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePuzzle_Statics::NewProp_MatInst,
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
	IMPLEMENT_CLASS(ATilePuzzle, 1838504463);
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
