#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_quest_viewer_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.RefreshQuestList
struct Ubpw_debug_quest_viewer_C_RefreshQuestList_Params
{
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.QueryQuests
struct Ubpw_debug_quest_viewer_C_QueryQuests_Params
{
	TArray<class UQuest*>                              Results;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.ShowQuestPanel
struct Ubpw_debug_quest_viewer_C_ShowQuestPanel_Params
{
	struct FName                                       Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.OnButtonClicked
struct Ubpw_debug_quest_viewer_C_OnButtonClicked_Params
{
	struct FName                                       QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.Construct
struct Ubpw_debug_quest_viewer_C_Construct_Params
{
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Redeemed_K2Node_ComponentBoundEvent_68_OnCheckBoxComponentStateChanged__DelegateSignature
struct Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Redeemed_K2Node_ComponentBoundEvent_68_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Invisible_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature
struct Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Invisible_K2Node_ComponentBoundEvent_70_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unavailable_K2Node_ComponentBoundEvent_73_OnCheckBoxComponentStateChanged__DelegateSignature
struct Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Unavailable_K2Node_ComponentBoundEvent_73_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unlockable_K2Node_ComponentBoundEvent_77_OnCheckBoxComponentStateChanged__DelegateSignature
struct Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Unlockable_K2Node_ComponentBoundEvent_77_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Unlocked_K2Node_ComponentBoundEvent_82_OnCheckBoxComponentStateChanged__DelegateSignature
struct Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Unlocked_K2Node_ComponentBoundEvent_82_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.BndEvt__CheckBox_Complete_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature
struct Ubpw_debug_quest_viewer_C_BndEvt__CheckBox_Complete_K2Node_ComponentBoundEvent_88_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_viewer.bpw_debug_quest_viewer_C.ExecuteUbergraph_bpw_debug_quest_viewer
struct Ubpw_debug_quest_viewer_C_ExecuteUbergraph_bpw_debug_quest_viewer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
