#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hunt_quest_monitor_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.MuteQuestMonitorComponent
struct Uhunt_quest_monitor_bpc_C_MuteQuestMonitorComponent_Params
{
	bool                                               OutEnabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.GetSpeaker
struct Uhunt_quest_monitor_bpc_C_GetSpeaker_Params
{
	class UArchonSpeaker*                              Speaker;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.DisplayDebugInfo
struct Uhunt_quest_monitor_bpc_C_DisplayDebugInfo_Params
{
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.DeactivateHuntDialogueWidget
struct Uhunt_quest_monitor_bpc_C_DeactivateHuntDialogueWidget_Params
{
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ActivateHuntDialogueWidget
struct Uhunt_quest_monitor_bpc_C_ActivateHuntDialogueWidget_Params
{
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ReceiveBeginPlay
struct Uhunt_quest_monitor_bpc_C_ReceiveBeginPlay_Params
{
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ReceiveTick
struct Uhunt_quest_monitor_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.UpdateQuests
struct Uhunt_quest_monitor_bpc_C_UpdateQuests_Params
{
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.PauseQuestMonitorComponent
struct Uhunt_quest_monitor_bpc_C_PauseQuestMonitorComponent_Params
{
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.UnpauseQuestMonitorComponent
struct Uhunt_quest_monitor_bpc_C_UnpauseQuestMonitorComponent_Params
{
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.StartTimer
struct Uhunt_quest_monitor_bpc_C_StartTimer_Params
{
};

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ExecuteUbergraph_hunt_quest_monitor_bpc
struct Uhunt_quest_monitor_bpc_C_ExecuteUbergraph_hunt_quest_monitor_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
