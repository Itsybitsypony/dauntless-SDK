#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_play_menu_entry_base_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.SetIsSelected
struct Uw_play_menu_entry_base_bpw_C_SetIsSelected_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.ExecuteUbergraph_w_play_menu_entry_base_bpw
struct Uw_play_menu_entry_base_bpw_C_ExecuteUbergraph_w_play_menu_entry_base_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntryLostFocus__DelegateSignature
struct Uw_play_menu_entry_base_bpw_C_OnPlayMenuListEntryLostFocus__DelegateSignature_Params
{
	class Uw_play_menu_entry_base_bpw_C*               Entry;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntryFocused__DelegateSignature
struct Uw_play_menu_entry_base_bpw_C_OnPlayMenuListEntryFocused__DelegateSignature_Params
{
	class Uw_play_menu_entry_base_bpw_C*               FocusedEntry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_play_menu_entry_base_bpw.w_play_menu_entry_base_bpw_C.OnPlayMenuListEntrySelected__DelegateSignature
struct Uw_play_menu_entry_base_bpw_C_OnPlayMenuListEntrySelected__DelegateSignature_Params
{
	class Uw_play_menu_entry_base_bpw_C*               SelectedEntry;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
