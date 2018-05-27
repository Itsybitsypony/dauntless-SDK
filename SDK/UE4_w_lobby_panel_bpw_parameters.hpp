#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_lobby_panel_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.SetModifiers
struct Uw_lobby_panel_bpw_C_SetModifiers_Params
{
	TArray<struct FName>                               Modifiers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.Construct
struct Uw_lobby_panel_bpw_C_Construct_Params
{
};

// Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.ExecuteUbergraph_w_lobby_panel_bpw
struct Uw_lobby_panel_bpw_C_ExecuteUbergraph_w_lobby_panel_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
