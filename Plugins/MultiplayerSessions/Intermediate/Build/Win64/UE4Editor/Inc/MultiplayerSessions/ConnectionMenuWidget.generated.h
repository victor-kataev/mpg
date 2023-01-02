// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSIONS_ConnectionMenuWidget_generated_h
#error "ConnectionMenuWidget.generated.h already included, missing '#pragma once' in ConnectionMenuWidget.h"
#endif
#define MULTIPLAYERSESSIONS_ConnectionMenuWidget_generated_h

#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_SPARSE_DATA
#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnectButtonClicked); \
	DECLARE_FUNCTION(execHostButtonClicked); \
	DECLARE_FUNCTION(execOnStartSession); \
	DECLARE_FUNCTION(execOnDestroySession); \
	DECLARE_FUNCTION(execOnCreateSession); \
	DECLARE_FUNCTION(execMenuSetup);


#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnectButtonClicked); \
	DECLARE_FUNCTION(execHostButtonClicked); \
	DECLARE_FUNCTION(execOnStartSession); \
	DECLARE_FUNCTION(execOnDestroySession); \
	DECLARE_FUNCTION(execOnCreateSession); \
	DECLARE_FUNCTION(execMenuSetup);


#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConnectionMenuWidget(); \
	friend struct Z_Construct_UClass_UConnectionMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UConnectionMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UConnectionMenuWidget)


#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUConnectionMenuWidget(); \
	friend struct Z_Construct_UClass_UConnectionMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UConnectionMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(UConnectionMenuWidget)


#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConnectionMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectionMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnectionMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConnectionMenuWidget(UConnectionMenuWidget&&); \
	NO_API UConnectionMenuWidget(const UConnectionMenuWidget&); \
public:


#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConnectionMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConnectionMenuWidget(UConnectionMenuWidget&&); \
	NO_API UConnectionMenuWidget(const UConnectionMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConnectionMenuWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectionMenuWidget)


#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HostButton() { return STRUCT_OFFSET(UConnectionMenuWidget, HostButton); } \
	FORCEINLINE static uint32 __PPO__ConnectButton() { return STRUCT_OFFSET(UConnectionMenuWidget, ConnectButton); }


#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_14_PROLOG
#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_SPARSE_DATA \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_RPC_WRAPPERS \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_INCLASS \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_SPARSE_DATA \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_INCLASS_NO_PURE_DECLS \
	mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<class UConnectionMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID mpg_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_ConnectionMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
