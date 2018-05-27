#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_controls_overlay_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function controls_overlay_bpw.controls_overlay_bpw_C.GetText_1
struct Ucontrols_overlay_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function controls_overlay_bpw.controls_overlay_bpw_C.OnKeyUp
struct Ucontrols_overlay_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function controls_overlay_bpw.controls_overlay_bpw_C.OnKeyDown
struct Ucontrols_overlay_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function controls_overlay_bpw.controls_overlay_bpw_C.Construct
struct Ucontrols_overlay_bpw_C_Construct_Params
{
};

// Function controls_overlay_bpw.controls_overlay_bpw_C.SwaptoKeyBindingOverlay
struct Ucontrols_overlay_bpw_C_SwaptoKeyBindingOverlay_Params
{
};

// Function controls_overlay_bpw.controls_overlay_bpw_C.SwaptoComboKeyOverlay
struct Ucontrols_overlay_bpw_C_SwaptoComboKeyOverlay_Params
{
};

// Function controls_overlay_bpw.controls_overlay_bpw_C.InputSwap
struct Ucontrols_overlay_bpw_C_InputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function controls_overlay_bpw.controls_overlay_bpw_C.OnSynchronizeProperties
struct Ucontrols_overlay_bpw_C_OnSynchronizeProperties_Params
{
};

// Function controls_overlay_bpw.controls_overlay_bpw_C.ExecuteUbergraph_controls_overlay_bpw
struct Ucontrols_overlay_bpw_C_ExecuteUbergraph_controls_overlay_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
