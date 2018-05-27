#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_CategoryButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnFocusReceived
struct Uw_CC_CategoryButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Construct
struct Uw_CC_CategoryButton_C_Construct_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnSynchronizeProperties
struct Uw_CC_CategoryButton_C_OnSynchronizeProperties_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Refresh
struct Uw_CC_CategoryButton_C_Refresh_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct Uw_CC_CategoryButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Disable
struct Uw_CC_CategoryButton_C_Disable_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Enable
struct Uw_CC_CategoryButton_C_Enable_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Tick
struct Uw_CC_CategoryButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Show Hover
struct Uw_CC_CategoryButton_C_Show_Hover_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Hide Hover
struct Uw_CC_CategoryButton_C_Hide_Hover_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.Execute Click
struct Uw_CC_CategoryButton_C_Execute_Click_Params
{
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.ExecuteUbergraph_w_CC_CategoryButton
struct Uw_CC_CategoryButton_C_ExecuteUbergraph_w_CC_CategoryButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_CategoryButton.w_CC_CategoryButton_C.OnClicked__DelegateSignature
struct Uw_CC_CategoryButton_C_OnClicked__DelegateSignature_Params
{
	TEnumAsByte<ECC_ScreenMode>                        ModeToNavTo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
