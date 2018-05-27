#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_skinpicksquare_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Hide Hover
struct Ubpw_skinpicksquare_C_Hide_Hover_Params
{
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Show Hover
struct Ubpw_skinpicksquare_C_Show_Hover_Params
{
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnFocusReceived
struct Ubpw_skinpicksquare_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Get Dye Info Row Name
struct Ubpw_skinpicksquare_C_Get_Dye_Info_Row_Name_Params
{
	struct FName                                       Row_Name;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Get Button Color
struct Ubpw_skinpicksquare_C_Get_Button_Color_Params
{
	struct FLinearColor                                Button_Color;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnLoaded_AEF31BCC491E10D4B44BBD8389FC88FD
struct Ubpw_skinpicksquare_C_OnLoaded_AEF31BCC491E10D4B44BBD8389FC88FD_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Construct
struct Ubpw_skinpicksquare_C_Construct_Params
{
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Tick
struct Ubpw_skinpicksquare_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature
struct Ubpw_skinpicksquare_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.Select
struct Ubpw_skinpicksquare_C_Select_Params
{
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.OnFocusLost
struct Ubpw_skinpicksquare_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.HideSelector
struct Ubpw_skinpicksquare_C_HideSelector_Params
{
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.ShowSelector
struct Ubpw_skinpicksquare_C_ShowSelector_Params
{
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.ExecuteUbergraph_bpw_skinpicksquare
struct Ubpw_skinpicksquare_C_ExecuteUbergraph_bpw_skinpicksquare_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_skinpicksquare.bpw_skinpicksquare_C.ButtonPressed__DelegateSignature
struct Ubpw_skinpicksquare_C_ButtonPressed__DelegateSignature_Params
{
	class Ubpw_skinpicksquare_C*                       Color_Picker_Reference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectedSwatch;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
