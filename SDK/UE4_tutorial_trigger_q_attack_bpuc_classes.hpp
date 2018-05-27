#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_tutorial_trigger_q_attack_bpuc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass tutorial_trigger_q_attack_bpuc.tutorial_trigger_q_attack_bpuc_C
// 0x0000 (0x0038 - 0x0038)
class Ututorial_trigger_q_attack_bpuc_C : public UUnlockCondition_Blueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass tutorial_trigger_q_attack_bpuc.tutorial_trigger_q_attack_bpuc_C");
		return ptr;
	}


	bool OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
