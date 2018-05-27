// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hunt_quest_monitor_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.MuteQuestMonitorComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutEnabled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uhunt_quest_monitor_bpc_C::MuteQuestMonitorComponent(bool* OutEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.MuteQuestMonitorComponent");

	Uhunt_quest_monitor_bpc_C_MuteQuestMonitorComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEnabled != nullptr)
		*OutEnabled = params.OutEnabled;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.GetSpeaker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonSpeaker*          Speaker                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uhunt_quest_monitor_bpc_C::GetSpeaker(class UArchonSpeaker** Speaker)
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.GetSpeaker");

	Uhunt_quest_monitor_bpc_C_GetSpeaker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Speaker != nullptr)
		*Speaker = params.Speaker;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.DisplayDebugInfo
// (Public, BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpc_C::DisplayDebugInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.DisplayDebugInfo");

	Uhunt_quest_monitor_bpc_C_DisplayDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.DeactivateHuntDialogueWidget
// (Public, BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpc_C::DeactivateHuntDialogueWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.DeactivateHuntDialogueWidget");

	Uhunt_quest_monitor_bpc_C_DeactivateHuntDialogueWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ActivateHuntDialogueWidget
// (Public, BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpc_C::ActivateHuntDialogueWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ActivateHuntDialogueWidget");

	Uhunt_quest_monitor_bpc_C_ActivateHuntDialogueWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uhunt_quest_monitor_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ReceiveBeginPlay");

	Uhunt_quest_monitor_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhunt_quest_monitor_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ReceiveTick");

	Uhunt_quest_monitor_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.UpdateQuests
// (BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpc_C::UpdateQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.UpdateQuests");

	Uhunt_quest_monitor_bpc_C_UpdateQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.PauseQuestMonitorComponent
// (Public, BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpc_C::PauseQuestMonitorComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.PauseQuestMonitorComponent");

	Uhunt_quest_monitor_bpc_C_PauseQuestMonitorComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.UnpauseQuestMonitorComponent
// (Public, BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpc_C::UnpauseQuestMonitorComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.UnpauseQuestMonitorComponent");

	Uhunt_quest_monitor_bpc_C_UnpauseQuestMonitorComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.StartTimer
// (BlueprintCallable, BlueprintEvent)

void Uhunt_quest_monitor_bpc_C::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.StartTimer");

	Uhunt_quest_monitor_bpc_C_StartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ExecuteUbergraph_hunt_quest_monitor_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhunt_quest_monitor_bpc_C::ExecuteUbergraph_hunt_quest_monitor_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C.ExecuteUbergraph_hunt_quest_monitor_bpc");

	Uhunt_quest_monitor_bpc_C_ExecuteUbergraph_hunt_quest_monitor_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
