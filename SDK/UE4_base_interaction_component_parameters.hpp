#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interaction_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_interaction_component.base_interaction_component_C.SetSiblingComponents
struct Ubase_interaction_component_C_SetSiblingComponents_Params
{
	class UWidgetComponent*                            Callout;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Range;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Highlightable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.Component_CanUse?
struct Ubase_interaction_component_C_Component_CanUse__Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Usable_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.OnLoaded_09AE4DDF49C7EC6C60963AB7703F2FF9
struct Ubase_interaction_component_C_OnLoaded_09AE4DDF49C7EC6C60963AB7703F2FF9_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.ReceiveTick
struct Ubase_interaction_component_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.ClientStartFill
struct Ubase_interaction_component_C_ClientStartFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.ClientCancelFill
struct Ubase_interaction_component_C_ClientCancelFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ChainedSuccess;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.InteractionSuccess
struct Ubase_interaction_component_C_InteractionSuccess_Params
{
	class APawn*                                       SucceedingPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.Comp_highlight_interaction
struct Ubase_interaction_component_C_Comp_highlight_interaction_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.Comp_unhighlight_interaction
struct Ubase_interaction_component_C_Comp_unhighlight_interaction_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.Comp_StartUse
struct Ubase_interaction_component_C_Comp_StartUse_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.Comp_StopUse
struct Ubase_interaction_component_C_Comp_StopUse_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.OnInteractionBeingOverlap
struct Ubase_interaction_component_C_OnInteractionBeingOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.OnInteractionEndOverlap
struct Ubase_interaction_component_C_OnInteractionEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.BindOverlapEvents
struct Ubase_interaction_component_C_BindOverlapEvents_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_interaction_component.base_interaction_component_C.ForceClearAllTimers
struct Ubase_interaction_component_C_ForceClearAllTimers_Params
{
};

// Function base_interaction_component.base_interaction_component_C.ReceiveBeginPlay
struct Ubase_interaction_component_C_ReceiveBeginPlay_Params
{
};

// Function base_interaction_component.base_interaction_component_C.ExecuteUbergraph_base_interaction_component
struct Ubase_interaction_component_C_ExecuteUbergraph_base_interaction_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
