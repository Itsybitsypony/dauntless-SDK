#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dynamic_cinematic_component_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.DebugPrint
struct Udynamic_cinematic_component_bp_C_DebugPrint_Params
{
	class FString                                      String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.DeactivateCinematicOverlay
struct Udynamic_cinematic_component_bp_C_DeactivateCinematicOverlay_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ActivateCinematicOverlay
struct Udynamic_cinematic_component_bp_C_ActivateCinematicOverlay_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.GetClientPlaybackState
struct Udynamic_cinematic_component_bp_C_GetClientPlaybackState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.CalculateClientViewability
struct Udynamic_cinematic_component_bp_C_CalculateClientViewability_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_PreloadParameters
struct Udynamic_cinematic_component_bp_C_OnRep_PreloadParameters_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.HasComponentFinishedLoading
struct Udynamic_cinematic_component_bp_C_HasComponentFinishedLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AdjustCamera
struct Udynamic_cinematic_component_bp_C_AdjustCamera_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FindActorOfInterest
struct Udynamic_cinematic_component_bp_C_FindActorOfInterest_Params
{
	class AActor*                                      Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BestActor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                BestIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_ReplacementActors
struct Udynamic_cinematic_component_bp_C_OnRep_ReplacementActors_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FollowGround
struct Udynamic_cinematic_component_bp_C_FollowGround_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GroundFollowOffset;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Smoothing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutGroundFollowOffset;                                    // (Parm, OutParm, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ShouldFadeFromBlack
struct Udynamic_cinematic_component_bp_C_ShouldFadeFromBlack_Params
{
	class AActor*                                      Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceThreshold;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFade;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_Clients
struct Udynamic_cinematic_component_bp_C_OnRep_Clients_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_ServerPlaybackState
struct Udynamic_cinematic_component_bp_C_OnRep_ServerPlaybackState_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetActorAndMeshHidden
struct Udynamic_cinematic_component_bp_C_SetActorAndMeshHidden_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ReplaceActorAnimSequence
struct Udynamic_cinematic_component_bp_C_ReplaceActorAnimSequence_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SequenceActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           NewAnimSequence;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_2B8F0C1D48ADD10A9F747DAC0FE50811
struct Udynamic_cinematic_component_bp_C_OnLoaded_2B8F0C1D48ADD10A9F747DAC0FE50811_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_6016B1104CD3A5F0EAABEF976B3BF735
struct Udynamic_cinematic_component_bp_C_OnLoaded_6016B1104CD3A5F0EAABEF976B3BF735_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_4F47E7904D6F6E6C2AA1C5864FF6BE0C
struct Udynamic_cinematic_component_bp_C_OnLoaded_4F47E7904D6F6E6C2AA1C5864FF6BE0C_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_DF9F826043B6CD0EBED950801301E3A5
struct Udynamic_cinematic_component_bp_C_OnLoaded_DF9F826043B6CD0EBED950801301E3A5_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_EB517BEB4B2279E0CE318281E6E6C81A
struct Udynamic_cinematic_component_bp_C_OnLoaded_EB517BEB4B2279E0CE318281E6E6C81A_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetCinematicMaterials
struct Udynamic_cinematic_component_bp_C_SetCinematicMaterials_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PreloadOnServer
struct Udynamic_cinematic_component_bp_C_PreloadOnServer_Params
{
	struct Fdynamic_cinematic_component_preload_parameters Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.Play
struct Udynamic_cinematic_component_bp_C_Play_Params
{
	TArray<class AActor*>                              ObserverActors;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              ReplacementActors;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PlayOnClient
struct Udynamic_cinematic_component_bp_C_PlayOnClient_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.Reset
struct Udynamic_cinematic_component_bp_C_Reset_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnSequenceEnd
struct Udynamic_cinematic_component_bp_C_OnSequenceEnd_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FailsafeTimer
struct Udynamic_cinematic_component_bp_C_FailsafeTimer_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetClientCinematicState
struct Udynamic_cinematic_component_bp_C_SetClientCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.EstimatedClientComplete
struct Udynamic_cinematic_component_bp_C_EstimatedClientComplete_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteMulticast
struct Udynamic_cinematic_component_bp_C_AllClientsCompleteMulticast_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ReceiveTick
struct Udynamic_cinematic_component_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PostSequenceUpdate
struct Udynamic_cinematic_component_bp_C_PostSequenceUpdate_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PreloadOnClient
struct Udynamic_cinematic_component_bp_C_PreloadOnClient_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteOwnerOnly
struct Udynamic_cinematic_component_bp_C_AllClientsCompleteOwnerOnly_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteServerOnly
struct Udynamic_cinematic_component_bp_C_AllClientsCompleteServerOnly_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SkipCinematic
struct Udynamic_cinematic_component_bp_C_SkipCinematic_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsComplete
struct Udynamic_cinematic_component_bp_C_AllClientsComplete_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.BlendCameraOut
struct Udynamic_cinematic_component_bp_C_BlendCameraOut_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewViewTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.BindNewReplacementActors
struct Udynamic_cinematic_component_bp_C_BindNewReplacementActors_Params
{
	TArray<class UClass*>                              NewProxyActors;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              NewReplacementActors;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnCameraCut
struct Udynamic_cinematic_component_bp_C_OnCameraCut_Params
{
	class UCameraComponent*                            CameraComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ToggleShowSequenceTime
struct Udynamic_cinematic_component_bp_C_ToggleShowSequenceTime_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ExecuteUbergraph_dynamic_cinematic_component_bp
struct Udynamic_cinematic_component_bp_C_ExecuteUbergraph_dynamic_cinematic_component_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ServerStop__DelegateSignature
struct Udynamic_cinematic_component_bp_C_ServerStop__DelegateSignature_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ClientStop__DelegateSignature
struct Udynamic_cinematic_component_bp_C_ClientStop__DelegateSignature_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ServerStart__DelegateSignature
struct Udynamic_cinematic_component_bp_C_ServerStart__DelegateSignature_Params
{
};

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ClientStart__DelegateSignature
struct Udynamic_cinematic_component_bp_C_ClientStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
