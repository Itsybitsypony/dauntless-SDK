#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bttask_exit_rage_state_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bttask_exit_rage_state.bttask_exit_rage_state_C.ReceiveExecuteAI
struct Ubttask_exit_rage_state_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bttask_exit_rage_state.bttask_exit_rage_state_C.ReceiveAbortAI
struct Ubttask_exit_rage_state_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bttask_exit_rage_state.bttask_exit_rage_state_C.TriggerExitRageAudioEvent
struct Ubttask_exit_rage_state_C_TriggerExitRageAudioEvent_Params
{
};

// Function bttask_exit_rage_state.bttask_exit_rage_state_C.ExecuteUbergraph_bttask_exit_rage_state
struct Ubttask_exit_rage_state_C_ExecuteUbergraph_bttask_exit_rage_state_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
