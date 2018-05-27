#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_vfx_and_sound_bpfl_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.SpawnGroundDebris
struct Uvfx_and_sound_bpfl_C_SpawnGroundDebris_Params
{
	struct FVector                                     StaticLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                DebrisIntensity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.GetDebrisData
struct Uvfx_and_sound_bpfl_C_GetDebrisData_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fdebris_vfx_struct                          FoundVFX;                                                 // (Parm, OutParm)
	bool                                               HasFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurfaceName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.ExtractSwitchFromTags
struct Uvfx_and_sound_bpfl_C_ExtractSwitchFromTags_Params
{
	TArray<struct FGameplayTag>                        Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGameplayTagContainer                       Tag_Container;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.GetWeaponHitLocationAndDirection
struct Uvfx_and_sound_bpfl_C_GetWeaponHitLocationAndDirection_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AArchonCharacter*                            Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function vfx_and_sound_bpfl.vfx_and_sound_bpfl_C.Debris VFX and Sound Trigger
struct Uvfx_and_sound_bpfl_C_Debris_VFX_and_Sound_Trigger_Params
{
	class USkeletalMeshComponent*                      Skeletal_Mesh;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity_Vector;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Is_High;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
