#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Button_OptionsCat_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.GetVisibility_1
struct Uw_Button_OptionsCat_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Set Button Label
struct Uw_Button_OptionsCat_bpw_C_Set_Button_Label_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.OnFocusReceived
struct Uw_Button_OptionsCat_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Tick
struct Uw_Button_OptionsCat_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_Button_OptionsCat_bpw_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Show Hover
struct Uw_Button_OptionsCat_bpw_C_Show_Hover_Params
{
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Hide Hover
struct Uw_Button_OptionsCat_bpw_C_Hide_Hover_Params
{
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.OnSynchronizeProperties
struct Uw_Button_OptionsCat_bpw_C_OnSynchronizeProperties_Params
{
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct Uw_Button_OptionsCat_bpw_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.ExecuteUbergraph_w_Button_OptionsCat_bpw
struct Uw_Button_OptionsCat_bpw_C_ExecuteUbergraph_w_Button_OptionsCat_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Hovered__DelegateSignature
struct Uw_Button_OptionsCat_bpw_C_Hovered__DelegateSignature_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   Options;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.FocusReceived__DelegateSignature
struct Uw_Button_OptionsCat_bpw_C_FocusReceived__DelegateSignature_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Option Cat Clicked__DelegateSignature
struct Uw_Button_OptionsCat_bpw_C_Option_Cat_Clicked__DelegateSignature_Params
{
	TEnumAsByte<EMenu_Options_Stage>                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
