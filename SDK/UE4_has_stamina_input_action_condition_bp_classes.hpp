#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_has_stamina_input_action_condition_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass has_stamina_input_action_condition_bp.has_stamina_input_action_condition_bp_C
// 0x0000 (0x0028 - 0x0028)
class Uhas_stamina_input_action_condition_bp_C : public UInputActionCondition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass has_stamina_input_action_condition_bp.has_stamina_input_action_condition_bp_C");
		return ptr;
	}


	bool CanExecuteAction(class AArchonCharacter** Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
