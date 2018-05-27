#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_FloatingButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_FloatingButton.BPW_FloatingButton_C.OnFocusReceived
struct UBPW_FloatingButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.Construct
struct UBPW_FloatingButton_C_Construct_Params
{
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.Tick
struct UBPW_FloatingButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_613_OnButtonClickedEvent__DelegateSignature
struct UBPW_FloatingButton_C_BndEvt__Floating_Button_K2Node_ComponentBoundEvent_613_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.OnSynchronizeProperties
struct UBPW_FloatingButton_C_OnSynchronizeProperties_Params
{
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
struct UBPW_FloatingButton_C_BndEvt__Floating_Button_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.BndEvt__Floating Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
struct UBPW_FloatingButton_C_BndEvt__Floating_Button_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.OnFocusLost
struct UBPW_FloatingButton_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.ExecuteUbergraph_BPW_FloatingButton
struct UBPW_FloatingButton_C_ExecuteUbergraph_BPW_FloatingButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_FloatingButton.BPW_FloatingButton_C.ButtonLostFocus__DelegateSignature
struct UBPW_FloatingButton_C_ButtonLostFocus__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
