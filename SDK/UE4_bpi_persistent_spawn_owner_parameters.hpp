#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_persistent_spawn_owner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpi_persistent_spawn_owner.bpi_persistent_spawn_owner_C.OverridePersistentSpawnPosition
struct Ubpi_persistent_spawn_owner_C_OverridePersistentSpawnPosition_Params
{
	struct FVector                                     SpawnPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct Fpersistent_spawn_params                    PersistentSpawnRequest;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PositionWasOverridden;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewSpawnPos;                                              // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
