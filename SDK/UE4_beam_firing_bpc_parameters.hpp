#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_beam_firing_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function beam_firing_bpc.beam_firing_bpc_C.AuthTryStopBeamByGUID
struct Ubeam_firing_bpc_C_AuthTryStopBeamByGUID_Params
{
	struct FGuid                                       BeamGUID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.INTERNAL_RemoveBeamByRef
struct Ubeam_firing_bpc_C_INTERNAL_RemoveBeamByRef_Params
{
	class AActor*                                      BeamRef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.AuthTryStopBeamByUniqueName
struct Ubeam_firing_bpc_C_AuthTryStopBeamByUniqueName_Params
{
	struct FName                                       UniqueName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.OnRep_ActiveServerBeamRequests
struct Ubeam_firing_bpc_C_OnRep_ActiveServerBeamRequests_Params
{
};

// Function beam_firing_bpc.beam_firing_bpc_C.ValidateBeamRequest
struct Ubeam_firing_bpc_C_ValidateBeamRequest_Params
{
	struct Fbeam_request                               BeamRequest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.AuthRequestBeam
struct Ubeam_firing_bpc_C_AuthRequestBeam_Params
{
	struct Fbeam_request                               BeamRequest;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class Abase_beam_bp_C*                             BeamRef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       BeamGUID;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.ReceiveTick
struct Ubeam_firing_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.RemoveTheBeamIndex
struct Ubeam_firing_bpc_C_RemoveTheBeamIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.OnABeamDestroyed
struct Ubeam_firing_bpc_C_OnABeamDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.BindDestroyEvent
struct Ubeam_firing_bpc_C_BindDestroyEvent_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function beam_firing_bpc.beam_firing_bpc_C.ExecuteUbergraph_beam_firing_bpc
struct Ubeam_firing_bpc_C_ExecuteUbergraph_beam_firing_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
