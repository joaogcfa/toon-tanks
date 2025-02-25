// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToonTanks/ToonTanksPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToonTanksPlayerController() {}
// Cross Module References
	TOONTANKS_API UClass* Z_Construct_UClass_AToonTanksPlayerController_NoRegister();
	TOONTANKS_API UClass* Z_Construct_UClass_AToonTanksPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ToonTanks();
// End Cross Module References
	void AToonTanksPlayerController::StaticRegisterNativesAToonTanksPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AToonTanksPlayerController);
	UClass* Z_Construct_UClass_AToonTanksPlayerController_NoRegister()
	{
		return AToonTanksPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AToonTanksPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AToonTanksPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ToonTanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AToonTanksPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ToonTanksPlayerController.h" },
		{ "ModuleRelativePath", "ToonTanksPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AToonTanksPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AToonTanksPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AToonTanksPlayerController_Statics::ClassParams = {
		&AToonTanksPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AToonTanksPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AToonTanksPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AToonTanksPlayerController()
	{
		if (!Z_Registration_Info_UClass_AToonTanksPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AToonTanksPlayerController.OuterSingleton, Z_Construct_UClass_AToonTanksPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AToonTanksPlayerController.OuterSingleton;
	}
	template<> TOONTANKS_API UClass* StaticClass<AToonTanksPlayerController>()
	{
		return AToonTanksPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AToonTanksPlayerController);
	struct Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ToonTanksPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ToonTanksPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AToonTanksPlayerController, AToonTanksPlayerController::StaticClass, TEXT("AToonTanksPlayerController"), &Z_Registration_Info_UClass_AToonTanksPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AToonTanksPlayerController), 81449189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ToonTanksPlayerController_h_3297351099(TEXT("/Script/ToonTanks"),
		Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ToonTanksPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ToonTanks_Source_ToonTanks_ToonTanksPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
