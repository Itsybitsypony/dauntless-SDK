#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interaction_callout_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function interaction_callout_interface.interaction_callout_interface_C.CancelFill
struct Uinteraction_callout_interface_C_CancelFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interaction_callout_interface.interaction_callout_interface_C.StartFill
struct Uinteraction_callout_interface_C_StartFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function interaction_callout_interface.interaction_callout_interface_C.UnhighlightInteraction
struct Uinteraction_callout_interface_C_UnhighlightInteraction_Params
{
};

// Function interaction_callout_interface.interaction_callout_interface_C.HighlightInteraction
struct Uinteraction_callout_interface_C_HighlightInteraction_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
