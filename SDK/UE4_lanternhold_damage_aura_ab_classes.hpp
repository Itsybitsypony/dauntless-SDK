#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_damage_aura_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C
// 0x00BC (0x066C - 0x05B0)
class Ulanternhold_damage_aura_ab_C : public Ulanternhold_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (Transient, DuplicateTransient)
	float                                              Range;                                                    // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ElapsedDuration;                                          // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovespeedMagnitude;                                       // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05C4(0x0004) MISSED OFFSET
	TMap<class AArchonCharacter*, struct FActiveGameplayEffectHandle> CharsAndEffects;                                          // 0x05C8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class AArchonCharacter*, struct FActiveGameplayEffectHandle> CharsAndEffectsMovement;                                  // 0x0618(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              AttackSpeedMagnitude;                                     // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lanternhold_damage_aura_ab.lanternhold_damage_aura_ab_C");
		return ptr;
	}


	void RemoveBuffFromPlayer(class AArchonCharacter* Target);
	void BuffPlayer(class AArchonCharacter* Target);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_lanternhold_damage_aura_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
