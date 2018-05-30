#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_heal_on_flee_bttask_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_heal_on_flee_bttask.behemoth_heal_on_flee_bttask_C.ReceiveExecuteAI
struct Ubehemoth_heal_on_flee_bttask_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_heal_on_flee_bttask.behemoth_heal_on_flee_bttask_C.ExecuteUbergraph_behemoth_heal_on_flee_bttask
struct Ubehemoth_heal_on_flee_bttask_C_ExecuteUbergraph_behemoth_heal_on_flee_bttask_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
