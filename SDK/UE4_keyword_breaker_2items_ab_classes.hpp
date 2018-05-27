#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_breaker_2items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_breaker_2items_ab.keyword_breaker_2items_ab_C
// 0x0014 (0x05E4 - 0x05D0)
class Ukeyword_breaker_2items_ab_C : public Ukeyword_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	float                                              DamageMultiplier;                                         // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DestroyedDamageBoost;                                     // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DestroyedDamageBoostDuration;                             // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_breaker_2items_ab.keyword_breaker_2items_ab_C");
		return ptr;
	}


	void EventReceived_F709F3584D545307B975EE81F4F0B21F(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_keyword_breaker_2items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
