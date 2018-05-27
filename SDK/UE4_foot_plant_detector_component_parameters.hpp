#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_foot_plant_detector_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function foot_plant_detector_component.foot_plant_detector_component_C.GetFootPlantState
struct Ufoot_plant_detector_component_C_GetFootPlantState_Params
{
	TEnumAsByte<EFootPlantState>                       FootPlantState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function foot_plant_detector_component.foot_plant_detector_component_C.LGetFootPlantState
struct Ufoot_plant_detector_component_C_LGetFootPlantState_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveOverride;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Joint;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeightThreshold;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Planted;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FootHeight;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FootSpeed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function foot_plant_detector_component.foot_plant_detector_component_C.ReceiveTick
struct Ufoot_plant_detector_component_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function foot_plant_detector_component.foot_plant_detector_component_C.ExecuteUbergraph_foot_plant_detector_component
struct Ufoot_plant_detector_component_C_ExecuteUbergraph_foot_plant_detector_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function foot_plant_detector_component.foot_plant_detector_component_C.FootUnplanted__DelegateSignature
struct Ufoot_plant_detector_component_C_FootUnplanted__DelegateSignature_Params
{
	float                                              FootSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function foot_plant_detector_component.foot_plant_detector_component_C.FootPlanted__DelegateSignature
struct Ufoot_plant_detector_component_C_FootPlanted__DelegateSignature_Params
{
	float                                              DelayedFootSpeed;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
