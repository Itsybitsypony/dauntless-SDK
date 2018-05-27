#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_prime_hammer_input_action_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass prime_hammer_input_action_bp.prime_hammer_input_action_bp_C
// 0x0004 (0x002C - 0x0028)
class Uprime_hammer_input_action_bp_C : public UInputAction
{
public:
	float                                              StaminaCost;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass prime_hammer_input_action_bp.prime_hammer_input_action_bp_C");
		return ptr;
	}


	void ExecuteAction(class AArchonCharacter** Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
