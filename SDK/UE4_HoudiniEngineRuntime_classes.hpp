#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_HoudiniEngineRuntime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class HoudiniEngineRuntime.HoudiniActor
// 0x0000 (0x0388 - 0x0388)
class AHoudiniActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniActor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniArchonLevelGraph
// 0x0048 (0x0070 - 0x0028)
class UHoudiniArchonLevelGraph : public UObject
{
public:
	TArray<struct FHoudiniArchonLevelGraphZone>        Zones;                                                    // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FHoudiniArchonLevelGraphLink>        Links;                                                    // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0048(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniArchonLevelGraph");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniArchonLevelGraphActor
// 0x0000 (0x0388 - 0x0388)
class AHoudiniArchonLevelGraphActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniArchonLevelGraphActor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAsset
// 0x0030 (0x0058 - 0x0028)
class UHoudiniAsset : public UObject
{
public:
	class FString                                      AssetFileName;                                            // 0x0028(0x0010) (ZeroConstructor)
	class UThumbnailInfo*                              ThumbnailInfo;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAsset");
		return ptr;
	}


	bool IsAssetNonCommercial();
	bool IsAssetLimitedCommercial();
	bool IsAssetFileValid();
	bool IsAssetDefinitionOutdated();
	class FString GetFirstContainedAssetName();
	TArray<class FString> GetContainedAssetNames();
	class FString GetAssetFileName();
	class UHoudiniAssetInstance* CreateHoudiniAssetInstance(class UObject* Outer);
};


// Class HoudiniEngineRuntime.HoudiniAssetActor
// 0x0010 (0x0398 - 0x0388)
class AHoudiniAssetActor : public AActor
{
public:
	class UHoudiniAssetComponent*                      HoudiniAssetComponent;                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0390(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetActor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetComponent
// 0x0270 (0x0A80 - 0x0810)
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                    // 0x0810(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionTraceFlag>                   GeneratedCollisionTraceFlag;                              // 0x0818(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0819(0x0003) MISSED OFFSET
	int                                                GeneratedLightMapResolution;                              // 0x081C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedLpvBiasMultiplier;                               // 0x0820(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FWalkableSlopeOverride                      GeneratedWalkableSlopeOverride;                           // 0x0824(0x0010) (Edit, IsPlainOldData)
	int                                                GeneratedLightMapCoordinateIndex;                         // 0x0834(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bGeneratedUseMaximumStreamingTexelRatio : 1;              // 0x0838(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0839(0x0003) MISSED OFFSET
	float                                              GeneratedStreamingDistanceMultiplier;                     // 0x083C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                          // 0x0840(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                   // 0x0848(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x228];                                     // 0x0858(0x0228) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponent");
		return ptr;
	}


	int GetAssetId();
};


