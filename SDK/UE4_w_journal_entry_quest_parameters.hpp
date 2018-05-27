#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_journal_entry_quest_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_journal_entry_quest.w_journal_entry_quest_C.OnFocusReceived
struct Uw_journal_entry_quest_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_journal_entry_quest.w_journal_entry_quest_C.Construct
struct Uw_journal_entry_quest_C_Construct_Params
{
};

// Function w_journal_entry_quest.w_journal_entry_quest_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature
struct Uw_journal_entry_quest_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_journal_entry_quest.w_journal_entry_quest_C.SetIsSelected
struct Uw_journal_entry_quest_C_SetIsSelected_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_journal_entry_quest.w_journal_entry_quest_C.ExecuteUbergraph_w_journal_entry_quest
struct Uw_journal_entry_quest_C_ExecuteUbergraph_w_journal_entry_quest_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
