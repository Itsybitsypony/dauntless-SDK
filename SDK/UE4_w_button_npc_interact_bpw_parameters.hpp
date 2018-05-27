#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_npc_interact_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.SetShouldCallAttention
struct Uw_button_npc_interact_bpw_C_SetShouldCallAttention_Params
{
	bool                                               CallAttention;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.OnFocusReceived
struct Uw_button_npc_interact_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.Construct
struct Uw_button_npc_interact_bpw_C_Construct_Params
{
};

// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_514_OnButtonClickedEvent__DelegateSignature
struct Uw_button_npc_interact_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_514_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.ExecuteUbergraph_w_button_npc_interact_bpw
struct Uw_button_npc_interact_bpw_C_ExecuteUbergraph_w_button_npc_interact_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.OnQuestButtonSelected__DelegateSignature
struct Uw_button_npc_interact_bpw_C_OnQuestButtonSelected__DelegateSignature_Params
{
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fnpc_ui_struct                              MenuInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
