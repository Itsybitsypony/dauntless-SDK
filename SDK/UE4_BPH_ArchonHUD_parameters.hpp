#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPH_ArchonHUD_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.GetWeaponPowerTable
struct ABPH_ArchonHUD_C_GetWeaponPowerTable_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWeaponPowerTableData                       WeaponPowerTable;                                         // (Parm, OutParm)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.GetPaperdollScene
struct ABPH_ArchonHUD_C_GetPaperdollScene_Params
{
	class Upaperdoll_scene_component_C*                PaperdollScene;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Get Chat Widget
struct ABPH_ArchonHUD_C_Get_Chat_Widget_Params
{
	class UChat_MenuRoot_bpw_C*                        ChatWidget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Try Chat Input
struct ABPH_ArchonHUD_C_Try_Chat_Input_Params
{
	bool                                               FromGameplay;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Add Progress Widget to Panel
struct ABPH_ArchonHUD_C_Add_Progress_Widget_to_Panel_Params
{
	class UCanvasPanel*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Chat Command
struct ABPH_ArchonHUD_C_Handle_Chat_Command_Params
{
	class FString                                      SourceString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Did_Handle;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Return to Game
struct ABPH_ArchonHUD_C_Return_to_Game_Params
{
	TEnumAsByte<Eui_character_screen_mode>             Previous_Screen;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Create Compass Widgets
struct ABPH_ArchonHUD_C_Create_Compass_Widgets_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReturnFocusfromUI
struct ABPH_ArchonHUD_C_ReturnFocusfromUI_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.UserConstructionScript
struct ABPH_ArchonHUD_C_UserConstructionScript_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Restore Game Input
struct ABPH_ArchonHUD_C_Restore_Game_Input_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Store
struct ABPH_ArchonHUD_C_Show_Store_Params
{
	class FString                                      Path;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     UI_to_returnTo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturntoGameplay_OnClose;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.HideStore
struct ABPH_ArchonHUD_C_HideStore_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.GameplayStart Quest Event
struct ABPH_ArchonHUD_C_GameplayStart_Quest_Event_Params
{
	class UQuestEventData*                             Event;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Progression Award Finished
struct ABPH_ArchonHUD_C_Progression_Award_Finished_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Progression Awarded
struct ABPH_ArchonHUD_C_Progression_Awarded_Params
{
	TArray<struct Fprogression_award>                  Grants;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCanvasPanel*                                ContainerWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Next Progression Award
struct ABPH_ArchonHUD_C_Handle_Next_Progression_Award_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Rank Progression Widget
struct ABPH_ArchonHUD_C_Show_Rank_Progression_Widget_Params
{
	struct Fprogression_award                          Grant;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Core Progression Widget
struct ABPH_ArchonHUD_C_Show_Core_Progression_Widget_Params
{
	struct Fprogression_award                          Grant;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.QueueNextProgressionAward
struct ABPH_ArchonHUD_C_QueueNextProgressionAward_Params
{
	TArray<struct Fprogression_award>                  ProgressionAwards;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Handle Command
struct ABPH_ArchonHUD_C_Handle_Command_Params
{
	class FString                                      Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Friend Added by Name
struct ABPH_ArchonHUD_C_Friend_Added_by_Name_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FriendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Chat Input
struct ABPH_ArchonHUD_C_Chat_Input_Params
{
	bool                                               InputMode_Gameplay;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Bind Friend Events
struct ABPH_ArchonHUD_C_Bind_Friend_Events_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Friend Removed by Name
struct ABPH_ArchonHUD_C_Friend_Removed_by_Name_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      FriendName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Friends Command
struct ABPH_ArchonHUD_C_On_Friends_Command_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Help Command
struct ABPH_ArchonHUD_C_On_Help_Command_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.On Stuck Command
struct ABPH_ArchonHUD_C_On_Stuck_Command_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player Blocked by Name
struct ABPH_ArchonHUD_C_Player_Blocked_by_Name_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player Unblocked by Name
struct ABPH_ArchonHUD_C_Player_Unblocked_by_Name_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Bind Blocked Player Events
struct ABPH_ArchonHUD_C_Bind_Blocked_Player_Events_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Remove Events
struct ABPH_ArchonHUD_C_Remove_Events_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveBeginPlay
struct ABPH_ArchonHUD_C_ReceiveBeginPlay_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Escape Menu
struct ABPH_ArchonHUD_C_Escape_Menu_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveDrawHUD
struct ABPH_ArchonHUD_C_ReceiveDrawHUD_Params
{
	int*                                               SizeX;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SizeY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set HUD Visibility
struct ABPH_ArchonHUD_C_Set_HUD_Visibility_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set HUD Debug Text
struct ABPH_ArchonHUD_C_Set_HUD_Debug_Text_Params
{
	class FString                                      Debug_String;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Display Debug Image
struct ABPH_ArchonHUD_C_Set_Display_Debug_Image_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveEndPlay
struct ABPH_ArchonHUD_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ShowControlsOverlayWidget
struct ABPH_ArchonHUD_C_ShowControlsOverlayWidget_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.RemoveControlsOverlayWidget
struct ABPH_ArchonHUD_C_RemoveControlsOverlayWidget_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ShowXboxLayoutWidget
struct ABPH_ArchonHUD_C_ShowXboxLayoutWidget_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.RemoveXboxLayoutWidget
struct ABPH_ArchonHUD_C_RemoveXboxLayoutWidget_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Display Ally Death Notification
struct ABPH_ArchonHUD_C_Display_Ally_Death_Notification_Params
{
	class FString                                      Ally_Name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Value_Remaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Display Self Death Notification
struct ABPH_ArchonHUD_C_Display_Self_Death_Notification_Params
{
	int                                                Value_Remaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.K2_OnHUDVisibityChanged
struct ABPH_ArchonHUD_C_K2_OnHUDVisibityChanged_Params
{
	bool*                                              PreviousVisibility;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              NewVisibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.K2_OnPlayerTalkingStateChanged
struct ABPH_ArchonHUD_C_K2_OnPlayerTalkingStateChanged_Params
{
	int*                                               TalkingPlayerId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Toggle HUD Visibility
struct ABPH_ArchonHUD_C_Toggle_HUD_Visibility_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Static Hud Item Visibility
struct ABPH_ArchonHUD_C_Set_Static_Hud_Item_Visibility_Params
{
	bool                                               Visible_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.J - PlayerJournal
struct ABPH_ArchonHUD_C_J___PlayerJournal_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Set Gameplay HUD Visibility
struct ABPH_ArchonHUD_C_Set_Gameplay_HUD_Visibility_Params
{
	bool                                               Is_Visible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Hide HUD
struct ABPH_ArchonHUD_C_Hide_HUD_Params
{
	bool                                               HideChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show HUD
struct ABPH_ArchonHUD_C_Show_HUD_Params
{
	bool                                               Game_Input;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowChat;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.O - Friends Screen
struct ABPH_ArchonHUD_C_O___Friends_Screen_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Refresh HUD Widget Visibility
struct ABPH_ArchonHUD_C_Refresh_HUD_Widget_Visibility_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ReceiveGameplayStart
struct ABPH_ArchonHUD_C_ReceiveGameplayStart_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdateQuickbar
struct ABPH_ArchonHUD_C_UpdateQuickbar_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Player HUD Ready
struct ABPH_ArchonHUD_C_Player_HUD_Ready_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Show Mission Timer
struct ABPH_ArchonHUD_C_Show_Mission_Timer_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Hide Mission Timer
struct ABPH_ArchonHUD_C_Hide_Mission_Timer_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdateBoosts
struct ABPH_ArchonHUD_C_UpdateBoosts_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.UpdatePlayerHUDDetails
struct ABPH_ArchonHUD_C_UpdatePlayerHUDDetails_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.L - Player Loadout
struct ABPH_ArchonHUD_C_L___Player_Loadout_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.I - Player Inventory
struct ABPH_ArchonHUD_C_I___Player_Inventory_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.K - Player Style
struct ABPH_ArchonHUD_C_K___Player_Style_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.Open Map
struct ABPH_ArchonHUD_C_Open_Map_Params
{
};

// Function BPH_ArchonHUD.BPH_ArchonHUD_C.ExecuteUbergraph_BPH_ArchonHUD
struct ABPH_ArchonHUD_C_ExecuteUbergraph_BPH_ArchonHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
