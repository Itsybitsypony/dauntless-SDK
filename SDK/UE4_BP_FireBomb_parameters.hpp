#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FireBomb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_FireBomb.BP_FireBomb_C.ScaleUpBomb
struct ABP_FireBomb_C_ScaleUpBomb_Params
{
};

// Function BP_FireBomb.BP_FireBomb_C.StopVFX
struct ABP_FireBomb_C_StopVFX_Params
{
};

// Function BP_FireBomb.BP_FireBomb_C.StopSounds
struct ABP_FireBomb_C_StopSounds_Params
{
};

// Function BP_FireBomb.BP_FireBomb_C.StartVFX
struct ABP_FireBomb_C_StartVFX_Params
{
};

// Function BP_FireBomb.BP_FireBomb_C.StartSounds
struct ABP_FireBomb_C_StartSounds_Params
{
};

// Function BP_FireBomb.BP_FireBomb_C.UserConstructionScript
struct ABP_FireBomb_C_UserConstructionScript_Params
{
};

// Function BP_FireBomb.BP_FireBomb_C.ReceiveTick
struct ABP_FireBomb_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FireBomb.BP_FireBomb_C.ReceiveBeginPlay
struct ABP_FireBomb_C_ReceiveBeginPlay_Params
{
};

// Function BP_FireBomb.BP_FireBomb_C.ReceiveEndPlay
struct ABP_FireBomb_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FireBomb.BP_FireBomb_C.ExecuteUbergraph_BP_FireBomb
struct ABP_FireBomb_C_ExecuteUbergraph_BP_FireBomb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
