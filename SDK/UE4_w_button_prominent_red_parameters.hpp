#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_prominent_red_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_button_prominent_red.w_button_prominent_red_C.SetShouldCallAttention
struct Uw_button_prominent_red_C_SetShouldCallAttention_Params
{
	bool                                               CallAttention;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_prominent_red.w_button_prominent_red_C.OnFocusReceived
struct Uw_button_prominent_red_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_button_prominent_red.w_button_prominent_red_C.OnLoaded_A058EA6248D678A919D5DF91B60473D4
struct Uw_button_prominent_red_C_OnLoaded_A058EA6248D678A919D5DF91B60473D4_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_prominent_red.w_button_prominent_red_C.Construct
struct Uw_button_prominent_red_C_Construct_Params
{
};

// Function w_button_prominent_red.w_button_prominent_red_C.LoadIcon
struct Uw_button_prominent_red_C_LoadIcon_Params
{
};

// Function w_button_prominent_red.w_button_prominent_red_C.PreConstruct
struct Uw_button_prominent_red_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_prominent_red.w_button_prominent_red_C.SetIsSelected
struct Uw_button_prominent_red_C_SetIsSelected_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_prominent_red.w_button_prominent_red_C.OnInputSwap
struct Uw_button_prominent_red_C_OnInputSwap_Params
{
	bool*                                              bUsingGamepad;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_prominent_red.w_button_prominent_red_C.ExecuteUbergraph_w_button_prominent_red
struct Uw_button_prominent_red_C_ExecuteUbergraph_w_button_prominent_red_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
