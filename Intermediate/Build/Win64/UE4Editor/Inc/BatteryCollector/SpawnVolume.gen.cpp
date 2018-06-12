// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SpawnVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnVolume() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ASpawnVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup_NoRegister();
// End Cross Module References
	void ASpawnVolume::StaticRegisterNativesASpawnVolume()
	{
		UClass* Class = ASpawnVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRandomPointInVolume", (Native)&ASpawnVolume::execGetRandomPointInVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume()
	{
		struct SpawnVolume_eventGetRandomPointInVolume_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SpawnVolume_eventGetRandomPointInVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Spawning" },
				{ "ModuleRelativePath", "SpawnVolume.h" },
				{ "ToolTip", "Find a random point within the BoxComponent" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnVolume, "GetRandomPointInVolume", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14820401, sizeof(SpawnVolume_eventGetRandomPointInVolume_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
	{
		return ASpawnVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpawnVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume, "GetRandomPointInVolume" }, // 1301112314
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SpawnVolume.h" },
				{ "ModuleRelativePath", "SpawnVolume.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhereToSpawn_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Spawning" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "SpawnVolume.h" },
				{ "ToolTip", "Box Component to specify where pickups should be spawned" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhereToSpawn = { UE4CodeGen_Private::EPropertyClass::Object, "WhereToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASpawnVolume, WhereToSpawn), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_WhereToSpawn_MetaData, ARRAY_COUNT(NewProp_WhereToSpawn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelayRangeHigh_MetaData[] = {
				{ "Category", "Spawning" },
				{ "ModuleRelativePath", "SpawnVolume.h" },
				{ "ToolTip", "Maximum spawn delay" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelayRangeHigh = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnDelayRangeHigh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ASpawnVolume, SpawnDelayRangeHigh), METADATA_PARAMS(NewProp_SpawnDelayRangeHigh_MetaData, ARRAY_COUNT(NewProp_SpawnDelayRangeHigh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnDelayRangeLow_MetaData[] = {
				{ "Category", "Spawning" },
				{ "ModuleRelativePath", "SpawnVolume.h" },
				{ "ToolTip", "Minimum Spawn delay" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnDelayRangeLow = { UE4CodeGen_Private::EPropertyClass::Float, "SpawnDelayRangeLow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ASpawnVolume, SpawnDelayRangeLow), METADATA_PARAMS(NewProp_SpawnDelayRangeLow_MetaData, ARRAY_COUNT(NewProp_SpawnDelayRangeLow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhatToSpawn_MetaData[] = {
				{ "Category", "Spawning" },
				{ "ModuleRelativePath", "SpawnVolume.h" },
				{ "ToolTip", "The pickup to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WhatToSpawn = { UE4CodeGen_Private::EPropertyClass::Class, "WhatToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(ASpawnVolume, WhatToSpawn), Z_Construct_UClass_APickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WhatToSpawn_MetaData, ARRAY_COUNT(NewProp_WhatToSpawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WhereToSpawn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnDelayRangeHigh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnDelayRangeLow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WhatToSpawn,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASpawnVolume>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASpawnVolume::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnVolume, 2043052666);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnVolume(Z_Construct_UClass_ASpawnVolume, &ASpawnVolume::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ASpawnVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
