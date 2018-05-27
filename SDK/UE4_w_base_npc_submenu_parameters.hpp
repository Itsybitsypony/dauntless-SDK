#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_npc_submenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_base_npc_submenu.w_base_npc_submenu_C.InitializeFromNPCMenu
struct Uw_base_npc_submenu_C_InitializeFromNPCMenu_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_base_npc_submenu.w_base_npc_submenu_C.OnKeyDown
struct Uw_base_npc_submenu_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_base_npc_submenu.w_base_npc_submenu_C.OnCloseRequested__DelegateSignature
struct Uw_base_npc_submenu_C_OnCloseRequested__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
