// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/PressurePlate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePressurePlate() {}
// Cross Module References
	TRIALS_API UClass* Z_Construct_UClass_APressurePlate_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_APressurePlate();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Trials();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APressurePlate::execOnPlateEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlateEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APressurePlate::execOnPlateOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlateOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APressurePlate::execCalculateMass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateMass();
		P_NATIVE_END;
	}
	static FName NAME_APressurePlate_ActivatePlate = FName(TEXT("ActivatePlate"));
	void APressurePlate::ActivatePlate()
	{
		ProcessEvent(FindFunctionChecked(NAME_APressurePlate_ActivatePlate),NULL);
	}
	static FName NAME_APressurePlate_DeactivatePlate = FName(TEXT("DeactivatePlate"));
	void APressurePlate::DeactivatePlate()
	{
		ProcessEvent(FindFunctionChecked(NAME_APressurePlate_DeactivatePlate),NULL);
	}
	static FName NAME_APressurePlate_LowerPlate = FName(TEXT("LowerPlate"));
	void APressurePlate::LowerPlate()
	{
		ProcessEvent(FindFunctionChecked(NAME_APressurePlate_LowerPlate),NULL);
	}
	static FName NAME_APressurePlate_RaisePlate = FName(TEXT("RaisePlate"));
	void APressurePlate::RaisePlate()
	{
		ProcessEvent(FindFunctionChecked(NAME_APressurePlate_RaisePlate),NULL);
	}
	void APressurePlate::StaticRegisterNativesAPressurePlate()
	{
		UClass* Class = APressurePlate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateMass", &APressurePlate::execCalculateMass },
			{ "OnPlateEndOverlap", &APressurePlate::execOnPlateEndOverlap },
			{ "OnPlateOverlap", &APressurePlate::execOnPlateOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APressurePlate_ActivatePlate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_ActivatePlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_ActivatePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "ActivatePlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_ActivatePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_ActivatePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_ActivatePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_ActivatePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_CalculateMass_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_CalculateMass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_CalculateMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "CalculateMass", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_CalculateMass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_CalculateMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_CalculateMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_CalculateMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_DeactivatePlate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_DeactivatePlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_DeactivatePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "DeactivatePlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_DeactivatePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_DeactivatePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_DeactivatePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_DeactivatePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_LowerPlate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_LowerPlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_LowerPlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "LowerPlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_LowerPlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_LowerPlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_LowerPlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_LowerPlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics
	{
		struct PressurePlate_eventOnPlateEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "OnPlateEndOverlap", nullptr, nullptr, sizeof(PressurePlate_eventOnPlateEndOverlap_Parms), Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics
	{
		struct PressurePlate_eventOnPlateOverlap_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PressurePlate_eventOnPlateOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PressurePlate_eventOnPlateOverlap_Parms), &Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PressurePlate_eventOnPlateOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "OnPlateOverlap", nullptr, nullptr, sizeof(PressurePlate_eventOnPlateOverlap_Parms), Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_OnPlateOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_OnPlateOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APressurePlate_RaisePlate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APressurePlate_RaisePlate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APressurePlate_RaisePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APressurePlate, nullptr, "RaisePlate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APressurePlate_RaisePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APressurePlate_RaisePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APressurePlate_RaisePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APressurePlate_RaisePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APressurePlate_NoRegister()
	{
		return APressurePlate::StaticClass();
	}
	struct Z_Construct_UClass_APressurePlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlateMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlateCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActivatedWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalMass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappingActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APressurePlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APressurePlate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APressurePlate_ActivatePlate, "ActivatePlate" }, // 1615666666
		{ &Z_Construct_UFunction_APressurePlate_CalculateMass, "CalculateMass" }, // 798168051
		{ &Z_Construct_UFunction_APressurePlate_DeactivatePlate, "DeactivatePlate" }, // 2841214942
		{ &Z_Construct_UFunction_APressurePlate_LowerPlate, "LowerPlate" }, // 4264406178
		{ &Z_Construct_UFunction_APressurePlate_OnPlateEndOverlap, "OnPlateEndOverlap" }, // 698821945
		{ &Z_Construct_UFunction_APressurePlate_OnPlateOverlap, "OnPlateOverlap" }, // 3104311940
		{ &Z_Construct_UFunction_APressurePlate_RaisePlate, "RaisePlate" }, // 1020139883
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PressurePlate.h" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateMesh_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateMesh = { "PlateMesh", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, PlateMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateCollision_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateCollision = { "PlateCollision", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, PlateCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_ActivatedWeight_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_ActivatedWeight = { "ActivatedWeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, ActivatedWeight), METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_ActivatedWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_ActivatedWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalMass_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalMass = { "TotalMass", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, TotalMass), METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalMass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_OverlappingActors_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_OverlappingActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_OverlappingActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_MaxZOffset_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_MaxZOffset = { "MaxZOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, MaxZOffset), METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_MaxZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_MaxZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_CurrentOffset_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_CurrentOffset = { "CurrentOffset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, CurrentOffset), METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_CurrentOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_CurrentOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_NewOffset_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_NewOffset = { "NewOffset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, NewOffset), METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_NewOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_NewOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_TriggerActor_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_TriggerActor = { "TriggerActor", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APressurePlate, TriggerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_TriggerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_TriggerActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APressurePlate_Statics::NewProp_bIsActive_MetaData[] = {
		{ "Category", "PressurePlate" },
		{ "ModuleRelativePath", "Public/PressurePlate.h" },
	};
#endif
	void Z_Construct_UClass_APressurePlate_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((APressurePlate*)Obj)->bIsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APressurePlate_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APressurePlate), &Z_Construct_UClass_APressurePlate_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::NewProp_bIsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APressurePlate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_PlateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_ActivatedWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_TotalMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_OverlappingActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_OverlappingActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_MaxZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_CurrentOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_NewOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_TriggerActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APressurePlate_Statics::NewProp_bIsActive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APressurePlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APressurePlate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APressurePlate_Statics::ClassParams = {
		&APressurePlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APressurePlate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APressurePlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APressurePlate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APressurePlate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APressurePlate, 1306387987);
	template<> TRIALS_API UClass* StaticClass<APressurePlate>()
	{
		return APressurePlate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APressurePlate(Z_Construct_UClass_APressurePlate, &APressurePlate::StaticClass, TEXT("/Script/Trials"), TEXT("APressurePlate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APressurePlate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
