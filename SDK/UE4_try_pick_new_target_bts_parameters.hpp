#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_try_pick_new_target_bts_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function try_pick_new_target_bts.try_pick_new_target_bts_C.ReceiveSearchStartAI
struct Utry_pick_new_target_bts_C_ReceiveSearchStartAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function try_pick_new_target_bts.try_pick_new_target_bts_C.ReceiveTickAI
struct Utry_pick_new_target_bts_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function try_pick_new_target_bts.try_pick_new_target_bts_C.ChristmasCheer
struct Utry_pick_new_target_bts_C_ChristmasCheer_Params
{
	class APawn*                                       ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function try_pick_new_target_bts.try_pick_new_target_bts_C.ExecuteUbergraph_try_pick_new_target_bts
struct Utry_pick_new_target_bts_C_ExecuteUbergraph_try_pick_new_target_bts_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
