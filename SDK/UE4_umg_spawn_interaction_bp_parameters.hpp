#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_umg_spawn_interaction_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.GetMarkerComponent
struct Aumg_spawn_interaction_bp_C_GetMarkerComponent_Params
{
	class UMarkerComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnRep_LocallyAvailable
struct Aumg_spawn_interaction_bp_C_OnRep_LocallyAvailable_Params
{
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ChangeLocalAvailabilityOfActor
struct Aumg_spawn_interaction_bp_C_ChangeLocalAvailabilityOfActor_Params
{
	bool                                               Available_;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.CanUserStartInteraction 
struct Aumg_spawn_interaction_bp_C_CanUserStartInteraction__Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.CreateWidgetAndAddToViewport
struct Aumg_spawn_interaction_bp_C_CreateWidgetAndAddToViewport_Params
{
	class AController*                                 PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.UserConstructionScript
struct Aumg_spawn_interaction_bp_C_UserConstructionScript_Params
{
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ReceiveBeginPlay
struct Aumg_spawn_interaction_bp_C_ReceiveBeginPlay_Params
{
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnUserCompletedInteraction
struct Aumg_spawn_interaction_bp_C_OnUserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ExecutePayload
struct Aumg_spawn_interaction_bp_C_ExecutePayload_Params
{
	class APawn*                                       SuccessfulInteractor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.ExecuteUbergraph_umg_spawn_interaction_bp
struct Aumg_spawn_interaction_bp_C_ExecuteUbergraph_umg_spawn_interaction_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function umg_spawn_interaction_bp.umg_spawn_interaction_bp_C.OnWidgetSpawned__DelegateSignature
struct Aumg_spawn_interaction_bp_C_OnWidgetSpawned__DelegateSignature_Params
{
	class UUserWidget*                                 Spawned_Widget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
