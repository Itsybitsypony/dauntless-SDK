#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_legend_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_button_legend.w_button_legend_C.Get Button Hint From Box
struct Uw_button_legend_C_Get_Button_Hint_From_Box_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UPanelWidget*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_button_legend_hint_C*                     ButtonHint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Get Action
struct Uw_button_legend_C_Get_Action_Params
{
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_button_legend_action_hint_C*              Button_Hint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Find Action
struct Uw_button_legend_C_Find_Action_Params
{
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_button_legend_action_hint_C*              Button_Hint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Clear Action
struct Uw_button_legend_C_Clear_Action_Params
{
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Add Action
struct Uw_button_legend_C_Add_Action_Params
{
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Add Controller Only Button
struct Uw_button_legend_C_Add_Controller_Only_Button_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_button_legend.w_button_legend_C.Set Button Visibility
struct Uw_button_legend_C_Set_Button_Visibility_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Get Button Hint
struct Uw_button_legend_C_Get_Button_Hint_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class Uw_button_legend_hint_C*                     Button_Hint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Find Button Hint
struct Uw_button_legend_C_Find_Button_Hint_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ControllerOnly;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_button_legend_hint_C*                     Button_Hint;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Clear Button
struct Uw_button_legend_C_Clear_Button_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_button_legend.w_button_legend_C.Add Button
struct Uw_button_legend_C_Add_Button_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_button_legend.w_button_legend_C.PreConstruct
struct Uw_button_legend_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.Construct
struct Uw_button_legend_C_Construct_Params
{
};

// Function w_button_legend.w_button_legend_C.On Input Swap
struct Uw_button_legend_C_On_Input_Swap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_button_legend.w_button_legend_C.ExecuteUbergraph_w_button_legend
struct Uw_button_legend_C_ExecuteUbergraph_w_button_legend_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
