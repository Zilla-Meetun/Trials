// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIALS_Interact_generated_h
#error "Interact.generated.h already included, missing '#pragma once' in Interact.h"
#endif
#define TRIALS_Interact_generated_h

#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_SPARSE_DATA
#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execPickup);


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execPickup);


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIALS_API UInteract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteract) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIALS_API, UInteract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteract); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIALS_API UInteract(UInteract&&); \
	TRIALS_API UInteract(const UInteract&); \
public:


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIALS_API UInteract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIALS_API UInteract(UInteract&&); \
	TRIALS_API UInteract(const UInteract&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIALS_API, UInteract); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteract); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteract)


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteract(); \
	friend struct Z_Construct_UClass_UInteract_Statics; \
public: \
	DECLARE_CLASS(UInteract, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Trials"), TRIALS_API) \
	DECLARE_SERIALIZER(UInteract)


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteract() {} \
public: \
	typedef UInteract UClassType; \
	typedef IInteract ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteract() {} \
public: \
	typedef UInteract UClassType; \
	typedef IInteract ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_11_PROLOG
#define FID_Trials_5_0_Source_Trials_Public_Interact_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_SPARSE_DATA \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_RPC_WRAPPERS \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Trials_5_0_Source_Trials_Public_Interact_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_SPARSE_DATA \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Trials_5_0_Source_Trials_Public_Interact_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class UInteract>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Trials_5_0_Source_Trials_Public_Interact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
