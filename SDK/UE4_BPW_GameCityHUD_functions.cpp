// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_GameCityHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.GetLastLogin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::GetLastLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.GetLastLogin");

	UBPW_GameCityHUD_C_GetLastLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.HideTravelMessage
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::HideTravelMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.HideTravelMessage");

	UBPW_GameCityHUD_C_HideTravelMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.ShowTravelMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   MessageToShow                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ShowSpinner                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameCityHUD_C::ShowTravelMessage(const struct FText& MessageToShow, bool ShowSpinner)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.ShowTravelMessage");

	UBPW_GameCityHUD_C_ShowTravelMessage_Params params;
	params.MessageToShow = MessageToShow;
	params.ShowSpinner = ShowSpinner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_GameCityHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.Construct");

	UBPW_GameCityHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.Show Team Ready
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Should_Show                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameCityHUD_C::Show_Team_Ready(bool Should_Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.Show Team Ready");

	UBPW_GameCityHUD_C_Show_Team_Ready_Params params;
	params.Should_Show = Should_Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyMissionTravelStarted
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::OnLobbyMissionTravelStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyMissionTravelStarted");

	UBPW_GameCityHUD_C_OnLobbyMissionTravelStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyRallyMemberNotification_Event_1
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::OnLobbyRallyMemberNotification_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyRallyMemberNotification_Event_1");

	UBPW_GameCityHUD_C_OnLobbyRallyMemberNotification_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.Set Static Hud Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameCityHUD_C::Set_Static_Hud_Visibility(bool* Visible_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.Set Static Hud Visibility");

	UBPW_GameCityHUD_C_Set_Static_Hud_Visibility_Params params;
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnQuestSystemReady
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::OnQuestSystemReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnQuestSystemReady");

	UBPW_GameCityHUD_C_OnQuestSystemReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyClientReady
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::OnLobbyClientReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyClientReady");

	UBPW_GameCityHUD_C_OnLobbyClientReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.Refresh Watermark City
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::Refresh_Watermark_City()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.Refresh Watermark City");

	UBPW_GameCityHUD_C_Refresh_Watermark_City_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.UpdateCityQuickSlotBar
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::UpdateCityQuickSlotBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.UpdateCityQuickSlotBar");

	UBPW_GameCityHUD_C_UpdateCityQuickSlotBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.RefreshBoosts
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::RefreshBoosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.RefreshBoosts");

	UBPW_GameCityHUD_C_RefreshBoosts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.UpdatePlayer_IsLeader
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsLeader                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameCityHUD_C::UpdatePlayer_IsLeader(bool IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.UpdatePlayer_IsLeader");

	UBPW_GameCityHUD_C_UpdatePlayer_IsLeader_Params params;
	params.IsLeader = IsLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.RefreshPlayerDeets
// (BlueprintCallable, BlueprintEvent)

void UBPW_GameCityHUD_C::RefreshPlayerDeets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.RefreshPlayerDeets");

	UBPW_GameCityHUD_C_RefreshPlayerDeets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_GameCityHUD.BPW_GameCityHUD_C.ExecuteUbergraph_BPW_GameCityHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_GameCityHUD_C::ExecuteUbergraph_BPW_GameCityHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_GameCityHUD.BPW_GameCityHUD_C.ExecuteUbergraph_BPW_GameCityHUD");

	UBPW_GameCityHUD_C_ExecuteUbergraph_BPW_GameCityHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
