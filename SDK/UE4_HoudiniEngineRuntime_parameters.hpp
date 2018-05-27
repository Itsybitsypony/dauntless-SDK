#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_HoudiniEngineRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function HoudiniEngineRuntime.HoudiniAsset.IsAssetNonCommercial
struct UHoudiniAsset_IsAssetNonCommercial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAsset.IsAssetLimitedCommercial
struct UHoudiniAsset_IsAssetLimitedCommercial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAsset.IsAssetFileValid
struct UHoudiniAsset_IsAssetFileValid_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAsset.IsAssetDefinitionOutdated
struct UHoudiniAsset_IsAssetDefinitionOutdated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAsset.GetFirstContainedAssetName
struct UHoudiniAsset_GetFirstContainedAssetName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAsset.GetContainedAssetNames
struct UHoudiniAsset_GetContainedAssetNames_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAsset.GetAssetFileName
struct UHoudiniAsset_GetAssetFileName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAsset.CreateHoudiniAssetInstance
struct UHoudiniAsset_CreateHoudiniAssetInstance_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetComponent.GetAssetId
struct UHoudiniAssetComponent_GetAssetId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.SetPreset
struct UHoudiniAssetInstance_SetPreset_Params
{
	class UHoudiniAssetPreset*                         Preset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCook;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.SetDefaultPreset
struct UHoudiniAssetInstance_SetDefaultPreset_Params
{
	bool                                               bCook;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.IsValidPreset
struct UHoudiniAssetInstance_IsValidPreset_Params
{
	class UHoudiniAssetPreset*                         Preset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.IsValidAssetInstance
struct UHoudiniAssetInstance_IsValidAssetInstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.IsInstantiatedWithErrors
struct UHoudiniAssetInstance_IsInstantiatedWithErrors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.IsCookedWithErrors
struct UHoudiniAssetInstance_IsCookedWithErrors_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAssetNameAndCook
struct UHoudiniAssetInstance_InstantiateAssetNameAndCook_Params
{
	class FString                                      InAssetToInstantiate;                                     // (Parm, ZeroConstructor)
	bool                                               bGenerateGeometry;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreserveTransforms;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAssetName
struct UHoudiniAssetInstance_InstantiateAssetName_Params
{
	class FString                                      InAssetToInstantiate;                                     // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAndCook
struct UHoudiniAssetInstance_InstantiateAndCook_Params
{
	bool                                               bGenerateGeometry;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreserveTransforms;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.Instantiate
struct UHoudiniAssetInstance_Instantiate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.HasParameters
struct UHoudiniAssetInstance_HasParameters_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.HasInputs
struct UHoudiniAssetInstance_HasInputs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.HasBeenCooked
struct UHoudiniAssetInstance_HasBeenCooked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawTriangles
struct UHoudiniAssetInstance_GetRawTriangles_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSwapYZAxis;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPatchWindingOrder;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCustomMeshTriangle>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawTriangleCount
struct UHoudiniAssetInstance_GetRawTriangleCount_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawPoints
struct UHoudiniAssetInstance_GetRawPoints_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSwapYZAxis;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawPointCount
struct UHoudiniAssetInstance_GetRawPointCount_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawHoudiniPartObjectName
struct UHoudiniAssetInstance_GetRawHoudiniPartObjectName_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHash;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointVectors
struct UHoudiniAssetInstance_GetRawAttributePointVectors_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AttributeName;                                            // (Parm, ZeroConstructor)
	bool                                               bScale;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSwapYZAxis;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointTupleSize
struct UHoudiniAssetInstance_GetRawAttributePointTupleSize_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AttributeName;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointStrings
struct UHoudiniAssetInstance_GetRawAttributePointStrings_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AttributeName;                                            // (Parm, ZeroConstructor)
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointObjects
struct UHoudiniAssetInstance_GetRawAttributePointObjects_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AttributeName;                                            // (Parm, ZeroConstructor)
	TArray<class UObject*>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointIntegers
struct UHoudiniAssetInstance_GetRawAttributePointIntegers_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AttributeName;                                            // (Parm, ZeroConstructor)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointFloats
struct UHoudiniAssetInstance_GetRawAttributePointFloats_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AttributeName;                                            // (Parm, ZeroConstructor)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterCount
struct UHoudiniAssetInstance_GetParameterCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterByName
struct UHoudiniAssetInstance_GetParameterByName_Params
{
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	class UHoudiniParameter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterByLabel
struct UHoudiniAssetInstance_GetParameterByLabel_Params
{
	class FString                                      ParameterLabel;                                           // (Parm, ZeroConstructor)
	class UHoudiniParameter*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInstantiatedAssetName
struct UHoudiniAssetInstance_GetInstantiatedAssetName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInputCount
struct UHoudiniAssetInstance_GetInputCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInputByName
struct UHoudiniAssetInstance_GetInputByName_Params
{
	class FString                                      InputName;                                                // (Parm, ZeroConstructor)
	class UHoudiniInput*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInput
struct UHoudiniAssetInstance_GetInput_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniInput*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHoudiniPartObjectCount
struct UHoudiniAssetInstance_GetHoudiniPartObjectCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHoudiniAsset
struct UHoudiniAssetInstance_GetHoudiniAsset_Params
{
	class UHoudiniAsset*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHelp
struct UHoudiniAssetInstance_GetHelp_Params
{
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetCookState
struct UHoudiniAssetInstance_GetCookState_Params
{
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetCookLog
struct UHoudiniAssetInstance_GetCookLog_Params
{
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAssetTransform
struct UHoudiniAssetInstance_GetAssetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAssetCookCount
struct UHoudiniAssetInstance_GetAssetCookCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAllParametersOfClass
struct UHoudiniAssetInstance_GetAllParametersOfClass_Params
{
	class UClass*                                      ParameterClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UHoudiniParameter*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAllParameters
struct UHoudiniAssetInstance_GetAllParameters_Params
{
	TArray<class UHoudiniParameter*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.DoesPointAttributeExist
struct UHoudiniAssetInstance_DoesPointAttributeExist_Params
{
	int                                                HoudiniPartObjectIndex;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AttributeName;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.DeleteAsset
struct UHoudiniAssetInstance_DeleteAsset_Params
{
	bool                                               bDeleteGeneratedGeometry;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.CreatePreset
struct UHoudiniAssetInstance_CreatePreset_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetPreset*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.CreateDefaultPreset
struct UHoudiniAssetInstance_CreateDefaultPreset_Params
{
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetPreset*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.CreateAssetInstance
struct UHoudiniAssetInstance_CreateAssetInstance_Params
{
	class UHoudiniAsset*                               HoudiniAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetInstance.CookAsset
struct UHoudiniAssetInstance_CookAsset_Params
{
	bool                                               bGenerateGeometry;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreserveTransforms;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniAssetPreset.ApplyTo
struct UHoudiniAssetPreset_ApplyTo_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerValueAtIndex
struct UHoudiniBlueprintFunctionLibrary_SetParameterIntegerValueAtIndex_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerValue
struct UHoudiniBlueprintFunctionLibrary_SetParameterIntegerValue_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerArray
struct UHoudiniBlueprintFunctionLibrary_SetParameterIntegerArray_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	TArray<int>                                        Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatVectorArray
struct UHoudiniBlueprintFunctionLibrary_SetParameterFloatVectorArray_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	TArray<struct FVector>                             Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               bChangeScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSwapYZAxis;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatVector
struct UHoudiniBlueprintFunctionLibrary_SetParameterFloatVector_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	struct FVector                                     Vector;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               bChangeScale;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSwapYZAxis;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatValueAtIndex
struct UHoudiniBlueprintFunctionLibrary_SetParameterFloatValueAtIndex_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatValue
struct UHoudiniBlueprintFunctionLibrary_SetParameterFloatValue_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatRotator
struct UHoudiniBlueprintFunctionLibrary_SetParameterFloatRotator_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	struct FRotator                                    Rotator;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               bSwapYZAxis;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatQuaternion
struct UHoudiniBlueprintFunctionLibrary_SetParameterFloatQuaternion_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	struct FQuat                                       Quat;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               bSwapYZAxis;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatArray
struct UHoudiniBlueprintFunctionLibrary_SetParameterFloatArray_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	TArray<float>                                      Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFileValueString
struct UHoudiniBlueprintFunctionLibrary_SetParameterFileValueString_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	class FString                                      FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFileValuePath
struct UHoudiniBlueprintFunctionLibrary_SetParameterFileValuePath_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ParameterName;                                            // (Parm, ZeroConstructor)
	struct FFilePath                                   FilePath;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetInputs
struct UHoudiniBlueprintFunctionLibrary_SetInputs_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ObjectsToInput;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetInput
struct UHoudiniBlueprintFunctionLibrary_SetInput_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ObjectToInput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bError;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.InstantiateAssetName
struct UHoudiniBlueprintFunctionLibrary_InstantiateAssetName_Params
{
	class UHoudiniAsset*                               HoudiniAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      AssetName;                                                // (Parm, ZeroConstructor)
	bool                                               bInstantiatedWithErrors;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.Instantiate
struct UHoudiniBlueprintFunctionLibrary_Instantiate_Params
{
	class UHoudiniAsset*                               HoudiniAsset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInstantiatedWithErrors;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.Cook
struct UHoudiniBlueprintFunctionLibrary_Cook_Params
{
	class UHoudiniAssetInstance*                       HoudiniAssetInstance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCookedWithErrors;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      ResultDescription;                                        // (Parm, OutParm, ZeroConstructor)
	bool                                               bGenerateGeometry;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPreserveTransforms;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniInput.SetObject
struct UHoudiniInput_SetObject_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniInput.SetAssetObject
struct UHoudiniInput_SetAssetObject_Params
{
	class UHoudiniAssetInstance*                       Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjNodeIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniInput.IsObjectSupported
struct UHoudiniInput_IsObjectSupported_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniInput.GetObject
struct UHoudiniInput_GetObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniInput.GetAssetInstance
struct UHoudiniInput_GetAssetInstance_Params
{
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsVector3
struct UHoudiniParameter_IsVector3_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsToggle
struct UHoudiniParameter_IsToggle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsSubstance
struct UHoudiniParameter_IsSubstance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsString
struct UHoudiniParameter_IsString_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsSpare
struct UHoudiniParameter_IsSpare_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsObject
struct UHoudiniParameter_IsObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsInvisible
struct UHoudiniParameter_IsInvisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsInteger
struct UHoudiniParameter_IsInteger_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsFloat
struct UHoudiniParameter_IsFloat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsFile
struct UHoudiniParameter_IsFile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsDisabled
struct UHoudiniParameter_IsDisabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsColor
struct UHoudiniParameter_IsColor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsChoice
struct UHoudiniParameter_IsChoice_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.IsButton
struct UHoudiniParameter_IsButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.GetTupleSize
struct UHoudiniParameter_GetTupleSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameter.GetStringName
struct UHoudiniParameter_GetStringName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniParameter.GetStringLabel
struct UHoudiniParameter_GetStringLabel_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniParameter.GetStringHelp
struct UHoudiniParameter_GetStringHelp_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function HoudiniEngineRuntime.HoudiniParameter.GetAssetInstance
struct UHoudiniParameter_GetAssetInstance_Params
{
	class UHoudiniAssetInstance*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFile.SetValueString
struct UHoudiniParameterFile_SetValueString_Params
{
	class FString                                      FilePath;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePathStringArray
struct UHoudiniParameterFile_SetValuePathStringArray_Params
{
	TArray<class FString>                              FilePaths;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePathArray
struct UHoudiniParameterFile_SetValuePathArray_Params
{
	TArray<struct FFilePath>                           FilePaths;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePath
struct UHoudiniParameterFile_SetValuePath_Params
{
	struct FFilePath                                   FilePath;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVectorArray
struct UHoudiniParameterFloat_SetValueVectorArray_Params
{
	TArray<struct FVector>                             Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVector2D
struct UHoudiniParameterFloat_SetValueVector2D_Params
{
	struct FVector2D                                   Vector2D;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVector
struct UHoudiniParameterFloat_SetValueVector_Params
{
	struct FVector                                     Vector;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueRotator
struct UHoudiniParameterFloat_SetValueRotator_Params
{
	struct FRotator                                    Rotator;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueQuaternion
struct UHoudiniParameterFloat_SetValueQuaternion_Params
{
	struct FQuat                                       Quaternion;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueAtIndex
struct UHoudiniParameterFloat_SetValueAtIndex_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueArray
struct UHoudiniParameterFloat_SetValueArray_Params
{
	TArray<float>                                      Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValue
struct UHoudiniParameterFloat_SetValue_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValueAtIndex
struct UHoudiniParameterInteger_SetValueAtIndex_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValueArray
struct UHoudiniParameterInteger_SetValueArray_Params
{
	TArray<int>                                        Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValue
struct UHoudiniParameterInteger_SetValue_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
