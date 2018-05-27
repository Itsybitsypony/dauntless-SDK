#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function is_Single_Behemoth_Health_Higher_Than_7500_bpuc1.is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C.OnGetDescription
struct Uis_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C_OnGetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function is_Single_Behemoth_Health_Higher_Than_7500_bpuc1.is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C.OnEvaluate
struct Uis_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C_OnEvaluate_Params
{
	class AArchonPlayerController**                    PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest**                                     OwningQuest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
