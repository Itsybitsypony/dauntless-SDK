#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Pickerbox_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.OnFocusReceived
struct Uw_Pickerbox_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.SetTextLabel
struct Uw_Pickerbox_bpw_C_SetTextLabel_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Construct
struct Uw_Pickerbox_bpw_C_Construct_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.OnSynchronizeProperties
struct Uw_Pickerbox_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.SyncEditorDisplay
struct Uw_Pickerbox_bpw_C_SyncEditorDisplay_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Input Swap
struct Uw_Pickerbox_bpw_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerLeft_Clicked
struct Uw_Pickerbox_bpw_C_PickerLeft_Clicked_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerRight_Clicked
struct Uw_Pickerbox_bpw_C_PickerRight_Clicked_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Uw_Pickerbox_bpw_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct Uw_Pickerbox_bpw_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
struct Uw_Pickerbox_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature
struct Uw_Pickerbox_bpw_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature
struct Uw_Pickerbox_bpw_C_BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.Refresh
struct Uw_Pickerbox_bpw_C_Refresh_Params
{
	int                                                ActiveIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.BndEvt__Button_Center_K2Node_ComponentBoundEvent_368_OnButtonHoverEvent__DelegateSignature
struct Uw_Pickerbox_bpw_C_BndEvt__Button_Center_K2Node_ComponentBoundEvent_368_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.ExecuteUbergraph_w_Pickerbox_bpw
struct Uw_Pickerbox_bpw_C_ExecuteUbergraph_w_Pickerbox_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerFocused__DelegateSignature
struct Uw_Pickerbox_bpw_C_PickerFocused__DelegateSignature_Params
{
	struct FText                                       Tooltip;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.On Group Selected__DelegateSignature
struct Uw_Pickerbox_bpw_C_On_Group_Selected__DelegateSignature_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Pickerbox_bpw.w_Pickerbox_bpw_C.PickerChanged__DelegateSignature
struct Uw_Pickerbox_bpw_C_PickerChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
