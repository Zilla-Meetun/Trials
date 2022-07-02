// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/TilePiece.h"
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
	DEFINE_FUNCTION(ATilePiece::execSetBaseProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseProperties();
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
			{ "SetBaseProperties", &ATilePiece::execSetBaseProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATilePiece_FlipTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_FlipTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePiece_FlipTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePiece, nullptr, "FlipTile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_FlipTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_FlipTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePiece_FlipTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATilePiece_FlipTile_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((TilePiece_eventOnTileOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TilePiece_eventOnTileOverlap_Parms), &Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TilePiece_eventOnTileOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePiece, nullptr, "OnTileOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::TilePiece_eventOnTileOverlap_Parms), Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePiece_OnTileOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATilePiece_OnTileOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATilePiece_ResetDo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_ResetDo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePiece_ResetDo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePiece, nullptr, "ResetDo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_ResetDo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_ResetDo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePiece_ResetDo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATilePiece_ResetDo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATilePiece_SetBaseProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATilePiece_SetBaseProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATilePiece_SetBaseProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATilePiece, nullptr, "SetBaseProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATilePiece_SetBaseProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATilePiece_SetBaseProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATilePiece_SetBaseProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATilePiece_SetBaseProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATilePiece);
	UClass* Z_Construct_UClass_ATilePiece_NoRegister()
	{
		return ATilePiece::StaticClass();
	}
	struct Z_Construct_UClass_ATilePiece_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SMCube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SMCube;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MatInst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMatInst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMatInst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOn_MetaData[];
#endif
		static void NewProp_bIsOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinished_MetaData[];
#endif
		static void NewProp_bFinished_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideParent_MetaData[];
#endif
		static void NewProp_bOverrideParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUndoable_MetaData[];
#endif
		static void NewProp_bUndoable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUndoable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnColour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffColour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDesiredState_MetaData[];
#endif
		static void NewProp_bDesiredState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDesiredState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AdjacentTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjacentTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdjacentTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoneOnce_MetaData[];
#endif
		static void NewProp_DoneOnce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoneOnce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATilePiece_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATilePiece_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATilePiece_FlipTile, "FlipTile" }, // 657142519
		{ &Z_Construct_UFunction_ATilePiece_OnTileOverlap, "OnTileOverlap" }, // 3857879442
		{ &Z_Construct_UFunction_ATilePiece_ResetDo, "ResetDo" }, // 3138971549
		{ &Z_Construct_UFunction_ATilePiece_SetBaseProperties, "SetBaseProperties" }, // 2847092250
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TilePiece.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube_MetaData[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube = { "SMCube", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, SMCube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot_MetaData[] = {
		{ "Category", "Root" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot = { "NewRoot", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, NewRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TilePiece" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision = { "TileCollision", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, TileCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileMaterial" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst = { "MatInst", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, MatInst), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TileMaterial" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst = { "DynamicMatInst", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, DynamicMatInst), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->bIsOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn = { "bIsOn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->bFinished = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished = { "bFinished", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_bOverrideParent_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_bOverrideParent_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->bOverrideParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_bOverrideParent = { "bOverrideParent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_bOverrideParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_bOverrideParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_bOverrideParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_MetaData[] = {
		{ "Category", "State" },
		{ "EditCondition", "bOverrideParent" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->bUndoable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable = { "bUndoable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour_MetaData[] = {
		{ "Category", "State" },
		{ "EditCondition", "bOverrideParent" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour = { "OnColour", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, OnColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour_MetaData[] = {
		{ "Category", "State" },
		{ "EditCondition", "bOverrideParent" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour = { "OffColour", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, OffColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_bDesiredState_MetaData[] = {
		{ "Category", "State" },
		{ "EditCondition", "bOverrideParent" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_bDesiredState_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->bDesiredState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_bDesiredState = { "bDesiredState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_bDesiredState_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_bDesiredState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_bDesiredState_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_Inner = { "AdjacentTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATilePiece_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles = { "AdjacentTiles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATilePiece, AdjacentTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_MetaData[] = {
		{ "ModuleRelativePath", "Public/TilePiece.h" },
	};
#endif
	void Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_SetBit(void* Obj)
	{
		((ATilePiece*)Obj)->DoneOnce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce = { "DoneOnce", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATilePiece), &Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATilePiece_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_SMCube,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_NewRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_TileMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_TileCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_MatInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_DynamicMatInst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_bIsOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_bFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_bOverrideParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_bUndoable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_OnColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_OffColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_bDesiredState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_AdjacentTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATilePiece_Statics::NewProp_DoneOnce,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATilePiece_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATilePiece>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATilePiece_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_ATilePiece.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATilePiece.OuterSingleton, Z_Construct_UClass_ATilePiece_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATilePiece.OuterSingleton;
	}
	template<> TRIALS_API UClass* StaticClass<ATilePiece>()
	{
		return ATilePiece::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATilePiece);
	struct Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePiece_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePiece_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATilePiece, ATilePiece::StaticClass, TEXT("ATilePiece"), &Z_Registration_Info_UClass_ATilePiece, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATilePiece), 3822393715U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePiece_h_1662914261(TEXT("/Script/Trials"),
		Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePiece_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Trials_5_0_Source_Trials_Public_TilePiece_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
