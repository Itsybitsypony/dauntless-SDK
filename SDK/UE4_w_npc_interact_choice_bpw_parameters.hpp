#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_choice_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.OnKeyDown
struct Uw_npc_interact_choice_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.TryGetDialogEvent
struct Uw_npc_interact_choice_bpw_C_TryGetDialogEvent_Params
{
	TArray<class UQuestEventData*>                     QuestEvents;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class Uquest_event_dialogue2_bp_C*                 ChosenEvent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.TryHandleAudioEvent
struct Uw_npc_interact_choice_bpw_C_TryHandleAudioEvent_Params
{
	TArray<class UQuestEventData*>                     QuestEvents;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.GetDefaultFocusedWidget
struct Uw_npc_interact_choice_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.OnQuestButtonSelected
struct Uw_npc_interact_choice_bpw_C_OnQuestButtonSelected_Params
{
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fnpc_ui_struct                              MenuInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.AddQuestButton
struct Uw_npc_interact_choice_bpw_C_AddQuestButton_Params
{
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fnpc_ui_struct                              MenuInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.RefreshQuestButtons
struct Uw_npc_interact_choice_bpw_C_RefreshQuestButtons_Params
{
};

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.Construct
struct Uw_npc_interact_choice_bpw_C_Construct_Params
{
};

// Function w_npc_interact_choice_bpw.w_npc_interact_choice_bpw_C.ExecuteUbergraph_w_npc_interact_choice_bpw
struct Uw_npc_interact_choice_bpw_C_ExecuteUbergraph_w_npc_interact_choice_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
