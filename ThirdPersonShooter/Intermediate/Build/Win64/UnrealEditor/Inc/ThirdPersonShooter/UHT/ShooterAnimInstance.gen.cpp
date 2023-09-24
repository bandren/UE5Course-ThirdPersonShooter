// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/ShooterAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UShooterAnimInstance();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References
	DEFINE_FUNCTION(UShooterAnimInstance::execupdate_animation_properties)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_delta_time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->update_animation_properties(Z_Param_delta_time);
		P_NATIVE_END;
	}
	void UShooterAnimInstance::StaticRegisterNativesUShooterAnimInstance()
	{
		UClass* Class = UShooterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "update_animation_properties", &UShooterAnimInstance::execupdate_animation_properties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics
	{
		struct ShooterAnimInstance_eventupdate_animation_properties_Parms
		{
			float delta_time;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delta_time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::NewProp_delta_time = { "delta_time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShooterAnimInstance_eventupdate_animation_properties_Parms, delta_time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::NewProp_delta_time,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterAnimInstance, nullptr, "update_animation_properties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::ShooterAnimInstance_eventupdate_animation_properties_Parms), Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShooterAnimInstance);
	UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister()
	{
		return UShooterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UShooterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shooter_character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_shooter_character;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_in_air_MetaData[];
#endif
		static void NewProp_is_in_air_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_in_air;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_accelerating_MetaData[];
#endif
		static void NewProp_is_accelerating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_accelerating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movement_offset_yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_movement_offset_yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_last_movement_offset_yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_last_movement_offset_yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_aiming_MetaData[];
#endif
		static void NewProp_is_aiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_aiming;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShooterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterAnimInstance_update_animation_properties, "update_animation_properties" }, // 711704493
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ShooterAnimInstance.h" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_shooter_character_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_shooter_character = { "shooter_character", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, shooter_character), Z_Construct_UClass_AShooterCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_shooter_character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_shooter_character_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, speed), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_in_air_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_in_air_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->is_in_air = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_in_air = { "is_in_air", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_in_air_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_in_air_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_in_air_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_accelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_accelerating_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->is_accelerating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_accelerating = { "is_accelerating", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_accelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_accelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_accelerating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_movement_offset_yaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "Comment", "/* Offset yaw used for strafing\n\x09 */" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
		{ "ToolTip", "Offset yaw used for strafing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_movement_offset_yaw = { "movement_offset_yaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, movement_offset_yaw), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_movement_offset_yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_movement_offset_yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_last_movement_offset_yaw_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_last_movement_offset_yaw = { "last_movement_offset_yaw", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShooterAnimInstance, last_movement_offset_yaw), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_last_movement_offset_yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_last_movement_offset_yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_aiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_aiming_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->is_aiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_aiming = { "is_aiming", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_aiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_aiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_aiming_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_shooter_character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_in_air,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_accelerating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_movement_offset_yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_last_movement_offset_yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_is_aiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams = {
		&UShooterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton, Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShooterAnimInstance.OuterSingleton;
	}
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<UShooterAnimInstance>()
	{
		return UShooterAnimInstance::StaticClass();
	}
	UShooterAnimInstance::UShooterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterAnimInstance);
	UShooterAnimInstance::~UShooterAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShooterAnimInstance, UShooterAnimInstance::StaticClass, TEXT("UShooterAnimInstance"), &Z_Registration_Info_UClass_UShooterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShooterAnimInstance), 2549021835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterAnimInstance_h_2876956562(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
