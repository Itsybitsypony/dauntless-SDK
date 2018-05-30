#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_influenced_destructable_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.UserConstructionScript
struct Ainfluenced_destructable_base_bp_C_UserConstructionScript_Params
{
};

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.ReceiveBeginPlay
struct Ainfluenced_destructable_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.Evaluate
struct Ainfluenced_destructable_base_bp_C_Evaluate_Params
{
};

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct Ainfluenced_destructable_base_bp_C_BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
struct Ainfluenced_destructable_base_bp_C_BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.OnInfluencerAdded
struct Ainfluenced_destructable_base_bp_C_OnInfluencerAdded_Params
{
	class UPrimitiveComponent*                         InfluencerComponent;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      InfluencerActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.OnInfluencerRemoved
struct Ainfluenced_destructable_base_bp_C_OnInfluencerRemoved_Params
{
	class UPrimitiveComponent*                         InfluencerComponent;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AActor*                                      InfluencerActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.ExecuteUbergraph_influenced_destructable_base_bp
struct Ainfluenced_destructable_base_bp_C_ExecuteUbergraph_influenced_destructable_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
