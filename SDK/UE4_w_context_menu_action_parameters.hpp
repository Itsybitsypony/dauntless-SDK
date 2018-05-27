#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_context_menu_action_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_context_menu_action.w_context_menu_action_C.Handle Action
struct Uw_context_menu_action_C_Handle_Action_Params
{
};

// Function w_context_menu_action.w_context_menu_action_C.Selected
struct Uw_context_menu_action_C_Selected_Params
{
};

// Function w_context_menu_action.w_context_menu_action_C.Unselected
struct Uw_context_menu_action_C_Unselected_Params
{
};

// Function w_context_menu_action.w_context_menu_action_C.Update Progress
struct Uw_context_menu_action_C_Update_Progress_Params
{
	float                                              Progress;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_context_menu_action.w_context_menu_action_C.ExecuteUbergraph_w_context_menu_action
struct Uw_context_menu_action_C_ExecuteUbergraph_w_context_menu_action_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_context_menu_action.w_context_menu_action_C.On Select__DelegateSignature
struct Uw_context_menu_action_C_On_Select__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
