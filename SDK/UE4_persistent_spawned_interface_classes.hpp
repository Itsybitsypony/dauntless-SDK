#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_persistent_spawned_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass persistent_spawned_interface.persistent_spawned_interface_C
// 0x0000 (0x0028 - 0x0028)
class Upersistent_spawned_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass persistent_spawned_interface.persistent_spawned_interface_C");
		return ptr;
	}


	void AuthInitializeSpawnedActor(const struct FGuid& DamageGUID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
