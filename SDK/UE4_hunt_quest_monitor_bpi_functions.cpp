// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hunt_quest_monitor_bpi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.UnpauseQuestMonitorComponent
// (Public, BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpi_C::UnpauseQuestMonitorComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.UnpauseQuestMonitorComponent");

	Uhunt_quest_monitor_bpi_C_UnpauseQuestMonitorComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.PauseQuestMonitorComponent
// (Public, BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpi_C::PauseQuestMonitorComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.PauseQuestMonitorComponent");

	Uhunt_quest_monitor_bpi_C_PauseQuestMonitorComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.MuteQuestMonitorComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uhunt_quest_monitor_bpi_C::MuteQuestMonitorComponent(bool* OutEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C.MuteQuestMonitorComponent");

	Uhunt_quest_monitor_bpi_C_MuteQuestMonitorComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEnabled != nullptr)
		*OutEnabled = params.OutEnabled;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
