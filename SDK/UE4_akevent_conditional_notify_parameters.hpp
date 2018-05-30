#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_akevent_conditional_notify_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function akevent_conditional_notify.akevent_conditional_notify_C.ShouldExecuteNotify
struct Uakevent_conditional_notify_C_ShouldExecuteNotify_Params
{
	class AActor**                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldExecute_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function akevent_conditional_notify.akevent_conditional_notify_C.GetNotifyName
struct Uakevent_conditional_notify_C_GetNotifyName_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
