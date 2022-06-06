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
class USceneComponent;
#ifdef TRIALS_TileDataAsset_generated_h
#error "TileDataAsset.generated.h already included, missing '#pragma once' in TileDataAsset.h"
#endif
#define TRIALS_TileDataAsset_generated_h

#define Trials_Source_Trials_Public_TileDataAsset_h_16_SPARSE_DATA
#define Trials_Source_Trials_Public_TileDataAsset_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnTileOverlap); \
	DECLARE_FUNCTION(execOnConstruct);


#define Trials_Source_Trials_Public_TileDataAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTileOverlap); \
	DECLARE_FUNCTION(execOnConstruct);


#define Trials_Source_Trials_Public_TileDataAsset_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileDataAsset(); \
	friend struct Z_Construct_UClass_UTileDataAsset_Statics; \
public: \
	DECLARE_CLASS(UTileDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(UTileDataAsset)


#define Trials_Source_Trials_Public_TileDataAsset_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTileDataAsset(); \
	friend struct Z_Construct_UClass_UTileDataAsset_Statics; \
public: \
	DECLARE_CLASS(UTileDataAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(UTileDataAsset)


#define Trials_Source_Trials_Public_TileDataAsset_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileDataAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileDataAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileDataAsset(UTileDataAsset&&); \
	NO_API UTileDataAsset(const UTileDataAsset&); \
public:


#define Trials_Source_Trials_Public_TileDataAsset_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileDataAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileDataAsset(UTileDataAsset&&); \
	NO_API UTileDataAsset(const UTileDataAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileDataAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileDataAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileDataAsset)


#define Trials_Source_Trials_Public_TileDataAsset_h_16_PRIVATE_PROPERTY_OFFSET
#define Trials_Source_Trials_Public_TileDataAsset_h_13_PROLOG
#define Trials_Source_Trials_Public_TileDataAsset_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_TileDataAsset_h_16_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_TileDataAsset_h_16_SPARSE_DATA \
	Trials_Source_Trials_Public_TileDataAsset_h_16_RPC_WRAPPERS \
	Trials_Source_Trials_Public_TileDataAsset_h_16_INCLASS \
	Trials_Source_Trials_Public_TileDataAsset_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Trials_Source_Trials_Public_TileDataAsset_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_TileDataAsset_h_16_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_TileDataAsset_h_16_SPARSE_DATA \
	Trials_Source_Trials_Public_TileDataAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_TileDataAsset_h_16_INCLASS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_TileDataAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class UTileDataAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Trials_Source_Trials_Public_TileDataAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
