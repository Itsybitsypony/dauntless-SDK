#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_condition_timer_bpuc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function condition_timer_bpuc.condition_timer_bpuc_C.GetConditionID
struct Ucondition_timer_bpuc_C_GetConditionID_Params
{
	class FString                                      ID;                                                       // (Parm, OutParm, ZeroConstructor)
};

// Function condition_timer_bpuc.condition_timer_bpuc_C.AreChildConditionsTrue
struct Ucondition_timer_bpuc_C_AreChildConditionsTrue_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      OwningQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function condition_timer_bpuc.condition_timer_bpuc_C.OnEvaluate
struct Ucondition_timer_bpuc_C_OnEvaluate_Params
{
	class AArchonPlayerController**                    PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest**                                     OwningQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
