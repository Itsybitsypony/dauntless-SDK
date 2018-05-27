// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_controller_bp.player_controller_bp_C.GetRankInTrack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::GetRankInTrack(const struct FName& Track, int* Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.GetRankInTrack");

	Aplayer_controller_bp_C_GetRankInTrack_Params params;
	params.Track = Track;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rank != nullptr)
		*Rank = params.Rank;
}


// Function player_controller_bp.player_controller_bp_C.HasSeenReturnToRamsgateCinematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasSeenCinematic               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::HasSeenReturnToRamsgateCinematic(bool* HasSeenCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.HasSeenReturnToRamsgateCinematic");

	Aplayer_controller_bp_C_HasSeenReturnToRamsgateCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasSeenCinematic != nullptr)
		*HasSeenCinematic = params.HasSeenCinematic;
}


// Function player_controller_bp.player_controller_bp_C.CanShowWelcomeMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aplayer_controller_bp_C::CanShowWelcomeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.CanShowWelcomeMessage");

	Aplayer_controller_bp_C_CanShowWelcomeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_controller_bp.player_controller_bp_C.IsMissionTimerVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMissionTimerVisible          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::IsMissionTimerVisible(bool* IsMissionTimerVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.IsMissionTimerVisible");

	Aplayer_controller_bp_C_IsMissionTimerVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMissionTimerVisible != nullptr)
		*IsMissionTimerVisible = params.IsMissionTimerVisible;
}


// Function player_controller_bp.player_controller_bp_C.GetPlayerInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::GetPlayerInterface(TScriptInterface<class Uplayer_interface_C>* Player_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.GetPlayerInterface");

	Aplayer_controller_bp_C_GetPlayerInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Interface != nullptr)
		*Player_Interface = params.Player_Interface;
}


// Function player_controller_bp.player_controller_bp_C.GetUsedGamePad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsedGamePad                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::GetUsedGamePad(bool* UsedGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.GetUsedGamePad");

	Aplayer_controller_bp_C_GetUsedGamePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsedGamePad != nullptr)
		*UsedGamePad = params.UsedGamePad;
}


// Function player_controller_bp.player_controller_bp_C.GetUsedMouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsedMouse                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::GetUsedMouse(bool* UsedMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.GetUsedMouse");

	Aplayer_controller_bp_C_GetUsedMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsedMouse != nullptr)
		*UsedMouse = params.UsedMouse;
}


// Function player_controller_bp.player_controller_bp_C.Internal_UsedMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::Internal_UsedMouse(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Internal_UsedMouse");

	Aplayer_controller_bp_C_Internal_UsedMouse_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Internal_UsedGamepad
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::Internal_UsedGamepad(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Internal_UsedGamepad");

	Aplayer_controller_bp_C_Internal_UsedGamepad_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnRep_MasterOfHuntTrigger
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::OnRep_MasterOfHuntTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnRep_MasterOfHuntTrigger");

	Aplayer_controller_bp_C_OnRep_MasterOfHuntTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnRep_bIsTutorialHuntActive
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::OnRep_bIsTutorialHuntActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnRep_bIsTutorialHuntActive");

	Aplayer_controller_bp_C_OnRep_bIsTutorialHuntActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Is Cinematic Playing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aplayer_controller_bp_C::Is_Cinematic_Playing()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Is Cinematic Playing");

	Aplayer_controller_bp_C_Is_Cinematic_Playing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_controller_bp.player_controller_bp_C.Reset Revive Token Count
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::Reset_Revive_Token_Count()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Reset Revive Token Count");

	Aplayer_controller_bp_C_Reset_Revive_Token_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Consume Revive Token
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_To_Consume              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Consumption_Successful         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::Consume_Revive_Token(int Number_To_Consume, bool* Consumption_Successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Consume Revive Token");

	Aplayer_controller_bp_C_Consume_Revive_Token_Params params;
	params.Number_To_Consume = Number_To_Consume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Consumption_Successful != nullptr)
		*Consumption_Successful = params.Consumption_Successful;
}


