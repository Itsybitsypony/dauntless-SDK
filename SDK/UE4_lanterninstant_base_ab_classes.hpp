#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanterninstant_base_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lanterninstant_base_ab.lanterninstant_base_ab_C
// 0x0018 (0x05A8 - 0x0590)
class Ulanterninstant_base_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      BuffToApplyOnDischarge;                                   // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReplicationDelay;                                         // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DischargeDuration;                                        // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lanterninstant_base_ab.lanterninstant_base_ab_C");
		return ptr;
	}


	void CallForDischarge(class AArchonLantern* LanternObject);
	void CanUseInMontage(class UAnimMontage* ActiveMontage, bool* CanUse);
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void OnFinish_A45B31B54C10BA2832BD18960165C25E();
	void StartDischarge(float DischargeDuration);
	void K2_ActivateAbility();
	void ExecuteUbergraph_lanterninstant_base_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
