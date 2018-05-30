#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_LoopMontageUntilPastTarget_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.CollisionCheck
struct UBTTask_LoopMontageUntilPastTarget_C_CollisionCheck_Params
{
	bool                                               ShouldStop;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.OuputLocation
struct UBTTask_LoopMontageUntilPastTarget_C_OuputLocation_Params
{
};

// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveExecuteAI
struct UBTTask_LoopMontageUntilPastTarget_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveTickAI
struct UBTTask_LoopMontageUntilPastTarget_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveAbortAI
struct UBTTask_LoopMontageUntilPastTarget_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ExecuteUbergraph_BTTask_LoopMontageUntilPastTarget
struct UBTTask_LoopMontageUntilPastTarget_C_ExecuteUbergraph_BTTask_LoopMontageUntilPastTarget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
