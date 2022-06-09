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
#ifdef TRIALS_TilePiece_generated_h
#error "TilePiece.generated.h already included, missing '#pragma once' in TilePiece.h"
#endif
#define TRIALS_TilePiece_generated_h

#define Trials_Source_Trials_Public_TilePiece_h_12_SPARSE_DATA
#define Trials_Source_Trials_Public_TilePiece_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetDo); \
	DECLARE_FUNCTION(execFlipTile); \
	DECLARE_FUNCTION(execOnTileOverlap);


#define Trials_Source_Trials_Public_TilePiece_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetDo); \
	DECLARE_FUNCTION(execFlipTile); \
	DECLARE_FUNCTION(execOnTileOverlap);


#define Trials_Source_Trials_Public_TilePiece_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATilePiece(); \
	friend struct Z_Construct_UClass_ATilePiece_Statics; \
public: \
	DECLARE_CLASS(ATilePiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(ATilePiece)


#define Trials_Source_Trials_Public_TilePiece_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATilePiece(); \
	friend struct Z_Construct_UClass_ATilePiece_Statics; \
public: \
	DECLARE_CLASS(ATilePiece, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(ATilePiece)


#define Trials_Source_Trials_Public_TilePiece_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATilePiece(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATilePiece) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATilePiece); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATilePiece); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATilePiece(ATilePiece&&); \
	NO_API ATilePiece(const ATilePiece&); \
public:


#define Trials_Source_Trials_Public_TilePiece_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATilePiece(ATilePiece&&); \
	NO_API ATilePiece(const ATilePiece&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATilePiece); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATilePiece); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATilePiece)


#define Trials_Source_Trials_Public_TilePiece_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DoneOnce() { return STRUCT_OFFSET(ATilePiece, DoneOnce); }


#define Trials_Source_Trials_Public_TilePiece_h_9_PROLOG
#define Trials_Source_Trials_Public_TilePiece_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_TilePiece_h_12_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_TilePiece_h_12_SPARSE_DATA \
	Trials_Source_Trials_Public_TilePiece_h_12_RPC_WRAPPERS \
	Trials_Source_Trials_Public_TilePiece_h_12_INCLASS \
	Trials_Source_Trials_Public_TilePiece_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Trials_Source_Trials_Public_TilePiece_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_TilePiece_h_12_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_TilePiece_h_12_SPARSE_DATA \
	Trials_Source_Trials_Public_TilePiece_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_TilePiece_h_12_INCLASS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_TilePiece_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class ATilePiece>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Trials_Source_Trials_Public_TilePiece_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
