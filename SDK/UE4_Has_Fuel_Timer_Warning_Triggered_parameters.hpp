#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Has_Fuel_Timer_Warning_Triggered_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnGetDescription
struct UHas_Fuel_Timer_Warning_Triggered_C_OnGetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnCommit
struct UHas_Fuel_Timer_Warning_Triggered_C_OnCommit_Params
{
	class AArchonPlayerController**                    PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest**                                     OwningQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnEvaluate
struct UHas_Fuel_Timer_Warning_Triggered_C_OnEvaluate_Params
{
	class AArchonPlayerController**                    PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest**                                     OwningQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
