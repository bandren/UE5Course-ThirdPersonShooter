// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPersonShooter/ShooterCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterCharacter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter();
	THIRDPERSONSHOOTER_API UClass* Z_Construct_UClass_AShooterCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ThirdPersonShooter();
// End Cross Module References
	DEFINE_FUNCTION(AShooterCharacter::execauto_fire_reset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->auto_fire_reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execfinish_crosshair_fire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->finish_crosshair_fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AShooterCharacter::execget_crosshair_spread_multiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->get_crosshair_spread_multiplier();
		P_NATIVE_END;
	}
	void AShooterCharacter::StaticRegisterNativesAShooterCharacter()
	{
		UClass* Class = AShooterCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "auto_fire_reset", &AShooterCharacter::execauto_fire_reset },
			{ "finish_crosshair_fire", &AShooterCharacter::execfinish_crosshair_fire },
			{ "get_crosshair_spread_multiplier", &AShooterCharacter::execget_crosshair_spread_multiplier },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AShooterCharacter_auto_fire_reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_auto_fire_reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_auto_fire_reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "auto_fire_reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_auto_fire_reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_auto_fire_reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_auto_fire_reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_auto_fire_reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_finish_crosshair_fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_finish_crosshair_fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_finish_crosshair_fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "finish_crosshair_fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_finish_crosshair_fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_finish_crosshair_fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_finish_crosshair_fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_finish_crosshair_fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics
	{
		struct ShooterCharacter_eventget_crosshair_spread_multiplier_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShooterCharacter_eventget_crosshair_spread_multiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AShooterCharacter, nullptr, "get_crosshair_spread_multiplier", nullptr, nullptr, sizeof(Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::ShooterCharacter_eventget_crosshair_spread_multiplier_Parms), Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterCharacter);
	UClass* Z_Construct_UClass_AShooterCharacter_NoRegister()
	{
		return AShooterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AShooterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_camera_boom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_camera_boom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aiming_boom_offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_aiming_boom_offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_default_boom_offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_default_boom_offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_follow_camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_follow_camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_base_yaw_rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_base_yaw_rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_base_pitch_rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_base_pitch_rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hip_yaw_rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hip_yaw_rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hip_pitch_rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hip_pitch_rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aim_yaw_rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_aim_yaw_rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aim_pitch_rate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_aim_pitch_rate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hip_yaw_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hip_yaw_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hip_pitch_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hip_pitch_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aim_yaw_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_aim_yaw_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aim_pitch_scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_aim_pitch_scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fire_sound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_fire_sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_muzzle_flash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_muzzle_flash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hip_fire_montage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_hip_fire_montage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impact_particles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_impact_particles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_beam_particles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_beam_particles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_is_aiming_MetaData[];
#endif
		static void NewProp_is_aiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_is_aiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_camera_default_fov_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_camera_default_fov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_camera_zoomed_fov_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_camera_zoomed_fov;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_camera_fov_interp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_camera_fov_interp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshair_spread_multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_crosshair_spread_multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshair_velocity_factor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_crosshair_velocity_factor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshair_in_air_factor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_crosshair_in_air_factor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshair_aim_factor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_crosshair_aim_factor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshair_shooting_factor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_crosshair_shooting_factor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPersonShooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AShooterCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AShooterCharacter_auto_fire_reset, "auto_fire_reset" }, // 3676522125
		{ &Z_Construct_UFunction_AShooterCharacter_finish_crosshair_fire, "finish_crosshair_fire" }, // 1625353252
		{ &Z_Construct_UFunction_AShooterCharacter_get_crosshair_spread_multiplier, "get_crosshair_spread_multiplier" }, // 3761766463
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterCharacter.h" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_boom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/* Camera boom positioned behind the character\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Camera boom positioned behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_boom = { "camera_boom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, camera_boom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_boom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_boom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aiming_boom_offset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aiming_boom_offset = { "aiming_boom_offset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, aiming_boom_offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aiming_boom_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aiming_boom_offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_default_boom_offset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_default_boom_offset = { "default_boom_offset", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, default_boom_offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_default_boom_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_default_boom_offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_follow_camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/* Camera follows character\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Camera follows character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_follow_camera = { "follow_camera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, follow_camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_follow_camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_follow_camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_yaw_rate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/* Turn rate in degrees / second\n\x09 */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Turn rate in degrees / second" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_yaw_rate = { "base_yaw_rate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, base_yaw_rate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_yaw_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_yaw_rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_pitch_rate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_pitch_rate = { "base_pitch_rate", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, base_pitch_rate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_pitch_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_pitch_rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_rate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Character rotation rate for controller input */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character rotation rate for controller input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_rate = { "hip_yaw_rate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, hip_yaw_rate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_rate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Character rotation rate for controller input */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character rotation rate for controller input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_rate = { "hip_pitch_rate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, hip_pitch_rate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_rate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Character rotation rate for controller input */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character rotation rate for controller input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_rate = { "aim_yaw_rate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, aim_yaw_rate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_rate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Character rotation rate for controller input */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character rotation rate for controller input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_rate = { "aim_pitch_rate", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, aim_pitch_rate), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_rate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_rate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_scale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Character rotation scale for mouse input */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character rotation scale for mouse input" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_scale = { "hip_yaw_scale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, hip_yaw_scale), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_scale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Character rotation scale for mouse input */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character rotation scale for mouse input" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_scale = { "hip_pitch_scale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, hip_pitch_scale), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_scale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Character rotation scale for mouse input */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character rotation scale for mouse input" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_scale = { "aim_yaw_scale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, aim_yaw_scale), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_scale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Character rotation scale for mouse input */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Character rotation scale for mouse input" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_scale = { "aim_pitch_scale", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, aim_pitch_scale), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_fire_sound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/* Sound to play when firing weapon.\n\x09 */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Sound to play when firing weapon." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_fire_sound = { "fire_sound", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, fire_sound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_fire_sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_fire_sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_muzzle_flash_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/* Flash spawned at barrel when firing weapon\n\x09 */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Flash spawned at barrel when firing weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_muzzle_flash = { "muzzle_flash", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, muzzle_flash), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_muzzle_flash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_muzzle_flash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_fire_montage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/* Montage for hip firing weapon\n\x09 */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Montage for hip firing weapon" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_fire_montage = { "hip_fire_montage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, hip_fire_montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_fire_montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_fire_montage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_impact_particles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/* Particles spawned on bullet impact.\n\x09 */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Particles spawned on bullet impact." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_impact_particles = { "impact_particles", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, impact_particles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_impact_particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_impact_particles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_beam_particles_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/* Smoke trail for bullets\n\x09 */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Smoke trail for bullets" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_beam_particles = { "beam_particles", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, beam_particles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_beam_particles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_beam_particles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_is_aiming_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/* Aiming down sights or not\n\x09 */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Aiming down sights or not" },
	};
#endif
	void Z_Construct_UClass_AShooterCharacter_Statics::NewProp_is_aiming_SetBit(void* Obj)
	{
		((AShooterCharacter*)Obj)->is_aiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_is_aiming = { "is_aiming", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AShooterCharacter), &Z_Construct_UClass_AShooterCharacter_Statics::NewProp_is_aiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_is_aiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_is_aiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_default_fov_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "/* Camera field of view\n\x09 */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Camera field of view" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_default_fov = { "camera_default_fov", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, camera_default_fov), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_default_fov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_default_fov_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_zoomed_fov_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_zoomed_fov = { "camera_zoomed_fov", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, camera_zoomed_fov), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_zoomed_fov_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_zoomed_fov_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_fov_interp_speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_fov_interp_speed = { "camera_fov_interp_speed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, camera_fov_interp_speed), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_fov_interp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_fov_interp_speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_spread_multiplier_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "/** Determines spread of cross hairs */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Determines spread of cross hairs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_spread_multiplier = { "crosshair_spread_multiplier", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, crosshair_spread_multiplier), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_spread_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_spread_multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_velocity_factor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "/** Velocity component of crosshair spread */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Velocity component of crosshair spread" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_velocity_factor = { "crosshair_velocity_factor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, crosshair_velocity_factor), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_velocity_factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_velocity_factor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_in_air_factor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "Comment", "/** Velocity component of crosshair spread while in air */" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
		{ "ToolTip", "Velocity component of crosshair spread while in air" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_in_air_factor = { "crosshair_in_air_factor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, crosshair_in_air_factor), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_in_air_factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_in_air_factor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_aim_factor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_aim_factor = { "crosshair_aim_factor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, crosshair_aim_factor), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_aim_factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_aim_factor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_shooting_factor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Crosshairs" },
		{ "ModuleRelativePath", "ShooterCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_shooting_factor = { "crosshair_shooting_factor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AShooterCharacter, crosshair_shooting_factor), METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_shooting_factor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_shooting_factor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShooterCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_boom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aiming_boom_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_default_boom_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_follow_camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_yaw_rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_base_pitch_rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_rate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_yaw_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_pitch_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_yaw_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_aim_pitch_scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_fire_sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_muzzle_flash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_hip_fire_montage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_impact_particles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_beam_particles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_is_aiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_default_fov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_zoomed_fov,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_camera_fov_interp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_spread_multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_velocity_factor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_in_air_factor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_aim_factor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShooterCharacter_Statics::NewProp_crosshair_shooting_factor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterCharacter_Statics::ClassParams = {
		&AShooterCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AShooterCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterCharacter()
	{
		if (!Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton, Z_Construct_UClass_AShooterCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterCharacter.OuterSingleton;
	}
	template<> THIRDPERSONSHOOTER_API UClass* StaticClass<AShooterCharacter>()
	{
		return AShooterCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterCharacter);
	AShooterCharacter::~AShooterCharacter() {}
	struct Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterCharacter, AShooterCharacter::StaticClass, TEXT("AShooterCharacter"), &Z_Registration_Info_UClass_AShooterCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterCharacter), 740144065U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterCharacter_h_4142522319(TEXT("/Script/ThirdPersonShooter"),
		Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Documents_UnrealEngineProjects_ThirdPersonShooter_ThirdPersonShooter_Source_ThirdPersonShooter_ShooterCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
