#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Potion_00_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C
// 0x000C (0x0624 - 0x0618)
class UAbility_QuickItem_Healing_Potion_00_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)
	float                                              Heal_Amount;                                              // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Healing_Potion_00.Ability_QuickItem_Healing_Potion_00_C");
		return ptr;
	}


	void ApplyEffect();
	void CustomCanActivateAbility(class AActor** ActorInfoOwnerActor, class AActor** ActorInfoAvatarActor, class APlayerController** ActorInfoPlayerController, class UAbilitySystemComponent** ActorInfoAbilitySystemComponent, class UAnimInstance** ActorInfoAnimInstance, class UMovementComponent** ActorInfoMovementComponent, bool* CanUse);
	void OnFinish_BA3D35C64AABDD82810668838FFBF1D6();
	void OnCancelled_E600A4F349EC2EC2666AA7BF207B9C0E();
	void OnInterrupted_E600A4F349EC2EC2666AA7BF207B9C0E();
	void OnBlendOut_E600A4F349EC2EC2666AA7BF207B9C0E();
	void OnCompleted_E600A4F349EC2EC2666AA7BF207B9C0E();
	void K2_ActivateAbility();
	void ExecuteUbergraph_Ability_QuickItem_Healing_Potion_00(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
