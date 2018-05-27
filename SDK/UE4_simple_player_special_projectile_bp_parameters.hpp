#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_simple_player_special_projectile_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.UserConstructionScript
struct Asimple_player_special_projectile_bp_C_UserConstructionScript_Params
{
};

// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ReceiveBeginPlay
struct Asimple_player_special_projectile_bp_C_ReceiveBeginPlay_Params
{
};

// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.BndEvt__Colliding Body_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature
struct Asimple_player_special_projectile_bp_C_BndEvt__Colliding_Body_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.DeactivateParticle
struct Asimple_player_special_projectile_bp_C_DeactivateParticle_Params
{
};

// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ReceiveTick
struct Asimple_player_special_projectile_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ExecuteUbergraph_simple_player_special_projectile_bp
struct Asimple_player_special_projectile_bp_C_ExecuteUbergraph_simple_player_special_projectile_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
