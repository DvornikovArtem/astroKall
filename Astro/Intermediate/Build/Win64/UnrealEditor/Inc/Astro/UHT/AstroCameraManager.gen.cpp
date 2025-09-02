// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstroCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAstroCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ASTRO_API UClass* Z_Construct_UClass_AAstroCameraManager();
ASTRO_API UClass* Z_Construct_UClass_AAstroCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
UPackage* Z_Construct_UPackage__Script_Astro();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAstroCameraManager ******************************************************
void AAstroCameraManager::StaticRegisterNativesAAstroCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAstroCameraManager;
UClass* AAstroCameraManager::GetPrivateStaticClass()
{
	using TClass = AAstroCameraManager;
	if (!Z_Registration_Info_UClass_AAstroCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AstroCameraManager"),
			Z_Registration_Info_UClass_AAstroCameraManager.InnerSingleton,
			StaticRegisterNativesAAstroCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAstroCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AAstroCameraManager_NoRegister()
{
	return AAstroCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAstroCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "AstroCameraManager.h" },
		{ "ModuleRelativePath", "AstroCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstroCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAstroCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Astro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstroCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstroCameraManager_Statics::ClassParams = {
	&AAstroCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstroCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstroCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstroCameraManager()
{
	if (!Z_Registration_Info_UClass_AAstroCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstroCameraManager.OuterSingleton, Z_Construct_UClass_AAstroCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstroCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstroCameraManager);
AAstroCameraManager::~AAstroCameraManager() {}
// ********** End Class AAstroCameraManager ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ITMO_5_semester_UE_project_Astro_Source_Astro_AstroCameraManager_h__Script_Astro_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstroCameraManager, AAstroCameraManager::StaticClass, TEXT("AAstroCameraManager"), &Z_Registration_Info_UClass_AAstroCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstroCameraManager), 1743361698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ITMO_5_semester_UE_project_Astro_Source_Astro_AstroCameraManager_h__Script_Astro_23758522(TEXT("/Script/Astro"),
	Z_CompiledInDeferFile_FID_ITMO_5_semester_UE_project_Astro_Source_Astro_AstroCameraManager_h__Script_Astro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ITMO_5_semester_UE_project_Astro_Source_Astro_AstroCameraManager_h__Script_Astro_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
