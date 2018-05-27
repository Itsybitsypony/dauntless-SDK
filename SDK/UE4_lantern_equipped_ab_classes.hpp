#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_equipped_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lantern_equipped_ab.lantern_equipped_ab_C
// 0x0008 (0x0598 - 0x0590)
class Ulantern_equipped_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lantern_equipped_ab.lantern_equipped_ab_C");
		return ptr;
	}


	void CanGainLanternChargeFromActor(class AActor* HitActor, bool* CanGainLanternCharge);
	void K2_ActivateAbility();
	void OnPostMitigationHitWithWeapon_Event_2(class AActor* DamagedActor, const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags);
	void OnPostMitigationDealtAnyDamage_Event_1(const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags, class AActor* DamagedActor);
	void ExecuteUbergraph_lantern_equipped_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
