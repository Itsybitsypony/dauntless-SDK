#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IslandPlayerIntroCinematic_Trigger_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OutputDebugInformation
struct AIslandPlayerIntroCinematic_Trigger_BP_C_OutputDebugInformation_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.HasFinishedLoading
struct AIslandPlayerIntroCinematic_Trigger_BP_C_HasFinishedLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnRep_IntroAnimSequenceRefs
struct AIslandPlayerIntroCinematic_Trigger_BP_C_OnRep_IntroAnimSequenceRefs_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.GetEquippedIntroAnimSequenceAsset
struct AIslandPlayerIntroCinematic_Trigger_BP_C_GetEquippedIntroAnimSequenceAsset_Params
{
	class AActor*                                      Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UAnimSequenceBase>                 AnimSequenceAsset;                                        // (Parm, OutParm)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.GetDefaultActorAnimSequence
struct AIslandPlayerIntroCinematic_Trigger_BP_C_GetDefaultActorAnimSequence_Params
{
	class UAnimSequenceBase*                           ActorAnimSequence;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetActorAnimSequence
struct AIslandPlayerIntroCinematic_Trigger_BP_C_SetActorAnimSequence_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetActorAndMeshHidden
struct AIslandPlayerIntroCinematic_Trigger_BP_C_SetActorAndMeshHidden_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnRep_SlayerActors
struct AIslandPlayerIntroCinematic_Trigger_BP_C_OnRep_SlayerActors_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.UserConstructionScript
struct AIslandPlayerIntroCinematic_Trigger_BP_C_UserConstructionScript_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnLoaded_8347F64641BB2533ABF4DD96DEEC358E
struct AIslandPlayerIntroCinematic_Trigger_BP_C_OnLoaded_8347F64641BB2533ABF4DD96DEEC358E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.BlendCameraOut
struct AIslandPlayerIntroCinematic_Trigger_BP_C_BlendCameraOut_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ToggleShowSequenceTime
struct AIslandPlayerIntroCinematic_Trigger_BP_C_ToggleShowSequenceTime_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SwapCineMatsOut
struct AIslandPlayerIntroCinematic_Trigger_BP_C_SwapCineMatsOut_Params
{
	class AArchonCharacter*                            Player_Char;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetClientCinematicState
struct AIslandPlayerIntroCinematic_Trigger_BP_C_SetClientCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetCinematicMaterials
struct AIslandPlayerIntroCinematic_Trigger_BP_C_SetCinematicMaterials_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ReceiveBeginPlay
struct AIslandPlayerIntroCinematic_Trigger_BP_C_ReceiveBeginPlay_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.Reload
struct AIslandPlayerIntroCinematic_Trigger_BP_C_Reload_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.PlayAKEvents
struct AIslandPlayerIntroCinematic_Trigger_BP_C_PlayAKEvents_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.Play
struct AIslandPlayerIntroCinematic_Trigger_BP_C_Play_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ReceiveGameplayStart
struct AIslandPlayerIntroCinematic_Trigger_BP_C_ReceiveGameplayStart_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.RetrieveIntroAnimSequencesFromLoadout
struct AIslandPlayerIntroCinematic_Trigger_BP_C_RetrieveIntroAnimSequencesFromLoadout_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.LoadIntroAnimSequences
struct AIslandPlayerIntroCinematic_Trigger_BP_C_LoadIntroAnimSequences_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SkipCinematic
struct AIslandPlayerIntroCinematic_Trigger_BP_C_SkipCinematic_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnClientPlaybackStopped
struct AIslandPlayerIntroCinematic_Trigger_BP_C_OnClientPlaybackStopped_Params
{
};

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ExecuteUbergraph_IslandPlayerIntroCinematic_Trigger_BP
struct AIslandPlayerIntroCinematic_Trigger_BP_C_ExecuteUbergraph_IslandPlayerIntroCinematic_Trigger_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
