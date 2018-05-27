#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_simple_base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_button_simple_base.w_button_simple_base_C.SetShouldCallAttention
struct Uw_button_simple_base_C_SetShouldCallAttention_Params
{
	bool                                               CallAttention;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simple_base.w_button_simple_base_C.OnFocusReceived
struct Uw_button_simple_base_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_button_simple_base.w_button_simple_base_C.OnLoaded_A058EA6248D678A919D5DF9121E36961
struct Uw_button_simple_base_C_OnLoaded_A058EA6248D678A919D5DF9121E36961_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simple_base.w_button_simple_base_C.Construct
struct Uw_button_simple_base_C_Construct_Params
{
};

// Function w_button_simple_base.w_button_simple_base_C.Input Swap
struct Uw_button_simple_base_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simple_base.w_button_simple_base_C.LoadIcon
struct Uw_button_simple_base_C_LoadIcon_Params
{
};

// Function w_button_simple_base.w_button_simple_base_C.PreConstruct
struct Uw_button_simple_base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simple_base.w_button_simple_base_C.SetIsSelected
struct Uw_button_simple_base_C_SetIsSelected_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simple_base.w_button_simple_base_C.ExecuteUbergraph_w_button_simple_base
struct Uw_button_simple_base_C_ExecuteUbergraph_w_button_simple_base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
