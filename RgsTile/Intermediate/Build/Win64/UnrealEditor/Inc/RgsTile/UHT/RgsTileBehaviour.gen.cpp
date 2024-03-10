// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RgsTile/Public/Behaviors/RgsTileBehaviour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRgsTileBehaviour() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RGSTILE_API UClass* Z_Construct_UClass_ATile_NoRegister();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileBehaviour();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileBehaviour_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RgsTile();
// End Cross Module References
	void URgsTileBehaviour::StaticRegisterNativesURgsTileBehaviour()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URgsTileBehaviour);
	UClass* Z_Construct_UClass_URgsTileBehaviour_NoRegister()
	{
		return URgsTileBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_URgsTileBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URgsTileBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RgsTile,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileBehaviour_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsTileBehaviour_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Behaviors/RgsTileBehaviour.h" },
		{ "ModuleRelativePath", "Public/Behaviors/RgsTileBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsTileBehaviour_Statics::NewProp_Tile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Behaviors/RgsTileBehaviour.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URgsTileBehaviour_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URgsTileBehaviour, Tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileBehaviour_Statics::NewProp_Tile_MetaData), Z_Construct_UClass_URgsTileBehaviour_Statics::NewProp_Tile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URgsTileBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URgsTileBehaviour_Statics::NewProp_Tile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URgsTileBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URgsTileBehaviour>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URgsTileBehaviour_Statics::ClassParams = {
		&URgsTileBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URgsTileBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileBehaviour_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileBehaviour_Statics::Class_MetaDataParams), Z_Construct_UClass_URgsTileBehaviour_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileBehaviour_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URgsTileBehaviour()
	{
		if (!Z_Registration_Info_UClass_URgsTileBehaviour.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URgsTileBehaviour.OuterSingleton, Z_Construct_UClass_URgsTileBehaviour_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URgsTileBehaviour.OuterSingleton;
	}
	template<> RGSTILE_API UClass* StaticClass<URgsTileBehaviour>()
	{
		return URgsTileBehaviour::StaticClass();
	}
	URgsTileBehaviour::URgsTileBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URgsTileBehaviour);
	URgsTileBehaviour::~URgsTileBehaviour() {}
	struct Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileBehaviour_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileBehaviour_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URgsTileBehaviour, URgsTileBehaviour::StaticClass, TEXT("URgsTileBehaviour"), &Z_Registration_Info_UClass_URgsTileBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URgsTileBehaviour), 791445219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileBehaviour_h_1693598255(TEXT("/Script/RgsTile"),
		Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileBehaviour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileBehaviour_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
