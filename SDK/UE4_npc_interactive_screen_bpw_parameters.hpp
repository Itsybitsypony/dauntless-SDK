#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_interactive_screen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.GetDefaultFocusedWidget
struct Unpc_interactive_screen_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.OnAquireTopOfFocusStack
struct Unpc_interactive_screen_bpw_C_OnAquireTopOfFocusStack_Params
{
};

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.PlayNPCOutro
struct Unpc_interactive_screen_bpw_C_PlayNPCOutro_Params
{
};

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.PlayNPCIntro
struct Unpc_interactive_screen_bpw_C_PlayNPCIntro_Params
{
};

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.ShowIntroSubmenu
struct Unpc_interactive_screen_bpw_C_ShowIntroSubmenu_Params
{
};

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.SkipToSingleSubmenu
struct Unpc_interactive_screen_bpw_C_SkipToSingleSubmenu_Params
{
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.Construct
struct Unpc_interactive_screen_bpw_C_Construct_Params
{
};

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.ExecuteUbergraph_npc_interactive_screen_bpw
struct Unpc_interactive_screen_bpw_C_ExecuteUbergraph_npc_interactive_screen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interactive_screen_bpw.npc_interactive_screen_bpw_C.CloseMenu__DelegateSignature
struct Unpc_interactive_screen_bpw_C_CloseMenu__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
