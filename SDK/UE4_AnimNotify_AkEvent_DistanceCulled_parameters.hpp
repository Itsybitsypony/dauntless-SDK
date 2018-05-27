#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AnimNotify_AkEvent_DistanceCulled_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimNotify_AkEvent_DistanceCulled.AnimNotify_AkEvent_DistanceCulled_C.ShouldExecuteNotify
struct UAnimNotify_AkEvent_DistanceCulled_C_ShouldExecuteNotify_Params
{
	class AActor*                                      Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldExecute;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_AkEvent_DistanceCulled.AnimNotify_AkEvent_DistanceCulled_C.Received_Notify
struct UAnimNotify_AkEvent_DistanceCulled_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
