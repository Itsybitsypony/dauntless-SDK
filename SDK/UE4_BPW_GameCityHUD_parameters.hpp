#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_GameCityHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.GetLastLogin
struct UBPW_GameCityHUD_C_GetLastLogin_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.HideTravelMessage
struct UBPW_GameCityHUD_C_HideTravelMessage_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.ShowTravelMessage
struct UBPW_GameCityHUD_C_ShowTravelMessage_Params
{
	struct FText                                       MessageToShow;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ShowSpinner;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.Construct
struct UBPW_GameCityHUD_C_Construct_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.Show Team Ready
struct UBPW_GameCityHUD_C_Show_Team_Ready_Params
{
	bool                                               Should_Show;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyMissionTravelStarted
struct UBPW_GameCityHUD_C_OnLobbyMissionTravelStarted_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyRallyMemberNotification_Event_1
struct UBPW_GameCityHUD_C_OnLobbyRallyMemberNotification_Event_1_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.Set Static Hud Visibility
struct UBPW_GameCityHUD_C_Set_Static_Hud_Visibility_Params
{
	bool*                                              Visible_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnQuestSystemReady
struct UBPW_GameCityHUD_C_OnQuestSystemReady_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.OnLobbyClientReady
struct UBPW_GameCityHUD_C_OnLobbyClientReady_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.Refresh Watermark City
struct UBPW_GameCityHUD_C_Refresh_Watermark_City_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.UpdateCityQuickSlotBar
struct UBPW_GameCityHUD_C_UpdateCityQuickSlotBar_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.RefreshBoosts
struct UBPW_GameCityHUD_C_RefreshBoosts_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.UpdatePlayer_IsLeader
struct UBPW_GameCityHUD_C_UpdatePlayer_IsLeader_Params
{
	bool                                               IsLeader;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.RefreshPlayerDeets
struct UBPW_GameCityHUD_C_RefreshPlayerDeets_Params
{
};

// Function BPW_GameCityHUD.BPW_GameCityHUD_C.ExecuteUbergraph_BPW_GameCityHUD
struct UBPW_GameCityHUD_C_ExecuteUbergraph_BPW_GameCityHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
