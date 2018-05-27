#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_GameHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_GameHUD.BPW_GameHUD_C.RefreshBoosts
struct UBPW_GameHUD_C_RefreshBoosts_Params
{
};

// Function BPW_GameHUD.BPW_GameHUD_C.Reset Weapon UI
struct UBPW_GameHUD_C_Reset_Weapon_UI_Params
{
	bool                                               Initialization_Successful;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameHUD.BPW_GameHUD_C.Clear Weapon UI
struct UBPW_GameHUD_C_Clear_Weapon_UI_Params
{
};

// Function BPW_GameHUD.BPW_GameHUD_C.Display Ally Death Notification
struct UBPW_GameHUD_C_Display_Ally_Death_Notification_Params
{
	class FString                                      Player_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value_Remaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameHUD.BPW_GameHUD_C.Display Self Death Notification
struct UBPW_GameHUD_C_Display_Self_Death_Notification_Params
{
	int                                                Value_Remaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameHUD.BPW_GameHUD_C.Add Announcement Widget
struct UBPW_GameHUD_C_Add_Announcement_Widget_Params
{
	class UUserWidget*                                 Announcement_Widget;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DisplayTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameHUD.BPW_GameHUD_C.Tick
struct UBPW_GameHUD_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameHUD.BPW_GameHUD_C.Re-initialize Weapon UI
struct UBPW_GameHUD_C_Re_initialize_Weapon_UI_Params
{
};

// Function BPW_GameHUD.BPW_GameHUD_C.Set Static Hud Visibility
struct UBPW_GameHUD_C_Set_Static_Hud_Visibility_Params
{
	bool                                               Visible_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_GameHUD.BPW_GameHUD_C.Construct
struct UBPW_GameHUD_C_Construct_Params
{
};

// Function BPW_GameHUD.BPW_GameHUD_C.Refresh Watermark
struct UBPW_GameHUD_C_Refresh_Watermark_Params
{
};

// Function BPW_GameHUD.BPW_GameHUD_C.RefreshPlayerDeets
struct UBPW_GameHUD_C_RefreshPlayerDeets_Params
{
};

// Function BPW_GameHUD.BPW_GameHUD_C.ExecuteUbergraph_BPW_GameHUD
struct UBPW_GameHUD_C_ExecuteUbergraph_BPW_GameHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
