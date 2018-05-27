#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_quest_info_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateObjectives
struct Uw_quest_info_bpw_C_PopulateObjectives_Params
{
};

// Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateRewards
struct Uw_quest_info_bpw_C_PopulateRewards_Params
{
};

// Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateQuestInfo
struct Uw_quest_info_bpw_C_PopulateQuestInfo_Params
{
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_quest_info_bpw.w_quest_info_bpw_C.PopulateDescription
struct Uw_quest_info_bpw_C_PopulateDescription_Params
{
};

// Function w_quest_info_bpw.w_quest_info_bpw_C.ExecuteUbergraph_w_quest_info_bpw
struct Uw_quest_info_bpw_C_ExecuteUbergraph_w_quest_info_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
