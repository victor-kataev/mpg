// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSessions/Public/ConnectionMenuWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnectionMenuWidget() {}
// Cross Module References
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UConnectionMenuWidget_NoRegister();
	MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UConnectionMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MultiplayerSessions();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConnectionMenuWidget::execConnectButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConnectButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConnectionMenuWidget::execHostButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConnectionMenuWidget::execOnStartSession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartSession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConnectionMenuWidget::execOnDestroySession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDestroySession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConnectionMenuWidget::execOnCreateSession)
	{
		P_GET_UBOOL(Z_Param_bWasSuccessful);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCreateSession(Z_Param_bWasSuccessful);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConnectionMenuWidget::execMenuSetup)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumberOfPublicConnections);
		P_GET_PROPERTY(FStrProperty,Z_Param_TypeOfMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MenuSetup(Z_Param_NumberOfPublicConnections,Z_Param_TypeOfMatch);
		P_NATIVE_END;
	}
	void UConnectionMenuWidget::StaticRegisterNativesUConnectionMenuWidget()
	{
		UClass* Class = UConnectionMenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectButtonClicked", &UConnectionMenuWidget::execConnectButtonClicked },
			{ "HostButtonClicked", &UConnectionMenuWidget::execHostButtonClicked },
			{ "MenuSetup", &UConnectionMenuWidget::execMenuSetup },
			{ "OnCreateSession", &UConnectionMenuWidget::execOnCreateSession },
			{ "OnDestroySession", &UConnectionMenuWidget::execOnDestroySession },
			{ "OnStartSession", &UConnectionMenuWidget::execOnStartSession },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConnectionMenuWidget_ConnectButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectionMenuWidget_ConnectButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//button callback\n" },
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
		{ "ToolTip", "button callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectionMenuWidget_ConnectButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectionMenuWidget, nullptr, "ConnectButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectionMenuWidget_ConnectButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_ConnectButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectionMenuWidget_ConnectButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectionMenuWidget_ConnectButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConnectionMenuWidget_HostButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectionMenuWidget_HostButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// button callback\n" },
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
		{ "ToolTip", "button callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectionMenuWidget_HostButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectionMenuWidget, nullptr, "HostButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectionMenuWidget_HostButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_HostButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectionMenuWidget_HostButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectionMenuWidget_HostButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics
	{
		struct ConnectionMenuWidget_eventMenuSetup_Parms
		{
			int32 NumberOfPublicConnections;
			FString TypeOfMatch;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfPublicConnections;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TypeOfMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::NewProp_NumberOfPublicConnections = { "NumberOfPublicConnections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectionMenuWidget_eventMenuSetup_Parms, NumberOfPublicConnections), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::NewProp_TypeOfMatch = { "TypeOfMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConnectionMenuWidget_eventMenuSetup_Parms, TypeOfMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::NewProp_NumberOfPublicConnections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::NewProp_TypeOfMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_NumberOfPublicConnections", "4" },
		{ "CPP_Default_TypeOfMatch", "FreeForAll" },
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectionMenuWidget, nullptr, "MenuSetup", nullptr, nullptr, sizeof(ConnectionMenuWidget_eventMenuSetup_Parms), Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics
	{
		struct ConnectionMenuWidget_eventOnCreateSession_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((ConnectionMenuWidget_eventOnCreateSession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConnectionMenuWidget_eventOnCreateSession_Parms), &Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\n// Callbacks for the custom delegates on the MultiplayerSessionsSubsystem\n//\n" },
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
		{ "ToolTip", "Callbacks for the custom delegates on the MultiplayerSessionsSubsystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectionMenuWidget, nullptr, "OnCreateSession", nullptr, nullptr, sizeof(ConnectionMenuWidget_eventOnCreateSession_Parms), Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics
	{
		struct ConnectionMenuWidget_eventOnDestroySession_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((ConnectionMenuWidget_eventOnDestroySession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConnectionMenuWidget_eventOnDestroySession_Parms), &Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectionMenuWidget, nullptr, "OnDestroySession", nullptr, nullptr, sizeof(ConnectionMenuWidget_eventOnDestroySession_Parms), Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics
	{
		struct ConnectionMenuWidget_eventOnStartSession_Parms
		{
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((ConnectionMenuWidget_eventOnStartSession_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConnectionMenuWidget_eventOnStartSession_Parms), &Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::NewProp_bWasSuccessful,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConnectionMenuWidget, nullptr, "OnStartSession", nullptr, nullptr, sizeof(ConnectionMenuWidget_eventOnStartSession_Parms), Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConnectionMenuWidget_NoRegister()
	{
		return UConnectionMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UConnectionMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HostButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConnectionMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSessions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConnectionMenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConnectionMenuWidget_ConnectButtonClicked, "ConnectButtonClicked" }, // 3867900177
		{ &Z_Construct_UFunction_UConnectionMenuWidget_HostButtonClicked, "HostButtonClicked" }, // 180807593
		{ &Z_Construct_UFunction_UConnectionMenuWidget_MenuSetup, "MenuSetup" }, // 2594232949
		{ &Z_Construct_UFunction_UConnectionMenuWidget_OnCreateSession, "OnCreateSession" }, // 2242241559
		{ &Z_Construct_UFunction_UConnectionMenuWidget_OnDestroySession, "OnDestroySession" }, // 1953851384
		{ &Z_Construct_UFunction_UConnectionMenuWidget_OnStartSession, "OnStartSession" }, // 663994649
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectionMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ConnectionMenuWidget.h" },
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_HostButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_HostButton = { "HostButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectionMenuWidget, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_HostButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_HostButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_ConnectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConnectionMenuWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_ConnectButton = { "ConnectButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConnectionMenuWidget, ConnectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_ConnectButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_ConnectButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConnectionMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_HostButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConnectionMenuWidget_Statics::NewProp_ConnectButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConnectionMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConnectionMenuWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConnectionMenuWidget_Statics::ClassParams = {
		&UConnectionMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConnectionMenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConnectionMenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConnectionMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConnectionMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConnectionMenuWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConnectionMenuWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConnectionMenuWidget, 2875290394);
	template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<UConnectionMenuWidget>()
	{
		return UConnectionMenuWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConnectionMenuWidget(Z_Construct_UClass_UConnectionMenuWidget, &UConnectionMenuWidget::StaticClass, TEXT("/Script/MultiplayerSessions"), TEXT("UConnectionMenuWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConnectionMenuWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
