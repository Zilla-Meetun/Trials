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

#define Trials_Source_Trials_Public_PressurePlate_h_13_SPARSE_DATA
#define Trials_Source_Trials_Public_PressurePlate_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlateEndOverlap); \
	DECLARE_FUNCTION(execOnPlateOverlap); \
	DECLARE_FUNCTION(execCalculateMass);


#define Trials_Source_Trials_Public_PressurePlate_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlateEndOverlap); \
	DECLARE_FUNCTION(execOnPlateOverlap); \
	DECLARE_FUNCTION(execCalculateMass);


#define Trials_Source_Trials_Public_PressurePlate_h_13_EVENT_PARMS
#define Trials_Source_Trials_Public_PressurePlate_h_13_CALLBACK_WRAPPERS
#define Trials_Source_Trials_Public_PressurePlate_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define Trials_Source_Trials_Public_PressurePlate_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPressurePlate(); \
	friend struct Z_Construct_UClass_APressurePlate_Statics; \
public: \
	DECLARE_CLASS(APressurePlate, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(APressurePlate)


#define Trials_Source_Trials_Public_PressurePlate_h_13_STANDARD_CONSTRUCTORS \
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


#define Trials_Source_Trials_Public_PressurePlate_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APressurePlate(APressurePlate&&); \
	NO_API APressurePlate(const APressurePlate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APressurePlate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APressurePlate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APressurePlate)


#define Trials_Source_Trials_Public_PressurePlate_h_13_PRIVATE_PROPERTY_OFFSET
#define Trials_Source_Trials_Public_PressurePlate_h_10_PROLOG \
	Trials_Source_Trials_Public_PressurePlate_h_13_EVENT_PARMS


#define Trials_Source_Trials_Public_PressurePlate_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_PressurePlate_h_13_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_PressurePlate_h_13_SPARSE_DATA \
	Trials_Source_Trials_Public_PressurePlate_h_13_RPC_WRAPPERS \
	Trials_Source_Trials_Public_PressurePlate_h_13_CALLBACK_WRAPPERS \
	Trials_Source_Trials_Public_PressurePlate_h_13_INCLASS \
	Trials_Source_Trials_Public_PressurePlate_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Trials_Source_Trials_Public_PressurePlate_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_PressurePlate_h_13_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_PressurePlate_h_13_SPARSE_DATA \
	Trials_Source_Trials_Public_PressurePlate_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_PressurePlate_h_13_CALLBACK_WRAPPERS \
	Trials_Source_Trials_Public_PressurePlate_h_13_INCLASS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_PressurePlate_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class APressurePlate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Trials_Source_Trials_Public_PressurePlate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
