#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_blendshape_anim_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ReceiveBeginPlay
struct Ucine_blendshape_anim_component_C_ReceiveBeginPlay_Params
{
};

// Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ReceiveTick
struct Ucine_blendshape_anim_component_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cine_blendshape_anim_component.cine_blendshape_anim_component_C.ExecuteUbergraph_cine_blendshape_anim_component
struct Ucine_blendshape_anim_component_C_ExecuteUbergraph_cine_blendshape_anim_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
