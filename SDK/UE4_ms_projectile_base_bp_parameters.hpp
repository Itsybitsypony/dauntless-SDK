#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ms_projectile_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.OnRep_AmmoScale
struct Ams_projectile_base_bp_C_OnRep_AmmoScale_Params
{
};

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.OnRep_ReplicatedRotationValues
struct Ams_projectile_base_bp_C_OnRep_ReplicatedRotationValues_Params
{
};

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.Clamp360
struct Ams_projectile_base_bp_C_Clamp360_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutAngle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.GetRandValue
struct Ams_projectile_base_bp_C_GetRandValue_Params
{
	bool                                               NegativeAndPositive;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Min;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.UserConstructionScript
struct Ams_projectile_base_bp_C_UserConstructionScript_Params
{
};

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.ReceiveBeginPlay
struct Ams_projectile_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.ReceiveTick
struct Ams_projectile_base_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.ExecuteUbergraph_ms_projectile_base_bp
struct Ams_projectile_base_bp_C_ExecuteUbergraph_ms_projectile_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
