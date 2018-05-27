#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_TextToggleButton_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Get_ToggleButton_CheckedState_1
struct Uw_TextToggleButton_bpw_C_Get_ToggleButton_CheckedState_1_Params
{
	ECheckBoxState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Refresh
struct Uw_TextToggleButton_bpw_C_Refresh_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.OnFocusReceived
struct Uw_TextToggleButton_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Sync_SetText
struct Uw_TextToggleButton_bpw_C_Sync_SetText_Params
{
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.GetText_1
struct Uw_TextToggleButton_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.OnSynchronizeProperties
struct Uw_TextToggleButton_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.BndEvt__ToggleButton_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uw_TextToggleButton_bpw_C_BndEvt__ToggleButton_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.Set Toggle State
struct Uw_TextToggleButton_bpw_C_Set_Toggle_State_Params
{
	bool                                               CheckedState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.ExecuteUbergraph_w_TextToggleButton_bpw
struct Uw_TextToggleButton_bpw_C_ExecuteUbergraph_w_TextToggleButton_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_TextToggleButton_bpw.w_TextToggleButton_bpw_C.ToggleStateChange__DelegateSignature
struct Uw_TextToggleButton_bpw_C_ToggleStateChange__DelegateSignature_Params
{
	bool                                               State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
