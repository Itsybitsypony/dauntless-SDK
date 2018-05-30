#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_handle_stagger_bttask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function handle_stagger_bttask.handle_stagger_bttask_C.PickBestStagger
struct Uhandle_stagger_bttask_C_PickBestStagger_Params
{
	TArray<struct Fstagger_option>                     StaggerOptions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                BestIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function handle_stagger_bttask.handle_stagger_bttask_C.ReceiveExecuteAI
struct Uhandle_stagger_bttask_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function handle_stagger_bttask.handle_stagger_bttask_C.OnMontageBlendingOut_Event_1
struct Uhandle_stagger_bttask_C_OnMontageBlendingOut_Event_1_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function handle_stagger_bttask.handle_stagger_bttask_C.ReceiveAbortAI
struct Uhandle_stagger_bttask_C_ReceiveAbortAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function handle_stagger_bttask.handle_stagger_bttask_C.Cleanup
struct Uhandle_stagger_bttask_C_Cleanup_Params
{
	bool                                               ClearStaggerCount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function handle_stagger_bttask.handle_stagger_bttask_C.PlayMontage
struct Uhandle_stagger_bttask_C_PlayMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function handle_stagger_bttask.handle_stagger_bttask_C.ExecuteUbergraph_handle_stagger_bttask
struct Uhandle_stagger_bttask_C_ExecuteUbergraph_handle_stagger_bttask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
