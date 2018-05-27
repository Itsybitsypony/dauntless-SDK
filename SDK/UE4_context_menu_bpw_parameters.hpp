#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_context_menu_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function context_menu_bpw.context_menu_bpw_C.Add Action
struct Ucontext_menu_bpw_C_Add_Action_Params
{
	struct Fcontext_menu_action                        Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_context_menu_action_C*                    Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.GetDefaultFocusedWidget
struct Ucontext_menu_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.OnKeyUp
struct Ucontext_menu_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function context_menu_bpw.context_menu_bpw_C.Should Handle Interact Released
struct Ucontext_menu_bpw_C_Should_Handle_Interact_Released_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.Get Action Layout Parameters
struct Ucontext_menu_bpw_C_Get_Action_Layout_Parameters_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.Add Action to Panel
struct Ucontext_menu_bpw_C_Add_Action_to_Panel_Params
{
	struct Fcontext_menu_action                        Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCanvasPanel*                                Canvas;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSelect;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_context_menu_action_C*                    Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.Get Action Widget Location
struct Ucontext_menu_bpw_C_Get_Action_Widget_Location_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.Find Selected Action Index
struct Ucontext_menu_bpw_C_Find_Selected_Action_Index_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.Construct
struct Ucontext_menu_bpw_C_Construct_Params
{
};

// Function context_menu_bpw.context_menu_bpw_C.Show Selection
struct Ucontext_menu_bpw_C_Show_Selection_Params
{
};

// Function context_menu_bpw.context_menu_bpw_C.Hide Selection
struct Ucontext_menu_bpw_C_Hide_Selection_Params
{
};

// Function context_menu_bpw.context_menu_bpw_C.Update Selection
struct Ucontext_menu_bpw_C_Update_Selection_Params
{
};

// Function context_menu_bpw.context_menu_bpw_C.Update Visual Selection
struct Ucontext_menu_bpw_C_Update_Visual_Selection_Params
{
};

// Function context_menu_bpw.context_menu_bpw_C.Confirm Selection
struct Ucontext_menu_bpw_C_Confirm_Selection_Params
{
};

// Function context_menu_bpw.context_menu_bpw_C.Cancel Selection
struct Ucontext_menu_bpw_C_Cancel_Selection_Params
{
};

// Function context_menu_bpw.context_menu_bpw_C.Update
struct Ucontext_menu_bpw_C_Update_Params
{
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.OnAquireTopOfFocusStack
struct Ucontext_menu_bpw_C_OnAquireTopOfFocusStack_Params
{
};

// Function context_menu_bpw.context_menu_bpw_C.Update Selection Strength
struct Ucontext_menu_bpw_C_Update_Selection_Strength_Params
{
	float                                              Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_bpw.context_menu_bpw_C.ExecuteUbergraph_context_menu_bpw
struct Ucontext_menu_bpw_C_ExecuteUbergraph_context_menu_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
