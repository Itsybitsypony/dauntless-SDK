#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_journal_screen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function journal_screen_bpw.journal_screen_bpw_C.ShowTrackPanel
struct Ujournal_screen_bpw_C_ShowTrackPanel_Params
{
	struct FName                                       TrackName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function journal_screen_bpw.journal_screen_bpw_C.RefreshRepTrackList
struct Ujournal_screen_bpw_C_RefreshRepTrackList_Params
{
};

// Function journal_screen_bpw.journal_screen_bpw_C.GetDefaultFocusedWidget
struct Ujournal_screen_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function journal_screen_bpw.journal_screen_bpw_C.OnKeyDown
struct Ujournal_screen_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function journal_screen_bpw.journal_screen_bpw_C.RefreshQuestList
struct Ujournal_screen_bpw_C_RefreshQuestList_Params
{
};

// Function journal_screen_bpw.journal_screen_bpw_C.ShowQuestPanel
struct Ujournal_screen_bpw_C_ShowQuestPanel_Params
{
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function journal_screen_bpw.journal_screen_bpw_C.OnJournalEntrySelected
struct Ujournal_screen_bpw_C_OnJournalEntrySelected_Params
{
	class Uw_journal_entry_base_C*                     JournalEntry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function journal_screen_bpw.journal_screen_bpw_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_18_On Back__DelegateSignature
struct Ujournal_screen_bpw_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_18_On_Back__DelegateSignature_Params
{
};

// Function journal_screen_bpw.journal_screen_bpw_C.GTFO
struct Ujournal_screen_bpw_C_GTFO_Params
{
};

// Function journal_screen_bpw.journal_screen_bpw_C.Construct
struct Ujournal_screen_bpw_C_Construct_Params
{
};

// Function journal_screen_bpw.journal_screen_bpw_C.ChallengeListUpdated
struct Ujournal_screen_bpw_C_ChallengeListUpdated_Params
{
};

// Function journal_screen_bpw.journal_screen_bpw_C.TracksUpdated
struct Ujournal_screen_bpw_C_TracksUpdated_Params
{
};

// Function journal_screen_bpw.journal_screen_bpw_C.ExecuteUbergraph_journal_screen_bpw
struct Ujournal_screen_bpw_C_ExecuteUbergraph_journal_screen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function journal_screen_bpw.journal_screen_bpw_C.JournalClosed__DelegateSignature
struct Ujournal_screen_bpw_C_JournalClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
