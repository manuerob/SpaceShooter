// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpaceShooterManue/SSM_Spaceship_Pawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSM_Spaceship_Pawn() {}
// Cross Module References
	SPACESHOOTERMANUE_API UClass* Z_Construct_UClass_ASSM_Spaceship_Pawn_NoRegister();
	SPACESHOOTERMANUE_API UClass* Z_Construct_UClass_ASSM_Spaceship_Pawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SpaceShooterManue();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
// End Cross Module References
	void ASSM_Spaceship_Pawn::StaticRegisterNativesASSM_Spaceship_Pawn()
	{
	}
	UClass* Z_Construct_UClass_ASSM_Spaceship_Pawn_NoRegister()
	{
		return ASSM_Spaceship_Pawn::StaticClass();
	}
	struct Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentYawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentYawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPitchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPitchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRollSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRollSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollRateMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollRateMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchRateMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchRateMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SpaceShooterManue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SSM_Spaceship_Pawn.h" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_FloatingMovement_MetaData[] = {
		{ "Category", "SSM_Spaceship_Pawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_FloatingMovement = { "FloatingMovement", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, FloatingMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_FloatingMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_FloatingMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, Acceleration), METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentYawSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentYawSpeed = { "CurrentYawSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, CurrentYawSpeed), METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentYawSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentYawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentPitchSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentPitchSpeed = { "CurrentPitchSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, CurrentPitchSpeed), METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentPitchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentPitchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentRollSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentRollSpeed = { "CurrentRollSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, CurrentRollSpeed), METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentRollSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentRollSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_RollRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_RollRateMultiplier = { "RollRateMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, RollRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_RollRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_RollRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_PitchRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "SSM_Spaceship_Pawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_PitchRateMultiplier = { "PitchRateMultiplier", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASSM_Spaceship_Pawn, PitchRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_PitchRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_PitchRateMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_FloatingMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentYawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentPitchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_CurrentRollSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_RollRateMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_PitchRateMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASSM_Spaceship_Pawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::ClassParams = {
		&ASSM_Spaceship_Pawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASSM_Spaceship_Pawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASSM_Spaceship_Pawn, 1683022852);
	template<> SPACESHOOTERMANUE_API UClass* StaticClass<ASSM_Spaceship_Pawn>()
	{
		return ASSM_Spaceship_Pawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASSM_Spaceship_Pawn(Z_Construct_UClass_ASSM_Spaceship_Pawn, &ASSM_Spaceship_Pawn::StaticClass, TEXT("/Script/SpaceShooterManue"), TEXT("ASSM_Spaceship_Pawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASSM_Spaceship_Pawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
