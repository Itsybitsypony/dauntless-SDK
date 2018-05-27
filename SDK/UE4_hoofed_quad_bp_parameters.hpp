#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hoofed_quad_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function hoofed_quad_bp.hoofed_quad_bp_C.UserConstructionScript
struct Ahoofed_quad_bp_C_UserConstructionScript_Params
{
};

// Function hoofed_quad_bp.hoofed_quad_bp_C.ReceiveBeginPlay
struct Ahoofed_quad_bp_C_ReceiveBeginPlay_Params
{
};

// Function hoofed_quad_bp.hoofed_quad_bp_C.ReceiveTick
struct Ahoofed_quad_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hoofed_quad_bp.hoofed_quad_bp_C.SetLocoState
struct Ahoofed_quad_bp_C_SetLocoState_Params
{
	TEnumAsByte<Efauna_loco_state_enum>*               NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function hoofed_quad_bp.hoofed_quad_bp_C.ExecuteUbergraph_hoofed_quad_bp
struct Ahoofed_quad_bp_C_ExecuteUbergraph_hoofed_quad_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
