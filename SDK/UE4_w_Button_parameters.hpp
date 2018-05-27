#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Button.w_Button_C.Set Button Label
struct Uw_Button_C_Set_Button_Label_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Button.w_Button_C.OnFocusReceived
struct Uw_Button_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Button.w_Button_C.Tick
struct Uw_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button.w_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_Button_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Button.w_Button_C.Show Hover
struct Uw_Button_C_Show_Hover_Params
{
};

// Function w_Button.w_Button_C.Hide Hover
struct Uw_Button_C_Hide_Hover_Params
{
};

// Function w_Button.w_Button_C.OnSynchronizeProperties
struct Uw_Button_C_OnSynchronizeProperties_Params
{
};

// Function w_Button.w_Button_C.ExecuteUbergraph_w_Button
struct Uw_Button_C_ExecuteUbergraph_w_Button_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button.w_Button_C.Focus Lost__DelegateSignature
struct Uw_Button_C_Focus_Lost__DelegateSignature_Params
{
};

// Function w_Button.w_Button_C.Focus Received__DelegateSignature
struct Uw_Button_C_Focus_Received__DelegateSignature_Params
{
};

// Function w_Button.w_Button_C.Button Clicked__DelegateSignature
struct Uw_Button_C_Button_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
