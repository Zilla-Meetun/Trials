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
class UTexture;
#ifdef TRIALS_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define TRIALS_Pickup_generated_h

#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_SPARSE_DATA
#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndItemOverlap); \
	DECLARE_FUNCTION(execOnBeginItemOverlap); \
	DECLARE_FUNCTION(execGetIcon);


#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndItemOverlap); \
	DECLARE_FUNCTION(execOnBeginItemOverlap); \
	DECLARE_FUNCTION(execGetIcon);


#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	virtual UObject* _getUObject() const override { return const_cast<APickup*>(this); }


#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_11_PROLOG
#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_SPARSE_DATA \
	FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_RPC_WRAPPERS \
	FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_INCLASS \
	FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_SPARSE_DATA \
	FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_INCLASS_NO_PURE_DECLS \
	FID_Trials_5_0_Source_Trials_Public_Pickup_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Trials_5_0_Source_Trials_Public_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
