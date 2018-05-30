#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_set_behemoth_loco_mode_btdeco_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.PerformConditionCheckAI
struct Uset_behemoth_loco_mode_btdeco_C_PerformConditionCheckAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ReceiveObserverActivatedAI
struct Uset_behemoth_loco_mode_btdeco_C_ReceiveObserverActivatedAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ReceiveObserverDeactivatedAI
struct Uset_behemoth_loco_mode_btdeco_C_ReceiveObserverDeactivatedAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ExecuteUbergraph_set_behemoth_loco_mode_btdeco
struct Uset_behemoth_loco_mode_btdeco_C_ExecuteUbergraph_set_behemoth_loco_mode_btdeco_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
