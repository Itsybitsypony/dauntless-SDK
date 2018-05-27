#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_look_at_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function look_at_component.look_at_component_C.ClearLookAtTarget
struct Ulook_at_component_C_ClearLookAtTarget_Params
{
};

// Function look_at_component.look_at_component_C.GetLookAtAlpha
struct Ulook_at_component_C_GetLookAtAlpha_Params
{
	float                                              LookAtAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function look_at_component.look_at_component_C.Disable
struct Ulook_at_component_C_Disable_Params
{
};

// Function look_at_component.look_at_component_C.Enable
struct Ulook_at_component_C_Enable_Params
{
};

// Function look_at_component.look_at_component_C.GetLookAtTarget
struct Ulook_at_component_C_GetLookAtTarget_Params
{
	struct FVector                                     LookAtTarget;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function look_at_component.look_at_component_C.SetLookAtTarget
struct Ulook_at_component_C_SetLookAtTarget_Params
{
	struct FVector                                     LookAtTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function look_at_component.look_at_component_C.ReceiveTick
struct Ulook_at_component_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function look_at_component.look_at_component_C.ExecuteUbergraph_look_at_component
struct Ulook_at_component_C_ExecuteUbergraph_look_at_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
