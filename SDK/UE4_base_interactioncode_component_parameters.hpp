#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interactioncode_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_interactioncode_component.base_interactioncode_component_C.BlueprintCanUserStartInteraction
struct Ubase_interactioncode_component_C_BlueprintCanUserStartInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function base_interactioncode_component.base_interactioncode_component_C.ReceiveBeginPlay
struct Ubase_interactioncode_component_C_ReceiveBeginPlay_Params
{
};

// Function base_interactioncode_component.base_interactioncode_component_C.UserStartedInteraction
struct Ubase_interactioncode_component_C_UserStartedInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component.base_interactioncode_component_C.UserCanceledInteraction
struct Ubase_interactioncode_component_C_UserCanceledInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component.base_interactioncode_component_C.UserCompletedInteraction
struct Ubase_interactioncode_component_C_UserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component.base_interactioncode_component_C.HighlightInteraction
struct Ubase_interactioncode_component_C_HighlightInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component.base_interactioncode_component_C.UnhighlightInteraction
struct Ubase_interactioncode_component_C_UnhighlightInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interactioncode_component.base_interactioncode_component_C.ExecuteUbergraph_base_interactioncode_component
struct Ubase_interactioncode_component_C_ExecuteUbergraph_base_interactioncode_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
