// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef RGSTILE_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define RGSTILE_Tile_generated_h

#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_SPARSE_DATA
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_ACCESSORS
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RgsTile"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile) \
	NO_API virtual ~ATile();


#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_23_PROLOG
#define FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_SPARSE_DATA \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_ACCESSORS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RGSTILE_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Feder_OneDrive_Desktop_RgsTile_Source_RgsTile_Tile_h


#define FOREACH_ENUM_ETILETYPE(op) \
	op(ETileType::Normal) \
	op(ETileType::Green) \
	op(ETileType::Red) \
	op(ETileType::Blue) 

enum class ETileType : uint8;
template<> struct TIsUEnumClass<ETileType> { enum { Value = true }; };
template<> RGSTILE_API UEnum* StaticEnum<ETileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
