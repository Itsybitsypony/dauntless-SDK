#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_Trail_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetFirstTrailThatMeetsRequirements
struct AGC_GameplayCue_Combat_Trail_C_GetFirstTrailThatMeetsRequirements_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct Ftag_to_combat_trails_struct>        Effects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Ftag_to_combat_trails_struct                FirstMatch;                                               // (Parm, OutParm)
	bool                                               FoundTrail;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetMeshAndSocket
struct AGC_GameplayCue_Combat_Trail_C_GetMeshAndSocket_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TopSocket;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BottomSocket;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftSocket;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightSocket;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       MiddleSocket;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.GetTrailEffectsForTags
struct AGC_GameplayCue_Combat_Trail_C_GetTrailEffectsForTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FStruct_TagToTrailEffects>           Effects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FStruct_TagToTrailEffects>           Particle_Systems;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.UserConstructionScript
struct AGC_GameplayCue_Combat_Trail_C_UserConstructionScript_Params
{
};

// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.K2_HandleGameplayCue
struct AGC_GameplayCue_Combat_Trail_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C.ExecuteUbergraph_GC_GameplayCue_Combat_Trail
struct AGC_GameplayCue_Combat_Trail_C_ExecuteUbergraph_GC_GameplayCue_Combat_Trail_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
