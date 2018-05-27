#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dot_frost_damage_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dot_frost_damage_ab.dot_frost_damage_ab_C
// 0x00B1 (0x0641 - 0x0590)
class Udot_frost_damage_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	struct FName                                       CurrentParentBone;                                        // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMonsterPartComponent*                       MonsterPart;                                              // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrostDecayValue;                                          // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentFrostValue;                                        // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeTheshold;                                           // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageWhileFrozen;                                        // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDamageTableData                            DamageTable;                                              // 0x05B8(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       DamageKey;                                                // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeDuration;                                           // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeDamageThreshold;                                    // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeThresholdIncreaseScalePerFreeze;                    // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	TArray<float>                                      FreeseThresholdScalePerFrostPlayer;                       // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FreezeThesholdScaledByFrostPlayerCount;                   // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dot_frost_damage_ab.dot_frost_damage_ab_C");
		return ptr;
	}


	void IsFreezeUser(class AArchonCharacter* Player, bool* IsFreezeUser);
	void ScaleFreezeThresholdByFrostWeaponUsers();
	void DisableOtherParts();
	void ApplyEffect(class AActor* TargetActor, const struct FGameplayEffectContextHandle& EffectContectHandle);
	void K2_ActivateAbility();
	void ExecuteUbergraph_dot_frost_damage_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
