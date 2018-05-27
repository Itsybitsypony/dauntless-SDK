#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Attack_Speed_Potion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Attack_Speed_Potion.Ability_QuickItem_Attack_Speed_Potion_C
// 0x0008 (0x0620 - 0x0618)
class UAbility_QuickItem_Attack_Speed_Potion_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Attack_Speed_Potion.Ability_QuickItem_Attack_Speed_Potion_C");
		return ptr;
	}


	void ApplyEffect();
	void OnCancelled_C208FCE5470847A847D13384CCF3E1AC();
	void OnInterrupted_C208FCE5470847A847D13384CCF3E1AC();
	void OnBlendOut_C208FCE5470847A847D13384CCF3E1AC();
	void OnCompleted_C208FCE5470847A847D13384CCF3E1AC();
	void OnFinish_E13867DD4AAD19DB81AD11974A971C7E();
	void K2_ActivateAbility();
	void ExecuteUbergraph_Ability_QuickItem_Attack_Speed_Potion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
