#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_telemetry_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_controller_telemetry_component.player_controller_telemetry_component_C.ReceiveTick
struct Uplayer_controller_telemetry_component_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_controller_telemetry_component.player_controller_telemetry_component_C.On Set Dye Colour
struct Uplayer_controller_telemetry_component_C_On_Set_Dye_Colour_Params
{
	class UArchonInventoryItem_Armour*                 Armour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 NewDyeConfiguration;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchMakingStarted
struct Uplayer_controller_telemetry_component_C_MatchMakingStarted_Params
{
};

// Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingFailed
struct Uplayer_controller_telemetry_component_C_MatchmakingFailed_Params
{
};

// Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingCanceled
struct Uplayer_controller_telemetry_component_C_MatchmakingCanceled_Params
{
};

// Function player_controller_telemetry_component.player_controller_telemetry_component_C.MatchmakingSuccess
struct Uplayer_controller_telemetry_component_C_MatchmakingSuccess_Params
{
};

// Function player_controller_telemetry_component.player_controller_telemetry_component_C.ExecuteUbergraph_player_controller_telemetry_component
struct Uplayer_controller_telemetry_component_C_ExecuteUbergraph_player_controller_telemetry_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
