// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECTOR_BatteryCollectorCharacter_generated_h
#error "BatteryCollectorCharacter.generated.h already included, missing '#pragma once' in BatteryCollectorCharacter.h"
#endif
#define BATTERYCOLLECTOR_BatteryCollectorCharacter_generated_h

#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_RPC_WRAPPERS
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryCollectorCharacter(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorCharacter(); \
public: \
	DECLARE_CLASS(ABatteryCollectorCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCollectorCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABatteryCollectorCharacter(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorCharacter(); \
public: \
	DECLARE_CLASS(ABatteryCollectorCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCollectorCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryCollectorCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryCollectorCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCollectorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectorCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCollectorCharacter(ABatteryCollectorCharacter&&); \
	NO_API ABatteryCollectorCharacter(const ABatteryCollectorCharacter&); \
public:


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCollectorCharacter(ABatteryCollectorCharacter&&); \
	NO_API ABatteryCollectorCharacter(const ABatteryCollectorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCollectorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryCollectorCharacter)


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABatteryCollectorCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABatteryCollectorCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(ABatteryCollectorCharacter, CollectionSphere); }


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_9_PROLOG
#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_INCLASS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_BatteryCollectorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
