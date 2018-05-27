#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_pickerbox_tabs_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.TogglePips
struct Uw_pickerbox_tabs_bpw_C_TogglePips_Params
{
	EWeaponType                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.UpdateGroupPipCounter
struct Uw_pickerbox_tabs_bpw_C_UpdateGroupPipCounter_Params
{
	EWeaponType                                        ActiveWeaponIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.OnFocusReceived
struct Uw_pickerbox_tabs_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.GetText_1
struct Uw_pickerbox_tabs_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Get_StackCountofTotal_txt_Text_1
struct Uw_pickerbox_tabs_bpw_C_Get_StackCountofTotal_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Construct
struct Uw_pickerbox_tabs_bpw_C_Construct_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.OnSynchronizeProperties
struct Uw_pickerbox_tabs_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Refresh
struct Uw_pickerbox_tabs_bpw_C_Refresh_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.Input Swap
struct Uw_pickerbox_tabs_bpw_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerLeft_Clicked
struct Uw_pickerbox_tabs_bpw_C_PickerLeft_Clicked_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerRight_Clicked
struct Uw_pickerbox_tabs_bpw_C_PickerRight_Clicked_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_314_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__FakeFocus_Right_K2Node_ComponentBoundEvent_328_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__w_FakeFocusReceiveCaster_171_K2Node_ComponentBoundEvent_549_FakeFocusReceived__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__w_FakeFocusReceiveCaster_171_K2Node_ComponentBoundEvent_549_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip2_K2Node_ComponentBoundEvent_237_PipClick__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip2_K2Node_ComponentBoundEvent_237_PipClick__DelegateSignature_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip1_K2Node_ComponentBoundEvent_245_PipClick__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip1_K2Node_ComponentBoundEvent_245_PipClick__DelegateSignature_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip3_K2Node_ComponentBoundEvent_254_PipClick__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip3_K2Node_ComponentBoundEvent_254_PipClick__DelegateSignature_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip4_K2Node_ComponentBoundEvent_264_PipClick__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip4_K2Node_ComponentBoundEvent_264_PipClick__DelegateSignature_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.BndEvt__groupPip5_K2Node_ComponentBoundEvent_275_PipClick__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_BndEvt__groupPip5_K2Node_ComponentBoundEvent_275_PipClick__DelegateSignature_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.ExecuteUbergraph_w_pickerbox_tabs_bpw
struct Uw_pickerbox_tabs_bpw_C_ExecuteUbergraph_w_pickerbox_tabs_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PickerFocused__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_PickerFocused__DelegateSignature_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.PushFocus_Down__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_PushFocus_Down__DelegateSignature_Params
{
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Group Selected__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_On_Group_Selected__DelegateSignature_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Right Selected__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_On_Right_Selected__DelegateSignature_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_pickerbox_tabs_bpw.w_pickerbox_tabs_bpw_C.On Left Selected__DelegateSignature
struct Uw_pickerbox_tabs_bpw_C_On_Left_Selected__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
