// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TRIALS_PressurePlate_generated_h
#error "PressurePlate.generated.h already included, missing '#pragma once' in PressurePlate.h"
#endif
#define TRIALS_PressurePlate_generated_h

#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_SPARSE_DATA
#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlateEndOverlap); \
	DECLARE_FUNCTION(execOnPlateOverlap); \
	DECLARE_FUNCTION(execCalculateMass);


#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlateEndOverlap); \
	DECLARE_FUNCTION(execOnPlateOverlap); \
	DECLARE_FUNCTION(execCalculateMass);


#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_EVENT_PARMS
#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_CALLBACK_WRAPPERS
#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APressurePlate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APressurePlate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public:


#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APressurePlate)


#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_11_PROLOG \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_EVENT_PARMS


#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_SPARSE_DATA \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_RPC_WRAPPERS \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_CALLBACK_WRAPPERS \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_INCLASS \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_SPARSE_DATA \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_CALLBACK_WRAPPERS \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_INCLASS_NO_PURE_DECLS \
	FID_Trials_5_0_Source_Trials_Public_PressurePlate_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class APressurePlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Trials_5_0_Source_Trials_Public_PressurePlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
