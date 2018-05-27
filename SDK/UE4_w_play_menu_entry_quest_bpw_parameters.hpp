#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_entry_quest_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.LookupQuest
struct Uw_play_menu_entry_quest_bpw_C_LookupQuest_Params
{
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.OnFocusReceived
struct Uw_play_menu_entry_quest_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.SetIsSelected
struct Uw_play_menu_entry_quest_bpw_C_SetIsSelected_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature
struct Uw_play_menu_entry_quest_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.Construct
struct Uw_play_menu_entry_quest_bpw_C_Construct_Params
{
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_8_OnArchonUserButtonAction__DelegateSignature
struct Uw_play_menu_entry_quest_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_8_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_33_OnArchonUserButtonAction__DelegateSignature
struct Uw_play_menu_entry_quest_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_33_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.OnMouseEnter
struct Uw_play_menu_entry_quest_bpw_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.OnMouseLeave
struct Uw_play_menu_entry_quest_bpw_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_play_menu_entry_quest_bpw.w_play_menu_entry_quest_bpw_C.ExecuteUbergraph_w_play_menu_entry_quest_bpw
struct Uw_play_menu_entry_quest_bpw_C_ExecuteUbergraph_w_play_menu_entry_quest_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
