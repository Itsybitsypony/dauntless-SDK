#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_animation_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function npc_animation_interface.npc_animation_interface_C.SetReadyToTransition
struct Unpc_animation_interface_C_SetReadyToTransition_Params
{
	bool                                               ReadyToTransition_;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_animation_interface.npc_animation_interface_C.SetIsInteracting
struct Unpc_animation_interface_C_SetIsInteracting_Params
{
	bool                                               IsInteracting_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_animation_interface.npc_animation_interface_C.SetIsEntering
struct Unpc_animation_interface_C_SetIsEntering_Params
{
	bool                                               IsEntering;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
