#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_primary_attack_key_not_held_ec_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass primary_attack_key_not_held_ec.primary_attack_key_not_held_ec_C
// 0x0000 (0x0028 - 0x0028)
class Uprimary_attack_key_not_held_ec_C : public UInputBufferTransitionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass primary_attack_key_not_held_ec.primary_attack_key_not_held_ec_C");
		return ptr;
	}


	bool CanTransition(class AArchonCharacter** Character, class AArchonWeapon** Weapon, struct FComboInputBuffer* ComboInputBuffer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
