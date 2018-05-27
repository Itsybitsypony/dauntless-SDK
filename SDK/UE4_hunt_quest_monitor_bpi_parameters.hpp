#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hunt_quest_monitor_bpi_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.UnpauseQuestMonitorComponent
struct Uhunt_quest_monitor_bpi_C_UnpauseQuestMonitorComponent_Params
{
};

// Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.PauseQuestMonitorComponent
struct Uhunt_quest_monitor_bpi_C_PauseQuestMonitorComponent_Params
{
};

// Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.MuteQuestMonitorComponent
struct Uhunt_quest_monitor_bpi_C_MuteQuestMonitorComponent_Params
{
	bool                                               OutEnabled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
