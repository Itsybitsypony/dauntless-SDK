#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmosphere_spawner_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRemoveChildActors
struct Aatmosphere_spawner_bp_C_ServerRemoveChildActors_Params
{
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnRep_RequestedAtmosphereIndex
struct Aatmosphere_spawner_bp_C_OnRep_RequestedAtmosphereIndex_Params
{
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnRep_RequestedAtmosphereClass
struct Aatmosphere_spawner_bp_C_OnRep_RequestedAtmosphereClass_Params
{
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.UserConstructionScript
struct Aatmosphere_spawner_bp_C_UserConstructionScript_Params
{
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnLoaded_821AFFF2440532FF365760A1104153C3
struct Aatmosphere_spawner_bp_C_OnLoaded_821AFFF2440532FF365760A1104153C3_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ClientSpawnAtmosphereByIndex
struct Aatmosphere_spawner_bp_C_ClientSpawnAtmosphereByIndex_Params
{
	int                                                DesiredAtmosphereIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ClientSpawnAtmosphereByClass
struct Aatmosphere_spawner_bp_C_ClientSpawnAtmosphereByClass_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRequestAtmosphereByIndex
struct Aatmosphere_spawner_bp_C_ServerRequestAtmosphereByIndex_Params
{
	int                                                DesiredAtmosphereIndex;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ServerRequestAtmosphereByClass
struct Aatmosphere_spawner_bp_C_ServerRequestAtmosphereByClass_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.CycleAtmosphere
struct Aatmosphere_spawner_bp_C_CycleAtmosphere_Params
{
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ReceiveBeginPlay
struct Aatmosphere_spawner_bp_C_ReceiveBeginPlay_Params
{
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.ExecuteUbergraph_atmosphere_spawner_bp
struct Aatmosphere_spawner_bp_C_ExecuteUbergraph_atmosphere_spawner_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function atmosphere_spawner_bp.atmosphere_spawner_bp_C.OnAtmosphereSpawned__DelegateSignature
struct Aatmosphere_spawner_bp_C_OnAtmosphereSpawned__DelegateSignature_Params
{
	class AAtmosphereBase*                             SpawnedAtmosphere;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
