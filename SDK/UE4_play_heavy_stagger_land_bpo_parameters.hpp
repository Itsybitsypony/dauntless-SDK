#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_play_heavy_stagger_land_bpo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function play_heavy_stagger_land_bpo.play_heavy_stagger_land_bpo_C.GatherDebugInfo
struct Uplay_heavy_stagger_land_bpo_C_GatherDebugInfo_Params
{
	class FString                                      DebugText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function play_heavy_stagger_land_bpo.play_heavy_stagger_land_bpo_C.OnTick
struct Uplay_heavy_stagger_land_bpo_C_OnTick_Params
{
	struct FArchonGameplayOperationArgs*               Args;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function play_heavy_stagger_land_bpo.play_heavy_stagger_land_bpo_C.ExecuteUbergraph_play_heavy_stagger_land_bpo
struct Uplay_heavy_stagger_land_bpo_C_ExecuteUbergraph_play_heavy_stagger_land_bpo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
