#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_condition_timer_bpuc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass condition_timer_bpuc.condition_timer_bpuc_C
// 0x0004 (0x004C - 0x0048)
class Ucondition_timer_bpuc_C : public UUnlockCondition_ChildConditionBase
{
public:
	float                                              TimeThreshold;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass condition_timer_bpuc.condition_timer_bpuc_C");
		return ptr;
	}


	void GetConditionID(class FString* ID);
	bool AreChildConditionsTrue(class AArchonPlayerController* PlayerController, class UQuest* OwningQuest);
	bool OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
