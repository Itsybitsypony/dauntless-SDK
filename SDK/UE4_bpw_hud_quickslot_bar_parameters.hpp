#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_hud_quickslot_bar_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.Construct
struct Ubpw_hud_quickslot_bar_C_Construct_Params
{
};

// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.Input Swap
struct Ubpw_hud_quickslot_bar_C_Input_Swap_Params
{
	bool                                               Is_Using_Gamepad;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.PushUpdateToQuickItems
struct Ubpw_hud_quickslot_bar_C_PushUpdateToQuickItems_Params
{
};

// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.OnPlayerLoadoutChanged
struct Ubpw_hud_quickslot_bar_C_OnPlayerLoadoutChanged_Params
{
};

// Function bpw_hud_quickslot_bar.bpw_hud_quickslot_bar_C.ExecuteUbergraph_bpw_hud_quickslot_bar
struct Ubpw_hud_quickslot_bar_C_ExecuteUbergraph_bpw_hud_quickslot_bar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
