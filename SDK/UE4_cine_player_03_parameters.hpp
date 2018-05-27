#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_player_03_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cine_player_03.cine_player_03_C.GetMorphTargetDriver
struct Acine_player_03_C_GetMorphTargetDriver_Params
{
	class USkeletalMeshComponent*                      MorphTargetOwner;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      AnimInstanceOwner;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cine_player_03.cine_player_03_C.UserConstructionScript
struct Acine_player_03_C_UserConstructionScript_Params
{
};

// Function cine_player_03.cine_player_03_C.ReceiveTick
struct Acine_player_03_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cine_player_03.cine_player_03_C.ReceiveBeginPlay
struct Acine_player_03_C_ReceiveBeginPlay_Params
{
};

// Function cine_player_03.cine_player_03_C.ExecuteUbergraph_cine_player_03
struct Acine_player_03_C_ExecuteUbergraph_cine_player_03_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
