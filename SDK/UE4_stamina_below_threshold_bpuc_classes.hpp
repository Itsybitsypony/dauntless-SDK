#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_stamina_below_threshold_bpuc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass stamina_below_threshold_bpuc.stamina_below_threshold_bpuc_C
// 0x0004 (0x003C - 0x0038)
class Ustamina_below_threshold_bpuc_C : public UUnlockCondition_Blueprint
{
public:
	float                                              StaminaThreshold;                                         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass stamina_below_threshold_bpuc.stamina_below_threshold_bpuc_C");
		return ptr;
	}


	bool OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
