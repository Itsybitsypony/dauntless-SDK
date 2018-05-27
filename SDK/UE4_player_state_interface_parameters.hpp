#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_state_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_state_interface.player_state_interface_C.SetInAirship
struct Uplayer_state_interface_C_SetInAirship_Params
{
	bool                                               InAirship;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_interface.player_state_interface_C.IncrementInterruptCount
struct Uplayer_state_interface_C_IncrementInterruptCount_Params
{
	class AActor*                                      Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_interface.player_state_interface_C.IncrementPartBreakCount
struct Uplayer_state_interface_C_IncrementPartBreakCount_Params
{
	class AActor*                                      Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_interface.player_state_interface_C.SetInCity-Deprecated
struct Uplayer_state_interface_C_SetInCity_Deprecated_Params
{
	bool                                               InCity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_interface.player_state_interface_C.IncrementStaggerCount
struct Uplayer_state_interface_C_IncrementStaggerCount_Params
{
	class AActor*                                      Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasInterrupt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
