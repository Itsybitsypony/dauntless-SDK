#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_SelectableButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_SelectableButton.w_SelectableButton_C.Unselect
struct Uw_SelectableButton_C_Unselect_Params
{
};

// Function w_SelectableButton.w_SelectableButton_C.Select
struct Uw_SelectableButton_C_Select_Params
{
};

// Function w_SelectableButton.w_SelectableButton_C.Set Selected
struct Uw_SelectableButton_C_Set_Selected_Params
{
	bool                                               Is_Selected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SelectableButton.w_SelectableButton_C.Set Label
struct Uw_SelectableButton_C_Set_Label_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_SelectableButton.w_SelectableButton_C.OnSynchronizeProperties
struct Uw_SelectableButton_C_OnSynchronizeProperties_Params
{
};

// Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct Uw_SelectableButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct Uw_SelectableButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_SelectableButton.w_SelectableButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct Uw_SelectableButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_SelectableButton.w_SelectableButton_C.ExecuteUbergraph_w_SelectableButton
struct Uw_SelectableButton_C_ExecuteUbergraph_w_SelectableButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_SelectableButton.w_SelectableButton_C.On Clicked__DelegateSignature
struct Uw_SelectableButton_C_On_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
