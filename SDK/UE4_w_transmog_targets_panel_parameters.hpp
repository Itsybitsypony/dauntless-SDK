#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_transmog_targets_panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Set Source Transmog Item
struct Uw_transmog_targets_panel_C_Set_Source_Transmog_Item_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Get Transmog Button
struct Uw_transmog_targets_panel_C_Get_Transmog_Button_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     Button;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Select Transmog Target Button
struct Uw_transmog_targets_panel_C_Select_Transmog_Target_Button_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.GetChild
struct Uw_transmog_targets_panel_C_GetChild_Params
{
	int*                                               ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ChildWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.OnDataViewChanged
struct Uw_transmog_targets_panel_C_OnDataViewChanged_Params
{
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Add Transmog Target
struct Uw_transmog_targets_panel_C_Add_Transmog_Target_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Transmog Item Clicked
struct Uw_transmog_targets_panel_C_On_Transmog_Item_Clicked_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Transmog Item Focused
struct Uw_transmog_targets_panel_C_On_Transmog_Item_Focused_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.Add Transmog Clear
struct Uw_transmog_targets_panel_C_Add_Transmog_Clear_Params
{
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Transmog Clicked
struct Uw_transmog_targets_panel_C_On_Clear_Transmog_Clicked_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Transmog Focused
struct Uw_transmog_targets_panel_C_On_Clear_Transmog_Focused_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.ExecuteUbergraph_w_transmog_targets_panel
struct Uw_transmog_targets_panel_C_ExecuteUbergraph_w_transmog_targets_panel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Clear Selected__DelegateSignature
struct Uw_transmog_targets_panel_C_On_Clear_Selected__DelegateSignature_Params
{
};

// Function w_transmog_targets_panel.w_transmog_targets_panel_C.On Target Selected__DelegateSignature
struct Uw_transmog_targets_panel_C_On_Target_Selected__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
