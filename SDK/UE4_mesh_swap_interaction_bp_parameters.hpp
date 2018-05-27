#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mesh_swap_interaction_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.GetMarkerComponent
struct Amesh_swap_interaction_bp_C_GetMarkerComponent_Params
{
	class UMarkerComponent*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.SetInteractionAvailability
struct Amesh_swap_interaction_bp_C_SetInteractionAvailability_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.CanUserStartInteraction 
struct Amesh_swap_interaction_bp_C_CanUserStartInteraction__Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.SwapMesh
struct Amesh_swap_interaction_bp_C_SwapMesh_Params
{
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnRep_MeshSwappedToUsedState
struct Amesh_swap_interaction_bp_C_OnRep_MeshSwappedToUsedState_Params
{
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnSuccessfulInteraction - Server
struct Amesh_swap_interaction_bp_C_OnSuccessfulInteraction___Server_Params
{
	class APawn*                                       Successful_Interactor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnSuccessfulInteraction - Client
struct Amesh_swap_interaction_bp_C_OnSuccessfulInteraction___Client_Params
{
	class APawn*                                       Successful_Interactor;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.UserConstructionScript
struct Amesh_swap_interaction_bp_C_UserConstructionScript_Params
{
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.Timeline__FinishedFunc
struct Amesh_swap_interaction_bp_C_Timeline__FinishedFunc_Params
{
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.Timeline__UpdateFunc
struct Amesh_swap_interaction_bp_C_Timeline__UpdateFunc_Params
{
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ReceiveBeginPlay
struct Amesh_swap_interaction_bp_C_ReceiveBeginPlay_Params
{
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserStartedInteraction
struct Amesh_swap_interaction_bp_C_OnUserStartedInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserCanceledInteraction
struct Amesh_swap_interaction_bp_C_OnUserCanceledInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnUserCompletedInteraction
struct Amesh_swap_interaction_bp_C_OnUserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.OnMeshSwap
struct Amesh_swap_interaction_bp_C_OnMeshSwap_Params
{
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ClientOnUserRemainingUsesZero
struct Amesh_swap_interaction_bp_C_ClientOnUserRemainingUsesZero_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function mesh_swap_interaction_bp.mesh_swap_interaction_bp_C.ExecuteUbergraph_mesh_swap_interaction_bp
struct Amesh_swap_interaction_bp_C_ExecuteUbergraph_mesh_swap_interaction_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
