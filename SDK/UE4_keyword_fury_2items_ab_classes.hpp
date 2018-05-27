#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_fury_2items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_fury_2items_ab.keyword_fury_2items_ab_C
// 0x0010 (0x05E0 - 0x05D0)
class Ukeyword_fury_2items_ab_C : public Ukeyword_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	float                                              Amount;                                                   // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_fury_2items_ab.keyword_fury_2items_ab_C");
		return ptr;
	}


	void EventReceived_CE5E035A46E1AAD8716E50AF248E4DA2(const struct FGameplayEventData& Payload);
	void EventReceived_CDFEB8E44C4E5A117BE199AF11EBF90E(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ApplyOnDamageGivenEffect();
	void ExecuteUbergraph_keyword_fury_2items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
