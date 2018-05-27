#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_weapon_owner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_weapon_owner.BPI_weapon_owner_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_weapon_owner_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_weapon_owner.BPI_weapon_owner_C");
		return ptr;
	}


	void GetOwnedWeapon(class AArchonWeapon** Weapon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
