#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternactive_base_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lanternactive_base_ab.lanternactive_base_ab_C
// 0x0014 (0x05A4 - 0x0590)
class Ulanternactive_base_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      BuffToApplyOnDischarge;                                   // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lanternactive_base_ab.lanternactive_base_ab_C");
		return ptr;
	}


	void CanUseInMontage(class UAnimMontage* ActiveMontage, bool* CanUse);
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void OnFinish_C21894154EC4604DD4EC4081A5A5C8BB();
	void StartDischarge(float DischargeDuration);
	void ExecuteUbergraph_lanternactive_base_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
