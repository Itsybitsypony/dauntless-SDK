#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_persistent_spawn_owner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bpi_persistent_spawn_owner.bpi_persistent_spawn_owner_C
// 0x0000 (0x0028 - 0x0028)
class Ubpi_persistent_spawn_owner_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bpi_persistent_spawn_owner.bpi_persistent_spawn_owner_C");
		return ptr;
	}


	void OverridePersistentSpawnPosition(const struct FVector& SpawnPos, const struct Fpersistent_spawn_params& PersistentSpawnRequest, bool* PositionWasOverridden, struct FVector* NewSpawnPos);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
