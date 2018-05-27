#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_non_behemoth_play_montage_bttask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.ReceiveExecuteAI
struct Unon_behemoth_play_montage_bttask_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.MontagBlendingOut
struct Unon_behemoth_play_montage_bttask_C_MontagBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C.ExecuteUbergraph_non_behemoth_play_montage_bttask
struct Unon_behemoth_play_montage_bttask_C_ExecuteUbergraph_non_behemoth_play_montage_bttask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
