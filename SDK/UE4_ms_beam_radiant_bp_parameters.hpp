#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ms_beam_radiant_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.SetBeamDamageScale
struct Ams_beam_radiant_bp_C_SetBeamDamageScale_Params
{
	bool                                               Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.GetBeamDamageScale
struct Ams_beam_radiant_bp_C_GetBeamDamageScale_Params
{
	class AActor**                                     HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.UserConstructionScript
struct Ams_beam_radiant_bp_C_UserConstructionScript_Params
{
};

// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ReceiveBeginPlay
struct Ams_beam_radiant_bp_C_ReceiveBeginPlay_Params
{
};

// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ReceiveTick
struct Ams_beam_radiant_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.AuthHitTarget_Event_1
struct Ams_beam_radiant_bp_C_AuthHitTarget_Event_1_Params
{
	bool                                               Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ExecuteUbergraph_ms_beam_radiant_bp
struct Ams_beam_radiant_bp_C_ExecuteUbergraph_ms_beam_radiant_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
