#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_enragebonus_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass damage_enragebonus_buff.damage_enragebonus_buff_C
// 0x0028 (0x0704 - 0x06DC)
class Adamage_enragebonus_buff_C : public Abase_buff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	float                                              PercentIncrease;                                          // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BehemothEnraged;                                          // 0x06EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	float                                              BonusPercentIncrease;                                     // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 BaseBuff;                                                 // 0x06F4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FActiveGameplayEffectHandle                 BonusBuff;                                                // 0x06FC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass damage_enragebonus_buff.damage_enragebonus_buff_C");
		return ptr;
	}


	void RemoveBonusEffect();
	void ApplyEffect(bool Bonus);
	void UserConstructionScript();
	void OnAdded();
	void OnGameplayEventTriggered(struct FGameplayEventData* Payload);
	void MulticastOnAdded();
	void ExecuteUbergraph_damage_enragebonus_buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
