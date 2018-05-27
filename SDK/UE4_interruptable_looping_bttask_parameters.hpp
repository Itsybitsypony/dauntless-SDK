#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interruptable_looping_bttask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveExecuteAI
struct Uinterruptable_looping_bttask_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.MontageEnded
struct Uinterruptable_looping_bttask_C_MontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.EndTask
struct Uinterruptable_looping_bttask_C_EndTask_Params
{
	bool                                               Succeeded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ExitMontage
struct Uinterruptable_looping_bttask_C_ExitMontage_Params
{
};

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveAbortAI
struct Uinterruptable_looping_bttask_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.StopLooping
struct Uinterruptable_looping_bttask_C_StopLooping_Params
{
};

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveTickAI
struct Uinterruptable_looping_bttask_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ExecuteUbergraph_interruptable_looping_bttask
struct Uinterruptable_looping_bttask_C_ExecuteUbergraph_interruptable_looping_bttask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
