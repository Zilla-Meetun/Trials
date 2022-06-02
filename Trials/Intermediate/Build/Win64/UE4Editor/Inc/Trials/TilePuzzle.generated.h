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
#ifdef TRIALS_TilePuzzle_generated_h
#error "TilePuzzle.generated.h already included, missing '#pragma once' in TilePuzzle.h"
#endif
#define TRIALS_TilePuzzle_generated_h

#define Trials_Source_Trials_Public_TilePuzzle_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTile_Statics; \
	TRIALS_API static class UScriptStruct* StaticStruct();


template<> TRIALS_API UScriptStruct* StaticStruct<struct FTile>();

#define Trials_Source_Trials_Public_TilePuzzle_h_34_SPARSE_DATA
#define Trials_Source_Trials_Public_TilePuzzle_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTileOverlap);


#define Trials_Source_Trials_Public_TilePuzzle_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTileOverlap);


#define Trials_Source_Trials_Public_TilePuzzle_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATilePuzzle(); \
	friend struct Z_Construct_UClass_ATilePuzzle_Statics; \
public: \
	DECLARE_CLASS(ATilePuzzle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(ATilePuzzle)


#define Trials_Source_Trials_Public_TilePuzzle_h_34_INCLASS \
private: \
	static void StaticRegisterNativesATilePuzzle(); \
	friend struct Z_Construct_UClass_ATilePuzzle_Statics; \
public: \
	DECLARE_CLASS(ATilePuzzle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(ATilePuzzle)


#define Trials_Source_Trials_Public_TilePuzzle_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATilePuzzle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATilePuzzle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATilePuzzle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATilePuzzle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATilePuzzle(ATilePuzzle&&); \
	NO_API ATilePuzzle(const ATilePuzzle&); \
public:


#define Trials_Source_Trials_Public_TilePuzzle_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATilePuzzle(ATilePuzzle&&); \
	NO_API ATilePuzzle(const ATilePuzzle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATilePuzzle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATilePuzzle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATilePuzzle)


#define Trials_Source_Trials_Public_TilePuzzle_h_34_PRIVATE_PROPERTY_OFFSET
#define Trials_Source_Trials_Public_TilePuzzle_h_31_PROLOG
#define Trials_Source_Trials_Public_TilePuzzle_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_TilePuzzle_h_34_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_TilePuzzle_h_34_SPARSE_DATA \
	Trials_Source_Trials_Public_TilePuzzle_h_34_RPC_WRAPPERS \
	Trials_Source_Trials_Public_TilePuzzle_h_34_INCLASS \
	Trials_Source_Trials_Public_TilePuzzle_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Trials_Source_Trials_Public_TilePuzzle_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_TilePuzzle_h_34_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_TilePuzzle_h_34_SPARSE_DATA \
	Trials_Source_Trials_Public_TilePuzzle_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_TilePuzzle_h_34_INCLASS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_TilePuzzle_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class ATilePuzzle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Trials_Source_Trials_Public_TilePuzzle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS