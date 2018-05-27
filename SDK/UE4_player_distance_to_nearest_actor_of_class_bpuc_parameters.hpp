#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_distance_to_nearest_actor_of_class_bpuc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_distance_to_nearest_actor_of_class_bpuc.player_distance_to_nearest_actor_of_class_bpuc_C.OnEvaluate
struct Uplayer_distance_to_nearest_actor_of_class_bpuc_C_OnEvaluate_Params
{
	class AArchonPlayerController**                    PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest**                                     OwningQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
