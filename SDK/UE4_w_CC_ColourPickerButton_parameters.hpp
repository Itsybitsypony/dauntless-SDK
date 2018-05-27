#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPickerButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.OnFocusReceived
struct Uw_CC_ColourPickerButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_Button Clicked__DelegateSignature
struct Uw_CC_ColourPickerButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_Button_Clicked__DelegateSignature_Params
{
};

// Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.ExecuteUbergraph_w_CC_ColourPickerButton
struct Uw_CC_ColourPickerButton_C_ExecuteUbergraph_w_CC_ColourPickerButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_CC_ColourPickerButton.w_CC_ColourPickerButton_C.ColourPickerBUPressed__DelegateSignature
struct Uw_CC_ColourPickerButton_C_ColourPickerBUPressed__DelegateSignature_Params
{
	struct FLinearColor                                PrimaryColour;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                SecondaryColour;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Primary2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                Secondary2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
