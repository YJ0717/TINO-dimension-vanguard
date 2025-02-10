// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinoDimesionVanguard/TinoDimesionVanguardGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTinoDimesionVanguardGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TINODIMESIONVANGUARD_API UClass* Z_Construct_UClass_ATinoDimesionVanguardGameMode();
TINODIMESIONVANGUARD_API UClass* Z_Construct_UClass_ATinoDimesionVanguardGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TinoDimesionVanguard();
// End Cross Module References

// Begin Class ATinoDimesionVanguardGameMode
void ATinoDimesionVanguardGameMode::StaticRegisterNativesATinoDimesionVanguardGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATinoDimesionVanguardGameMode);
UClass* Z_Construct_UClass_ATinoDimesionVanguardGameMode_NoRegister()
{
	return ATinoDimesionVanguardGameMode::StaticClass();
}
struct Z_Construct_UClass_ATinoDimesionVanguardGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TinoDimesionVanguardGameMode.h" },
		{ "ModuleRelativePath", "TinoDimesionVanguardGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATinoDimesionVanguardGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATinoDimesionVanguardGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TinoDimesionVanguard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATinoDimesionVanguardGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATinoDimesionVanguardGameMode_Statics::ClassParams = {
	&ATinoDimesionVanguardGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATinoDimesionVanguardGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATinoDimesionVanguardGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATinoDimesionVanguardGameMode()
{
	if (!Z_Registration_Info_UClass_ATinoDimesionVanguardGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATinoDimesionVanguardGameMode.OuterSingleton, Z_Construct_UClass_ATinoDimesionVanguardGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATinoDimesionVanguardGameMode.OuterSingleton;
}
template<> TINODIMESIONVANGUARD_API UClass* StaticClass<ATinoDimesionVanguardGameMode>()
{
	return ATinoDimesionVanguardGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATinoDimesionVanguardGameMode);
ATinoDimesionVanguardGameMode::~ATinoDimesionVanguardGameMode() {}
// End Class ATinoDimesionVanguardGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_TINO_DIMENSION_TinoDimesionVanguard_Source_TinoDimesionVanguard_TinoDimesionVanguardGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATinoDimesionVanguardGameMode, ATinoDimesionVanguardGameMode::StaticClass, TEXT("ATinoDimesionVanguardGameMode"), &Z_Registration_Info_UClass_ATinoDimesionVanguardGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATinoDimesionVanguardGameMode), 1100377793U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TINO_DIMENSION_TinoDimesionVanguard_Source_TinoDimesionVanguard_TinoDimesionVanguardGameMode_h_312283186(TEXT("/Script/TinoDimesionVanguard"),
	Z_CompiledInDeferFile_FID_TINO_DIMENSION_TinoDimesionVanguard_Source_TinoDimesionVanguard_TinoDimesionVanguardGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TINO_DIMENSION_TinoDimesionVanguard_Source_TinoDimesionVanguard_TinoDimesionVanguardGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
