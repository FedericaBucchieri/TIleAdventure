// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RgsTile/Public/Behaviors/RgsTileFoundableBehaviour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRgsTileFoundableBehaviour() {}
// Cross Module References
	RGSTILE_API UClass* Z_Construct_UClass_ARgsTileGameMode_NoRegister();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileBehaviour();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileFoundableBehaviour();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileFoundableBehaviour_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RgsTile();
// End Cross Module References
	void URgsTileFoundableBehaviour::StaticRegisterNativesURgsTileFoundableBehaviour()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URgsTileFoundableBehaviour);
	UClass* Z_Construct_UClass_URgsTileFoundableBehaviour_NoRegister()
	{
		return URgsTileFoundableBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_URgsTileFoundableBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URgsTileBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_RgsTile,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Behaviors/RgsTileFoundableBehaviour.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Behaviors/RgsTileFoundableBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Behaviors/RgsTileFoundableBehaviour.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URgsTileFoundableBehaviour, GameMode), Z_Construct_UClass_ARgsTileGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::NewProp_GameMode_MetaData), Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::NewProp_GameMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::NewProp_GameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URgsTileFoundableBehaviour>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::ClassParams = {
		&URgsTileFoundableBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::Class_MetaDataParams), Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URgsTileFoundableBehaviour()
	{
		if (!Z_Registration_Info_UClass_URgsTileFoundableBehaviour.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URgsTileFoundableBehaviour.OuterSingleton, Z_Construct_UClass_URgsTileFoundableBehaviour_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URgsTileFoundableBehaviour.OuterSingleton;
	}
	template<> RGSTILE_API UClass* StaticClass<URgsTileFoundableBehaviour>()
	{
		return URgsTileFoundableBehaviour::StaticClass();
	}
	URgsTileFoundableBehaviour::URgsTileFoundableBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URgsTileFoundableBehaviour);
	URgsTileFoundableBehaviour::~URgsTileFoundableBehaviour() {}
	struct Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileFoundableBehaviour_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileFoundableBehaviour_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URgsTileFoundableBehaviour, URgsTileFoundableBehaviour::StaticClass, TEXT("URgsTileFoundableBehaviour"), &Z_Registration_Info_UClass_URgsTileFoundableBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URgsTileFoundableBehaviour), 1930368619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileFoundableBehaviour_h_483544439(TEXT("/Script/RgsTile"),
		Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileFoundableBehaviour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileFoundableBehaviour_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
