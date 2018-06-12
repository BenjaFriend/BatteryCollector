// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BatteryPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryPickup() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryPickup();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
// End Cross Module References
	void ABatteryPickup::StaticRegisterNativesABatteryPickup()
	{
	}
	UClass* Z_Construct_UClass_ABatteryPickup_NoRegister()
	{
		return ABatteryPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APickup,
				(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BatteryPickup.h" },
				{ "ModuleRelativePath", "BatteryPickup.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BatteryPower_MetaData[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryPickup.h" },
				{ "ToolTip", "Set the amount of power the battery gives to the character" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BatteryPower = { UE4CodeGen_Private::EPropertyClass::Float, "BatteryPower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABatteryPickup, BatteryPower), METADATA_PARAMS(NewProp_BatteryPower_MetaData, ARRAY_COUNT(NewProp_BatteryPower_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BatteryPower,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABatteryPickup>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABatteryPickup::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ABatteryPickup, 1300277631);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPickup(Z_Construct_UClass_ABatteryPickup, &ABatteryPickup::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
