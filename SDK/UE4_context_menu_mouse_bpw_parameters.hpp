#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_context_menu_mouse_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.Add Action
struct Ucontext_menu_mouse_bpw_C_Add_Action_Params
{
	struct Fcontext_menu_action*                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_context_menu_action_C*                    Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.OnMouseButtonUp
struct Ucontext_menu_mouse_bpw_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.Construct
struct Ucontext_menu_mouse_bpw_C_Construct_Params
{
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.Tick
struct Ucontext_menu_mouse_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.Show Selection
struct Ucontext_menu_mouse_bpw_C_Show_Selection_Params
{
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.Hide Selection
struct Ucontext_menu_mouse_bpw_C_Hide_Selection_Params
{
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.Update Selection
struct Ucontext_menu_mouse_bpw_C_Update_Selection_Params
{
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.PreConstruct
struct Ucontext_menu_mouse_bpw_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.OnMouseLeave
struct Ucontext_menu_mouse_bpw_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function context_menu_mouse_bpw.context_menu_mouse_bpw_C.ExecuteUbergraph_context_menu_mouse_bpw
struct Ucontext_menu_mouse_bpw_C_ExecuteUbergraph_context_menu_mouse_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
