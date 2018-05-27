#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_beam_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_beam_bp.base_beam_bp_C.GetHitActorsAndComponents
struct Abase_beam_bp_C_GetHitActorsAndComponents_Params
{
	TArray<class AActor*>                              UniqueActors;                                             // (Parm, OutParm, ZeroConstructor)
	TMap<class AActor*, class UPrimitiveComponent*>    UniqueActorComponent;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function base_beam_bp.base_beam_bp_C.GetBeamDamageScale
struct Abase_beam_bp_C_GetBeamDamageScale_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.ClientRegisterBeamFX
struct Abase_beam_bp_C_ClientRegisterBeamFX_Params
{
	class UParticleSystemComponent*                    BeamComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.AuthUpdateBeamParameters
struct Abase_beam_bp_C_AuthUpdateBeamParameters_Params
{
	struct Fbeam_request                               NewBeamData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               RestartMotion;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.AuthOnHitTarget
struct Abase_beam_bp_C_AuthOnHitTarget_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.ApplyDamage
struct Abase_beam_bp_C_ApplyDamage_Params
{
};

// Function base_beam_bp.base_beam_bp_C.UpdateBeamEndEffects
struct Abase_beam_bp_C_UpdateBeamEndEffects_Params
{
	bool                                               IsBeamColliding;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.IsBeamFinished
struct Abase_beam_bp_C_IsBeamFinished_Params
{
	bool                                               BeamIsFinished;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.UpdateBeam
struct Abase_beam_bp_C_UpdateBeam_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.GetBeamSourcePoint
struct Abase_beam_bp_C_GetBeamSourcePoint_Params
{
	struct FVector                                     BeamSourcePoint;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.AuthStopBeam
struct Abase_beam_bp_C_AuthStopBeam_Params
{
};

// Function base_beam_bp.base_beam_bp_C.UpdateBeamEndPoint
struct Abase_beam_bp_C_UpdateBeamEndPoint_Params
{
	bool                                               BeamFinished;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.UserConstructionScript
struct Abase_beam_bp_C_UserConstructionScript_Params
{
};

// Function base_beam_bp.base_beam_bp_C.ReceiveTick
struct Abase_beam_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.ReceiveBeginPlay
struct Abase_beam_bp_C_ReceiveBeginPlay_Params
{
};

// Function base_beam_bp.base_beam_bp_C.ReceiveDestroyed
struct Abase_beam_bp_C_ReceiveDestroyed_Params
{
};

// Function base_beam_bp.base_beam_bp_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct Abase_beam_bp_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.DrawCapsule
struct Abase_beam_bp_C_DrawCapsule_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.DrawSphere
struct Abase_beam_bp_C_DrawSphere_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.ExecuteUbergraph_base_beam_bp
struct Abase_beam_bp_C_ExecuteUbergraph_base_beam_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_beam_bp.base_beam_bp_C.AuthHitTarget__DelegateSignature
struct Abase_beam_bp_C_AuthHitTarget__DelegateSignature_Params
{
	bool                                               Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
