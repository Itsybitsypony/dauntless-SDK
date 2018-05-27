#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_animbp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cine_animbp.cine_animbp_C.BlueprintUpdateAnimation
struct Ucine_animbp_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cine_animbp.cine_animbp_C.AnimNotify_force_physics_reset
struct Ucine_animbp_C_AnimNotify_force_physics_reset_Params
{
};

// Function cine_animbp.cine_animbp_C.ExecuteUbergraph_cine_animbp
struct Ucine_animbp_C_ExecuteUbergraph_cine_animbp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
