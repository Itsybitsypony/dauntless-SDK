#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_not_full_ammo_input_action_condition_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass not_full_ammo_input_action_condition_bp.not_full_ammo_input_action_condition_bp_C
// 0x0000 (0x0028 - 0x0028)
class Unot_full_ammo_input_action_condition_bp_C : public UInputActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass not_full_ammo_input_action_condition_bp.not_full_ammo_input_action_condition_bp_C");
		return ptr;
	}


	bool CanExecuteAction(class AArchonCharacter** Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
