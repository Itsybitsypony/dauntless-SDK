#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_Keybinding_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.OnKeyDown
struct UOptions_Menu_Keybinding_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ResetDefault_Keybinding
struct UOptions_Menu_Keybinding_bpw_C_ResetDefault_Keybinding_Params
{
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.StoreOrg_Keybinding
struct UOptions_Menu_Keybinding_bpw_C_StoreOrg_Keybinding_Params
{
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Restore_Keybinding
struct UOptions_Menu_Keybinding_bpw_C_Restore_Keybinding_Params
{
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Construct
struct UOptions_Menu_Keybinding_bpw_C_Construct_Params
{
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.Gamepad Cancel
struct UOptions_Menu_Keybinding_bpw_C_Gamepad_Cancel_Params
{
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature
struct UOptions_Menu_Keybinding_bpw_C_BndEvt__VSYNC_K2Node_ComponentBoundEvent_47_OptionToggleStateChange__DelegateSignature_Params
{
	ECheckBoxState                                     State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ClearAllSelected
struct UOptions_Menu_Keybinding_bpw_C_ClearAllSelected_Params
{
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ClearKey
struct UOptions_Menu_Keybinding_bpw_C_ClearKey_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.ExecuteUbergraph_Options_Menu_Keybinding_bpw
struct UOptions_Menu_Keybinding_bpw_C_ExecuteUbergraph_Options_Menu_Keybinding_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.UpdateTooltip__DelegateSignature
struct UOptions_Menu_Keybinding_bpw_C_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_Keybinding_bpw.Options_Menu_Keybinding_bpw_C.BackFrom_VideoOptions__DelegateSignature
struct UOptions_Menu_Keybinding_bpw_C_BackFrom_VideoOptions__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
