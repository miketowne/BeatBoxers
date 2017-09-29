// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioOculusPrivatePCH.h"
#include "FMODStudioOculus.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FMODStudioOculus() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API class UClass* Z_Construct_UClass_UObject();

	FMODSTUDIOOCULUS_API class UScriptStruct* Z_Construct_UScriptStruct_FFMODOculusRoomParameters();
	FMODSTUDIOOCULUS_API class UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetEarlyReflectionsEnabled();
	FMODSTUDIOOCULUS_API class UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetLateReverberationEnabled();
	FMODSTUDIOOCULUS_API class UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetRoomParameters();
	FMODSTUDIOOCULUS_API class UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics_NoRegister();
	FMODSTUDIOOCULUS_API class UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics();
	FMODSTUDIOOCULUS_API class UClass* Z_Construct_UClass_UFMODOculusSettings_NoRegister();
	FMODSTUDIOOCULUS_API class UClass* Z_Construct_UClass_UFMODOculusSettings();
	FMODSTUDIOOCULUS_API class UPackage* Z_Construct_UPackage__Script_FMODStudioOculus();
class UScriptStruct* FFMODOculusRoomParameters::StaticStruct()
{
	extern FMODSTUDIOOCULUS_API class UPackage* Z_Construct_UPackage__Script_FMODStudioOculus();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FMODSTUDIOOCULUS_API class UScriptStruct* Z_Construct_UScriptStruct_FFMODOculusRoomParameters();
		extern FMODSTUDIOOCULUS_API uint32 Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFMODOculusRoomParameters, Z_Construct_UPackage__Script_FMODStudioOculus(), TEXT("FMODOculusRoomParameters"), sizeof(FFMODOculusRoomParameters), Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFMODOculusRoomParameters(FFMODOculusRoomParameters::StaticStruct, TEXT("/Script/FMODStudioOculus"), TEXT("FMODOculusRoomParameters"), false, nullptr, nullptr);
static struct FScriptStruct_FMODStudioOculus_StaticRegisterNativesFFMODOculusRoomParameters
{
	FScriptStruct_FMODStudioOculus_StaticRegisterNativesFFMODOculusRoomParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FMODOculusRoomParameters")),new UScriptStruct::TCppStructOps<FFMODOculusRoomParameters>);
	}
} ScriptStruct_FMODStudioOculus_StaticRegisterNativesFFMODOculusRoomParameters;
	UScriptStruct* Z_Construct_UScriptStruct_FFMODOculusRoomParameters()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_FMODStudioOculus();
		extern uint32 Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FMODOculusRoomParameters"), sizeof(FFMODOculusRoomParameters), Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FMODOculusRoomParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FFMODOculusRoomParameters>, EStructFlags(0x00000001));
			UProperty* NewProp_RefFar = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefFar"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefFar, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefNear = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefNear"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefNear, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefDown = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefDown"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefDown, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefUp = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefUp"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefUp, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefRight = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefRight, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RefLeft = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RefLeft"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RefLeft, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RoomDepth = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoomDepth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RoomDepth, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RoomHeight = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoomHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RoomHeight, FFMODOculusRoomParameters), 0x0010000000000005);
			UProperty* NewProp_RoomWidth = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("RoomWidth"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RoomWidth, FFMODOculusRoomParameters), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefFar, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefFar, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefFar, TEXT("ToolTip"), TEXT("Far reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefNear, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefNear, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefNear, TEXT("ToolTip"), TEXT("Near reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefDown, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefDown, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefDown, TEXT("ToolTip"), TEXT("Down reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefUp, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefUp, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefUp, TEXT("ToolTip"), TEXT("Up reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefRight, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefRight, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefRight, TEXT("ToolTip"), TEXT("Right reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RefLeft, TEXT("Category"), TEXT("Reflections"));
			MetaData->SetValue(NewProp_RefLeft, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RefLeft, TEXT("ToolTip"), TEXT("Left reflections (0.0 = fully anechoic, 1.0 = fully reflective, but we cap at 0.95)"));
			MetaData->SetValue(NewProp_RoomDepth, TEXT("Category"), TEXT("Room"));
			MetaData->SetValue(NewProp_RoomDepth, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RoomDepth, TEXT("ToolTip"), TEXT("Room depth in unreal units"));
			MetaData->SetValue(NewProp_RoomHeight, TEXT("Category"), TEXT("Room"));
			MetaData->SetValue(NewProp_RoomHeight, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RoomHeight, TEXT("ToolTip"), TEXT("Room height in unreal units"));
			MetaData->SetValue(NewProp_RoomWidth, TEXT("Category"), TEXT("Room"));
			MetaData->SetValue(NewProp_RoomWidth, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusRoomParameters.h"));
			MetaData->SetValue(NewProp_RoomWidth, TEXT("ToolTip"), TEXT("Room width in unreal units"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFMODOculusRoomParameters_CRC() { return 4224066651U; }
	void UFMODOculusBlueprintStatics::StaticRegisterNativesUFMODOculusBlueprintStatics()
	{
		UClass* Class = UFMODOculusBlueprintStatics::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "SetEarlyReflectionsEnabled", (Native)&UFMODOculusBlueprintStatics::execSetEarlyReflectionsEnabled },
			{ "SetLateReverberationEnabled", (Native)&UFMODOculusBlueprintStatics::execSetLateReverberationEnabled },
			{ "SetRoomParameters", (Native)&UFMODOculusBlueprintStatics::execSetRoomParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetEarlyReflectionsEnabled()
	{
		struct FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms
		{
			bool bEnable;
		};
		UObject* Outer=Z_Construct_UClass_UFMODOculusBlueprintStatics();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetEarlyReflectionsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms, bool);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnable, FMODOculusBlueprintStatics_eventSetEarlyReflectionsEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Oculus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Enables or disables early reflections"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetLateReverberationEnabled()
	{
		struct FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms
		{
			bool bEnable;
		};
		UObject* Outer=Z_Construct_UClass_UFMODOculusBlueprintStatics();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetLateReverberationEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04022401, 65535, sizeof(FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEnable, FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms, bool);
			UProperty* NewProp_bEnable = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bEnable"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEnable, FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bEnable, FMODOculusBlueprintStatics_eventSetLateReverberationEnabled_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Oculus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Enables or disables late reverberation"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetRoomParameters()
	{
		struct FMODOculusBlueprintStatics_eventSetRoomParameters_Parms
		{
			FFMODOculusRoomParameters Params;
		};
		UObject* Outer=Z_Construct_UClass_UFMODOculusBlueprintStatics();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetRoomParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04422401, 65535, sizeof(FMODOculusBlueprintStatics_eventSetRoomParameters_Parms));
			UProperty* NewProp_Params = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Params"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Params, FMODOculusBlueprintStatics_eventSetRoomParameters_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FFMODOculusRoomParameters());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Audio|FMOD|Oculus"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusBlueprintStatics.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Default room parameters"));
			MetaData->SetValue(NewProp_Params, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics_NoRegister()
	{
		return UFMODOculusBlueprintStatics::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODOculusBlueprintStatics()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_FMODStudioOculus();
			OuterClass = UFMODOculusBlueprintStatics::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100080;

				OuterClass->LinkChild(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetEarlyReflectionsEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetLateReverberationEnabled());
				OuterClass->LinkChild(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetRoomParameters());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetEarlyReflectionsEnabled(), "SetEarlyReflectionsEnabled"); // 635510469
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetLateReverberationEnabled(), "SetLateReverberationEnabled"); // 1038658182
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UFMODOculusBlueprintStatics_SetRoomParameters(), "SetRoomParameters"); // 2622494462
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODOculusBlueprintStatics> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODOculusBlueprintStatics.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusBlueprintStatics.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODOculusBlueprintStatics, 1697776654);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODOculusBlueprintStatics(Z_Construct_UClass_UFMODOculusBlueprintStatics, &UFMODOculusBlueprintStatics::StaticClass, TEXT("/Script/FMODStudioOculus"), TEXT("UFMODOculusBlueprintStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODOculusBlueprintStatics);
	void UFMODOculusSettings::StaticRegisterNativesUFMODOculusSettings()
	{
	}
	UClass* Z_Construct_UClass_UFMODOculusSettings_NoRegister()
	{
		return UFMODOculusSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODOculusSettings()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_FMODStudioOculus();
			OuterClass = UFMODOculusSettings::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20100086;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_RoomParameters = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RoomParameters"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RoomParameters, UFMODOculusSettings), 0x0010000000004001, Z_Construct_UScriptStruct_FFMODOculusRoomParameters());
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bLateReverberationEnabled, UFMODOculusSettings, bool);
				UProperty* NewProp_bLateReverberationEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bLateReverberationEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bLateReverberationEnabled, UFMODOculusSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bLateReverberationEnabled, UFMODOculusSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bEarlyReflectionsEnabled, UFMODOculusSettings, bool);
				UProperty* NewProp_bEarlyReflectionsEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bEarlyReflectionsEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bEarlyReflectionsEnabled, UFMODOculusSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bEarlyReflectionsEnabled, UFMODOculusSettings), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOculusEnabled, UFMODOculusSettings, bool);
				UProperty* NewProp_bOculusEnabled = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bOculusEnabled"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOculusEnabled, UFMODOculusSettings), 0x0010000000004001, CPP_BOOL_PROPERTY_BITMASK(bOculusEnabled, UFMODOculusSettings), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODOculusSettings> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODOculusSettings.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_RoomParameters, TEXT("Category"), TEXT("Oculus"));
				MetaData->SetValue(NewProp_RoomParameters, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_RoomParameters, TEXT("ToolTip"), TEXT("Default room parameters to apply at startup"));
				MetaData->SetValue(NewProp_bLateReverberationEnabled, TEXT("Category"), TEXT("Oculus"));
				MetaData->SetValue(NewProp_bLateReverberationEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_bLateReverberationEnabled, TEXT("ToolTip"), TEXT("Enable Late Reverb"));
				MetaData->SetValue(NewProp_bEarlyReflectionsEnabled, TEXT("Category"), TEXT("Oculus"));
				MetaData->SetValue(NewProp_bEarlyReflectionsEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_bEarlyReflectionsEnabled, TEXT("ToolTip"), TEXT("Enable Early Reflections"));
				MetaData->SetValue(NewProp_bOculusEnabled, TEXT("Category"), TEXT("Oculus"));
				MetaData->SetValue(NewProp_bOculusEnabled, TEXT("ModuleRelativePath"), TEXT("Classes/FMODOculusSettings.h"));
				MetaData->SetValue(NewProp_bOculusEnabled, TEXT("ToolTip"), TEXT("Enable Oculus plugin"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODOculusSettings, 2879849036);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODOculusSettings(Z_Construct_UClass_UFMODOculusSettings, &UFMODOculusSettings::StaticClass, TEXT("/Script/FMODStudioOculus"), TEXT("UFMODOculusSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODOculusSettings);
	UPackage* Z_Construct_UPackage__Script_FMODStudioOculus()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FMODStudioOculus")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x0542F7D0;
			Guid.B = 0xA2CEAB7D;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
