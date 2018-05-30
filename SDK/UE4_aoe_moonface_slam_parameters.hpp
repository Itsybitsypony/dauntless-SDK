#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_moonface_slam_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function aoe_moonface_slam.aoe_moonface_slam_C.UserConstructionScript
struct Aaoe_moonface_slam_C_UserConstructionScript_Params
{
};

// Function aoe_moonface_slam.aoe_moonface_slam_C.OnActorHitByAoE
struct Aaoe_moonface_slam_C_OnActorHitByAoE_Params
{
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_moonface_slam.aoe_moonface_slam_C.ExecuteUbergraph_aoe_moonface_slam
struct Aaoe_moonface_slam_C_ExecuteUbergraph_aoe_moonface_slam_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
