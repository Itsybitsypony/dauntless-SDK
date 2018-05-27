#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_vortex_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.UserConstructionScript
struct Aaoe_vortex_base_bp_C_UserConstructionScript_Params
{
};

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ReceiveBeginPlay
struct Aaoe_vortex_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ReceiveTick
struct Aaoe_vortex_base_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__PullCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct Aaoe_vortex_base_bp_C_BndEvt__PullCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__PullCollision_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature
struct Aaoe_vortex_base_bp_C_BndEvt__PullCollision_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.SpawnActor_Destroy
struct Aaoe_vortex_base_bp_C_SpawnActor_Destroy_Params
{
};

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature
struct Aaoe_vortex_base_bp_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.InternalDestroy
struct Aaoe_vortex_base_bp_C_InternalDestroy_Params
{
};

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ExecuteUbergraph_aoe_vortex_base_bp
struct Aaoe_vortex_base_bp_C_ExecuteUbergraph_aoe_vortex_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
