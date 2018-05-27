#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_sturdy_2items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C
// 0x0010 (0x05E0 - 0x05D0)
class Ukeyword_sturdy_2items_ab_C : public Ukeyword_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	float                                              StaggerCooldown;                                          // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimeStaggered;                                        // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C");
		return ptr;
	}


	void EventReceived_1C54E10D4FE4249B2ED174A236E6FA26(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ApplyEffects();
	void ResistStaggerFX();
	void ExecuteUbergraph_keyword_sturdy_2items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
