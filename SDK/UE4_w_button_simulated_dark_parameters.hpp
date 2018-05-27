#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_simulated_dark_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_button_simulated_dark.w_button_simulated_dark_C.SetShouldCallAttention
struct Uw_button_simulated_dark_C_SetShouldCallAttention_Params
{
	bool                                               CallAttention;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simulated_dark.w_button_simulated_dark_C.OnFocusReceived
struct Uw_button_simulated_dark_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_button_simulated_dark.w_button_simulated_dark_C.OnLoaded_A058EA6248D678A919D5DF9106B25F77
struct Uw_button_simulated_dark_C_OnLoaded_A058EA6248D678A919D5DF9106B25F77_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simulated_dark.w_button_simulated_dark_C.Construct
struct Uw_button_simulated_dark_C_Construct_Params
{
};

// Function w_button_simulated_dark.w_button_simulated_dark_C.LoadIcon
struct Uw_button_simulated_dark_C_LoadIcon_Params
{
};

// Function w_button_simulated_dark.w_button_simulated_dark_C.PreConstruct
struct Uw_button_simulated_dark_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simulated_dark.w_button_simulated_dark_C.SetIsSelected
struct Uw_button_simulated_dark_C_SetIsSelected_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simulated_dark.w_button_simulated_dark_C.OnInputSwap
struct Uw_button_simulated_dark_C_OnInputSwap_Params
{
	bool*                                              bUsingGamepad;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_simulated_dark.w_button_simulated_dark_C.ExecuteUbergraph_w_button_simulated_dark
struct Uw_button_simulated_dark_C_ExecuteUbergraph_w_button_simulated_dark_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
