// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIALS_PuzzleTrigger_generated_h
#error "PuzzleTrigger.generated.h already included, missing '#pragma once' in PuzzleTrigger.h"
#endif
#define TRIALS_PuzzleTrigger_generated_h

#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_SPARSE_DATA
#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_RPC_WRAPPERS
#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_EVENT_PARMS
#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_CALLBACK_WRAPPERS
#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleTrigger(UPuzzleTrigger&&); \
	NO_API UPuzzleTrigger(const UPuzzleTrigger&); \
public:


#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleTrigger(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleTrigger(UPuzzleTrigger&&); \
	NO_API UPuzzleTrigger(const UPuzzleTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleTrigger); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleTrigger); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleTrigger)


#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPuzzleTrigger(); \
	friend struct Z_Construct_UClass_UPuzzleTrigger_Statics; \
public: \
	DECLARE_CLASS(UPuzzleTrigger, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleTrigger)


#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_GENERATED_UINTERFACE_BODY() \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_GENERATED_UINTERFACE_BODY() \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPuzzleTrigger() {} \
public: \
	typedef UPuzzleTrigger UClassType; \
	typedef IPuzzleTrigger ThisClass; \
	static void Execute_Activate(UObject* O); \
	static void Execute_Deactivate(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Trials_Source_Trials_Public_PuzzleTrigger_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPuzzleTrigger() {} \
public: \
	typedef UPuzzleTrigger UClassType; \
	typedef IPuzzleTrigger ThisClass; \
	static void Execute_Activate(UObject* O); \
	static void Execute_Deactivate(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Trials_Source_Trials_Public_PuzzleTrigger_h_10_PROLOG \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_EVENT_PARMS


#define Trials_Source_Trials_Public_PuzzleTrigger_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_SPARSE_DATA \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_RPC_WRAPPERS \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_CALLBACK_WRAPPERS \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Trials_Source_Trials_Public_PuzzleTrigger_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_SPARSE_DATA \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_CALLBACK_WRAPPERS \
	Trials_Source_Trials_Public_PuzzleTrigger_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class UPuzzleTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Trials_Source_Trials_Public_PuzzleTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
