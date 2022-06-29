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
struct FVector;
struct FHitResult;
class APickup;
class UTexture;
#ifdef TRIALS_Zilly_generated_h
#error "Zilly.generated.h already included, missing '#pragma once' in Zilly.h"
#endif
#define TRIALS_Zilly_generated_h

#define Trials_Source_Trials_Public_Zilly_h_10_DELEGATE \
static inline void FSetImageOne_DelegateWrapper(const FMulticastScriptDelegate& SetImageOne) \
{ \
	SetImageOne.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Trials_Source_Trials_Public_Zilly_h_21_SPARSE_DATA
#define Trials_Source_Trials_Public_Zilly_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLookUpRate); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execEndCrouch); \
	DECLARE_FUNCTION(execStartCrouch); \
	DECLARE_FUNCTION(execOnAttackHit); \
	DECLARE_FUNCTION(execAttackInput); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execAttackStart); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execSetNearestItem); \
	DECLARE_FUNCTION(execChangeItem); \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execUseItem);


#define Trials_Source_Trials_Public_Zilly_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLookUpRate); \
	DECLARE_FUNCTION(execTurnAtRate); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execEndCrouch); \
	DECLARE_FUNCTION(execStartCrouch); \
	DECLARE_FUNCTION(execOnAttackHit); \
	DECLARE_FUNCTION(execAttackInput); \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execAttackStart); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execSetNearestItem); \
	DECLARE_FUNCTION(execChangeItem); \
	DECLARE_FUNCTION(execAddToInventory); \
	DECLARE_FUNCTION(execUseItem);


#define Trials_Source_Trials_Public_Zilly_h_21_EVENT_PARMS \
	struct Zilly_eventSetItem10UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem1UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem2UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem3UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem4UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem5UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem6UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem7UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem8UI_Parms \
	{ \
		const UTexture* Image; \
	}; \
	struct Zilly_eventSetItem9UI_Parms \
	{ \
		const UTexture* Image; \
	};


#define Trials_Source_Trials_Public_Zilly_h_21_CALLBACK_WRAPPERS
#define Trials_Source_Trials_Public_Zilly_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZilly(); \
	friend struct Z_Construct_UClass_AZilly_Statics; \
public: \
	DECLARE_CLASS(AZilly, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(AZilly)


#define Trials_Source_Trials_Public_Zilly_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAZilly(); \
	friend struct Z_Construct_UClass_AZilly_Statics; \
public: \
	DECLARE_CLASS(AZilly, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Trials"), NO_API) \
	DECLARE_SERIALIZER(AZilly)


#define Trials_Source_Trials_Public_Zilly_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZilly(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZilly) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZilly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZilly); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZilly(AZilly&&); \
	NO_API AZilly(const AZilly&); \
public:


#define Trials_Source_Trials_Public_Zilly_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZilly(AZilly&&); \
	NO_API AZilly(const AZilly&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZilly); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZilly); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZilly)


#define Trials_Source_Trials_Public_Zilly_h_21_PRIVATE_PROPERTY_OFFSET
#define Trials_Source_Trials_Public_Zilly_h_18_PROLOG \
	Trials_Source_Trials_Public_Zilly_h_21_EVENT_PARMS


#define Trials_Source_Trials_Public_Zilly_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_Zilly_h_21_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_Zilly_h_21_SPARSE_DATA \
	Trials_Source_Trials_Public_Zilly_h_21_RPC_WRAPPERS \
	Trials_Source_Trials_Public_Zilly_h_21_CALLBACK_WRAPPERS \
	Trials_Source_Trials_Public_Zilly_h_21_INCLASS \
	Trials_Source_Trials_Public_Zilly_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Trials_Source_Trials_Public_Zilly_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Trials_Source_Trials_Public_Zilly_h_21_PRIVATE_PROPERTY_OFFSET \
	Trials_Source_Trials_Public_Zilly_h_21_SPARSE_DATA \
	Trials_Source_Trials_Public_Zilly_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_Zilly_h_21_CALLBACK_WRAPPERS \
	Trials_Source_Trials_Public_Zilly_h_21_INCLASS_NO_PURE_DECLS \
	Trials_Source_Trials_Public_Zilly_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIALS_API UClass* StaticClass<class AZilly>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Trials_Source_Trials_Public_Zilly_h


#define FOREACH_ENUM_EATTACKTYPE(op) \
	op(EAttackType::MELEE_FIST) 

enum class EAttackType : uint8;
template<> TRIALS_API UEnum* StaticEnum<EAttackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
