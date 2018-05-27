#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_play_montage_bpo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function play_montage_bpo.play_montage_bpo_C.OnMontageBlendingOut_Event_1
struct Uplay_montage_bpo_C_OnMontageBlendingOut_Event_1_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function play_montage_bpo.play_montage_bpo_C.OnStart
struct Uplay_montage_bpo_C_OnStart_Params
{
	struct FArchonGameplayOperationArgs*               Args;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function play_montage_bpo.play_montage_bpo_C.OnTick
struct Uplay_montage_bpo_C_OnTick_Params
{
	struct FArchonGameplayOperationArgs*               Args;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function play_montage_bpo.play_montage_bpo_C.ExecuteUbergraph_play_montage_bpo
struct Uplay_montage_bpo_C_ExecuteUbergraph_play_montage_bpo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
