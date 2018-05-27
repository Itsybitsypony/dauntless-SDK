#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Damage_Block_Potion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Damage_Block_Potion.Ability_QuickItem_Damage_Block_Potion_C
// 0x0020 (0x0638 - 0x0618)
class UAbility_QuickItem_Damage_Block_Potion_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)
	float                                              Duration;                                                 // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Magnitude;                                                // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AbilityCommited;                                          // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	int                                                Stacks;                                                   // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 DRMod;                                                    // 0x0630(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Damage_Block_Potion.Ability_QuickItem_Damage_Block_Potion_C");
		return ptr;
	}


	void OnCancelled_A23CF01642CAF4C45F45D696A403C757();
	void OnInterrupted_A23CF01642CAF4C45F45D696A403C757();
	void OnBlendOut_A23CF01642CAF4C45F45D696A403C757();
	void OnCompleted_A23CF01642CAF4C45F45D696A403C757();
	void OnFinish_28D2F8AB456E5B0129B718824305E03C();
	void EventReceived_D0B736CC4167B25A8710C5B92A9F202E(const struct FGameplayEventData& Payload);
	void OnFinish_88610A3245A637DCE144CBB0C1421B91();
	void K2_ActivateAbility();
	void ExecuteUbergraph_Ability_QuickItem_Damage_Block_Potion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
