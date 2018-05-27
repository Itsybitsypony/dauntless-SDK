#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Options_Menu_ONLINE_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.ApplyState
struct UOptions_Menu_ONLINE_bpw_C_ApplyState_Params
{
	class UArchonOptionUserWidget*                     RootMenu;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.RestoreState
struct UOptions_Menu_ONLINE_bpw_C_RestoreState_Params
{
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.SaveState
struct UOptions_Menu_ONLINE_bpw_C_SaveState_Params
{
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.HasStateChanged
struct UOptions_Menu_ONLINE_bpw_C_HasStateChanged_Params
{
	bool                                               HasChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.UpdateUI
struct UOptions_Menu_ONLINE_bpw_C_UpdateUI_Params
{
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.OnKeyDown
struct UOptions_Menu_ONLINE_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.Gamepad Cancel
struct UOptions_Menu_ONLINE_bpw_C_Gamepad_Cancel_Params
{
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BndEvt__TeamInvites_K2Node_ComponentBoundEvent_8_FocusReceived__DelegateSignature
struct UOptions_Menu_ONLINE_bpw_C_BndEvt__TeamInvites_K2Node_ComponentBoundEvent_8_FocusReceived__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BndEvt__TeamInvites_K2Node_ComponentBoundEvent_13_PickerUpdated__DelegateSignature
struct UOptions_Menu_ONLINE_bpw_C_BndEvt__TeamInvites_K2Node_ComponentBoundEvent_13_PickerUpdated__DelegateSignature_Params
{
	int                                                PickerValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.ExecuteUbergraph_Options_Menu_ONLINE_bpw
struct UOptions_Menu_ONLINE_bpw_C_ExecuteUbergraph_Options_Menu_ONLINE_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.BacktoRoot__DelegateSignature
struct UOptions_Menu_ONLINE_bpw_C_BacktoRoot__DelegateSignature_Params
{
};

// Function Options_Menu_ONLINE_bpw.Options_Menu_ONLINE_bpw_C.UpdateTooltip__DelegateSignature
struct UOptions_Menu_ONLINE_bpw_C_UpdateTooltip__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
