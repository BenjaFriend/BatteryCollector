// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BatteryCollectorCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorCharacter() {}
// Cross Module References
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEvent();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABatteryCollectorCharacter_PowerChangeEvent = FName(TEXT("PowerChangeEvent"));
	void ABatteryCollectorCharacter::PowerChangeEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABatteryCollectorCharacter_PowerChangeEvent),NULL);
	}
	void ABatteryCollectorCharacter::StaticRegisterNativesABatteryCollectorCharacter()
	{
		UClass* Class = ABatteryCollectorCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickups", (Native)&ABatteryCollectorCharacter::execCollectPickups },
			{ "GetCurrentPower", (Native)&ABatteryCollectorCharacter::execGetCurrentPower },
			{ "GetInitialPower", (Native)&ABatteryCollectorCharacter::execGetInitialPower },
			{ "UpdatePower", (Native)&ABatteryCollectorCharacter::execUpdatePower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pickups" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Called when er press a key to collect any pickups inside the CollectionSphere" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, "CollectPickups", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower()
	{
		struct BatteryCollectorCharacter_eventGetCurrentPower_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BatteryCollectorCharacter_eventGetCurrentPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Accessor function for current power" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, "GetCurrentPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BatteryCollectorCharacter_eventGetCurrentPower_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower()
	{
		struct BatteryCollectorCharacter_eventGetInitialPower_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BatteryCollectorCharacter_eventGetInitialPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Accessor function for initial power" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, "GetInitialPower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(BatteryCollectorCharacter_eventGetInitialPower_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Blueprint event for the visual effects" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, "PowerChangeEvent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08080800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower()
	{
		struct BatteryCollectorCharacter_eventUpdatePower_Parms
		{
			float PowerChange;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerChange = { UE4CodeGen_Private::EPropertyClass::Float, "PowerChange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BatteryCollectorCharacter_eventUpdatePower_Parms, PowerChange), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerChange,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Function to update the character's power\n@param PowerChange This is the amount to change the power by, and it can be positve or negative" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorCharacter, "UpdatePower", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BatteryCollectorCharacter_eventUpdatePower_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister()
	{
		return ABatteryCollectorCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickups, "CollectPickups" }, // 3144206322
				{ &Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower, "GetCurrentPower" }, // 4196637317
				{ &Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower, "GetInitialPower" }, // 4025222601
				{ &Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEvent, "PowerChangeEvent" }, // 1673441208
				{ &Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower, "UpdatePower" }, // 258899322
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "BatteryCollectorCharacter.h" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPower_MetaData[] = {
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "The current power level of our character" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterPower = { UE4CodeGen_Private::EPropertyClass::Float, "CharacterPower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000020001, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, CharacterPower), METADATA_PARAMS(NewProp_CharacterPower_MetaData, ARRAY_COUNT(NewProp_CharacterPower_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSpeed_MetaData[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Speed when the power level = 0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "BaseSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, BaseSpeed), METADATA_PARAMS(NewProp_BaseSpeed_MetaData, ARRAY_COUNT(NewProp_BaseSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Multiplier for our charcter speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "SpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, SpeedFactor), METADATA_PARAMS(NewProp_SpeedFactor_MetaData, ARRAY_COUNT(NewProp_SpeedFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPower_MetaData[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "The starting power level of our character" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialPower = { UE4CodeGen_Private::EPropertyClass::Float, "InitialPower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000005, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, InitialPower), METADATA_PARAMS(NewProp_InitialPower_MetaData, ARRAY_COUNT(NewProp_InitialPower_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookUpRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, BaseLookUpRate), METADATA_PARAMS(NewProp_BaseLookUpRate_MetaData, ARRAY_COUNT(NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[] = {
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, BaseTurnRate), METADATA_PARAMS(NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Collection Sphere" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere = { UE4CodeGen_Private::EPropertyClass::Object, "CollectionSphere", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_CollectionSphere_MetaData, ARRAY_COUNT(NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Follow camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera = { UE4CodeGen_Private::EPropertyClass::Object, "FollowCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_FollowCamera_MetaData, ARRAY_COUNT(NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BatteryCollectorCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera behind the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CharacterPower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialPower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseLookUpRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseTurnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollectionSphere,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FollowCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABatteryCollectorCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABatteryCollectorCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryCollectorCharacter, 147365099);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorCharacter(Z_Construct_UClass_ABatteryCollectorCharacter, &ABatteryCollectorCharacter::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryCollectorCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
