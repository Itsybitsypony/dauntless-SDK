#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ik_eblade_crowbear_exotic_hand_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.UserConstructionScript
struct Aik_eblade_crowbear_exotic_hand_bp_C_UserConstructionScript_Params
{
};

// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ReceiveBeginPlay
struct Aik_eblade_crowbear_exotic_hand_bp_C_ReceiveBeginPlay_Params
{
};

// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ReceiveTick
struct Aik_eblade_crowbear_exotic_hand_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.OnHit
struct Aik_eblade_crowbear_exotic_hand_bp_C_OnHit_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.HealFX
struct Aik_eblade_crowbear_exotic_hand_bp_C_HealFX_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.TickHealFX
struct Aik_eblade_crowbear_exotic_hand_bp_C_TickHealFX_Params
{
};

// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_bp
struct Aik_eblade_crowbear_exotic_hand_bp_C_ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
