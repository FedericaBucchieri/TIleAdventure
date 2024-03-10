// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RgsTile/TileHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	RGSTILE_API UClass* Z_Construct_UClass_ATileHUD();
	RGSTILE_API UClass* Z_Construct_UClass_ATileHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RgsTile();
// End Cross Module References
	static FName NAME_ATileHUD_ShowEndScreen = FName(TEXT("ShowEndScreen"));
	void ATileHUD::ShowEndScreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATileHUD_ShowEndScreen),NULL);
	}
	void ATileHUD::StaticRegisterNativesATileHUD()
	{
	}
	struct Z_Construct_UFunction_ATileHUD_ShowEndScreen_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATileHUD_ShowEndScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "TileHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATileHUD_ShowEndScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATileHUD, nullptr, "ShowEndScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATileHUD_ShowEndScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATileHUD_ShowEndScreen_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATileHUD_ShowEndScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATileHUD_ShowEndScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATileHUD);
	UClass* Z_Construct_UClass_ATileHUD_NoRegister()
	{
		return ATileHUD::StaticClass();
	}
	struct Z_Construct_UClass_ATileHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATileHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_RgsTile,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATileHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATileHUD_ShowEndScreen, "ShowEndScreen" }, // 1615618403
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATileHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATileHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "TileHUD.h" },
		{ "ModuleRelativePath", "TileHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATileHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATileHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATileHUD_Statics::ClassParams = {
		&ATileHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATileHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ATileHUD_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATileHUD()
	{
		if (!Z_Registration_Info_UClass_ATileHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATileHUD.OuterSingleton, Z_Construct_UClass_ATileHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATileHUD.OuterSingleton;
	}
	template<> RGSTILE_API UClass* StaticClass<ATileHUD>()
	{
		return ATileHUD::StaticClass();
	}
	ATileHUD::ATileHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATileHUD);
	ATileHUD::~ATileHUD() {}
	struct Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_TileHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_TileHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATileHUD, ATileHUD::StaticClass, TEXT("ATileHUD"), &Z_Registration_Info_UClass_ATileHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATileHUD), 1896850677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_TileHUD_h_3302858318(TEXT("/Script/RgsTile"),
		Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_TileHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_TileHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
