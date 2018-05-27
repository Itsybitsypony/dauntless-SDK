#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_SubstanceCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SubstanceCore.SubstanceGraphInstance.SetInputString
struct USubstanceGraphInstance_SetInputString_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
struct USubstanceGraphInstance_SetInputInt_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	TArray<int>                                        InputValues;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
struct USubstanceGraphInstance_SetInputImg_Params
{
	class FString                                      InputName;                                                // (Parm, ZeroConstructor)
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
struct USubstanceGraphInstance_SetInputFloat_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	TArray<float>                                      InputValues;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
struct USubstanceGraphInstance_GetIntInputDesc_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	struct FSubstanceIntInputDesc                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
struct USubstanceGraphInstance_GetInstanceDesc_Params
{
	struct FSubstanceInstanceDesc                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputType
struct USubstanceGraphInstance_GetInputType_Params
{
	class FString                                      InputName;                                                // (Parm, ZeroConstructor)
	TEnumAsByte<ESubstanceInputType>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputString
struct USubstanceGraphInstance_GetInputString_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
struct USubstanceGraphInstance_GetInputNames_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
struct USubstanceGraphInstance_GetInputInt_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
struct USubstanceGraphInstance_GetInputFloat_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	TArray<float>                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
struct USubstanceGraphInstance_GetFloatInputDesc_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	struct FSubstanceFloatInputDesc                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SubstanceCore.SubstanceTexture2D.GetChannel
struct USubstanceTexture2D_GetChannel_Params
{
	TEnumAsByte<ESubChannelType>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.SyncRendering
struct USubstanceUtility_SyncRendering_Params
{
	class USubstanceGraphInstance*                     InstancesToRender;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSizeInt
struct USubstanceUtility_SetGraphInstanceOutputSizeInt_Params
{
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.SetGraphInstanceOutputSize
struct USubstanceUtility_SetGraphInstanceOutputSize_Params
{
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESubstanceTextureSize>                 Width;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESubstanceTextureSize>                 Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.ResetInputParameters
struct USubstanceUtility_ResetInputParameters_Params
{
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.GetSubstanceTextures
struct USubstanceUtility_GetSubstanceTextures_Params
{
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USubstanceTexture2D*>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceUtility.GetSubstances
struct USubstanceUtility_GetSubstances_Params
{
	class UMaterialInterface*                          Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USubstanceGraphInstance*>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceUtility.GetSubstanceLoadingProgress
struct USubstanceUtility_GetSubstanceLoadingProgress_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.GetGraphName
struct USubstanceUtility_GetGraphName_Params
{
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceUtility.GetFactoryName
struct USubstanceUtility_GetFactoryName_Params
{
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function SubstanceCore.SubstanceUtility.EnableInstanceOutputs
struct USubstanceUtility_EnableInstanceOutputs_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutputIndices;                                            // (Parm, ZeroConstructor)
};

// Function SubstanceCore.SubstanceUtility.DuplicateGraphInstance
struct USubstanceUtility_DuplicateGraphInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.DisableInstanceOutputs
struct USubstanceUtility_DisableInstanceOutputs_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     GraphInstance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutputIndices;                                            // (Parm, ZeroConstructor)
};

// Function SubstanceCore.SubstanceUtility.CreateGraphInstance
struct USubstanceUtility_CreateGraphInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceInstanceFactory*                   Factory;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GraphDescIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceName;                                             // (Parm, ZeroConstructor)
	class USubstanceGraphInstance*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.CopyInputParameters
struct USubstanceUtility_CopyInputParameters_Params
{
	class USubstanceGraphInstance*                     SourceGraphInstance;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class USubstanceGraphInstance*                     DestGraphInstance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubstanceCore.SubstanceUtility.ClearCache
struct USubstanceUtility_ClearCache_Params
{
};

// Function SubstanceCore.SubstanceUtility.AsyncRendering
struct USubstanceUtility_AsyncRendering_Params
{
	class USubstanceGraphInstance*                     InstancesToRender;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
