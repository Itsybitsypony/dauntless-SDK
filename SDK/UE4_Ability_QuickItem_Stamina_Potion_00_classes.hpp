#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Stamina_Potion_00_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Stamina_Potion_00.Ability_QuickItem_Stamina_Potion_00_C
// 0x0014 (0x062C - 0x0618)
class UAbility_QuickItem_Stamina_Potion_00_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)
	float                                              RegenMultiplier;                                          // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ConsumptionDivideBy;                                      // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Stamina_Potion_00.Ability_QuickItem_Stamina_Potion_00_C");
		return ptr;
	}


	void ApplyEffect();
	void OnCancelled_2B2F30AF42BDFEF939AAA5B05DADB002();
	void OnInterrupted_2B2F30AF42BDFEF939AAA5B05DADB002();
	void OnBlendOut_2B2F30AF42BDFEF939AAA5B05DADB002();
	void OnCompleted_2B2F30AF42BDFEF939AAA5B05DADB002();
	void OnFinish_8D3908C0407EA79B42ADB59F712DF400();
	void K2_ActivateAbility();
	void ExecuteUbergraph_Ability_QuickItem_Stamina_Potion_00(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
