#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_dialogue_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_npc_interact_dialogue_bpw.w_npc_interact_dialogue_bpw_C.OnKeyDown
struct Uw_npc_interact_dialogue_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_npc_interact_dialogue_bpw.w_npc_interact_dialogue_bpw_C.GetDefaultFocusedWidget
struct Uw_npc_interact_dialogue_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_npc_interact_dialogue_bpw.w_npc_interact_dialogue_bpw_C.Construct
struct Uw_npc_interact_dialogue_bpw_C_Construct_Params
{
};

// Function w_npc_interact_dialogue_bpw.w_npc_interact_dialogue_bpw_C.HandleNext
struct Uw_npc_interact_dialogue_bpw_C_HandleNext_Params
{
};

// Function w_npc_interact_dialogue_bpw.w_npc_interact_dialogue_bpw_C.PopulatePips
struct Uw_npc_interact_dialogue_bpw_C_PopulatePips_Params
{
};

// Function w_npc_interact_dialogue_bpw.w_npc_interact_dialogue_bpw_C.AdvanceToNextScreen
struct Uw_npc_interact_dialogue_bpw_C_AdvanceToNextScreen_Params
{
};

// Function w_npc_interact_dialogue_bpw.w_npc_interact_dialogue_bpw_C.ExecuteUbergraph_w_npc_interact_dialogue_bpw
struct Uw_npc_interact_dialogue_bpw_C_ExecuteUbergraph_w_npc_interact_dialogue_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
