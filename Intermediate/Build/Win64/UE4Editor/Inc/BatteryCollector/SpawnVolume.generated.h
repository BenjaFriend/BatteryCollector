// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef BATTERYCOLLECTOR_SpawnVolume_generated_h
#error "SpawnVolume.generated.h already included, missing '#pragma once' in SpawnVolume.h"
#endif
#define BATTERYCOLLECTOR_SpawnVolume_generated_h

#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSpawningActive) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldSpawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpawningActive(Z_Param_bShouldSpawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomPointInVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetRandomPointInVolume(); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSpawningActive) \
	{ \
		P_GET_UBOOL(Z_Param_bShouldSpawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSpawningActive(Z_Param_bShouldSpawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomPointInVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetRandomPointInVolume(); \
		P_NATIVE_END; \
	}


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASpawnVolume(); \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASpawnVolume(); \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BatteryCollector"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public:


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnVolume)


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WhatToSpawn() { return STRUCT_OFFSET(ASpawnVolume, WhatToSpawn); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeLow() { return STRUCT_OFFSET(ASpawnVolume, SpawnDelayRangeLow); } \
	FORCEINLINE static uint32 __PPO__SpawnDelayRangeHigh() { return STRUCT_OFFSET(ASpawnVolume, SpawnDelayRangeHigh); } \
	FORCEINLINE static uint32 __PPO__WhereToSpawn() { return STRUCT_OFFSET(ASpawnVolume, WhereToSpawn); }


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_9_PROLOG
#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_RPC_WRAPPERS \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_INCLASS \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
	BatteryCollector_Source_BatteryCollector_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollector_Source_BatteryCollector_SpawnVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
