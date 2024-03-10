// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RgsTile/Public/Behaviors/RgsRevealTileBehaviour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRgsRevealTileBehaviour() {}
// Cross Module References
	RGSTILE_API UClass* Z_Construct_UClass_ARgsTileGameMode_NoRegister();
	RGSTILE_API UClass* Z_Construct_UClass_URgsRevealTileBehaviour();
	RGSTILE_API UClass* Z_Construct_UClass_URgsRevealTileBehaviour_NoRegister();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileBehaviour();
	RGSTILE_API UEnum* Z_Construct_UEnum_RgsTile_ETileType();
	UPackage* Z_Construct_UPackage__Script_RgsTile();
// End Cross Module References
	void URgsRevealTileBehaviour::StaticRegisterNativesURgsRevealTileBehaviour()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URgsRevealTileBehaviour);
	UClass* Z_Construct_UClass_URgsRevealTileBehaviour_NoRegister()
	{
		return URgsRevealTileBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_URgsRevealTileBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TypeToReveal_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeToReveal_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TypeToReveal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URgsRevealTileBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URgsTileBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_RgsTile,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URgsRevealTileBehaviour_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsRevealTileBehaviour_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Behaviors/RgsRevealTileBehaviour.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Behaviors/RgsRevealTileBehaviour.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_TypeToReveal_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_TypeToReveal_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Behaviors/RgsRevealTileBehaviour.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_TypeToReveal = { "TypeToReveal", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URgsRevealTileBehaviour, TypeToReveal), Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_TypeToReveal_MetaData), Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_TypeToReveal_MetaData) }; // 4217502351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_GameMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Behaviors/RgsRevealTileBehaviour.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URgsRevealTileBehaviour, GameMode), Z_Construct_UClass_ARgsTileGameMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_GameMode_MetaData), Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_GameMode_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URgsRevealTileBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_TypeToReveal_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_TypeToReveal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URgsRevealTileBehaviour_Statics::NewProp_GameMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URgsRevealTileBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URgsRevealTileBehaviour>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URgsRevealTileBehaviour_Statics::ClassParams = {
		&URgsRevealTileBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URgsRevealTileBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URgsRevealTileBehaviour_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsRevealTileBehaviour_Statics::Class_MetaDataParams), Z_Construct_UClass_URgsRevealTileBehaviour_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URgsRevealTileBehaviour_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URgsRevealTileBehaviour()
	{
		if (!Z_Registration_Info_UClass_URgsRevealTileBehaviour.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URgsRevealTileBehaviour.OuterSingleton, Z_Construct_UClass_URgsRevealTileBehaviour_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URgsRevealTileBehaviour.OuterSingleton;
	}
	template<> RGSTILE_API UClass* StaticClass<URgsRevealTileBehaviour>()
	{
		return URgsRevealTileBehaviour::StaticClass();
	}
	URgsRevealTileBehaviour::URgsRevealTileBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URgsRevealTileBehaviour);
	URgsRevealTileBehaviour::~URgsRevealTileBehaviour() {}
	struct Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsRevealTileBehaviour_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsRevealTileBehaviour_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URgsRevealTileBehaviour, URgsRevealTileBehaviour::StaticClass, TEXT("URgsRevealTileBehaviour"), &Z_Registration_Info_UClass_URgsRevealTileBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URgsRevealTileBehaviour), 3009495210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsRevealTileBehaviour_h_3674261041(TEXT("/Script/RgsTile"),
		Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsRevealTileBehaviour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsRevealTileBehaviour_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
