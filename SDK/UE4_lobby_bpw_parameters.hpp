#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lobby_bpw.lobby_bpw_C.LobbyReadyRequestSafetyTimer
struct Ulobby_bpw_C_LobbyReadyRequestSafetyTimer_Params
{
};

// Function lobby_bpw.lobby_bpw_C.CanHandleReadyUpButton
struct Ulobby_bpw_C_CanHandleReadyUpButton_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.IsActiveSlot
struct Ulobby_bpw_C_IsActiveSlot_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnPreviewMouseButtonDown
struct Ulobby_bpw_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function lobby_bpw.lobby_bpw_C.OnSlot3_Left
struct Ulobby_bpw_C_OnSlot3_Left_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnSlot3_Right
struct Ulobby_bpw_C_OnSlot3_Right_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnSlot0_Left
struct Ulobby_bpw_C_OnSlot0_Left_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnSlot0_Right
struct Ulobby_bpw_C_OnSlot0_Right_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnSlot1_Left
struct Ulobby_bpw_C_OnSlot1_Left_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnSlot1_Right
struct Ulobby_bpw_C_OnSlot1_Right_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnSlot2_Left
struct Ulobby_bpw_C_OnSlot2_Left_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnSlot2_Right
struct Ulobby_bpw_C_OnSlot2_Right_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.GetDefaultFocusedWidget
struct Ulobby_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnKeyDown
struct Ulobby_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function lobby_bpw.lobby_bpw_C.GetLobbyGameMode
struct Ulobby_bpw_C_GetLobbyGameMode_Params
{
	class Alobby_bpgm_C*                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.IsPaperDollSlot
struct Ulobby_bpw_C_IsPaperDollSlot_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.GetPaperDoll
struct Ulobby_bpw_C_GetPaperDoll_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Alobby_paperdoll_bp_C*                       Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.GetNameSlotWidget
struct Ulobby_bpw_C_GetNameSlotWidget_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_lobby_slot_bpw_C*                         Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.GetNameSlotWidgetPlayer
struct Ulobby_bpw_C_GetNameSlotWidgetPlayer_Params
{
	class Uw_lobby_slot_bpw_C*                         Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnLoaded_91DF647A4647F4E4BB5EB787DD10A733
struct Ulobby_bpw_C_OnLoaded_91DF647A4647F4E4BB5EB787DD10A733_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.Construct
struct Ulobby_bpw_C_Construct_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OnLobbyIslandTransitionStart
struct Ulobby_bpw_C_OnLobbyIslandTransitionStart_Params
{
	class FString                                      Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function lobby_bpw.lobby_bpw_C.Destruct
struct Ulobby_bpw_C_Destruct_Params
{
};

// Function lobby_bpw.lobby_bpw_C.BindEventLobbyIslandCountdownStarted
struct Ulobby_bpw_C_BindEventLobbyIslandCountdownStarted_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OnLobbyIslandCountdownStarted
struct Ulobby_bpw_C_OnLobbyIslandCountdownStarted_Params
{
	float                                              CountDownTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.BindEventLobbyIslandTransitionStart
struct Ulobby_bpw_C_BindEventLobbyIslandTransitionStart_Params
{
};

// Function lobby_bpw.lobby_bpw_C.UnbindEventLobbyIslandCountdownStarted
struct Ulobby_bpw_C_UnbindEventLobbyIslandCountdownStarted_Params
{
};

// Function lobby_bpw.lobby_bpw_C.UnbindEventLobbyIslandTransitionStart
struct Ulobby_bpw_C_UnbindEventLobbyIslandTransitionStart_Params
{
};

// Function lobby_bpw.lobby_bpw_C.BindOnOverrideBehemothChange
struct Ulobby_bpw_C_BindOnOverrideBehemothChange_Params
{
};

// Function lobby_bpw.lobby_bpw_C.BindOnHuntIdChange
struct Ulobby_bpw_C_BindOnHuntIdChange_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OnLobbyHuntIdChange
struct Ulobby_bpw_C_OnLobbyHuntIdChange_Params
{
	class FString                                      HuntId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function lobby_bpw.lobby_bpw_C.OnLobbyBehemothOverrideChange
struct Ulobby_bpw_C_OnLobbyBehemothOverrideChange_Params
{
	class FString                                      OverrideBehemoth;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function lobby_bpw.lobby_bpw_C.OpenLoadout
struct Ulobby_bpw_C_OpenLoadout_Params
{
};

// Function lobby_bpw.lobby_bpw_C.ShowLobby_FromLoadout
struct Ulobby_bpw_C_ShowLobby_FromLoadout_Params
{
	TEnumAsByte<Eui_character_screen_mode>             Previous_Screen;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.HideLobbyMenu
struct Ulobby_bpw_C_HideLobbyMenu_Params
{
};

// Function lobby_bpw.lobby_bpw_C.ShowLobbyMenu
struct Ulobby_bpw_C_ShowLobbyMenu_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OpenExamineMenu
struct Ulobby_bpw_C_OpenExamineMenu_Params
{
};

// Function lobby_bpw.lobby_bpw_C.Navigate_BACK
struct Ulobby_bpw_C_Navigate_BACK_Params
{
};

// Function lobby_bpw.lobby_bpw_C.GTFO
struct Ulobby_bpw_C_GTFO_Params
{
};

// Function lobby_bpw.lobby_bpw_C.BindOnPlayerReadyChange
struct Ulobby_bpw_C_BindOnPlayerReadyChange_Params
{
};

// Function lobby_bpw.lobby_bpw_C.BindPlayerLoadoutChange
struct Ulobby_bpw_C_BindPlayerLoadoutChange_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OnLobbyUserReadyStatusChange
struct Ulobby_bpw_C_OnLobbyUserReadyStatusChange_Params
{
	class FString                                      UserId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStatus;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.OnLobbyUserLoadoutChange
struct Ulobby_bpw_C_OnLobbyUserLoadoutChange_Params
{
	class FString                                      UserId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyPaperDollData                   LoadoutData;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function lobby_bpw.lobby_bpw_C.BindLobbyUserLeft
struct Ulobby_bpw_C_BindLobbyUserLeft_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OnLobbyUserLeft
struct Ulobby_bpw_C_OnLobbyUserLeft_Params
{
	class FString                                      UserId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.BndEvt__readyup_button_K2Node_ComponentBoundEvent_73_ClickedReadyUP__DelegateSignature
struct Ulobby_bpw_C_BndEvt__readyup_button_K2Node_ComponentBoundEvent_73_ClickedReadyUP__DelegateSignature_Params
{
};

// Function lobby_bpw.lobby_bpw_C.ExitConfirmPopup
struct Ulobby_bpw_C_ExitConfirmPopup_Params
{
};

// Function lobby_bpw.lobby_bpw_C.Tick
struct Ulobby_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.ReadyUpHotkey
struct Ulobby_bpw_C_ReadyUpHotkey_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OpenEscapeMenu
struct Ulobby_bpw_C_OpenEscapeMenu_Params
{
};

// Function lobby_bpw.lobby_bpw_C.CustomEvent_1
struct Ulobby_bpw_C_CustomEvent_1_Params
{
	class FString                                      Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function lobby_bpw.lobby_bpw_C.BindOnLobbyCandidateFailed
struct Ulobby_bpw_C_BindOnLobbyCandidateFailed_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OnLeavePartyComplete
struct Ulobby_bpw_C_OnLeavePartyComplete_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            RemovedPlayerID;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function lobby_bpw.lobby_bpw_C.MMFailed_Leave
struct Ulobby_bpw_C_MMFailed_Leave_Params
{
};

// Function lobby_bpw.lobby_bpw_C.Set Active Slot
struct Ulobby_bpw_C_Set_Active_Slot_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_bpw.lobby_bpw_C.Open Examine or Loadout
struct Ulobby_bpw_C_Open_Examine_or_Loadout_Params
{
};

// Function lobby_bpw.lobby_bpw_C.CloseExamineMenu
struct Ulobby_bpw_C_CloseExamineMenu_Params
{
};

// Function lobby_bpw.lobby_bpw_C.Refresh Button Legend
struct Ulobby_bpw_C_Refresh_Button_Legend_Params
{
};

// Function lobby_bpw.lobby_bpw_C.OnAquireTopOfFocusStack
struct Ulobby_bpw_C_OnAquireTopOfFocusStack_Params
{
};

// Function lobby_bpw.lobby_bpw_C.ExecuteUbergraph_lobby_bpw
struct Ulobby_bpw_C_ExecuteUbergraph_lobby_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
