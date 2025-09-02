// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstro_init() {}
	ASTRO_API UFunction* Z_Construct_UDelegateFunction_Astro_BulletCountUpdatedDelegate__DelegateSignature();
	ASTRO_API UFunction* Z_Construct_UDelegateFunction_Astro_DamagedDelegate__DelegateSignature();
	ASTRO_API UFunction* Z_Construct_UDelegateFunction_Astro_PawnDeathDelegate__DelegateSignature();
	ASTRO_API UFunction* Z_Construct_UDelegateFunction_Astro_SprintStateChangedDelegate__DelegateSignature();
	ASTRO_API UFunction* Z_Construct_UDelegateFunction_Astro_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Astro;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Astro()
	{
		if (!Z_Registration_Info_UPackage__Script_Astro.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Astro_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Astro_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Astro_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Astro_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Astro_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Astro",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFA50C131,
				0xD14B1345,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Astro.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Astro.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Astro(Z_Construct_UPackage__Script_Astro, TEXT("/Script/Astro"), Z_Registration_Info_UPackage__Script_Astro, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFA50C131, 0xD14B1345));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
