// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RgsTileGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ATile;
enum class ETileType : uint8;
#ifdef RGSTILE_RgsTileGameMode_generated_h
#error "RgsTileGameMode.generated.h already included, missing '#pragma once' in RgsTileGameMode.h"
#endif
#define RGSTILE_RgsTileGameMode_generated_h

#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_10_DELEGATE \
RGSTILE_API void FTileFoundDelegate_DelegateWrapper(const FMulticastScriptDelegate& TileFoundDelegate, ATile* founded);


#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_11_DELEGATE \
RGSTILE_API void FToggleTileVisibilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& ToggleTileVisibilityDelegate, ETileType Type, bool bShow);


#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_SPARSE_DATA
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleVisibilityByType); \
	DECLARE_FUNCTION(execTileFoundTriggered); \
	DECLARE_FUNCTION(execGetClosestTileDistancePerType); \
	DECLARE_FUNCTION(execGetTotalTilesOfType); \
	DECLARE_FUNCTION(execGetTilesPerTypeFound);


#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_ACCESSORS
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARgsTileGameMode(); \
	friend struct Z_Construct_UClass_ARgsTileGameMode_Statics; \
public: \
	DECLARE_CLASS(ARgsTileGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/RgsTile"), RGSTILE_API) \
	DECLARE_SERIALIZER(ARgsTileGameMode)


#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	RGSTILE_API ARgsTileGameMode(ARgsTileGameMode&&); \
	RGSTILE_API ARgsTileGameMode(const ARgsTileGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RGSTILE_API, ARgsTileGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARgsTileGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARgsTileGameMode) \
	RGSTILE_API virtual ~ARgsTileGameMode();


#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_16_PROLOG
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_SPARSE_DATA \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_ACCESSORS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RGSTILE_API UClass* StaticClass<class ARgsTileGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_RgsTileGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
