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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSM_Spaceship_Pawn_Statics::NewProp_FloatingMovement,
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
	IMPLEMENT_CLASS(ASSM_Spaceship_Pawn, 95877388);
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
