// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RgsTile/Public/Behaviors/RgsTileColorBehaviour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRgsTileColorBehaviour() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileBehaviour();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileColorBehaviour();
	RGSTILE_API UClass* Z_Construct_UClass_URgsTileColorBehaviour_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RgsTile();
// End Cross Module References
	void URgsTileColorBehaviour::StaticRegisterNativesURgsTileColorBehaviour()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URgsTileColorBehaviour);
	UClass* Z_Construct_UClass_URgsTileColorBehaviour_NoRegister()
	{
		return URgsTileColorBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_URgsTileColorBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTurnOfOnStepOff_MetaData[];
#endif
		static void NewProp_bTurnOfOnStepOff_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurnOfOnStepOff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URgsTileColorBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URgsTileBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_RgsTile,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileColorBehaviour_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsTileColorBehaviour_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Behaviors/RgsTileColorBehaviour.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Behaviors/RgsTileColorBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_TileColor_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Behaviors/RgsTileColorBehaviour.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_TileColor = { "TileColor", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URgsTileColorBehaviour, TileColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_TileColor_MetaData), Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_TileColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_bTurnOfOnStepOff_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ModuleRelativePath", "Public/Behaviors/RgsTileColorBehaviour.h" },
	};
#endif
	void Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_bTurnOfOnStepOff_SetBit(void* Obj)
	{
		((URgsTileColorBehaviour*)Obj)->bTurnOfOnStepOff = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_bTurnOfOnStepOff = { "bTurnOfOnStepOff", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URgsTileColorBehaviour), &Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_bTurnOfOnStepOff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_bTurnOfOnStepOff_MetaData), Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_bTurnOfOnStepOff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Behaviors/RgsTileColorBehaviour.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URgsTileColorBehaviour, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_MeshComponent_MetaData), Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_MeshComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URgsTileColorBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_TileColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_bTurnOfOnStepOff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URgsTileColorBehaviour_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URgsTileColorBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URgsTileColorBehaviour>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URgsTileColorBehaviour_Statics::ClassParams = {
		&URgsTileColorBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URgsTileColorBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileColorBehaviour_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileColorBehaviour_Statics::Class_MetaDataParams), Z_Construct_UClass_URgsTileColorBehaviour_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URgsTileColorBehaviour_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_URgsTileColorBehaviour()
	{
		if (!Z_Registration_Info_UClass_URgsTileColorBehaviour.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URgsTileColorBehaviour.OuterSingleton, Z_Construct_UClass_URgsTileColorBehaviour_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URgsTileColorBehaviour.OuterSingleton;
	}
	template<> RGSTILE_API UClass* StaticClass<URgsTileColorBehaviour>()
	{
		return URgsTileColorBehaviour::StaticClass();
	}
	URgsTileColorBehaviour::URgsTileColorBehaviour(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URgsTileColorBehaviour);
	URgsTileColorBehaviour::~URgsTileColorBehaviour() {}
	struct Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileColorBehaviour_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileColorBehaviour_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URgsTileColorBehaviour, URgsTileColorBehaviour::StaticClass, TEXT("URgsTileColorBehaviour"), &Z_Registration_Info_UClass_URgsTileColorBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URgsTileColorBehaviour), 4033287211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileColorBehaviour_h_692614661(TEXT("/Script/RgsTile"),
		Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileColorBehaviour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Public_Behaviors_RgsTileColorBehaviour_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