// Class HoudiniEngineRuntime.HoudiniAssetParameter
// 0x0070 (0x0098 - 0x0028)
class UHoudiniAssetParameter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameter");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInput
// 0x0040 (0x00D8 - 0x0098)
class UHoudiniAssetInput : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0098(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInput");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetInstance
// 0x0338 (0x0360 - 0x0028)
class UHoudiniAssetInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x338];                                     // 0x0028(0x0338) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstance");
		return ptr;
	}


	bool SetPreset(class UHoudiniAssetPreset* Preset, bool bCook);
	bool SetDefaultPreset(bool bCook);
	bool IsValidPreset(class UHoudiniAssetPreset* Preset);
	bool IsValidAssetInstance();
	bool IsInstantiatedWithErrors();
	bool IsCookedWithErrors();
	bool InstantiateAssetNameAndCook(const class FString& InAssetToInstantiate, bool bGenerateGeometry, bool bPreserveTransforms);
	bool InstantiateAssetName(const class FString& InAssetToInstantiate);
	bool InstantiateAndCook(bool bGenerateGeometry, bool bPreserveTransforms);
	bool Instantiate();
	bool HasParameters();
	bool HasInputs();
	bool HasBeenCooked();
	TArray<struct FCustomMeshTriangle> GetRawTriangles(int HoudiniPartObjectIndex, bool bScale, bool bSwapYZAxis, bool bPatchWindingOrder);
	int GetRawTriangleCount(int HoudiniPartObjectIndex);
	TArray<struct FVector> GetRawPoints(int HoudiniPartObjectIndex, bool bScale, bool bSwapYZAxis);
	int GetRawPointCount(int HoudiniPartObjectIndex);
	class FString GetRawHoudiniPartObjectName(int HoudiniPartObjectIndex, bool bUseHash);
	TArray<struct FVector> GetRawAttributePointVectors(int HoudiniPartObjectIndex, const class FString& AttributeName, bool bScale, bool bSwapYZAxis);
	int GetRawAttributePointTupleSize(int HoudiniPartObjectIndex, const class FString& AttributeName);
	TArray<class FString> GetRawAttributePointStrings(int HoudiniPartObjectIndex, const class FString& AttributeName);
	TArray<class UObject*> GetRawAttributePointObjects(int HoudiniPartObjectIndex, const class FString& AttributeName);
	TArray<int> GetRawAttributePointIntegers(int HoudiniPartObjectIndex, const class FString& AttributeName);
	TArray<float> GetRawAttributePointFloats(int HoudiniPartObjectIndex, const class FString& AttributeName);
	int GetParameterCount();
	class UHoudiniParameter* GetParameterByName(const class FString& ParameterName);
	class UHoudiniParameter* GetParameterByLabel(const class FString& ParameterLabel);
	class FString GetInstantiatedAssetName();
	int GetInputCount();
	class UHoudiniInput* GetInputByName(const class FString& InputName);
	class UHoudiniInput* GetInput(int Index);
	int GetHoudiniPartObjectCount();
	class UHoudiniAsset* GetHoudiniAsset();
	class FString GetHelp();
	class FString GetCookState();
	class FString GetCookLog();
	struct FTransform GetAssetTransform();
	int GetAssetCookCount();
	TArray<class UHoudiniParameter*> GetAllParametersOfClass(class UClass* ParameterClass);
	TArray<class UHoudiniParameter*> GetAllParameters();
	bool DoesPointAttributeExist(int HoudiniPartObjectIndex, const class FString& AttributeName);
	bool DeleteAsset(bool bDeleteGeneratedGeometry);
	class UHoudiniAssetPreset* CreatePreset(class UObject* Outer);
	class UHoudiniAssetPreset* CreateDefaultPreset(class UObject* Outer);
	class UHoudiniAssetInstance* STATIC_CreateAssetInstance(class UHoudiniAsset* HoudiniAsset, class UObject* Outer);
	bool CookAsset(bool bGenerateGeometry, bool bPreserveTransforms);
};


// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// 0x0000 (0x0098 - 0x0098)
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterButton");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// 0x0038 (0x00D0 - 0x0098)
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0098(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterChoice");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// 0x0018 (0x00B0 - 0x0098)
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0098(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterColor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// 0x0020 (0x00B8 - 0x0098)
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFile");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// 0x0030 (0x00C8 - 0x0098)
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFloat");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// 0x0000 (0x0098 - 0x0098)
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolder");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// 0x0000 (0x0098 - 0x0098)
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// 0x0030 (0x00C8 - 0x0098)
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterInt");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// 0x0000 (0x0098 - 0x0098)
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterLabel");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// 0x0010 (0x00A8 - 0x0098)
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// 0x0010 (0x00A8 - 0x0098)
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterString");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterObject
// 0x0020 (0x00C8 - 0x00A8)
class UHoudiniAssetParameterObject : public UHoudiniAssetParameterString
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterObject");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat
// 0x0008 (0x00B0 - 0x00A8)
class UHoudiniAssetParameterRampCurveFloat : public UCurveFloat
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor
// 0x0018 (0x0208 - 0x01F0)
class UHoudiniAssetParameterRampCurveColor : public UCurveLinearColor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// 0x0018 (0x00C0 - 0x00A8)
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameterMultiparm
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRamp");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// 0x0000 (0x0098 - 0x0098)
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// 0x0010 (0x00A8 - 0x0098)
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0098(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterToggle");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetParameterVector3
// 0x0000 (0x00C8 - 0x00C8)
class UHoudiniAssetParameterVector3 : public UHoudiniAssetParameterFloat
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterVector3");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniAssetPreset
// 0x0038 (0x0060 - 0x0028)
class UHoudiniAssetPreset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetPreset");
		return ptr;
	}


	bool ApplyTo(class UHoudiniAssetInstance* HoudiniAssetInstance);
};


// Class HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHoudiniBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary");
		return ptr;
	}


	class UHoudiniAssetInstance* STATIC_SetParameterIntegerValueAtIndex(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, int Value, int idx, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterIntegerValue(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, int Value, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterIntegerArray(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, TArray<int> Values, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFloatVectorArray(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, TArray<struct FVector> Values, bool bChangeScale, bool bSwapYZAxis, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFloatVector(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const struct FVector& Vector, bool bChangeScale, bool bSwapYZAxis, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFloatValueAtIndex(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, float Value, int idx, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFloatValue(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, float Value, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFloatRotator(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const struct FRotator& Rotator, bool bSwapYZAxis, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFloatQuaternion(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const struct FQuat& Quat, bool bSwapYZAxis, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFloatArray(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, TArray<float> Values, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFileValueString(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const class FString& FilePath, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetParameterFileValuePath(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const struct FFilePath& FilePath, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetInputs(class UHoudiniAssetInstance* HoudiniAssetInstance, TArray<class UObject*> ObjectsToInput, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_SetInput(class UHoudiniAssetInstance* HoudiniAssetInstance, class UObject* ObjectToInput, int Index, bool* bError, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_InstantiateAssetName(class UHoudiniAsset* HoudiniAsset, class UObject* Outer, const class FString& AssetName, bool* bInstantiatedWithErrors, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_Instantiate(class UHoudiniAsset* HoudiniAsset, class UObject* Outer, bool* bInstantiatedWithErrors, class FString* ResultDescription);
	class UHoudiniAssetInstance* STATIC_Cook(class UHoudiniAssetInstance* HoudiniAssetInstance, bool bGenerateGeometry, bool bPreserveTransforms, bool* bCookedWithErrors, class FString* ResultDescription);
};


// Class HoudiniEngineRuntime.HoudiniBlueprintPatternHandleComponent
// 0x0020 (0x0830 - 0x0810)
class UHoudiniBlueprintPatternHandleComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0810(0x0004) MISSED OFFSET
	int                                                HandleIndex;                                              // 0x0814(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HandleOrder;                                              // 0x0818(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0820(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0828(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniBlueprintPatternHandleComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniEngineBrushBuilder
// 0x0008 (0x0088 - 0x0080)
class UHoudiniEngineBrushBuilder : public UBrushBuilder
{
public:
	struct FName                                       GroupName;                                                // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniEngineBrushBuilder");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGenerator
// 0x0018 (0x0040 - 0x0028)
class UHoudiniGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGenerator");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorBrush
// 0x0008 (0x0048 - 0x0040)
class UHoudiniGeneratorBrush : public UHoudiniGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorBrush");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorAudioVolume
// 0x0000 (0x0048 - 0x0048)
class UHoudiniGeneratorAudioVolume : public UHoudiniGeneratorBrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorAudioVolume");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorDestructibleMesh
// 0x0008 (0x0048 - 0x0040)
class UHoudiniGeneratorDestructibleMesh : public UHoudiniGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorDestructibleMesh");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorFoliageVolume
// 0x0000 (0x0048 - 0x0048)
class UHoudiniGeneratorFoliageVolume : public UHoudiniGeneratorBrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorFoliageVolume");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorHeightfield
// 0x0000 (0x0040 - 0x0040)
class UHoudiniGeneratorHeightfield : public UHoudiniGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorHeightfield");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorInstancedFoliage
// 0x0008 (0x0048 - 0x0040)
class UHoudiniGeneratorInstancedFoliage : public UHoudiniGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorInstancedFoliage");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorInstances
// 0x0000 (0x0040 - 0x0040)
class UHoudiniGeneratorInstances : public UHoudiniGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorInstances");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorLandscape
// 0x0060 (0x00A0 - 0x0040)
class UHoudiniGeneratorLandscape : public UHoudiniGenerator
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorLandscape");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorMoss
// 0x0008 (0x0048 - 0x0040)
class UHoudiniGeneratorMoss : public UHoudiniGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorMoss");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorNavmeshVolume
// 0x0000 (0x0048 - 0x0048)
class UHoudiniGeneratorNavmeshVolume : public UHoudiniGeneratorBrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorNavmeshVolume");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorPlayerStart
// 0x0000 (0x0040 - 0x0040)
class UHoudiniGeneratorPlayerStart : public UHoudiniGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorPlayerStart");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorPostProcessVolume
// 0x0000 (0x0048 - 0x0048)
class UHoudiniGeneratorPostProcessVolume : public UHoudiniGeneratorBrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorPostProcessVolume");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorReflectionCapture
// 0x0000 (0x0040 - 0x0040)
class UHoudiniGeneratorReflectionCapture : public UHoudiniGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorReflectionCapture");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorReverbProximityBankVolume
// 0x0000 (0x0048 - 0x0048)
class UHoudiniGeneratorReverbProximityBankVolume : public UHoudiniGeneratorBrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorReverbProximityBankVolume");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorStaticMesh
// 0x0060 (0x00A0 - 0x0040)
class UHoudiniGeneratorStaticMesh : public UHoudiniGenerator
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorStaticMesh");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorSurfaceModifierVolumeIce
// 0x0000 (0x0048 - 0x0048)
class UHoudiniGeneratorSurfaceModifierVolumeIce : public UHoudiniGeneratorBrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorSurfaceModifierVolumeIce");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorSurfaceModifierVolumeWater
// 0x0000 (0x0048 - 0x0048)
class UHoudiniGeneratorSurfaceModifierVolumeWater : public UHoudiniGeneratorBrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorSurfaceModifierVolumeWater");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorTriggerVolume
// 0x0000 (0x0048 - 0x0048)
class UHoudiniGeneratorTriggerVolume : public UHoudiniGeneratorBrush
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorTriggerVolume");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorVectorfield
// 0x0000 (0x0040 - 0x0040)
class UHoudiniGeneratorVectorfield : public UHoudiniGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorVectorfield");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorVolumes
// 0x0010 (0x0050 - 0x0040)
class UHoudiniGeneratorVolumes : public UHoudiniGenerator
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorVolumes");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniGeneratorZoneModifier
// 0x0028 (0x0068 - 0x0040)
class UHoudiniGeneratorZoneModifier : public UHoudiniGenerator
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0040(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniGeneratorZoneModifier");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniInput
// 0x0040 (0x0068 - 0x0028)
class UHoudiniInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInput");
		return ptr;
	}


	bool SetObject(class UObject* Object);
	bool SetAssetObject(class UHoudiniAssetInstance* Object, int ObjNodeIndex);
	bool IsObjectSupported(class UObject* Object);
	class UObject* GetObject();
	class UHoudiniAssetInstance* GetAssetInstance();
};


// Class HoudiniEngineRuntime.HoudiniPackedObject
// 0x0018 (0x0040 - 0x0028)
class UHoudiniPackedObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObject");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectActor
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectActor : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectActor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonBiomeRecipe
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonBiomeRecipe : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonBiomeRecipe");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonFoliageRecipe
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonFoliageRecipe : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonFoliageRecipe");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraph
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonLevelGraph : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraph");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraphArena
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonLevelGraphArena : public UHoudiniPackedObjectActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraphArena");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraphBridge
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonLevelGraphBridge : public UHoudiniPackedObjectActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraphBridge");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraphOutcrop
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonLevelGraphOutcrop : public UHoudiniPackedObjectActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraphOutcrop");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraphZone
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonLevelGraphZone : public UHoudiniPackedObjectActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonLevelGraphZone");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonMaterialRecipe
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonMaterialRecipe : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonMaterialRecipe");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonSubBiomeRecipe
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonSubBiomeRecipe : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonSubBiomeRecipe");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectArchonSubBiomeRegionRecipe
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectArchonSubBiomeRegionRecipe : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectArchonSubBiomeRegionRecipe");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectSceneComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectSceneComponent : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectSceneComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectBillboardComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectBillboardComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectBillboardComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectBlueprint
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectBlueprint : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectBlueprint");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectBlueprintPatternHandleComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectBlueprintPatternHandleComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectBlueprintPatternHandleComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectBodySetup
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectBodySetup : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectBodySetup");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectBrush
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectBrush : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectBrush");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectBrushComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectBrushComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectBrushComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectCableComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectCableComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectCableComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectChildActorComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectChildActorComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectChildActorComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectClass
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectClass : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectClass");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectFoliageType
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectFoliageType : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectFoliageType");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectInstancedStaticMeshComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectInstancedStaticMeshComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectLandscapeComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectLandscapeComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectLandscapeComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectLightComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectLightComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectLightComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectModel
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectModel : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectModel");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectSkeletalMesh
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectSkeletalMesh : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectSkeletalMesh");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectSkeletalMeshComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectSkeletalMeshComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectSkeletalMeshComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectSplineComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectSplineComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectSplineComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectStaticMesh
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectStaticMesh : public UHoudiniPackedObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectStaticMesh");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniPackedObjectStaticMeshComponent
// 0x0000 (0x0040 - 0x0040)
class UHoudiniPackedObjectStaticMeshComponent : public UHoudiniPackedObjectSceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniPackedObjectStaticMeshComponent");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniParameter
// 0x0018 (0x0040 - 0x0028)
class UHoudiniParameter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameter");
		return ptr;
	}


	bool IsVector3();
	bool IsToggle();
	bool IsSubstance();
	bool IsString();
	bool IsSpare();
	bool IsObject();
	bool IsInvisible();
	bool IsInteger();
	bool IsFloat();
	bool IsFile();
	bool IsDisabled();
	bool IsColor();
	bool IsChoice();
	bool IsButton();
	int GetTupleSize();
	class FString GetStringName();
	class FString GetStringLabel();
	class FString GetStringHelp();
	class UHoudiniAssetInstance* GetAssetInstance();
};


// Class HoudiniEngineRuntime.HoudiniParameterFile
// 0x0000 (0x0040 - 0x0040)
class UHoudiniParameterFile : public UHoudiniParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterFile");
		return ptr;
	}


	bool SetValueString(const class FString& FilePath);
	bool SetValuePathStringArray(TArray<class FString> FilePaths);
	bool SetValuePathArray(TArray<struct FFilePath> FilePaths);
	bool SetValuePath(const struct FFilePath& FilePath);
};


// Class HoudiniEngineRuntime.HoudiniParameterFloat
// 0x0000 (0x0040 - 0x0040)
class UHoudiniParameterFloat : public UHoudiniParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterFloat");
		return ptr;
	}


	bool SetValueVectorArray(TArray<struct FVector> Values);
	bool SetValueVector2D(const struct FVector2D& Vector2D);
	bool SetValueVector(const struct FVector& Vector);
	bool SetValueRotator(const struct FRotator& Rotator);
	bool SetValueQuaternion(const struct FQuat& Quaternion);
	bool SetValueAtIndex(float Value, int idx);
	bool SetValueArray(TArray<float> Values);
	bool SetValue(float Value);
};


// Class HoudiniEngineRuntime.HoudiniParameterInteger
// 0x0000 (0x0040 - 0x0040)
class UHoudiniParameterInteger : public UHoudiniParameter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniParameterInteger");
		return ptr;
	}


	bool SetValueAtIndex(int Value, int idx);
	bool SetValueArray(TArray<int> Values);
	bool SetValue(int Value);
};


// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// 0x0208 (0x0230 - 0x0028)
class UHoudiniRuntimeSettings : public UObject
{
public:
	bool                                               bEnableHoudiniEngine;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                HierarchicalLODMinimumInstanceCount;                      // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsSessionType>    SessionType;                                              // 0x0030(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class FString                                      ServerHost;                                               // 0x0038(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	int                                                ServerPort;                                               // 0x0048(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class FString                                      ServerPipeName;                                           // 0x0050(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	bool                                               bStartAutomaticServer;                                    // 0x0060(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	float                                              AutomaticServerTimeout;                                   // 0x0064(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShowMultiAssetDialog;                                    // 0x0068(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bShowOutdatedAssetDialog;                                 // 0x0069(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bCreateHoudiniComponentAtOrigin;                          // 0x006A(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bAutoConnectAssets;                                       // 0x006B(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bEnableCooking;                                           // 0x006C(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bUploadTransformsToHoudiniEngine;                         // 0x006D(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bTransformChangeTriggersCooks;                            // 0x006E(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bDisplaySlateCookingNotifications;                        // 0x006F(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              CookingTimeout;                                           // 0x0070(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FStringAssetReference                       DefaultHoudiniMaterial;                                   // 0x0078(0x0010) (Edit, Config, GlobalConfig)
	struct FStringAssetReference                       DefaultHoudiniLandscapeMaterial;                          // 0x0088(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              BakeFolder;                                               // 0x0098(0x0010) (Edit, Config, GlobalConfig)
	bool                                               bTreatRampParametersAsMultiparms;                         // 0x00A8(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	class FString                                      CollisionGroupNamePrefix;                                 // 0x00B0(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	class FString                                      RenderedCollisionGroupNamePrefix;                         // 0x00C0(0x0010) (Edit, ZeroConstructor, Config, EditConst, GlobalConfig)
	class FString                                      MarshallingAttributeTangent;                              // 0x00D0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class FString                                      MarshallingAttributeBinormal;                             // 0x00E0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class FString                                      MarshallingAttributeMaterial;                             // 0x00F0(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class FString                                      MarshallingAttributeMaterialHole;                         // 0x0100(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class FString                                      MarshallingAttributeInstanceOverride;                     // 0x0110(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class FString                                      MarshallingAttributeFaceSmoothingMask;                    // 0x0120(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class FString                                      MarshallingAttributeLightmapResolution;                   // 0x0130(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	class FString                                      MarshallingAttributeGeneratedMeshName;                    // 0x0140(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)
	float                                              GeneratedGeometryScaleFactor;                             // 0x0150(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              TransformScaleFactor;                                     // 0x0154(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsAxisImport>     ImportAxis;                                               // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsMatrixOrder>    MatrixOrder;                                              // 0x0159(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x015A(0x0002) MISSED OFFSET
	unsigned char                                      bDoubleSidedGeometry : 1;                                 // 0x015C(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData07[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0160(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                       // 0x0168(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0169(0x0003) MISSED OFFSET
	int                                                LightMapResolution;                                       // 0x016C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              LpvBiasMultiplier;                                        // 0x0170(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                                    // 0x0174(0x0010) (Edit, Config, GlobalConfig, IsPlainOldData)
	int                                                LightMapCoordinateIndex;                                  // 0x0184(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bUseMaximumStreamingTexelRatio : 1;                       // 0x0188(0x0001) (Edit, Config, GlobalConfig)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	float                                              StreamingDistanceMultiplier;                              // 0x018C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	class UFoliageType_InstancedStaticMesh*            FoliageDefaultSettings;                                   // 0x0190(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UAssetUserData*>                      AssetUserData;                                            // 0x0198(0x0010) (Edit, ExportObject, ZeroConstructor)
	bool                                               bUseFullPrecisionUVs;                                     // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	int                                                SrcLightmapIndex;                                         // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DstLightmapIndex;                                         // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinLightmapResolution;                                    // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRemoveDegenerates;                                       // 0x01B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  GenerateLightmapUVsFlag;                                  // 0x01B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeNormalsFlag;                                     // 0x01BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag>  RecomputeTangentsFlag;                                    // 0x01BB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomHoudiniLocation;                                // 0x01BC(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x01BD(0x0003) MISSED OFFSET
	struct FDirectoryPath                              CustomHoudiniLocation;                                    // 0x01C0(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              CustomHoudiniEnvFileLocation;                             // 0x01D0(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              CustomHoudiniOTLSearchPath;                               // 0x01E0(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              CustomHoudiniDSOSearchPath;                               // 0x01F0(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              CustomHoudiniImageDSOSearchPath;                          // 0x0200(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              CustomHoudiniAudioDSOSearchPath;                          // 0x0210(0x0010) (Edit, Config, GlobalConfig)
	struct FDirectoryPath                              CustomHoudiniPythonSearchPath;                            // 0x0220(0x0010) (Edit, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniRuntimeSettings");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslator
// 0x0018 (0x0040 - 0x0028)
class UHoudiniTranslator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslator");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorArchonBiomeRecipe
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorArchonBiomeRecipe : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorArchonBiomeRecipe");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorArchonLevelGraph
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorArchonLevelGraph : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorArchonLevelGraph");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorAsset
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorAsset : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorAsset");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorBlueprint
// 0x0018 (0x0058 - 0x0040)
class UHoudiniTranslatorBlueprint : public UHoudiniTranslator
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorBlueprint");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorGlobalFoliageActor
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorGlobalFoliageActor : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorGlobalFoliageActor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorNull
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorNull : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorNull");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorObject
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorObject : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorObject");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorStaticMesh
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorStaticMesh : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorStaticMesh");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorVolume
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorVolume : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorVolume");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorld
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorld : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorld");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldActor
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldActor : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldActor");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldBlocking
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldBlocking : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldBlocking");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldClass
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldClass : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldClass");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldCliffs
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldCliffs : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldCliffs");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldLandscape
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldLandscape : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldLandscape");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldSelected
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldSelected : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldSelected");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldStaticMeshes
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldStaticMeshes : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldStaticMeshes");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldVolumes
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldVolumes : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldVolumes");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldWater
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldWater : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldWater");
		return ptr;
	}

};


// Class HoudiniEngineRuntime.HoudiniTranslatorWorldZones
// 0x0000 (0x0040 - 0x0040)
class UHoudiniTranslatorWorldZones : public UHoudiniTranslator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniTranslatorWorldZones");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