// Function player_controller_bp.player_controller_bp_C.Get Revive Token Count
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Revive_Token_Count             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::Get_Revive_Token_Count(int* Revive_Token_Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Get Revive Token Count");

	Aplayer_controller_bp_C_Get_Revive_Token_Count_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Revive_Token_Count != nullptr)
		*Revive_Token_Count = params.Revive_Token_Count;
}


// Function player_controller_bp.player_controller_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.UserConstructionScript");

	Aplayer_controller_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_28
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_28(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_28");

	Aplayer_controller_bp_C_InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_28_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_27
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_27(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_27");

	Aplayer_controller_bp_C_InpActEvt_Quickslot_Toggle_K2Node_InputActionEvent_27_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnLoaded_4368EE104960A49884DCADBC40BE453C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::OnLoaded_4368EE104960A49884DCADBC40BE453C(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnLoaded_4368EE104960A49884DCADBC40BE453C");

	Aplayer_controller_bp_C_OnLoaded_4368EE104960A49884DCADBC40BE453C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Chat Window_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Chat_Window_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Chat Window_K2Node_InputActionEvent_26");

	Aplayer_controller_bp_C_InpActEvt_Chat_Window_K2Node_InputActionEvent_26_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Pause_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Pause_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Pause_K2Node_InputActionEvent_25");

	Aplayer_controller_bp_C_InpActEvt_Pause_K2Node_InputActionEvent_25_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Journal Hotkey_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Journal_Hotkey_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Journal Hotkey_K2Node_InputActionEvent_24");

	Aplayer_controller_bp_C_InpActEvt_Journal_Hotkey_K2Node_InputActionEvent_24_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Social Menu_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Social_Menu_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Social Menu_K2Node_InputActionEvent_23");

	Aplayer_controller_bp_C_InpActEvt_Social_Menu_K2Node_InputActionEvent_23_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Show Control Overlay_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Show_Control_Overlay_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Show Control Overlay_K2Node_InputActionEvent_22");

	Aplayer_controller_bp_C_InpActEvt_Show_Control_Overlay_K2Node_InputActionEvent_22_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Show Control Overlay_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Show_Control_Overlay_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Show Control Overlay_K2Node_InputActionEvent_21");

	Aplayer_controller_bp_C_InpActEvt_Show_Control_Overlay_K2Node_InputActionEvent_21_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_CommWheel_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_CommWheel_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_CommWheel_K2Node_InputActionEvent_20");

	Aplayer_controller_bp_C_InpActEvt_CommWheel_K2Node_InputActionEvent_20_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_CommWheel_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_CommWheel_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_CommWheel_K2Node_InputActionEvent_19");

	Aplayer_controller_bp_C_InpActEvt_CommWheel_K2Node_InputActionEvent_19_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Loadout Hotkey_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Loadout_Hotkey_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Loadout Hotkey_K2Node_InputActionEvent_18");

	Aplayer_controller_bp_C_InpActEvt_Loadout_Hotkey_K2Node_InputActionEvent_18_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Style Hotkey_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Style_Hotkey_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Style Hotkey_K2Node_InputActionEvent_17");

	Aplayer_controller_bp_C_InpActEvt_Style_Hotkey_K2Node_InputActionEvent_17_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Inventory Hotkey_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Inventory_Hotkey_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Inventory Hotkey_K2Node_InputActionEvent_16");

	Aplayer_controller_bp_C_InpActEvt_Inventory_Hotkey_K2Node_InputActionEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.InpActEvt_Map Hotkey_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::InpActEvt_Map_Hotkey_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.InpActEvt_Map Hotkey_K2Node_InputActionEvent_15");

	Aplayer_controller_bp_C_InpActEvt_Map_Hotkey_K2Node_InputActionEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.PlayPlayerIDTones
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::PlayPlayerIDTones()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.PlayPlayerIDTones");

	Aplayer_controller_bp_C_PlayPlayerIDTones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Server_RequestUpdateLanternStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::Server_RequestUpdateLanternStats(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Server_RequestUpdateLanternStats");

	Aplayer_controller_bp_C_Server_RequestUpdateLanternStats_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.SupressBreakpartLootNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSupress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::SupressBreakpartLootNotifications(bool ShouldSupress)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SupressBreakpartLootNotifications");

	Aplayer_controller_bp_C_SupressBreakpartLootNotifications_Params params;
	params.ShouldSupress = ShouldSupress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.RequestPendingRewards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            DisplayPanel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::RequestPendingRewards(class UCanvasPanel* DisplayPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.RequestPendingRewards");

	Aplayer_controller_bp_C_RequestPendingRewards_Params params;
	params.DisplayPanel = DisplayPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.SetRankInTrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::SetRankInTrack(const struct FName& Track, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SetRankInTrack");

	Aplayer_controller_bp_C_SetRankInTrack_Params params;
	params.Track = Track;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnQuickSlotConfirm
// (Event, Public, BlueprintEvent)

void Aplayer_controller_bp_C::OnQuickSlotConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnQuickSlotConfirm");

	Aplayer_controller_bp_C_OnQuickSlotConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnQuickSlotCycleBackward
// (Event, Public, BlueprintEvent)

void Aplayer_controller_bp_C::OnQuickSlotCycleBackward()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnQuickSlotCycleBackward");

	Aplayer_controller_bp_C_OnQuickSlotCycleBackward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnQuickSlotCycleForward
// (Event, Public, BlueprintEvent)

void Aplayer_controller_bp_C::OnQuickSlotCycleForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnQuickSlotCycleForward");

	Aplayer_controller_bp_C_OnQuickSlotCycleForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnStartNewCharacterFlow
// (Event, Public, BlueprintEvent)

void Aplayer_controller_bp_C::OnStartNewCharacterFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnStartNewCharacterFlow");

	Aplayer_controller_bp_C_OnStartNewCharacterFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.New Character Flow
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::New_Character_Flow()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.New Character Flow");

	Aplayer_controller_bp_C_New_Character_Flow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnFinishNewCharacterFlow
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::OnFinishNewCharacterFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnFinishNewCharacterFlow");

	Aplayer_controller_bp_C_OnFinishNewCharacterFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Input Swap");

	Aplayer_controller_bp_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnWheelClose
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::OnWheelClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnWheelClose");

	Aplayer_controller_bp_C_OnWheelClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.DebugBeginPlay
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::DebugBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.DebugBeginPlay");

	Aplayer_controller_bp_C_DebugBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.FORCEAUTOPLAYCHECK
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::FORCEAUTOPLAYCHECK()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.FORCEAUTOPLAYCHECK");

	Aplayer_controller_bp_C_FORCEAUTOPLAYCHECK_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.EndMissionEvent
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success_State                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EndOfMissionTimer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DangerLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EndOfMatch_GameType> EndofMatchMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         Beh1                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         Beh2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fbadge_infos>    BadgeInfos                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct Fplayer_highlight_info  MoTHData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TeamScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Fplayer_score_info> IndividualScores               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::EndMissionEvent(bool Success_State, float Duration, int EndOfMissionTimer, float DangerLevel, TEnumAsByte<EndOfMatch_GameType> EndofMatchMode, class AArchonBehemoth* Beh1, class AArchonBehemoth* Beh2, TArray<struct Fbadge_infos> BadgeInfos, const struct Fplayer_highlight_info& MoTHData, float TeamScore, TArray<struct Fplayer_score_info> IndividualScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.EndMissionEvent");

	Aplayer_controller_bp_C_EndMissionEvent_Params params;
	params.Success_State = Success_State;
	params.Duration = Duration;
	params.EndOfMissionTimer = EndOfMissionTimer;
	params.DangerLevel = DangerLevel;
	params.EndofMatchMode = EndofMatchMode;
	params.Beh1 = Beh1;
	params.Beh2 = Beh2;
	params.BadgeInfos = BadgeInfos;
	params.MoTHData = MoTHData;
	params.TeamScore = TeamScore;
	params.IndividualScores = IndividualScores;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ShowLevelSelect
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::ShowLevelSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ShowLevelSelect");

	Aplayer_controller_bp_C_ShowLevelSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.RequestChangeLevel
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  MapToLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::RequestChangeLevel(const class FString& MapToLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.RequestChangeLevel");

	Aplayer_controller_bp_C_RequestChangeLevel_Params params;
	params.MapToLoad = MapToLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ReceiveEndPlay");

	Aplayer_controller_bp_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aplayer_controller_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ReceiveBeginPlay");

	Aplayer_controller_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Display Ally Death Notification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Ally_Name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Value_Remaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::Display_Ally_Death_Notification(const class FString& Ally_Name, int Value_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Display Ally Death Notification");

	Aplayer_controller_bp_C_Display_Ally_Death_Notification_Params params;
	params.Ally_Name = Ally_Name;
	params.Value_Remaining = Value_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Display Self Death Notification
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value_Remaining                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::Display_Self_Death_Notification(int Value_Remaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Display Self Death Notification");

	Aplayer_controller_bp_C_Display_Self_Death_Notification_Params params;
	params.Value_Remaining = Value_Remaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Register New Pawn View Target
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::Register_New_Pawn_View_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Register New Pawn View Target");

	Aplayer_controller_bp_C_Register_New_Pawn_View_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.DisplayMaxDangerWarning
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::DisplayMaxDangerWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.DisplayMaxDangerWarning");

	Aplayer_controller_bp_C_DisplayMaxDangerWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.DisplayAllSlayersDownFail
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::DisplayAllSlayersDownFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.DisplayAllSlayersDownFail");

	Aplayer_controller_bp_C_DisplayAllSlayersDownFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.DisplayBehemothPicker
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::DisplayBehemothPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.DisplayBehemothPicker");

	Aplayer_controller_bp_C_DisplayBehemothPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.RequestBehemothToMode
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::RequestBehemothToMode(const struct FName& Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.RequestBehemothToMode");

	Aplayer_controller_bp_C_RequestBehemothToMode_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnSetInventory
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AArchonInventory**       InInventory                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::OnSetInventory(class AArchonInventory** InInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnSetInventory");

	Aplayer_controller_bp_C_OnSetInventory_Params params;
	params.InInventory = InInventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.On Items Granted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGrantedItemNotification> GrantedNotification            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::On_Items_Granted(TArray<struct FGrantedItemNotification> GrantedNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.On Items Granted");

	Aplayer_controller_bp_C_On_Items_Granted_Params params;
	params.GrantedNotification = GrantedNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.RemoveMaxDangerWarning
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::RemoveMaxDangerWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.RemoveMaxDangerWarning");

	Aplayer_controller_bp_C_RemoveMaxDangerWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ReceiveTick");

	Aplayer_controller_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ResetWeaponUI
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::ResetWeaponUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ResetWeaponUI");

	Aplayer_controller_bp_C_ResetWeaponUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.EndMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EoM_Timer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Danger                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BehemothPower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EndOfMatch_GameType> EndofMatchMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         Behemoth_01                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         Behemoth_02                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fbadge_wrapper_thx_unreal BadgeInfoWrapper               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Fplayer_highlight_info  MoTHData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TeamScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fplayer_score_wrapper   PlayerScores                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Aplayer_controller_bp_C::EndMission(bool Success, float Duration, int EoM_Timer, float Danger, float BehemothPower, TEnumAsByte<EndOfMatch_GameType> EndofMatchMode, class AArchonBehemoth* Behemoth_01, class AArchonBehemoth* Behemoth_02, const struct Fbadge_wrapper_thx_unreal& BadgeInfoWrapper, const struct Fplayer_highlight_info& MoTHData, float TeamScore, const struct Fplayer_score_wrapper& PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.EndMission");

	Aplayer_controller_bp_C_EndMission_Params params;
	params.Success = Success;
	params.Duration = Duration;
	params.EoM_Timer = EoM_Timer;
	params.Danger = Danger;
	params.BehemothPower = BehemothPower;
	params.EndofMatchMode = EndofMatchMode;
	params.Behemoth_01 = Behemoth_01;
	params.Behemoth_02 = Behemoth_02;
	params.BadgeInfoWrapper = BadgeInfoWrapper;
	params.MoTHData = MoTHData;
	params.TeamScore = TeamScore;
	params.PlayerScores = PlayerScores;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.DisplayAllSlayersDown
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::DisplayAllSlayersDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.DisplayAllSlayersDown");

	Aplayer_controller_bp_C_DisplayAllSlayersDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.DisplayMaxDanger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::DisplayMaxDanger(bool TurnOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.DisplayMaxDanger");

	Aplayer_controller_bp_C_DisplayMaxDanger_Params params;
	params.TurnOn_ = TurnOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnHuntDepart
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::OnHuntDepart()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnHuntDepart");

	Aplayer_controller_bp_C_OnHuntDepart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnContainerUnlockedItemsGranted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGrantedItemNotification> GrantedNotification            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::OnContainerUnlockedItemsGranted(TArray<struct FGrantedItemNotification> GrantedNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnContainerUnlockedItemsGranted");

	Aplayer_controller_bp_C_OnContainerUnlockedItemsGranted_Params params;
	params.GrantedNotification = GrantedNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.SetCinematicStateRPC
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::SetCinematicStateRPC(TEnumAsByte<ECinematicPlayerState> CinematicState)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SetCinematicStateRPC");

	Aplayer_controller_bp_C_SetCinematicStateRPC_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.SetCinematicState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::SetCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SetCinematicState");

	Aplayer_controller_bp_C_SetCinematicState_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.SetCinematicInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCinematicPlayerInterface_C> CinematicPlayerInterface       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::SetCinematicInterface(const TScriptInterface<class UCinematicPlayerInterface_C>& CinematicPlayerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SetCinematicInterface");

	Aplayer_controller_bp_C_SetCinematicInterface_Params params;
	params.CinematicPlayerInterface = CinematicPlayerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnServerPlayerStarted
// (Event, Protected, BlueprintEvent)

void Aplayer_controller_bp_C::OnServerPlayerStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnServerPlayerStarted");

	Aplayer_controller_bp_C_OnServerPlayerStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Client_EndOfHunt_LevelSequence
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::Client_EndOfHunt_LevelSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Client_EndOfHunt_LevelSequence");

	Aplayer_controller_bp_C_Client_EndOfHunt_LevelSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Server_EndOfHunt_LevelSequences
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::Server_EndOfHunt_LevelSequences()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Server_EndOfHunt_LevelSequences");

	Aplayer_controller_bp_C_Server_EndOfHunt_LevelSequences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Aplayer_controller_bp_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ReceiveGameplayStart");

	Aplayer_controller_bp_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Server Gameplay Start
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::Server_Gameplay_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Server Gameplay Start");

	Aplayer_controller_bp_C_Server_Gameplay_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ClearMenus
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::ClearMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ClearMenus");

	Aplayer_controller_bp_C_ClearMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.AuthForceControlRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aplayer_controller_bp_C::AuthForceControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.AuthForceControlRotation");

	Aplayer_controller_bp_C_AuthForceControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ClientForceControlRotation
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aplayer_controller_bp_C::ClientForceControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ClientForceControlRotation");

	Aplayer_controller_bp_C_ClientForceControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Server_MovePlayersBackToArrivalArea
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::Server_MovePlayersBackToArrivalArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Server_MovePlayersBackToArrivalArea");

	Aplayer_controller_bp_C_Server_MovePlayersBackToArrivalArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ShowMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::ShowMissionTimer(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ShowMissionTimer");

	Aplayer_controller_bp_C_ShowMissionTimer_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.HideMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::HideMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.HideMissionTimer");

	Aplayer_controller_bp_C_HideMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ClientShowMissionTimer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::ClientShowMissionTimer(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ClientShowMissionTimer");

	Aplayer_controller_bp_C_ClientShowMissionTimer_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ClientHideMissionTimer
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::ClientHideMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ClientHideMissionTimer");

	Aplayer_controller_bp_C_ClientHideMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.HideAllSlayersDown
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::HideAllSlayersDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.HideAllSlayersDown");

	Aplayer_controller_bp_C_HideAllSlayersDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ClientHideAllSlayersDown
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::ClientHideAllSlayersDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ClientHideAllSlayersDown");

	Aplayer_controller_bp_C_ClientHideAllSlayersDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnItemGrantedFromDustEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::OnItemGrantedFromDustEvent(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnItemGrantedFromDustEvent");

	Aplayer_controller_bp_C_OnItemGrantedFromDustEvent_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.BehemothSlain_NoEndHunt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth_02                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::BehemothSlain_NoEndHunt(class AArchonBehemoth* Behemoth_02)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.BehemothSlain_NoEndHunt");

	Aplayer_controller_bp_C_BehemothSlain_NoEndHunt_Params params;
	params.Behemoth_02 = Behemoth_02;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.BehemothSlain_Notification
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::BehemothSlain_Notification(class AArchonBehemoth* Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.BehemothSlain_Notification");

	Aplayer_controller_bp_C_BehemothSlain_Notification_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Client_TransmitDyeConfiguration
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDyeVariant             DyeConfiguration               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::Client_TransmitDyeConfiguration(const struct FDyeVariant& DyeConfiguration, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Client_TransmitDyeConfiguration");

	Aplayer_controller_bp_C_Client_TransmitDyeConfiguration_Params params;
	params.DyeConfiguration = DyeConfiguration;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Auth_GetArmourDyeConfiguration
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::Auth_GetArmourDyeConfiguration(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Auth_GetArmourDyeConfiguration");

	Aplayer_controller_bp_C_Auth_GetArmourDyeConfiguration_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Auth_GetLanternResistance
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::Auth_GetLanternResistance(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Auth_GetLanternResistance");

	Aplayer_controller_bp_C_Auth_GetLanternResistance_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Client_TransmitLanternResistance
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GlobalResistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct Felement_float_pair> ElementalResist                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::Client_TransmitLanternResistance(float GlobalResistance, const class FString& InstanceId, TArray<struct Felement_float_pair> ElementalResist)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Client_TransmitLanternResistance");

	Aplayer_controller_bp_C_Client_TransmitLanternResistance_Params params;
	params.GlobalResistance = GlobalResistance;
	params.InstanceId = InstanceId;
	params.ElementalResist = ElementalResist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Auth_GetContainerBoostData
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::Auth_GetContainerBoostData(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Auth_GetContainerBoostData");

	Aplayer_controller_bp_C_Auth_GetContainerBoostData_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Client_TransmitContainerData
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           DoesContainerHaveChampionBoost (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          PatronBoostPlayers             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::Client_TransmitContainerData(const class FString& InstanceId, bool DoesContainerHaveChampionBoost, TArray<class FString> PatronBoostPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Client_TransmitContainerData");

	Aplayer_controller_bp_C_Client_TransmitContainerData_Params params;
	params.InstanceId = InstanceId;
	params.DoesContainerHaveChampionBoost = DoesContainerHaveChampionBoost;
	params.PatronBoostPlayers = PatronBoostPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Hunt_CurrentMissionInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Island                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  HuntId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::Hunt_CurrentMissionInfo(const class FString& Island, const class FString& HuntId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Hunt_CurrentMissionInfo");

	Aplayer_controller_bp_C_Hunt_CurrentMissionInfo_Params params;
	params.Island = Island;
	params.HuntId = HuntId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Trigger Player HUD Ready
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::Trigger_Player_HUD_Ready()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Trigger Player HUD Ready");

	Aplayer_controller_bp_C_Trigger_Player_HUD_Ready_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Auth_GetItemEquippedCells
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::Auth_GetItemEquippedCells(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Auth_GetItemEquippedCells");

	Aplayer_controller_bp_C_Auth_GetItemEquippedCells_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Client_TransmitItemEquippedCells
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FEquippedCellData> EquippedCells                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::Client_TransmitItemEquippedCells(const class FString& InstanceId, TArray<struct FEquippedCellData> EquippedCells)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Client_TransmitItemEquippedCells");

	Aplayer_controller_bp_C_Client_TransmitItemEquippedCells_Params params;
	params.InstanceId = InstanceId;
	params.EquippedCells = EquippedCells;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.AuthHandleConditionalLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eloot_condition_type> ConditionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::AuthHandleConditionalLoot(const class FString& ItemID, const class FString& Source, int Amount, TEnumAsByte<Eloot_condition_type> ConditionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.AuthHandleConditionalLoot");

	Aplayer_controller_bp_C_AuthHandleConditionalLoot_Params params;
	params.ItemID = ItemID;
	params.Source = Source;
	params.Amount = Amount;
	params.ConditionType = ConditionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.NotifyOwningClientAboutConditionalLoot
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eloot_condition_type> ConditionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::NotifyOwningClientAboutConditionalLoot(const class FString& ItemID, int Amount, TEnumAsByte<Eloot_condition_type> ConditionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.NotifyOwningClientAboutConditionalLoot");

	Aplayer_controller_bp_C_NotifyOwningClientAboutConditionalLoot_Params params;
	params.ItemID = ItemID;
	params.Amount = Amount;
	params.ConditionType = ConditionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Auth_GetPatronPlayers
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::Auth_GetPatronPlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Auth_GetPatronPlayers");

	Aplayer_controller_bp_C_Auth_GetPatronPlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.Client_GetPatronPlayers
// (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          PatronBoostPlayers             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::Client_GetPatronPlayers(TArray<class FString> PatronBoostPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.Client_GetPatronPlayers");

	Aplayer_controller_bp_C_Client_GetPatronPlayers_Params params;
	params.PatronBoostPlayers = PatronBoostPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.SkipCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::SkipCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SkipCinematic");

	Aplayer_controller_bp_C_SkipCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnClientMasterOfHuntComplete
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::OnClientMasterOfHuntComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnClientMasterOfHuntComplete");

	Aplayer_controller_bp_C_OnClientMasterOfHuntComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.BindToMOTHClientStop
// (BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::BindToMOTHClientStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.BindToMOTHClientStop");

	Aplayer_controller_bp_C_BindToMOTHClientStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.SetMOTHTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::SetMOTHTrigger(class AActor* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SetMOTHTrigger");

	Aplayer_controller_bp_C_SetMOTHTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.SuppressLootNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSuppress                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::SuppressLootNotifications(bool ShouldSuppress)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SuppressLootNotifications");

	Aplayer_controller_bp_C_SuppressLootNotifications_Params params;
	params.ShouldSuppress = ShouldSuppress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.ExecuteUbergraph_player_controller_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::ExecuteUbergraph_player_controller_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.ExecuteUbergraph_player_controller_bp");

	Aplayer_controller_bp_C_ExecuteUbergraph_player_controller_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnGetPatronBoostPlayers__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          PatronBoostPlayers             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::OnGetPatronBoostPlayers__DelegateSignature(TArray<class FString>* PatronBoostPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnGetPatronBoostPlayers__DelegateSignature");

	Aplayer_controller_bp_C_OnGetPatronBoostPlayers__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PatronBoostPlayers != nullptr)
		*PatronBoostPlayers = params.PatronBoostPlayers;
}


// Function player_controller_bp.player_controller_bp_C.OnUpdateEquippedCells__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::OnUpdateEquippedCells__DelegateSignature(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnUpdateEquippedCells__DelegateSignature");

	Aplayer_controller_bp_C_OnUpdateEquippedCells__DelegateSignature_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnGetContainerData__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           DoesContainerHaveChapion       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          PatronBoostPlayers             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::OnGetContainerData__DelegateSignature(const class FString& InstanceId, bool DoesContainerHaveChapion, TArray<class FString>* PatronBoostPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnGetContainerData__DelegateSignature");

	Aplayer_controller_bp_C_OnGetContainerData__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.DoesContainerHaveChapion = DoesContainerHaveChapion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PatronBoostPlayers != nullptr)
		*PatronBoostPlayers = params.PatronBoostPlayers;
}


// Function player_controller_bp.player_controller_bp_C.OnGetLanternResistance__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GlobalResistance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct Felement_float_pair> ElementalResistances           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::OnGetLanternResistance__DelegateSignature(float GlobalResistance, const class FString& InstanceId, TArray<struct Felement_float_pair>* ElementalResistances)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnGetLanternResistance__DelegateSignature");

	Aplayer_controller_bp_C_OnGetLanternResistance__DelegateSignature_Params params;
	params.GlobalResistance = GlobalResistance;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementalResistances != nullptr)
		*ElementalResistances = params.ElementalResistances;
}


// Function player_controller_bp.player_controller_bp_C.OnGetBannerDyeConfiguration__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBannerCustomizationItemIDs BannerConfiguration            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::OnGetBannerDyeConfiguration__DelegateSignature(const struct FBannerCustomizationItemIDs& BannerConfiguration, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnGetBannerDyeConfiguration__DelegateSignature");

	Aplayer_controller_bp_C_OnGetBannerDyeConfiguration__DelegateSignature_Params params;
	params.BannerConfiguration = BannerConfiguration;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnGetArmourDyeConfiguration__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDyeVariant             DyeConfiguration               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::OnGetArmourDyeConfiguration__DelegateSignature(const struct FDyeVariant& DyeConfiguration, const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnGetArmourDyeConfiguration__DelegateSignature");

	Aplayer_controller_bp_C_OnGetArmourDyeConfiguration__DelegateSignature_Params params;
	params.DyeConfiguration = DyeConfiguration;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnItemGrantedFromDust__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aplayer_controller_bp_C::OnItemGrantedFromDust__DelegateSignature(const class FString& Item_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnItemGrantedFromDust__DelegateSignature");

	Aplayer_controller_bp_C_OnItemGrantedFromDust__DelegateSignature_Params params;
	params.Item_ID = Item_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnContainerUnlocked__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGrantedItemNotification> Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aplayer_controller_bp_C::OnContainerUnlocked__DelegateSignature(TArray<struct FGrantedItemNotification>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnContainerUnlocked__DelegateSignature");

	Aplayer_controller_bp_C_OnContainerUnlocked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function player_controller_bp.player_controller_bp_C.SystemReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SystemName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::SystemReady__DelegateSignature(const struct FName& SystemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.SystemReady__DelegateSignature");

	Aplayer_controller_bp_C_SystemReady__DelegateSignature_Params params;
	params.SystemName = SystemName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnNewItemAcquired - Dispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eloot_condition_type> LootCondition                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::OnNewItemAcquired___Dispatcher__DelegateSignature(const class FString& Item_ID, int Amount, TEnumAsByte<Eloot_condition_type> LootCondition)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnNewItemAcquired - Dispatcher__DelegateSignature");

	Aplayer_controller_bp_C_OnNewItemAcquired___Dispatcher__DelegateSignature_Params params;
	params.Item_ID = Item_ID;
	params.Amount = Amount;
	params.LootCondition = LootCondition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnQuickSlotControllerToggle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_controller_bp_C::OnQuickSlotControllerToggle__DelegateSignature(bool Active_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnQuickSlotControllerToggle__DelegateSignature");

	Aplayer_controller_bp_C_OnQuickSlotControllerToggle__DelegateSignature_Params params;
	params.Active_ = Active_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_bp.player_controller_bp_C.OnResetWeaponUI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Aplayer_controller_bp_C::OnResetWeaponUI__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_bp.player_controller_bp_C.OnResetWeaponUI__DelegateSignature");

	Aplayer_controller_bp_C_OnResetWeaponUI__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
