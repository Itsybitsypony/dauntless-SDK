#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_context_menu_action_small_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_context_menu_action_small.w_context_menu_action_small_C.Get Label Position
struct Uw_context_menu_action_small_C_Get_Label_Position_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_context_menu_action_small.w_context_menu_action_small_C.Position Label
struct Uw_context_menu_action_small_C_Position_Label_Params
{
	struct FVector2D                                   Alignment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_context_menu_action_small.w_context_menu_action_small_C.Selected
struct Uw_context_menu_action_small_C_Selected_Params
{
};

// Function w_context_menu_action_small.w_context_menu_action_small_C.Unselected
struct Uw_context_menu_action_small_C_Unselected_Params
{
};

// Function w_context_menu_action_small.w_context_menu_action_small_C.Initialize
struct Uw_context_menu_action_small_C_Initialize_Params
{
};

// Function w_context_menu_action_small.w_context_menu_action_small_C.PreConstruct
struct Uw_context_menu_action_small_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_context_menu_action_small.w_context_menu_action_small_C.Construct
struct Uw_context_menu_action_small_C_Construct_Params
{
};

// Function w_context_menu_action_small.w_context_menu_action_small_C.Handle Action
struct Uw_context_menu_action_small_C_Handle_Action_Params
{
};

// Function w_context_menu_action_small.w_context_menu_action_small_C.ExecuteUbergraph_w_context_menu_action_small
struct Uw_context_menu_action_small_C_ExecuteUbergraph_w_context_menu_action_small_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
