#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BasePylon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BasePylon.BP_BasePylon_C.StopVFX
struct ABP_BasePylon_C_StopVFX_Params
{
};

// Function BP_BasePylon.BP_BasePylon_C.StopSounds
struct ABP_BasePylon_C_StopSounds_Params
{
};

// Function BP_BasePylon.BP_BasePylon_C.StartVFX
struct ABP_BasePylon_C_StartVFX_Params
{
};

// Function BP_BasePylon.BP_BasePylon_C.StartSounds
struct ABP_BasePylon_C_StartSounds_Params
{
};

// Function BP_BasePylon.BP_BasePylon_C.UserConstructionScript
struct ABP_BasePylon_C_UserConstructionScript_Params
{
};

// Function BP_BasePylon.BP_BasePylon_C.ReceiveTick
struct ABP_BasePylon_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BasePylon.BP_BasePylon_C.ReceiveBeginPlay
struct ABP_BasePylon_C_ReceiveBeginPlay_Params
{
};

// Function BP_BasePylon.BP_BasePylon_C.ReceiveEndPlay
struct ABP_BasePylon_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BasePylon.BP_BasePylon_C.ExecuteUbergraph_BP_BasePylon
struct ABP_BasePylon_C_ExecuteUbergraph_BP_BasePylon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
