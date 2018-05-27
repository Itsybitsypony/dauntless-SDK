#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_play_menu_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function play_menu_bpw.play_menu_bpw_C.RefreshUnableToQueuePanel
struct Uplay_menu_bpw_C_RefreshUnableToQueuePanel_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.InitNormalHeroicSelector
struct Uplay_menu_bpw_C_InitNormalHeroicSelector_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.HandleTabSwitching
struct Uplay_menu_bpw_C_HandleTabSwitching_Params
{
	struct FKeyEvent                                   KeyEvent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FEventReply                                 Reply;                                                    // (Parm, OutParm)
};

// Function play_menu_bpw.play_menu_bpw_C.On_PrimaryChoicePanel_Right_1
struct Uplay_menu_bpw_C_On_PrimaryChoicePanel_Right_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.On_PlayPanel_Up_1
struct Uplay_menu_bpw_C_On_PlayPanel_Up_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.On_SecondaryChoicePanel_Left_1
struct Uplay_menu_bpw_C_On_SecondaryChoicePanel_Left_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.OnLostFocusSecondaryPlayMenuEntry
struct Uplay_menu_bpw_C_OnLostFocusSecondaryPlayMenuEntry_Params
{
	class Uw_play_menu_entry_base_bpw_C*               Lost_Focus_Entry;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.OnLostFocusPrimaryPlayMenuEntry
struct Uplay_menu_bpw_C_OnLostFocusPrimaryPlayMenuEntry_Params
{
	class Uw_play_menu_entry_base_bpw_C*               Lost_Focus_Entry;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.SetupActivityEntries
struct Uplay_menu_bpw_C_SetupActivityEntries_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.OnFocusSecondaryPlayMenuEntry
struct Uplay_menu_bpw_C_OnFocusSecondaryPlayMenuEntry_Params
{
	class Uw_play_menu_entry_base_bpw_C*               Focused_Entry;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.OnFocusPrimaryPlayMenuEntry
struct Uplay_menu_bpw_C_OnFocusPrimaryPlayMenuEntry_Params
{
	class Uw_play_menu_entry_base_bpw_C*               Focused_Entry;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.ShowDetailPanelForPlayMenuEntry
struct Uplay_menu_bpw_C_ShowDetailPanelForPlayMenuEntry_Params
{
	class Uw_play_menu_entry_base_bpw_C*               Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.ShowSecondaryPanel
struct Uplay_menu_bpw_C_ShowSecondaryPanel_Params
{
	TArray<struct FName>                               HuntIds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class Uw_play_menu_entry_base_bpw_C*               Primary_Entry;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.NavigateBack
struct Uplay_menu_bpw_C_NavigateBack_Params
{
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function play_menu_bpw.play_menu_bpw_C.SelectSecondaryPlayMenuEntry
struct Uplay_menu_bpw_C_SelectSecondaryPlayMenuEntry_Params
{
	class Uw_play_menu_entry_base_bpw_C*               EntryToSelect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelectedFromFocus;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelectionChanged;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.SelectPrimaryPlayMenuEntry
struct Uplay_menu_bpw_C_SelectPrimaryPlayMenuEntry_Params
{
	class Uw_play_menu_entry_base_bpw_C*               EntryToSelect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelectedFromFocus;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SelectionChanged;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.OnKeyDown
struct Uplay_menu_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function play_menu_bpw.play_menu_bpw_C.QueueForSelectedHunt
struct Uplay_menu_bpw_C_QueueForSelectedHunt_Params
{
	bool                                               IsPrivateHunt;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.GetDefaultFocusedWidget
struct Uplay_menu_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.RefreshHuntIDBuckets
struct Uplay_menu_bpw_C_RefreshHuntIDBuckets_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.RefreshPrimaryPanel
struct Uplay_menu_bpw_C_RefreshPrimaryPanel_Params
{
	bool                                               HeroicMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.Construct
struct Uplay_menu_bpw_C_Construct_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.Close
struct Uplay_menu_bpw_C_Close_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.OnPrimaryPlayMenuListEntrySelected
struct Uplay_menu_bpw_C_OnPrimaryPlayMenuListEntrySelected_Params
{
	class Uw_play_menu_entry_base_bpw_C*               Selected_Entry;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.OnSecondaryPlayMenuEntrySelected
struct Uplay_menu_bpw_C_OnSecondaryPlayMenuEntrySelected_Params
{
	class Uw_play_menu_entry_base_bpw_C*               Selected_Entry;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.InputSwap
struct Uplay_menu_bpw_C_InputSwap_Params
{
	bool                                               IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_StartHunt_K2Node_ComponentBoundEvent_238_OnArchonUserButtonAction__DelegateSignature
struct Uplay_menu_bpw_C_BndEvt__Button_StartHunt_K2Node_ComponentBoundEvent_238_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_PrivateHunt_K2Node_ComponentBoundEvent_280_OnArchonUserButtonAction__DelegateSignature
struct Uplay_menu_bpw_C_BndEvt__Button_PrivateHunt_K2Node_ComponentBoundEvent_280_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_NormalMode_K2Node_ComponentBoundEvent_170_OnArchonUserButtonAction__DelegateSignature
struct Uplay_menu_bpw_C_BndEvt__Button_NormalMode_K2Node_ComponentBoundEvent_170_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.BndEvt__Button_HeroicMode_K2Node_ComponentBoundEvent_187_OnArchonUserButtonAction__DelegateSignature
struct Uplay_menu_bpw_C_BndEvt__Button_HeroicMode_K2Node_ComponentBoundEvent_187_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.OnNavigateToNormalMode
struct Uplay_menu_bpw_C_OnNavigateToNormalMode_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.OnNavigateToHeroicMode
struct Uplay_menu_bpw_C_OnNavigateToHeroicMode_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.TryPlayRevealIslandSequence
struct Uplay_menu_bpw_C_TryPlayRevealIslandSequence_Params
{
};

// Function play_menu_bpw.play_menu_bpw_C.OnPartyUpdated
struct Uplay_menu_bpw_C_OnPartyUpdated_Params
{
	struct FArchonParty                                Party;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function play_menu_bpw.play_menu_bpw_C.ExecuteUbergraph_play_menu_bpw
struct Uplay_menu_bpw_C_ExecuteUbergraph_play_menu_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_menu_bpw.play_menu_bpw_C.OnHuntSelected__DelegateSignature
struct Uplay_menu_bpw_C_OnHuntSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
