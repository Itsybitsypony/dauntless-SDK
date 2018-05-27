#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_status_effect_frozen_debuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass status_effect_frozen_debuff.status_effect_frozen_debuff_C
// 0x002C (0x0708 - 0x06DC)
class Astatus_effect_frozen_debuff_C : public Abase_debuff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	float                                              InputDuration;                                            // 0x06E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	class Aplayer_frozen_iceblock_bp_C*                SpawnedIceBlock;                                          // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class Ustatus_effect_base_ab_C*                    InputAbility;                                             // 0x06F8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                PlayerFrozenAnim;                                         // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass status_effect_frozen_debuff.status_effect_frozen_debuff_C");
		return ptr;
	}


	void StopFrozenAnimation();
	void UserConstructionScript();
	void MulticastOnAdded();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnRemoved();
	void ReceiveDestroyed();
	void OnGameplayEventTriggered(struct FGameplayEventData* Payload);
	void OnDamageReceived(float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo);
	void ExecuteUbergraph_status_effect_frozen_debuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
