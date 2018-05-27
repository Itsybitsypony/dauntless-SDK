#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_return_to_ramsgate_cinematic_trigger_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HasFinishedLoading
struct Areturn_to_ramsgate_cinematic_trigger_C_HasFinishedLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.OutputDebugInformation
struct Areturn_to_ramsgate_cinematic_trigger_C_OutputDebugInformation_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.PickSpawnLocation
struct Areturn_to_ramsgate_cinematic_trigger_C_PickSpawnLocation_Params
{
	struct FTransform                                  StartTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.RelevantToLocalController
struct Areturn_to_ramsgate_cinematic_trigger_C_RelevantToLocalController_Params
{
	bool                                               Relevant;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.UserConstructionScript
struct Areturn_to_ramsgate_cinematic_trigger_C_UserConstructionScript_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.SwapCineMatsOut
struct Areturn_to_ramsgate_cinematic_trigger_C_SwapCineMatsOut_Params
{
	class AArchonCharacter*                            Player_Char;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ReceiveBeginPlay
struct Areturn_to_ramsgate_cinematic_trigger_C_ReceiveBeginPlay_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.Play
struct Areturn_to_ramsgate_cinematic_trigger_C_Play_Params
{
	class AActor*                                      PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ReceiveGameplayStart
struct Areturn_to_ramsgate_cinematic_trigger_C_ReceiveGameplayStart_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientSetCityNPCVisibility
struct Areturn_to_ramsgate_cinematic_trigger_C_ClientSetCityNPCVisibility_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.CacheCityNPCs
struct Areturn_to_ramsgate_cinematic_trigger_C_CacheCityNPCs_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientStart
struct Areturn_to_ramsgate_cinematic_trigger_C_ClientStart_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ClientStop
struct Areturn_to_ramsgate_cinematic_trigger_C_ClientStop_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.SkipCinematic
struct Areturn_to_ramsgate_cinematic_trigger_C_SkipCinematic_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.BlendCameraOut
struct Areturn_to_ramsgate_cinematic_trigger_C_BlendCameraOut_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.OnServerStop
struct Areturn_to_ramsgate_cinematic_trigger_C_OnServerStop_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ToggleShowSequenceTime
struct Areturn_to_ramsgate_cinematic_trigger_C_ToggleShowSequenceTime_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HideActors
struct Areturn_to_ramsgate_cinematic_trigger_C_HideActors_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HideActorsOnTick
struct Areturn_to_ramsgate_cinematic_trigger_C_HideActorsOnTick_Params
{
};

// Function return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.ExecuteUbergraph_return_to_ramsgate_cinematic_trigger
struct Areturn_to_ramsgate_cinematic_trigger_C_ExecuteUbergraph_return_to_ramsgate_cinematic_trigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
