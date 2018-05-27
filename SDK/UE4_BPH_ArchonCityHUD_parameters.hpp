#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonCityHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.TryShowWelcomeMessage
struct ABPH_ArchonCityHUD_C_TryShowWelcomeMessage_Params
{
	bool                                               bDidShow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ShouldShowWelcomeMessage
struct ABPH_ArchonCityHUD_C_ShouldShowWelcomeMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.DrawObjective
struct ABPH_ArchonCityHUD_C_DrawObjective_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Update Player Ready Display
struct ABPH_ArchonCityHUD_C_Update_Player_Ready_Display_Params
{
	bool                                               Is_Ready;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.UserConstructionScript
struct ABPH_ArchonCityHUD_C_UserConstructionScript_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.On Invite Sent
struct ABPH_ArchonCityHUD_C_On_Invite_Sent_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Handle Command
struct ABPH_ArchonCityHUD_C_Handle_Command_Params
{
	class FString*                                     Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveBeginPlay
struct ABPH_ArchonCityHUD_C_ReceiveBeginPlay_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveTick
struct ABPH_ArchonCityHUD_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.J - PlayerJournal
struct ABPH_ArchonCityHUD_C_J___PlayerJournal_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Escape Menu
struct ABPH_ArchonCityHUD_C_Escape_Menu_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveDrawHUD
struct ABPH_ArchonCityHUD_C_ReceiveDrawHUD_Params
{
	int*                                               SizeX;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SizeY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.M - Map
struct ABPH_ArchonCityHUD_C_M___Map_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Refresh HUD Widget Visibility
struct ABPH_ArchonCityHUD_C_Refresh_HUD_Widget_Visibility_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.K2_OnHUDVisibityChanged
struct ABPH_ArchonCityHUD_C_K2_OnHUDVisibityChanged_Params
{
	bool*                                              PreviousVisibility;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Set Gameplay HUD Visibility
struct ABPH_ArchonCityHUD_C_Set_Gameplay_HUD_Visibility_Params
{
	bool*                                              Is_Visible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Register Party Notifications
struct ABPH_ArchonCityHUD_C_Register_Party_Notifications_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReceiveGameplayStart
struct ABPH_ArchonCityHUD_C_ReceiveGameplayStart_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show HUD
struct ABPH_ArchonCityHUD_C_Show_HUD_Params
{
	bool*                                              Game_Input;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShowChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.P - Party Menu
struct ABPH_ArchonCityHUD_C_P___Party_Menu_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Return to Game
struct ABPH_ArchonCityHUD_C_Return_to_Game_Params
{
	TEnumAsByte<Eui_character_screen_mode>*            Previous_Screen;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Player HUD Ready
struct ABPH_ArchonCityHUD_C_Player_HUD_Ready_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show Mission Timer
struct ABPH_ArchonCityHUD_C_Show_Mission_Timer_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Hide Mission Timer
struct ABPH_ArchonCityHUD_C_Hide_Mission_Timer_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.Show Store
struct ABPH_ArchonCityHUD_C_Show_Store_Params
{
	class FString*                                     Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString*                                     InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget**                                    UI_to_returnTo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ReturntoGameplay_OnClose;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.GetLastLogin
struct ABPH_ArchonCityHUD_C_GetLastLogin_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.UpdatePlayerHUDDetails
struct ABPH_ArchonCityHUD_C_UpdatePlayerHUDDetails_Params
{
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ExecuteUbergraph_BPH_ArchonCityHUD
struct ABPH_ArchonCityHUD_C_ExecuteUbergraph_BPH_ArchonCityHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonCityHUD.BPH_ArchonCityHUD_C.ReturnFocustoMenu__DelegateSignature
struct ABPH_ArchonCityHUD_C_ReturnFocustoMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
