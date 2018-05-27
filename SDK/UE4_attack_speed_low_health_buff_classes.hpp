#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_attack_speed_low_health_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass attack_speed_low_health_buff.attack_speed_low_health_buff_C
// 0x0030 (0x070C - 0x06DC)
class Aattack_speed_low_health_buff_C : public Abase_buff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	float                                              PercentIncreasePerStack;                                  // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BuffApplied;                                              // 0x06EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	struct FActiveGameplayEffectHandle                 BaseBuff;                                                 // 0x06F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxStacks;                                                // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StackTracker;                                             // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StarterPercent;                                           // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 StackingBuff;                                             // 0x0704(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass attack_speed_low_health_buff.attack_speed_low_health_buff_C");
		return ptr;
	}


	void HandleEffects();
	void UserConstructionScript();
	void OnAdded();
	void OnGameplayEventTriggered(struct FGameplayEventData* Payload);
	void ReceiveDestroyed();
	void ExecuteUbergraph_attack_speed_low_health_buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
