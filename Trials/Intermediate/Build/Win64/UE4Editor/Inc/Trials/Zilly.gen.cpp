// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Trials/Public/Zilly.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZilly() {}
// Cross Module References
	TRIALS_API UFunction* Z_Construct_UDelegateFunction_Trials_SetImageOne__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Trials();
	TRIALS_API UEnum* Z_Construct_UEnum_Trials_EAttackType();
	TRIALS_API UClass* Z_Construct_UClass_AZilly_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_AZilly();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	TRIALS_API UClass* Z_Construct_UClass_APickup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Trials_SetImageOne__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Trials_SetImageOne__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Trials_SetImageOne__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Trials, nullptr, "SetImageOne__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Trials_SetImageOne__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Trials_SetImageOne__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Trials_SetImageOne__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Trials_SetImageOne__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Trials_EAttackType, Z_Construct_UPackage__Script_Trials(), TEXT("EAttackType"));
		}
		return Singleton;
	}
	template<> TRIALS_API UEnum* StaticEnum<EAttackType>()
	{
		return EAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttackType(EAttackType_StaticEnum, TEXT("/Script/Trials"), TEXT("EAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Trials_EAttackType_Hash() { return 79463896U; }
	UEnum* Z_Construct_UEnum_Trials_EAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Trials();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttackType"), 0, Get_Z_Construct_UEnum_Trials_EAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttackType::MELEE_FIST", (int64)EAttackType::MELEE_FIST },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MELEE_FIST.DisplayName", "Melee - Fist" },
				{ "MELEE_FIST.Name", "EAttackType::MELEE_FIST" },
				{ "ModuleRelativePath", "Public/Zilly.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Trials,
				nullptr,
				"EAttackType",
				"EAttackType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(AZilly::execLookUpRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUpRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execTurnAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnAtRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execEndCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execStartCrouch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCrouch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execOnAttackHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAttackHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execAttackInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execAttackStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackStart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execStopSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execSetNearestItem)
	{
		P_GET_OBJECT(APickup,Z_Param_Item);
		P_GET_UBOOL(Z_Param_bAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNearestItem(Z_Param_Item,Z_Param_bAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execChangeItem)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeItem(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execAddToInventory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToInventory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AZilly::execUseItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItem();
		P_NATIVE_END;
	}
	static FName NAME_AZilly_SetItem10UI = FName(TEXT("SetItem10UI"));
	void AZilly::SetItem10UI(const UTexture* Image)
	{
		Zilly_eventSetItem10UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem10UI),&Parms);
	}
	static FName NAME_AZilly_SetItem1UI = FName(TEXT("SetItem1UI"));
	void AZilly::SetItem1UI(const UTexture* Image)
	{
		Zilly_eventSetItem1UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem1UI),&Parms);
	}
	static FName NAME_AZilly_SetItem2UI = FName(TEXT("SetItem2UI"));
	void AZilly::SetItem2UI(const UTexture* Image)
	{
		Zilly_eventSetItem2UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem2UI),&Parms);
	}
	static FName NAME_AZilly_SetItem3UI = FName(TEXT("SetItem3UI"));
	void AZilly::SetItem3UI(const UTexture* Image)
	{
		Zilly_eventSetItem3UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem3UI),&Parms);
	}
	static FName NAME_AZilly_SetItem4UI = FName(TEXT("SetItem4UI"));
	void AZilly::SetItem4UI(const UTexture* Image)
	{
		Zilly_eventSetItem4UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem4UI),&Parms);
	}
	static FName NAME_AZilly_SetItem5UI = FName(TEXT("SetItem5UI"));
	void AZilly::SetItem5UI(const UTexture* Image)
	{
		Zilly_eventSetItem5UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem5UI),&Parms);
	}
	static FName NAME_AZilly_SetItem6UI = FName(TEXT("SetItem6UI"));
	void AZilly::SetItem6UI(const UTexture* Image)
	{
		Zilly_eventSetItem6UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem6UI),&Parms);
	}
	static FName NAME_AZilly_SetItem7UI = FName(TEXT("SetItem7UI"));
	void AZilly::SetItem7UI(const UTexture* Image)
	{
		Zilly_eventSetItem7UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem7UI),&Parms);
	}
	static FName NAME_AZilly_SetItem8UI = FName(TEXT("SetItem8UI"));
	void AZilly::SetItem8UI(const UTexture* Image)
	{
		Zilly_eventSetItem8UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem8UI),&Parms);
	}
	static FName NAME_AZilly_SetItem9UI = FName(TEXT("SetItem9UI"));
	void AZilly::SetItem9UI(const UTexture* Image)
	{
		Zilly_eventSetItem9UI_Parms Parms;
		Parms.Image=Image;
		ProcessEvent(FindFunctionChecked(NAME_AZilly_SetItem9UI),&Parms);
	}
	static FName NAME_AZilly_UpdateHighlightUI = FName(TEXT("UpdateHighlightUI"));
	void AZilly::UpdateHighlightUI()
	{
		ProcessEvent(FindFunctionChecked(NAME_AZilly_UpdateHighlightUI),NULL);
	}
	void AZilly::StaticRegisterNativesAZilly()
	{
		UClass* Class = AZilly::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventory", &AZilly::execAddToInventory },
			{ "AttackEnd", &AZilly::execAttackEnd },
			{ "AttackInput", &AZilly::execAttackInput },
			{ "AttackStart", &AZilly::execAttackStart },
			{ "ChangeItem", &AZilly::execChangeItem },
			{ "EndCrouch", &AZilly::execEndCrouch },
			{ "LookUpRate", &AZilly::execLookUpRate },
			{ "MoveForward", &AZilly::execMoveForward },
			{ "MoveRight", &AZilly::execMoveRight },
			{ "OnAttackHit", &AZilly::execOnAttackHit },
			{ "SetNearestItem", &AZilly::execSetNearestItem },
			{ "Sprint", &AZilly::execSprint },
			{ "StartCrouch", &AZilly::execStartCrouch },
			{ "StopSprint", &AZilly::execStopSprint },
			{ "TurnAtRate", &AZilly::execTurnAtRate },
			{ "UseItem", &AZilly::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZilly_AddToInventory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_AddToInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_AddToInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "AddToInventory", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_AddToInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_AddToInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_AddToInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_AddToInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_AttackInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_AttackInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_AttackInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "AttackInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_AttackInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_AttackInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_AttackInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_AttackInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_AttackStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_AttackStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_AttackStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "AttackStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_AttackStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_AttackStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_AttackStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_AttackStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_ChangeItem_Statics
	{
		struct Zilly_eventChangeItem_Parms
		{
			float Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_ChangeItem_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZilly_ChangeItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventChangeItem_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_AZilly_ChangeItem_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_ChangeItem_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_ChangeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_ChangeItem_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_ChangeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_ChangeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "ChangeItem", nullptr, nullptr, sizeof(Zilly_eventChangeItem_Parms), Z_Construct_UFunction_AZilly_ChangeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_ChangeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_ChangeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_ChangeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_ChangeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_ChangeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_EndCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_EndCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_EndCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "EndCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_EndCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_EndCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_EndCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_EndCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_LookUpRate_Statics
	{
		struct Zilly_eventLookUpRate_Parms
		{
			float Rate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZilly_LookUpRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventLookUpRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_LookUpRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_LookUpRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_LookUpRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_LookUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "LookUpRate", nullptr, nullptr, sizeof(Zilly_eventLookUpRate_Parms), Z_Construct_UFunction_AZilly_LookUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_LookUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_LookUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_LookUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_LookUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_LookUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_MoveForward_Statics
	{
		struct Zilly_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZilly_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "MoveForward", nullptr, nullptr, sizeof(Zilly_eventMoveForward_Parms), Z_Construct_UFunction_AZilly_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_MoveRight_Statics
	{
		struct Zilly_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZilly_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "MoveRight", nullptr, nullptr, sizeof(Zilly_eventMoveRight_Parms), Z_Construct_UFunction_AZilly_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_OnAttackHit_Statics
	{
		struct Zilly_eventOnAttackHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventOnAttackHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_HitComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_HitComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventOnAttackHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventOnAttackHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventOnAttackHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventOnAttackHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_OnAttackHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_HitComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_OnAttackHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_OnAttackHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_OnAttackHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "OnAttackHit", nullptr, nullptr, sizeof(Zilly_eventOnAttackHit_Parms), Z_Construct_UFunction_AZilly_OnAttackHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_OnAttackHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_OnAttackHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_OnAttackHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem10UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem10UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem10UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem10UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem10UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem10UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem10UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem10UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem10UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem10UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem10UI", nullptr, nullptr, sizeof(Zilly_eventSetItem10UI_Parms), Z_Construct_UFunction_AZilly_SetItem10UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem10UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem10UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem10UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem10UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem10UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem1UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem1UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem1UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem1UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem1UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem1UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem1UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem1UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem1UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem1UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem1UI", nullptr, nullptr, sizeof(Zilly_eventSetItem1UI_Parms), Z_Construct_UFunction_AZilly_SetItem1UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem1UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem1UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem1UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem1UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem1UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem2UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem2UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem2UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem2UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem2UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem2UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem2UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem2UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem2UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem2UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem2UI", nullptr, nullptr, sizeof(Zilly_eventSetItem2UI_Parms), Z_Construct_UFunction_AZilly_SetItem2UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem2UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem2UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem2UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem2UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem2UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem3UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem3UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem3UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem3UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem3UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem3UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem3UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem3UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem3UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem3UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem3UI", nullptr, nullptr, sizeof(Zilly_eventSetItem3UI_Parms), Z_Construct_UFunction_AZilly_SetItem3UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem3UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem3UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem3UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem3UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem3UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem4UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem4UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem4UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem4UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem4UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem4UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem4UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem4UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem4UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem4UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem4UI", nullptr, nullptr, sizeof(Zilly_eventSetItem4UI_Parms), Z_Construct_UFunction_AZilly_SetItem4UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem4UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem4UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem4UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem4UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem4UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem5UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem5UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem5UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem5UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem5UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem5UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem5UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem5UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem5UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem5UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem5UI", nullptr, nullptr, sizeof(Zilly_eventSetItem5UI_Parms), Z_Construct_UFunction_AZilly_SetItem5UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem5UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem5UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem5UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem5UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem5UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem6UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem6UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem6UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem6UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem6UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem6UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem6UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem6UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem6UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem6UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem6UI", nullptr, nullptr, sizeof(Zilly_eventSetItem6UI_Parms), Z_Construct_UFunction_AZilly_SetItem6UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem6UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem6UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem6UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem6UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem6UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem7UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem7UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem7UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem7UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem7UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem7UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem7UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem7UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem7UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem7UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem7UI", nullptr, nullptr, sizeof(Zilly_eventSetItem7UI_Parms), Z_Construct_UFunction_AZilly_SetItem7UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem7UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem7UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem7UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem7UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem7UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem8UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem8UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem8UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem8UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem8UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem8UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem8UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem8UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem8UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem8UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem8UI", nullptr, nullptr, sizeof(Zilly_eventSetItem8UI_Parms), Z_Construct_UFunction_AZilly_SetItem8UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem8UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem8UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem8UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem8UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem8UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetItem9UI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Image_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Image;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem9UI_Statics::NewProp_Image_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetItem9UI_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetItem9UI_Parms, Image), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem9UI_Statics::NewProp_Image_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem9UI_Statics::NewProp_Image_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetItem9UI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetItem9UI_Statics::NewProp_Image,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetItem9UI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetItem9UI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetItem9UI", nullptr, nullptr, sizeof(Zilly_eventSetItem9UI_Parms), Z_Construct_UFunction_AZilly_SetItem9UI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem9UI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetItem9UI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetItem9UI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetItem9UI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetItem9UI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_SetNearestItem_Statics
	{
		struct Zilly_eventSetNearestItem_Parms
		{
			APickup* Item;
			bool bAdd;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAdd_MetaData[];
#endif
		static void NewProp_bAdd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventSetNearestItem_Parms, Item), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_bAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_bAdd_SetBit(void* Obj)
	{
		((Zilly_eventSetNearestItem_Parms*)Obj)->bAdd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Zilly_eventSetNearestItem_Parms), &Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_bAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_bAdd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_SetNearestItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_SetNearestItem_Statics::NewProp_bAdd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_SetNearestItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_SetNearestItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "SetNearestItem", nullptr, nullptr, sizeof(Zilly_eventSetNearestItem_Parms), Z_Construct_UFunction_AZilly_SetNearestItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetNearestItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_SetNearestItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_SetNearestItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_SetNearestItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_SetNearestItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_Sprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_Sprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_StartCrouch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_StartCrouch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_StartCrouch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "StartCrouch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_StartCrouch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_StartCrouch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_StartCrouch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_StartCrouch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_StopSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_StopSprint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "StopSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_StopSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_StopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_StopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_StopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_TurnAtRate_Statics
	{
		struct Zilly_eventTurnAtRate_Parms
		{
			float Rate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AZilly_TurnAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Zilly_eventTurnAtRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZilly_TurnAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZilly_TurnAtRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_TurnAtRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_TurnAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "TurnAtRate", nullptr, nullptr, sizeof(Zilly_eventTurnAtRate_Parms), Z_Construct_UFunction_AZilly_TurnAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_TurnAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_TurnAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_TurnAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_TurnAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_TurnAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_UpdateHighlightUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_UpdateHighlightUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_UpdateHighlightUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "UpdateHighlightUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_UpdateHighlightUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_UpdateHighlightUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_UpdateHighlightUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_UpdateHighlightUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AZilly_UseItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZilly_UseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZilly_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZilly, nullptr, "UseItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZilly_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZilly_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZilly_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZilly_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZilly_NoRegister()
	{
		return AZilly::StaticClass();
	}
	struct Z_Construct_UClass_AZilly_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeFistAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeleeFistAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFistCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftFistCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFistCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightFistCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NearestItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NearestItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ItemIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Inventory_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZilly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Trials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZilly_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZilly_AddToInventory, "AddToInventory" }, // 2617703256
		{ &Z_Construct_UFunction_AZilly_AttackEnd, "AttackEnd" }, // 290584627
		{ &Z_Construct_UFunction_AZilly_AttackInput, "AttackInput" }, // 2816294766
		{ &Z_Construct_UFunction_AZilly_AttackStart, "AttackStart" }, // 930021002
		{ &Z_Construct_UFunction_AZilly_ChangeItem, "ChangeItem" }, // 2906079391
		{ &Z_Construct_UFunction_AZilly_EndCrouch, "EndCrouch" }, // 3261849921
		{ &Z_Construct_UFunction_AZilly_LookUpRate, "LookUpRate" }, // 3073894319
		{ &Z_Construct_UFunction_AZilly_MoveForward, "MoveForward" }, // 2107021451
		{ &Z_Construct_UFunction_AZilly_MoveRight, "MoveRight" }, // 1866893022
		{ &Z_Construct_UFunction_AZilly_OnAttackHit, "OnAttackHit" }, // 814687301
		{ &Z_Construct_UFunction_AZilly_SetItem10UI, "SetItem10UI" }, // 1217021133
		{ &Z_Construct_UFunction_AZilly_SetItem1UI, "SetItem1UI" }, // 3777196585
		{ &Z_Construct_UFunction_AZilly_SetItem2UI, "SetItem2UI" }, // 1804701198
		{ &Z_Construct_UFunction_AZilly_SetItem3UI, "SetItem3UI" }, // 1888449645
		{ &Z_Construct_UFunction_AZilly_SetItem4UI, "SetItem4UI" }, // 2895236947
		{ &Z_Construct_UFunction_AZilly_SetItem5UI, "SetItem5UI" }, // 1485860060
		{ &Z_Construct_UFunction_AZilly_SetItem6UI, "SetItem6UI" }, // 1562913744
		{ &Z_Construct_UFunction_AZilly_SetItem7UI, "SetItem7UI" }, // 251180143
		{ &Z_Construct_UFunction_AZilly_SetItem8UI, "SetItem8UI" }, // 575617380
		{ &Z_Construct_UFunction_AZilly_SetItem9UI, "SetItem9UI" }, // 654629900
		{ &Z_Construct_UFunction_AZilly_SetNearestItem, "SetNearestItem" }, // 2471178826
		{ &Z_Construct_UFunction_AZilly_Sprint, "Sprint" }, // 2896034489
		{ &Z_Construct_UFunction_AZilly_StartCrouch, "StartCrouch" }, // 1497858502
		{ &Z_Construct_UFunction_AZilly_StopSprint, "StopSprint" }, // 1258924043
		{ &Z_Construct_UFunction_AZilly_TurnAtRate, "TurnAtRate" }, // 2038128703
		{ &Z_Construct_UFunction_AZilly_UpdateHighlightUI, "UpdateHighlightUI" }, // 726749837
		{ &Z_Construct_UFunction_AZilly_UseItem, "UseItem" }, // 2646289615
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Zilly.h" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_MeleeFistAttackMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_MeleeFistAttackMontage = { "MeleeFistAttackMontage", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, MeleeFistAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_MeleeFistAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_MeleeFistAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_InteractionZone_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_InteractionZone = { "InteractionZone", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, InteractionZone), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_InteractionZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_InteractionZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_LeftFistCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_LeftFistCollider = { "LeftFistCollider", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, LeftFistCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_LeftFistCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_LeftFistCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_RightFistCollider_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_RightFistCollider = { "RightFistCollider", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, RightFistCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_RightFistCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_RightFistCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_NearestItem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_NearestItem = { "NearestItem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, NearestItem), Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_NearestItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_NearestItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_ItemIndex_MetaData[] = {
		{ "Category", "Zilly" },
		{ "ClampMax", "9" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_ItemIndex = { "ItemIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, ItemIndex), METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_ItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_ItemIndex_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_Inventory_ValueProp = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_Inventory_Key_KeyProp = { "Inventory_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZilly_Statics::NewProp_Inventory_MetaData[] = {
		{ "ArrayClamp", "10" },
		{ "Category", "Zilly" },
		{ "ModuleRelativePath", "Public/Zilly.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AZilly_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZilly, Inventory), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZilly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_MeleeFistAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_InteractionZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_LeftFistCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_RightFistCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_NearestItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_ItemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_Inventory_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_Inventory_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZilly_Statics::NewProp_Inventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZilly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZilly>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZilly_Statics::ClassParams = {
		&AZilly::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZilly_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZilly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZilly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZilly()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZilly_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZilly, 3909452311);
	template<> TRIALS_API UClass* StaticClass<AZilly>()
	{
		return AZilly::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZilly(Z_Construct_UClass_AZilly, &AZilly::StaticClass, TEXT("/Script/Trials"), TEXT("AZilly"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZilly);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
