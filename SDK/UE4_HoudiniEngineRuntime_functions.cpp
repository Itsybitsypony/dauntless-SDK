// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_HoudiniEngineRuntime_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HoudiniEngineRuntime.HoudiniAsset.IsAssetNonCommercial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAsset::IsAssetNonCommercial()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAsset.IsAssetNonCommercial");

	UHoudiniAsset_IsAssetNonCommercial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAsset.IsAssetLimitedCommercial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAsset::IsAssetLimitedCommercial()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAsset.IsAssetLimitedCommercial");

	UHoudiniAsset_IsAssetLimitedCommercial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAsset.IsAssetFileValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAsset::IsAssetFileValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAsset.IsAssetFileValid");

	UHoudiniAsset_IsAssetFileValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAsset.IsAssetDefinitionOutdated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAsset::IsAssetDefinitionOutdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAsset.IsAssetDefinitionOutdated");

	UHoudiniAsset_IsAssetDefinitionOutdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAsset.GetFirstContainedAssetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniAsset::GetFirstContainedAssetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAsset.GetFirstContainedAssetName");

	UHoudiniAsset_GetFirstContainedAssetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAsset.GetContainedAssetNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UHoudiniAsset::GetContainedAssetNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAsset.GetContainedAssetNames");

	UHoudiniAsset_GetContainedAssetNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAsset.GetAssetFileName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniAsset::GetAssetFileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAsset.GetAssetFileName");

	UHoudiniAsset_GetAssetFileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAsset.CreateHoudiniAssetInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniAsset::CreateHoudiniAssetInstance(class UObject* Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAsset.CreateHoudiniAssetInstance");

	UHoudiniAsset_CreateHoudiniAssetInstance_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetComponent.GetAssetId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniAssetComponent::GetAssetId()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetComponent.GetAssetId");

	UHoudiniAssetComponent_GetAssetId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.SetPreset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHoudiniAssetPreset*     Preset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCook                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::SetPreset(class UHoudiniAssetPreset* Preset, bool bCook)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.SetPreset");

	UHoudiniAssetInstance_SetPreset_Params params;
	params.Preset = Preset;
	params.bCook = bCook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.SetDefaultPreset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCook                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::SetDefaultPreset(bool bCook)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.SetDefaultPreset");

	UHoudiniAssetInstance_SetDefaultPreset_Params params;
	params.bCook = bCook;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.IsValidPreset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHoudiniAssetPreset*     Preset                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::IsValidPreset(class UHoudiniAssetPreset* Preset)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.IsValidPreset");

	UHoudiniAssetInstance_IsValidPreset_Params params;
	params.Preset = Preset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.IsValidAssetInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::IsValidAssetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.IsValidAssetInstance");

	UHoudiniAssetInstance_IsValidAssetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.IsInstantiatedWithErrors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::IsInstantiatedWithErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.IsInstantiatedWithErrors");

	UHoudiniAssetInstance_IsInstantiatedWithErrors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.IsCookedWithErrors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::IsCookedWithErrors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.IsCookedWithErrors");

	UHoudiniAssetInstance_IsCookedWithErrors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAssetNameAndCook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  InAssetToInstantiate           (Parm, ZeroConstructor)
// bool                           bGenerateGeometry              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreserveTransforms            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::InstantiateAssetNameAndCook(const class FString& InAssetToInstantiate, bool bGenerateGeometry, bool bPreserveTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAssetNameAndCook");

	UHoudiniAssetInstance_InstantiateAssetNameAndCook_Params params;
	params.InAssetToInstantiate = InAssetToInstantiate;
	params.bGenerateGeometry = bGenerateGeometry;
	params.bPreserveTransforms = bPreserveTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAssetName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  InAssetToInstantiate           (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::InstantiateAssetName(const class FString& InAssetToInstantiate)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAssetName");

	UHoudiniAssetInstance_InstantiateAssetName_Params params;
	params.InAssetToInstantiate = InAssetToInstantiate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAndCook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bGenerateGeometry              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreserveTransforms            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::InstantiateAndCook(bool bGenerateGeometry, bool bPreserveTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.InstantiateAndCook");

	UHoudiniAssetInstance_InstantiateAndCook_Params params;
	params.bGenerateGeometry = bGenerateGeometry;
	params.bPreserveTransforms = bPreserveTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.Instantiate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::Instantiate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.Instantiate");

	UHoudiniAssetInstance_Instantiate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.HasParameters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::HasParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.HasParameters");

	UHoudiniAssetInstance_HasParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.HasInputs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::HasInputs()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.HasInputs");

	UHoudiniAssetInstance_HasInputs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.HasBeenCooked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::HasBeenCooked()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.HasBeenCooked");

	UHoudiniAssetInstance_HasBeenCooked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawTriangles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScale                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSwapYZAxis                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPatchWindingOrder             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FCustomMeshTriangle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FCustomMeshTriangle> UHoudiniAssetInstance::GetRawTriangles(int HoudiniPartObjectIndex, bool bScale, bool bSwapYZAxis, bool bPatchWindingOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawTriangles");

	UHoudiniAssetInstance_GetRawTriangles_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.bScale = bScale;
	params.bSwapYZAxis = bSwapYZAxis;
	params.bPatchWindingOrder = bPatchWindingOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawTriangleCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniAssetInstance::GetRawTriangleCount(int HoudiniPartObjectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawTriangleCount");

	UHoudiniAssetInstance_GetRawTriangleCount_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawPoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bScale                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSwapYZAxis                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UHoudiniAssetInstance::GetRawPoints(int HoudiniPartObjectIndex, bool bScale, bool bSwapYZAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawPoints");

	UHoudiniAssetInstance_GetRawPoints_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.bScale = bScale;
	params.bSwapYZAxis = bSwapYZAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawPointCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniAssetInstance::GetRawPointCount(int HoudiniPartObjectIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawPointCount");

	UHoudiniAssetInstance_GetRawPointCount_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawHoudiniPartObjectName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseHash                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniAssetInstance::GetRawHoudiniPartObjectName(int HoudiniPartObjectIndex, bool bUseHash)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawHoudiniPartObjectName");

	UHoudiniAssetInstance_GetRawHoudiniPartObjectName_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.bUseHash = bUseHash;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointVectors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AttributeName                  (Parm, ZeroConstructor)
// bool                           bScale                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSwapYZAxis                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UHoudiniAssetInstance::GetRawAttributePointVectors(int HoudiniPartObjectIndex, const class FString& AttributeName, bool bScale, bool bSwapYZAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointVectors");

	UHoudiniAssetInstance_GetRawAttributePointVectors_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.AttributeName = AttributeName;
	params.bScale = bScale;
	params.bSwapYZAxis = bSwapYZAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointTupleSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AttributeName                  (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniAssetInstance::GetRawAttributePointTupleSize(int HoudiniPartObjectIndex, const class FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointTupleSize");

	UHoudiniAssetInstance_GetRawAttributePointTupleSize_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointStrings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AttributeName                  (Parm, ZeroConstructor)
// TArray<class FString>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class FString> UHoudiniAssetInstance::GetRawAttributePointStrings(int HoudiniPartObjectIndex, const class FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointStrings");

	UHoudiniAssetInstance_GetRawAttributePointStrings_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointObjects
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AttributeName                  (Parm, ZeroConstructor)
// TArray<class UObject*>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UObject*> UHoudiniAssetInstance::GetRawAttributePointObjects(int HoudiniPartObjectIndex, const class FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointObjects");

	UHoudiniAssetInstance_GetRawAttributePointObjects_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointIntegers
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AttributeName                  (Parm, ZeroConstructor)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UHoudiniAssetInstance::GetRawAttributePointIntegers(int HoudiniPartObjectIndex, const class FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointIntegers");

	UHoudiniAssetInstance_GetRawAttributePointIntegers_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointFloats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AttributeName                  (Parm, ZeroConstructor)
// TArray<float>                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<float> UHoudiniAssetInstance::GetRawAttributePointFloats(int HoudiniPartObjectIndex, const class FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetRawAttributePointFloats");

	UHoudiniAssetInstance_GetRawAttributePointFloats_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniAssetInstance::GetParameterCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterCount");

	UHoudiniAssetInstance_GetParameterCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// class UHoudiniParameter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniParameter* UHoudiniAssetInstance::GetParameterByName(const class FString& ParameterName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterByName");

	UHoudiniAssetInstance_GetParameterByName_Params params;
	params.ParameterName = ParameterName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterByLabel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ParameterLabel                 (Parm, ZeroConstructor)
// class UHoudiniParameter*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniParameter* UHoudiniAssetInstance::GetParameterByLabel(const class FString& ParameterLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetParameterByLabel");

	UHoudiniAssetInstance_GetParameterByLabel_Params params;
	params.ParameterLabel = ParameterLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInstantiatedAssetName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniAssetInstance::GetInstantiatedAssetName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInstantiatedAssetName");

	UHoudiniAssetInstance_GetInstantiatedAssetName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInputCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniAssetInstance::GetInputCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInputCount");

	UHoudiniAssetInstance_GetInputCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInputByName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  InputName                      (Parm, ZeroConstructor)
// class UHoudiniInput*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniInput* UHoudiniAssetInstance::GetInputByName(const class FString& InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInputByName");

	UHoudiniAssetInstance_GetInputByName_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniInput*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniInput* UHoudiniAssetInstance::GetInput(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetInput");

	UHoudiniAssetInstance_GetInput_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHoudiniPartObjectCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniAssetInstance::GetHoudiniPartObjectCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHoudiniPartObjectCount");

	UHoudiniAssetInstance_GetHoudiniPartObjectCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHoudiniAsset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHoudiniAsset*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAsset* UHoudiniAssetInstance::GetHoudiniAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHoudiniAsset");

	UHoudiniAssetInstance_GetHoudiniAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHelp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniAssetInstance::GetHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetHelp");

	UHoudiniAssetInstance_GetHelp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetCookState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniAssetInstance::GetCookState()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetCookState");

	UHoudiniAssetInstance_GetCookState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetCookLog
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniAssetInstance::GetCookLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetCookLog");

	UHoudiniAssetInstance_GetCookLog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAssetTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTransform              ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)

struct FTransform UHoudiniAssetInstance::GetAssetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAssetTransform");

	UHoudiniAssetInstance_GetAssetTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAssetCookCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniAssetInstance::GetAssetCookCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAssetCookCount");

	UHoudiniAssetInstance_GetAssetCookCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAllParametersOfClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ParameterClass                 (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UHoudiniParameter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UHoudiniParameter*> UHoudiniAssetInstance::GetAllParametersOfClass(class UClass* ParameterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAllParametersOfClass");

	UHoudiniAssetInstance_GetAllParametersOfClass_Params params;
	params.ParameterClass = ParameterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAllParameters
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UHoudiniParameter*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UHoudiniParameter*> UHoudiniAssetInstance::GetAllParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.GetAllParameters");

	UHoudiniAssetInstance_GetAllParameters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.DoesPointAttributeExist
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            HoudiniPartObjectIndex         (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AttributeName                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::DoesPointAttributeExist(int HoudiniPartObjectIndex, const class FString& AttributeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.DoesPointAttributeExist");

	UHoudiniAssetInstance_DoesPointAttributeExist_Params params;
	params.HoudiniPartObjectIndex = HoudiniPartObjectIndex;
	params.AttributeName = AttributeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.DeleteAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDeleteGeneratedGeometry       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::DeleteAsset(bool bDeleteGeneratedGeometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.DeleteAsset");

	UHoudiniAssetInstance_DeleteAsset_Params params;
	params.bDeleteGeneratedGeometry = bDeleteGeneratedGeometry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.CreatePreset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetPreset*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetPreset* UHoudiniAssetInstance::CreatePreset(class UObject* Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.CreatePreset");

	UHoudiniAssetInstance_CreatePreset_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.CreateDefaultPreset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetPreset*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetPreset* UHoudiniAssetInstance::CreateDefaultPreset(class UObject* Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.CreateDefaultPreset");

	UHoudiniAssetInstance_CreateDefaultPreset_Params params;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.CreateAssetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UHoudiniAsset*           HoudiniAsset                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniAssetInstance::STATIC_CreateAssetInstance(class UHoudiniAsset* HoudiniAsset, class UObject* Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.CreateAssetInstance");

	UHoudiniAssetInstance_CreateAssetInstance_Params params;
	params.HoudiniAsset = HoudiniAsset;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetInstance.CookAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bGenerateGeometry              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreserveTransforms            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetInstance::CookAsset(bool bGenerateGeometry, bool bPreserveTransforms)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetInstance.CookAsset");

	UHoudiniAssetInstance_CookAsset_Params params;
	params.bGenerateGeometry = bGenerateGeometry;
	params.bPreserveTransforms = bPreserveTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniAssetPreset.ApplyTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniAssetPreset::ApplyTo(class UHoudiniAssetInstance* HoudiniAssetInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetPreset.ApplyTo");

	UHoudiniAssetPreset_ApplyTo_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerValueAtIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterIntegerValueAtIndex(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, int Value, int idx, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerValueAtIndex");

	UHoudiniBlueprintFunctionLibrary_SetParameterIntegerValueAtIndex_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Value = Value;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterIntegerValue(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, int Value, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerValue");

	UHoudiniBlueprintFunctionLibrary_SetParameterIntegerValue_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// TArray<int>                    Values                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterIntegerArray(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, TArray<int> Values, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterIntegerArray");

	UHoudiniBlueprintFunctionLibrary_SetParameterIntegerArray_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Values = Values;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatVectorArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// TArray<struct FVector>         Values                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// bool                           bChangeScale                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSwapYZAxis                    (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFloatVectorArray(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, TArray<struct FVector> Values, bool bChangeScale, bool bSwapYZAxis, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatVectorArray");

	UHoudiniBlueprintFunctionLibrary_SetParameterFloatVectorArray_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Values = Values;
	params.bChangeScale = bChangeScale;
	params.bSwapYZAxis = bSwapYZAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// struct FVector                 Vector                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// bool                           bChangeScale                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSwapYZAxis                    (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFloatVector(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const struct FVector& Vector, bool bChangeScale, bool bSwapYZAxis, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatVector");

	UHoudiniBlueprintFunctionLibrary_SetParameterFloatVector_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Vector = Vector;
	params.bChangeScale = bChangeScale;
	params.bSwapYZAxis = bSwapYZAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatValueAtIndex
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFloatValueAtIndex(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, float Value, int idx, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatValueAtIndex");

	UHoudiniBlueprintFunctionLibrary_SetParameterFloatValueAtIndex_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Value = Value;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatValue
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFloatValue(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, float Value, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatValue");

	UHoudiniBlueprintFunctionLibrary_SetParameterFloatValue_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatRotator
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// struct FRotator                Rotator                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// bool                           bSwapYZAxis                    (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFloatRotator(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const struct FRotator& Rotator, bool bSwapYZAxis, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatRotator");

	UHoudiniBlueprintFunctionLibrary_SetParameterFloatRotator_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Rotator = Rotator;
	params.bSwapYZAxis = bSwapYZAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatQuaternion
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// struct FQuat                   Quat                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// bool                           bSwapYZAxis                    (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFloatQuaternion(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const struct FQuat& Quat, bool bSwapYZAxis, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatQuaternion");

	UHoudiniBlueprintFunctionLibrary_SetParameterFloatQuaternion_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Quat = Quat;
	params.bSwapYZAxis = bSwapYZAxis;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// TArray<float>                  Values                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFloatArray(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, TArray<float> Values, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFloatArray");

	UHoudiniBlueprintFunctionLibrary_SetParameterFloatArray_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.Values = Values;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFileValueString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// class FString                  FilePath                       (Parm, ZeroConstructor)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFileValueString(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const class FString& FilePath, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFileValueString");

	UHoudiniBlueprintFunctionLibrary_SetParameterFileValueString_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFileValuePath
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ParameterName                  (Parm, ZeroConstructor)
// struct FFilePath               FilePath                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetParameterFileValuePath(class UHoudiniAssetInstance* HoudiniAssetInstance, const class FString& ParameterName, const struct FFilePath& FilePath, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetParameterFileValuePath");

	UHoudiniBlueprintFunctionLibrary_SetParameterFileValuePath_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ParameterName = ParameterName;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetInputs
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         ObjectsToInput                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetInputs(class UHoudiniAssetInstance* HoudiniAssetInstance, TArray<class UObject*> ObjectsToInput, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetInputs");

	UHoudiniBlueprintFunctionLibrary_SetInputs_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ObjectsToInput = ObjectsToInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetInput
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ObjectToInput                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bError                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_SetInput(class UHoudiniAssetInstance* HoudiniAssetInstance, class UObject* ObjectToInput, int Index, bool* bError, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.SetInput");

	UHoudiniBlueprintFunctionLibrary_SetInput_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.ObjectToInput = ObjectToInput;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bError != nullptr)
		*bError = params.bError;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.InstantiateAssetName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAsset*           HoudiniAsset                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  AssetName                      (Parm, ZeroConstructor)
// bool                           bInstantiatedWithErrors        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_InstantiateAssetName(class UHoudiniAsset* HoudiniAsset, class UObject* Outer, const class FString& AssetName, bool* bInstantiatedWithErrors, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.InstantiateAssetName");

	UHoudiniBlueprintFunctionLibrary_InstantiateAssetName_Params params;
	params.HoudiniAsset = HoudiniAsset;
	params.Outer = Outer;
	params.AssetName = AssetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInstantiatedWithErrors != nullptr)
		*bInstantiatedWithErrors = params.bInstantiatedWithErrors;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.Instantiate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAsset*           HoudiniAsset                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Outer                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstantiatedWithErrors        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_Instantiate(class UHoudiniAsset* HoudiniAsset, class UObject* Outer, bool* bInstantiatedWithErrors, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.Instantiate");

	UHoudiniBlueprintFunctionLibrary_Instantiate_Params params;
	params.HoudiniAsset = HoudiniAsset;
	params.Outer = Outer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bInstantiatedWithErrors != nullptr)
		*bInstantiatedWithErrors = params.bInstantiatedWithErrors;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.Cook
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   HoudiniAssetInstance           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCookedWithErrors              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ResultDescription              (Parm, OutParm, ZeroConstructor)
// bool                           bGenerateGeometry              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreserveTransforms            (Parm, ZeroConstructor, IsPlainOldData)
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniBlueprintFunctionLibrary::STATIC_Cook(class UHoudiniAssetInstance* HoudiniAssetInstance, bool bGenerateGeometry, bool bPreserveTransforms, bool* bCookedWithErrors, class FString* ResultDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniBlueprintFunctionLibrary.Cook");

	UHoudiniBlueprintFunctionLibrary_Cook_Params params;
	params.HoudiniAssetInstance = HoudiniAssetInstance;
	params.bGenerateGeometry = bGenerateGeometry;
	params.bPreserveTransforms = bPreserveTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCookedWithErrors != nullptr)
		*bCookedWithErrors = params.bCookedWithErrors;
	if (ResultDescription != nullptr)
		*ResultDescription = params.ResultDescription;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniInput.SetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniInput::SetObject(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniInput.SetObject");

	UHoudiniInput_SetObject_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniInput.SetAssetObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UHoudiniAssetInstance*   Object                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjNodeIndex                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniInput::SetAssetObject(class UHoudiniAssetInstance* Object, int ObjNodeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniInput.SetAssetObject");

	UHoudiniInput_SetAssetObject_Params params;
	params.Object = Object;
	params.ObjNodeIndex = ObjNodeIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniInput.IsObjectSupported
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniInput::IsObjectSupported(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniInput.IsObjectSupported");

	UHoudiniInput_IsObjectSupported_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniInput.GetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UHoudiniInput::GetObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniInput.GetObject");

	UHoudiniInput_GetObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniInput.GetAssetInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniInput::GetAssetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniInput.GetAssetInstance");

	UHoudiniInput_GetAssetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsVector3
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsVector3()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsVector3");

	UHoudiniParameter_IsVector3_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsToggle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsToggle");

	UHoudiniParameter_IsToggle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsSubstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsSubstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsSubstance");

	UHoudiniParameter_IsSubstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsString");

	UHoudiniParameter_IsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsSpare
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsSpare()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsSpare");

	UHoudiniParameter_IsSpare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsObject");

	UHoudiniParameter_IsObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsInvisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsInvisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsInvisible");

	UHoudiniParameter_IsInvisible_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsInteger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsInteger()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsInteger");

	UHoudiniParameter_IsInteger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsFloat");

	UHoudiniParameter_IsFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsFile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsFile()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsFile");

	UHoudiniParameter_IsFile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsDisabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsDisabled");

	UHoudiniParameter_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsColor");

	UHoudiniParameter_IsColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsChoice
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsChoice()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsChoice");

	UHoudiniParameter_IsChoice_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.IsButton
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameter::IsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.IsButton");

	UHoudiniParameter_IsButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.GetTupleSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UHoudiniParameter::GetTupleSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.GetTupleSize");

	UHoudiniParameter_GetTupleSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.GetStringName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniParameter::GetStringName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.GetStringName");

	UHoudiniParameter_GetStringName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.GetStringLabel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniParameter::GetStringLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.GetStringLabel");

	UHoudiniParameter_GetStringLabel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.GetStringHelp
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UHoudiniParameter::GetStringHelp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.GetStringHelp");

	UHoudiniParameter_GetStringHelp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameter.GetAssetInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHoudiniAssetInstance*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHoudiniAssetInstance* UHoudiniParameter::GetAssetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameter.GetAssetInstance");

	UHoudiniParameter_GetAssetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFile.SetValueString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                  FilePath                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFile::SetValueString(const class FString& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFile.SetValueString");

	UHoudiniParameterFile_SetValueString_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePathStringArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<class FString>          FilePaths                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFile::SetValuePathStringArray(TArray<class FString> FilePaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePathStringArray");

	UHoudiniParameterFile_SetValuePathStringArray_Params params;
	params.FilePaths = FilePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePathArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FFilePath>       FilePaths                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFile::SetValuePathArray(TArray<struct FFilePath> FilePaths)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePathArray");

	UHoudiniParameterFile_SetValuePathArray_Params params;
	params.FilePaths = FilePaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePath
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FFilePath               FilePath                       (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFile::SetValuePath(const struct FFilePath& FilePath)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFile.SetValuePath");

	UHoudiniParameterFile_SetValuePath_Params params;
	params.FilePath = FilePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVectorArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         Values                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFloat::SetValueVectorArray(TArray<struct FVector> Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVectorArray");

	UHoudiniParameterFloat_SetValueVectorArray_Params params;
	params.Values = Values;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVector2D
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               Vector2D                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFloat::SetValueVector2D(const struct FVector2D& Vector2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVector2D");

	UHoudiniParameterFloat_SetValueVector2D_Params params;
	params.Vector2D = Vector2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Vector                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFloat::SetValueVector(const struct FVector& Vector)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueVector");

	UHoudiniParameterFloat_SetValueVector_Params params;
	params.Vector = Vector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueRotator
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                Rotator                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFloat::SetValueRotator(const struct FRotator& Rotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueRotator");

	UHoudiniParameterFloat_SetValueRotator_Params params;
	params.Rotator = Rotator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueQuaternion
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FQuat                   Quaternion                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFloat::SetValueQuaternion(const struct FQuat& Quaternion)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueQuaternion");

	UHoudiniParameterFloat_SetValueQuaternion_Params params;
	params.Quaternion = Quaternion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFloat::SetValueAtIndex(float Value, int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueAtIndex");

	UHoudiniParameterFloat_SetValueAtIndex_Params params;
	params.Value = Value;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<float>                  Values                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFloat::SetValueArray(TArray<float> Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValueArray");

	UHoudiniParameterFloat_SetValueArray_Params params;
	params.Values = Values;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterFloat::SetValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterFloat.SetValue");

	UHoudiniParameterFloat_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValueAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterInteger::SetValueAtIndex(int Value, int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValueAtIndex");

	UHoudiniParameterInteger_SetValueAtIndex_Params params;
	params.Value = Value;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValueArray
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    Values                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterInteger::SetValueArray(TArray<int> Values)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValueArray");

	UHoudiniParameterInteger_SetValueArray_Params params;
	params.Values = Values;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHoudiniParameterInteger::SetValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniParameterInteger.SetValue");

	UHoudiniParameterInteger_SetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
