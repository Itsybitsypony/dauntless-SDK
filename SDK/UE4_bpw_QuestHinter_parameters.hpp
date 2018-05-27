#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_QuestHinter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_QuestHinter.bpw_QuestHinter_C.RefreshVisibility
struct Ubpw_QuestHinter_C_RefreshVisibility_Params
{
};

// Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsRedeemable_Text
struct Ubpw_QuestHinter_C_Get_QuestsRedeemable_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsAvail_Text
struct Ubpw_QuestHinter_C_Get_QuestsAvail_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsRedeemable_Tooltip
struct Ubpw_QuestHinter_C_Get_QuestsRedeemable_Tooltip_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_QuestHinter.bpw_QuestHinter_C.Get_QuestsAvail_Tooltip
struct Ubpw_QuestHinter_C_Get_QuestsAvail_Tooltip_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_QuestHinter.bpw_QuestHinter_C.RefreshQuests
struct Ubpw_QuestHinter_C_RefreshQuests_Params
{
	TArray<class UQuest*>                              Found_Avail_Results;                                      // (Parm, OutParm, ZeroConstructor)
	TArray<class UQuest*>                              Found_Redeem_Results;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function bpw_QuestHinter.bpw_QuestHinter_C.Construct
struct Ubpw_QuestHinter_C_Construct_Params
{
};

// Function bpw_QuestHinter.bpw_QuestHinter_C.OnQuestSystemReady
struct Ubpw_QuestHinter_C_OnQuestSystemReady_Params
{
};

// Function bpw_QuestHinter.bpw_QuestHinter_C.ExecuteUbergraph_bpw_QuestHinter
struct Ubpw_QuestHinter_C_ExecuteUbergraph_bpw_QuestHinter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
