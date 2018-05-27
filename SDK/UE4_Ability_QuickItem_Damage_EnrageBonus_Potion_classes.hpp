#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Damage_EnrageBonus_Potion_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Damage_EnrageBonus_Potion.Ability_QuickItem_Damage_EnrageBonus_Potion_C
// 0x0008 (0x0620 - 0x0618)
class UAbility_QuickItem_Damage_EnrageBonus_Potion_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Damage_EnrageBonus_Potion.Ability_QuickItem_Damage_EnrageBonus_Potion_C");
		return ptr;
	}


	void ApplyEffect();
	void OnCancelled_F4B300014C2DC414502C9E91F42F4811();
	void OnInterrupted_F4B300014C2DC414502C9E91F42F4811();
	void OnBlendOut_F4B300014C2DC414502C9E91F42F4811();
	void OnCompleted_F4B300014C2DC414502C9E91F42F4811();
	void OnFinish_A9503D844062E405B8E4F0BB5BD35532();
	void K2_ActivateAbility();
	void ExecuteUbergraph_Ability_QuickItem_Damage_EnrageBonus_Potion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
