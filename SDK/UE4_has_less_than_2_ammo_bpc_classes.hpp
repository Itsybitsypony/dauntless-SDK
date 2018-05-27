#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_has_less_than_2_ammo_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass has_less_than_2_ammo_bpc.has_less_than_2_ammo_bpc_C
// 0x0000 (0x0028 - 0x0028)
class Uhas_less_than_2_ammo_bpc_C : public UInputBufferTransitionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass has_less_than_2_ammo_bpc.has_less_than_2_ammo_bpc_C");
		return ptr;
	}


	bool CanTransition(class AArchonCharacter** Character, class AArchonWeapon** Weapon, struct FComboInputBuffer* ComboInputBuffer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
