// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstroGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAstroGameMode() {}

// ********** Begin Cross Module References ********************************************************
ASTRO_API UClass* Z_Construct_UClass_AAstroGameMode();
ASTRO_API UClass* Z_Construct_UClass_AAstroGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Astro();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAstroGameMode ***********************************************************
void AAstroGameMode::StaticRegisterNativesAAstroGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAstroGameMode;
UClass* AAstroGameMode::GetPrivateStaticClass()
{
	using TClass = AAstroGameMode;
	if (!Z_Registration_Info_UClass_AAstroGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AstroGameMode"),
			Z_Registration_Info_UClass_AAstroGameMode.InnerSingleton,
			StaticRegisterNativesAAstroGameMode,
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
	return Z_Registration_Info_UClass_AAstroGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AAstroGameMode_NoRegister()
{
	return AAstroGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAstroGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AstroGameMode.h" },
		{ "ModuleRelativePath", "AstroGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstroGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAstroGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Astro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstroGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstroGameMode_Statics::ClassParams = {
	&AAstroGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstroGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstroGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstroGameMode()
{
	if (!Z_Registration_Info_UClass_AAstroGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstroGameMode.OuterSingleton, Z_Construct_UClass_AAstroGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstroGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstroGameMode);
AAstroGameMode::~AAstroGameMode() {}
// ********** End Class AAstroGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ITMO_5_semester_UE_project_Astro_Source_Astro_AstroGameMode_h__Script_Astro_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstroGameMode, AAstroGameMode::StaticClass, TEXT("AAstroGameMode"), &Z_Registration_Info_UClass_AAstroGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstroGameMode), 4217014412U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ITMO_5_semester_UE_project_Astro_Source_Astro_AstroGameMode_h__Script_Astro_3830475808(TEXT("/Script/Astro"),
	Z_CompiledInDeferFile_FID_ITMO_5_semester_UE_project_Astro_Source_Astro_AstroGameMode_h__Script_Astro_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ITMO_5_semester_UE_project_Astro_Source_Astro_AstroGameMode_h__Script_Astro_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
