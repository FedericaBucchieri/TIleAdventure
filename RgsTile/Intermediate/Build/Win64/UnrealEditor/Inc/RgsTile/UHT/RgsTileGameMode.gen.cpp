// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RgsTile/RgsTileGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRgsTileGameMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	RGSTILE_API UClass* Z_Construct_UClass_ARgsTileGameMode();
	RGSTILE_API UClass* Z_Construct_UClass_ARgsTileGameMode_NoRegister();
	RGSTILE_API UClass* Z_Construct_UClass_ATile_NoRegister();
	RGSTILE_API UEnum* Z_Construct_UEnum_RgsTile_ETileType();
	RGSTILE_API UFunction* Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature();
	RGSTILE_API UFunction* Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_RgsTile();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics
	{
		struct _Script_RgsTile_eventTileFoundDelegate_Parms
		{
			ATile* founded;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_founded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::NewProp_founded = { "founded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RgsTile_eventTileFoundDelegate_Parms, founded), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::NewProp_founded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RgsTile, nullptr, "TileFoundDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::_Script_RgsTile_eventTileFoundDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::_Script_RgsTile_eventTileFoundDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTileFoundDelegate_DelegateWrapper(const FMulticastScriptDelegate& TileFoundDelegate, ATile* founded)
{
	struct _Script_RgsTile_eventTileFoundDelegate_Parms
	{
		ATile* founded;
	};
	_Script_RgsTile_eventTileFoundDelegate_Parms Parms;
	Parms.founded=founded;
	TileFoundDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics
	{
		struct _Script_RgsTile_eventToggleTileVisibilityDelegate_Parms
		{
			ETileType Type;
			bool bShow;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_bShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_RgsTile_eventToggleTileVisibilityDelegate_Parms, Type), Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(0, nullptr) }; // 4217502351
	void Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((_Script_RgsTile_eventToggleTileVisibilityDelegate_Parms*)Obj)->bShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_RgsTile_eventToggleTileVisibilityDelegate_Parms), &Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_RgsTile, nullptr, "ToggleTileVisibilityDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::_Script_RgsTile_eventToggleTileVisibilityDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::_Script_RgsTile_eventToggleTileVisibilityDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FToggleTileVisibilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& ToggleTileVisibilityDelegate, ETileType Type, bool bShow)
{
	struct _Script_RgsTile_eventToggleTileVisibilityDelegate_Parms
	{
		ETileType Type;
		bool bShow;
	};
	_Script_RgsTile_eventToggleTileVisibilityDelegate_Parms Parms;
	Parms.Type=Type;
	Parms.bShow=bShow ? true : false;
	ToggleTileVisibilityDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ARgsTileGameMode::execToggleVisibilityByType)
	{
		P_GET_ENUM(ETileType,Z_Param_TileType);
		P_GET_UBOOL(Z_Param_bShow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleVisibilityByType(ETileType(Z_Param_TileType),Z_Param_bShow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARgsTileGameMode::execTileFoundTriggered)
	{
		P_GET_OBJECT(ATile,Z_Param_Tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TileFoundTriggered(Z_Param_Tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARgsTileGameMode::execGetClosestTileDistancePerType)
	{
		P_GET_ENUM(ETileType,Z_Param_TileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetClosestTileDistancePerType(ETileType(Z_Param_TileType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARgsTileGameMode::execGetTotalTilesOfType)
	{
		P_GET_ENUM(ETileType,Z_Param_TileType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalTilesOfType(ETileType(Z_Param_TileType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARgsTileGameMode::execGetTilesPerTypeFound)
	{
		P_GET_ENUM(ETileType,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTilesPerTypeFound(ETileType(Z_Param_type));
		P_NATIVE_END;
	}
	void ARgsTileGameMode::StaticRegisterNativesARgsTileGameMode()
	{
		UClass* Class = ARgsTileGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClosestTileDistancePerType", &ARgsTileGameMode::execGetClosestTileDistancePerType },
			{ "GetTilesPerTypeFound", &ARgsTileGameMode::execGetTilesPerTypeFound },
			{ "GetTotalTilesOfType", &ARgsTileGameMode::execGetTotalTilesOfType },
			{ "TileFoundTriggered", &ARgsTileGameMode::execTileFoundTriggered },
			{ "ToggleVisibilityByType", &ARgsTileGameMode::execToggleVisibilityByType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics
	{
		struct RgsTileGameMode_eventGetClosestTileDistancePerType_Parms
		{
			ETileType TileType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RgsTileGameMode_eventGetClosestTileDistancePerType_Parms, TileType), Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(0, nullptr) }; // 4217502351
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RgsTileGameMode_eventGetClosestTileDistancePerType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::NewProp_TileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::NewProp_TileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the distance from the player to the closest Tile of Type (that the player has not found yet).\n// Returns -1 if all Type Tiles have been found.\n// Distance is defined as the number of tiles that the player has to move (horizontally and vertically)\n// to reach the closest Green Tile.\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the distance from the player to the closest Tile of Type (that the player has not found yet).\nReturns -1 if all Type Tiles have been found.\nDistance is defined as the number of tiles that the player has to move (horizontally and vertically)\nto reach the closest Green Tile." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARgsTileGameMode, nullptr, "GetClosestTileDistancePerType", nullptr, nullptr, Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::RgsTileGameMode_eventGetClosestTileDistancePerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::RgsTileGameMode_eventGetClosestTileDistancePerType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics
	{
		struct RgsTileGameMode_eventGetTilesPerTypeFound_Parms
		{
			ETileType type;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RgsTileGameMode_eventGetTilesPerTypeFound_Parms, type), Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(0, nullptr) }; // 4217502351
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RgsTileGameMode_eventGetTilesPerTypeFound_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the number of Tiles per type that the player found.\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the number of Tiles per type that the player found." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARgsTileGameMode, nullptr, "GetTilesPerTypeFound", nullptr, nullptr, Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::RgsTileGameMode_eventGetTilesPerTypeFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::RgsTileGameMode_eventGetTilesPerTypeFound_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics
	{
		struct RgsTileGameMode_eventGetTotalTilesOfType_Parms
		{
			ETileType TileType;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RgsTileGameMode_eventGetTotalTilesOfType_Parms, TileType), Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(0, nullptr) }; // 4217502351
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RgsTileGameMode_eventGetTotalTilesOfType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::NewProp_TileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::NewProp_TileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the total number of Tiles per Type in the tile grid.\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the total number of Tiles per Type in the tile grid." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARgsTileGameMode, nullptr, "GetTotalTilesOfType", nullptr, nullptr, Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::RgsTileGameMode_eventGetTotalTilesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::RgsTileGameMode_eventGetTotalTilesOfType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics
	{
		struct RgsTileGameMode_eventTileFoundTriggered_Parms
		{
			ATile* Tile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Tile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::NewProp_Tile = { "Tile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RgsTileGameMode_eventTileFoundTriggered_Parms, Tile), Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::NewProp_Tile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Method called when the OnTileFound delegate is broadcasted\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the OnTileFound delegate is broadcasted" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARgsTileGameMode, nullptr, "TileFoundTriggered", nullptr, nullptr, Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::RgsTileGameMode_eventTileFoundTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::RgsTileGameMode_eventTileFoundTriggered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics
	{
		struct RgsTileGameMode_eventToggleVisibilityByType_Parms
		{
			ETileType TileType;
			bool bShow;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileType;
		static void NewProp_bShow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::NewProp_TileType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RgsTileGameMode_eventToggleVisibilityByType_Parms, TileType), Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(0, nullptr) }; // 4217502351
	void Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::NewProp_bShow_SetBit(void* Obj)
	{
		((RgsTileGameMode_eventToggleVisibilityByType_Parms*)Obj)->bShow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::NewProp_bShow = { "bShow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RgsTileGameMode_eventToggleVisibilityByType_Parms), &Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::NewProp_bShow_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::NewProp_TileType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::NewProp_TileType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::NewProp_bShow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Method called when the OnTypeVisibilityToggle is broadcasted\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Method called when the OnTypeVisibilityToggle is broadcasted" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARgsTileGameMode, nullptr, "ToggleVisibilityByType", nullptr, nullptr, Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::RgsTileGameMode_eventToggleVisibilityByType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::RgsTileGameMode_eventToggleVisibilityByType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARgsTileGameMode);
	UClass* Z_Construct_UClass_ARgsTileGameMode_NoRegister()
	{
		return ARgsTileGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARgsTileGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileGridSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfTilesPerType_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumberOfTilesPerType_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NumberOfTilesPerType_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfTilesPerType_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NumberOfTilesPerType;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TileClassMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileClassMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileClassMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileClassMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TileClassMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTileFound_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTileFound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTypeVisibilityToggle_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTypeVisibilityToggle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GridTilesMap_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GridTilesMap_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GridTilesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridTilesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GridTilesMap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TilesFound_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TilesFound_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TilesFound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARgsTileGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RgsTile,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARgsTileGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARgsTileGameMode_GetClosestTileDistancePerType, "GetClosestTileDistancePerType" }, // 1853571626
		{ &Z_Construct_UFunction_ARgsTileGameMode_GetTilesPerTypeFound, "GetTilesPerTypeFound" }, // 3240219071
		{ &Z_Construct_UFunction_ARgsTileGameMode_GetTotalTilesOfType, "GetTotalTilesOfType" }, // 2188241104
		{ &Z_Construct_UFunction_ARgsTileGameMode_TileFoundTriggered, "TileFoundTriggered" }, // 3284366946
		{ &Z_Construct_UFunction_ARgsTileGameMode_ToggleVisibilityByType, "ToggleVisibilityByType" }, // 2806791231
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RgsTileGameMode.h" },
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileGridSize_MetaData[] = {
		{ "Category", "Configuration" },
		{ "ClampMin", "3" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the size of the tile grid to generate.\n// Must be at least 3.\n// Can be changed in the \"TileGameModeBP\" blueprint.\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the size of the tile grid to generate.\nMust be at least 3.\nCan be changed in the \"TileGameModeBP\" blueprint." },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileGridSize = { "TileGridSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, TileGridSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileGridSize_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileGridSize_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_ValueProp = { "NumberOfTilesPerType", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_Key_KeyProp = { "NumberOfTilesPerType_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(0, nullptr) }; // 4217502351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_MetaData[] = {
		{ "Category", "Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the number of Tiles per type to randomly place in the tile grid.\n// Each tile number Must be at least 1.\n// Can be changed in the \"TileGameModeBP\" blueprint.\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the number of Tiles per type to randomly place in the tile grid.\nEach tile number Must be at least 1.\nCan be changed in the \"TileGameModeBP\" blueprint." },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType = { "NumberOfTilesPerType", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, NumberOfTilesPerType), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_MetaData) }; // 4217502351
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_ValueProp = { "TileClassMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_Key_KeyProp = { "TileClassMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(0, nullptr) }; // 4217502351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_MetaData[] = {
		{ "Category", "Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A Map representing the class of tile tipe to be spawned \n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Map representing the class of tile tipe to be spawned" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap = { "TileClassMap", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, TileClassMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_MetaData) }; // 4217502351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GroundLevel_MetaData[] = {
		{ "Category", "Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Value representing the ground height for spawning tiles\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value representing the ground height for spawning tiles" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GroundLevel = { "GroundLevel", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, GroundLevel), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GroundLevel_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GroundLevel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTileFound_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom Event to be triggered when a tile is found by the player\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Event to be triggered when a tile is found by the player" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTileFound = { "OnTileFound", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, OnTileFound), Z_Construct_UDelegateFunction_RgsTile_TileFoundDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTileFound_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTileFound_MetaData) }; // 2784572845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTypeVisibilityToggle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Custom Event to be triggered when all the tiles of a type must be shown or hidden\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Event to be triggered when all the tiles of a type must be shown or hidden" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTypeVisibilityToggle = { "OnTypeVisibilityToggle", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, OnTypeVisibilityToggle), Z_Construct_UDelegateFunction_RgsTile_ToggleTileVisibilityDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTypeVisibilityToggle_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTypeVisibilityToggle_MetaData) }; // 3771378108
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_PlayerPawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player Pawn variable for convenience\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Pawn variable for convenience" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_PlayerPawn_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_PlayerPawn_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_ValueProp = { "GridTilesMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UEnum_RgsTile_ETileType, METADATA_PARAMS(0, nullptr) }; // 4217502351
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_Key_KeyProp = { "GridTilesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A Map representing the tiles of the grid\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A Map representing the tiles of the grid" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap = { "GridTilesMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, GridTilesMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_MetaData) }; // 4217502351
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TilesFound_Inner = { "TilesFound", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TilesFound_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// An Array representing the tiles already found by the player\n" },
#endif
		{ "ModuleRelativePath", "RgsTileGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An Array representing the tiles already found by the player" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TilesFound = { "TilesFound", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARgsTileGameMode, TilesFound), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TilesFound_MetaData), Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TilesFound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARgsTileGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_NumberOfTilesPerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TileClassMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GroundLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTileFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_OnTypeVisibilityToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_PlayerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_GridTilesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TilesFound_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARgsTileGameMode_Statics::NewProp_TilesFound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARgsTileGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARgsTileGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARgsTileGameMode_Statics::ClassParams = {
		&ARgsTileGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARgsTileGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARgsTileGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARgsTileGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARgsTileGameMode()
	{
		if (!Z_Registration_Info_UClass_ARgsTileGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARgsTileGameMode.OuterSingleton, Z_Construct_UClass_ARgsTileGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARgsTileGameMode.OuterSingleton;
	}
	template<> RGSTILE_API UClass* StaticClass<ARgsTileGameMode>()
	{
		return ARgsTileGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARgsTileGameMode);
	ARgsTileGameMode::~ARgsTileGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARgsTileGameMode, ARgsTileGameMode::StaticClass, TEXT("ARgsTileGameMode"), &Z_Registration_Info_UClass_ARgsTileGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARgsTileGameMode), 1193699793U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_1542591571(TEXT("/Script/RgsTile"),
		Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
