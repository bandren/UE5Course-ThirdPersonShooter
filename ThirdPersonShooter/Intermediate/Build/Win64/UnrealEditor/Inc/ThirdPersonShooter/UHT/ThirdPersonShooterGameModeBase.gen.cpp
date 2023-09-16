// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/ThirdPersonShooterGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonShooterGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References
	void AThirdPersonShooterGameModeBase::StaticRegisterNativesAThirdPersonShooterGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThirdPersonShooterGameModeBase);
	UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase_NoRegister()
	{
		return AThirdPersonShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ThirdPersonShooterGameModeBase.h" },
		{ "ModuleRelativePath", "ThirdPersonShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonShooterGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::ClassParams = {
		&AThirdPersonShooterGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonShooterGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AThirdPersonShooterGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThirdPersonShooterGameModeBase.OuterSingleton, Z_Construct_UClass_AThirdPersonShooterGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AThirdPersonShooterGameModeBase.OuterSingleton;
	}
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AThirdPersonShooterGameModeBase>()
	{
		return AThirdPersonShooterGameModeBase::StaticClass();
	}
	AThirdPersonShooterGameModeBase::AThirdPersonShooterGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonShooterGameModeBase);
	AThirdPersonShooterGameModeBase::~AThirdPersonShooterGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AThirdPersonShooterGameModeBase, AThirdPersonShooterGameModeBase::StaticClass, TEXT("AThirdPersonShooterGameModeBase"), &Z_Registration_Info_UClass_AThirdPersonShooterGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThirdPersonShooterGameModeBase), 4110554254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameModeBase_h_1991791855(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ThirdPersonShooterGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
