#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_generic_action_bttask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_generic_action_bttask.behemoth_generic_action_bttask_C.ReceiveExecuteAI
struct Ubehemoth_generic_action_bttask_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_generic_action_bttask.behemoth_generic_action_bttask_C.OnMontageBlendingOut_Event_1
struct Ubehemoth_generic_action_bttask_C_OnMontageBlendingOut_Event_1_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_generic_action_bttask.behemoth_generic_action_bttask_C.Finish
struct Ubehemoth_generic_action_bttask_C_Finish_Params
{
};

// Function behemoth_generic_action_bttask.behemoth_generic_action_bttask_C.ReceiveAbortAI
struct Ubehemoth_generic_action_bttask_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_generic_action_bttask.behemoth_generic_action_bttask_C.ExecuteUbergraph_behemoth_generic_action_bttask
struct Ubehemoth_generic_action_bttask_C_ExecuteUbergraph_behemoth_generic_action_bttask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
