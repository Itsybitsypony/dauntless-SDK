#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_spear_can_perform_side_step_ec_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass spear_can_perform_side_step_ec.spear_can_perform_side_step_ec_C
// 0x0000 (0x0028 - 0x0028)
class Uspear_can_perform_side_step_ec_C : public UInputBufferTransitionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass spear_can_perform_side_step_ec.spear_can_perform_side_step_ec_C");
		return ptr;
	}


	bool CanTransition(class AArchonCharacter** Character, class AArchonWeapon** Weapon, struct FComboInputBuffer* ComboInputBuffer);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
