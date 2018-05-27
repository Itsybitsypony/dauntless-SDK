#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_HammerHas2Ammo_Condition_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HammerHas2Ammo_Condition_BP.HammerHas2Ammo_Condition_BP_C
// 0x0000 (0x0028 - 0x0028)
class UHammerHas2Ammo_Condition_BP_C : public UInputBufferTransitionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HammerHas2Ammo_Condition_BP.HammerHas2Ammo_Condition_BP_C");
		return ptr;
	}


	bool CanTransition(class AArchonCharacter** Character, class AArchonWeapon** Weapon, struct FComboInputBuffer* ComboInputBuffer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
