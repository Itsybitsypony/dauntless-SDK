#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AnimNotify_AkEvent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.AudioEventCallback
struct UAnimNotify_AkEvent_C_AudioEventCallback_Params
{
	class UObject*                                     WorldContext;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EAkCallbackType                                    CallbackType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayingID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EstimatedDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.PlayEvent
struct UAnimNotify_AkEvent_C_PlayEvent_Params
{
	class USceneComponent*                             TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.ShouldExecuteNotify
struct UAnimNotify_AkEvent_C_ShouldExecuteNotify_Params
{
	class AActor*                                      Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldExecute_;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
struct UAnimNotify_AkEvent_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
