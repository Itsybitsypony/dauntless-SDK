#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gameplay_targetting_data_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function gameplay_targetting_data.gameplay_targetting_data_C.SetupFromEQSInstance
struct Ugameplay_targetting_data_C_SetupFromEQSInstance_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           EQSQueryInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gameplay_targetting_data.gameplay_targetting_data_C.SetupPositionData
struct Ugameplay_targetting_data_C_SetupPositionData_Params
{
	TArray<struct FVector>                             Positions;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function gameplay_targetting_data.gameplay_targetting_data_C.SetupActorData
struct Ugameplay_targetting_data_C_SetupActorData_Params
{
	TArray<class AActor*>                              Actors;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function gameplay_targetting_data.gameplay_targetting_data_C.GetLocations
struct Ugameplay_targetting_data_C_GetLocations_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function gameplay_targetting_data.gameplay_targetting_data_C.GetActors
struct Ugameplay_targetting_data_C_GetActors_Params
{
	TArray<class AActor*>                              ActorData;                                                // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
