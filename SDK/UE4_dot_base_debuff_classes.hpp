#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dot_base_debuff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass dot_base_debuff.dot_base_debuff_C
// 0x0094 (0x0770 - 0x06DC)
class Adot_base_debuff_C : public Abase_debuff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	float                                              TimeRemaining;                                            // 0x06E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06EC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    VFX_1;                                                    // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MinVFXSize;                                               // 0x06F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MaxVFXSize;                                               // 0x0704(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEventBase*                           AKStopEvent;                                              // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEventBase*                           AKStartEvent;                                             // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DotTimer;                                                 // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaseDamageAmount;                                         // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicalDamageAmount;                                     // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlameDamageAmount;                                        // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrostDamageAmount;                                        // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShockDamageAmount;                                        // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UmbralDamageAmount;                                       // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadiantDamageAmount;                                      // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RawElementalDamageAmount;                                 // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class UParticleSystem*                             SpawnedVFX;                                               // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveGameplayEffect;                                     // 0x0750(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AppliedGameplayEffect;                                    // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       VFXAttachPoint_1;                                         // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Ufloating_combat_text_bpc_C*                 OwnerCombatTextComponent;                                 // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass dot_base_debuff.dot_base_debuff_C");
		return ptr;
	}


	void UpdateEffectTime(float Duration);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void OnAdded();
	void AuthDoDamage();
	void MulticastOnAdded();
	void MulticastCombatText(float DamageAmount);
	void ExecuteUbergraph_dot_base_debuff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
