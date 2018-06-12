// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BatteryCollectorGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectorGameMode() {}
// Cross Module References
	BATTERYCOLLECTOR_API UEnum* Z_Construct_UEnum_BatteryCollector_EBatteryPlayState();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_ABatteryCollectorGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EBatteryPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BatteryCollector_EBatteryPlayState, Z_Construct_UPackage__Script_BatteryCollector(), TEXT("EBatteryPlayState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBatteryPlayState(EBatteryPlayState_StaticEnum, TEXT("/Script/BatteryCollector"), TEXT("EBatteryPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BatteryCollector_EBatteryPlayState_CRC() { return 351247098U; }
	UEnum* Z_Construct_UEnum_BatteryCollector_EBatteryPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BatteryCollector();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBatteryPlayState"), 0, Get_Z_Construct_UEnum_BatteryCollector_EBatteryPlayState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBatteryPlayState::EPlaying", (int64)EBatteryPlayState::EPlaying },
				{ "EBatteryPlayState::EGameOver", (int64)EBatteryPlayState::EGameOver },
				{ "EBatteryPlayState::EWon", (int64)EBatteryPlayState::EWon },
				{ "EBatteryPlayState::EUnknown", (int64)EBatteryPlayState::EUnknown },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ToolTip", "enum to store the current state of gameplay" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BatteryCollector,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBatteryPlayState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EBatteryPlayState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ABatteryCollectorGameMode::StaticRegisterNativesABatteryCollectorGameMode()
	{
		UClass* Class = ABatteryCollectorGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", (Native)&ABatteryCollectorGameMode::execGetCurrentState },
			{ "GetPowerToWin", (Native)&ABatteryCollectorGameMode::execGetPowerToWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState()
	{
		struct BatteryCollectorGameMode_eventGetCurrentState_Parms
		{
			EBatteryPlayState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BatteryCollectorGameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_BatteryCollector_EBatteryPlayState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ToolTip", "Returns the current playing state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorGameMode, "GetCurrentState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BatteryCollectorGameMode_eventGetCurrentState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin()
	{
		struct BatteryCollectorGameMode_eventGetPowerToWin_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BatteryCollectorGameMode_eventGetPowerToWin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ToolTip", "Returns power needed to win - need for the HUD" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectorGameMode, "GetPowerToWin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(BatteryCollectorGameMode_eventGetPowerToWin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollector,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ABatteryCollectorGameMode_GetCurrentState, "GetCurrentState" }, // 4218975448
				{ &Z_Construct_UFunction_ABatteryCollectorGameMode_GetPowerToWin, "GetPowerToWin" }, // 192865197
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "BatteryCollectorGameMode.h" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ToolTip", "The actual instance of the HUD" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget = { UE4CodeGen_Private::EPropertyClass::Object, "CurrentWidget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_CurrentWidget_MetaData, ARRAY_COUNT(NewProp_CurrentWidget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ToolTip", "The widget class to use for our HUD screen" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "HUDWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000010005, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorGameMode, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_HUDWidgetClass_MetaData, ARRAY_COUNT(NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerToWin_MetaData[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ToolTip", "The power needed to win the game" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerToWin = { UE4CodeGen_Private::EPropertyClass::Float, "PowerToWin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorGameMode, PowerToWin), METADATA_PARAMS(NewProp_PowerToWin_MetaData, ARRAY_COUNT(NewProp_PowerToWin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[] = {
				{ "BlueprintProtected", "true" },
				{ "Category", "Power" },
				{ "ModuleRelativePath", "BatteryCollectorGameMode.h" },
				{ "ToolTip", "The rate at which the character loses power" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate = { UE4CodeGen_Private::EPropertyClass::Float, "DecayRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010005, 1, nullptr, STRUCT_OFFSET(ABatteryCollectorGameMode, DecayRate), METADATA_PARAMS(NewProp_DecayRate_MetaData, ARRAY_COUNT(NewProp_DecayRate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWidget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HUDWidgetClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerToWin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecayRate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABatteryCollectorGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABatteryCollectorGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
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
	IMPLEMENT_CLASS(ABatteryCollectorGameMode, 897643298);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorGameMode(Z_Construct_UClass_ABatteryCollectorGameMode, &ABatteryCollectorGameMode::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("ABatteryCollectorGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
