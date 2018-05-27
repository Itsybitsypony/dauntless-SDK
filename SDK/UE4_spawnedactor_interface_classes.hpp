#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spawnedactor_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass spawnedactor_interface.spawnedactor_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uspawnedactor_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass spawnedactor_interface.spawnedactor_interface_C");
		return ptr;
	}


	void SpawnActor_Destroy();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
