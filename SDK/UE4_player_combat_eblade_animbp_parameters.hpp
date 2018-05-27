#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_combat_eblade_animbp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.GetAtmosphereSpawner
struct Uplayer_combat_eblade_animbp_C_GetAtmosphereSpawner_Params
{
	class Aatmosphere_spawner_bp_C*                    Atmosphere_Spawner;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.BlueprintUpdateAnimation
struct Uplayer_combat_eblade_animbp_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.OnAtmosphereChanged
struct Uplayer_combat_eblade_animbp_C_OnAtmosphereChanged_Params
{
	class AAtmosphereBase*                             SpawnedAtmosphere;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_eblade_animbp.player_combat_eblade_animbp_C.ExecuteUbergraph_player_combat_eblade_animbp
struct Uplayer_combat_eblade_animbp_C_ExecuteUbergraph_player_combat_eblade_animbp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
