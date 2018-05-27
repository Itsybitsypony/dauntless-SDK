#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_fortress_2items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_fortress_2items_ab.keyword_fortress_2items_ab_C
// 0x0028 (0x05F8 - 0x05D0)
class Ukeyword_fortress_2items_ab_C : public Ukeyword_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	float                                              ShieldStrength;                                           // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeDamageReceived;                                   // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldDelay;                                              // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	struct FGameplayTag                                EffectTag;                                                // 0x05E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExtendedShieldStrengthBonus;                              // 0x05F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtendedShieldDelay;                                      // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_fortress_2items_ab.keyword_fortress_2items_ab_C");
		return ptr;
	}


	void DamageReceived(float Damage);
	void SetShieldStrength(float NewShield);
	void EventReceived_42FC45474A30EC94BDC83CAAEB0DD5D1(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_keyword_fortress_2items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
