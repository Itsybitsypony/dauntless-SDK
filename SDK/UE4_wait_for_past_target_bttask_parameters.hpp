#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_wait_for_past_target_bttask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.WillCollideWithTerrain
struct Uwait_for_past_target_bttask_C_WillCollideWithTerrain_Params
{
	class AActor*                                      ParentActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldStop;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.IsPastTarget
struct Uwait_for_past_target_bttask_C_IsPastTarget_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPos;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               PastTarget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               GoingToCollide;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveTickAI
struct Uwait_for_past_target_bttask_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveExecuteAI
struct Uwait_for_past_target_bttask_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.QueuedTurn
struct Uwait_for_past_target_bttask_C_QueuedTurn_Params
{
};

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.Finish
struct Uwait_for_past_target_bttask_C_Finish_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveAbortAI
struct Uwait_for_past_target_bttask_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ExecuteUbergraph_wait_for_past_target_bttask
struct Uwait_for_past_target_bttask_C_ExecuteUbergraph_wait_for_past_target_bttask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
