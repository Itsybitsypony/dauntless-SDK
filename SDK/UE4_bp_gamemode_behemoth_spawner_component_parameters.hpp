#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_gamemode_behemoth_spawner_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.TrySetBehemothPowerOverride
struct Ubp_gamemode_behemoth_spawner_component_C_TrySetBehemothPowerOverride_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      BehemothName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FHunt_BehemothInfo                          HuntBehemothInfo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OverrideFound;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.Initialize
struct Ubp_gamemode_behemoth_spawner_component_C_Initialize_Params
{
};

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.AddOffsetToLocation
struct Ubp_gamemode_behemoth_spawner_component_C_AddOffsetToLocation_Params
{
	struct FVector                                     OriginalLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemothAtLocation
struct Ubp_gamemode_behemoth_spawner_component_C_SpawnBehemothAtLocation_Params
{
	class UClass*                                      MonsterClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AArchonBehemoth*                             Behemoth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SpawnTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SelectSpawnLocation
struct Ubp_gamemode_behemoth_spawner_component_C_SelectSpawnLocation_Params
{
	class ABP_PatrolCenterPoint_C*                     SelectedPatrolPoint;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class Abehemoth_cinematic_intro_marker_C*          SelectedCinematicMarker;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemothAtPatrolPoint
struct Ubp_gamemode_behemoth_spawner_component_C_SpawnBehemothAtPatrolPoint_Params
{
	class UClass*                                      MonsterClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_PatrolCenterPoint_C*                     PatrolPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Abehemoth_cinematic_intro_marker_C*          CinematicMarker;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBehemoth*                             Behemoth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.ShouldShowBehemothIntros
struct Ubp_gamemode_behemoth_spawner_component_C_ShouldShowBehemothIntros_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.SpawnBehemoth
struct Ubp_gamemode_behemoth_spawner_component_C_SpawnBehemoth_Params
{
	class UClass*                                      SelectedMonsterClass;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IntroCinematicsEnabled;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C.ExecuteUbergraph_bp_gamemode_behemoth_spawner_component
struct Ubp_gamemode_behemoth_spawner_component_C_ExecuteUbergraph_bp_gamemode_behemoth_spawner_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
