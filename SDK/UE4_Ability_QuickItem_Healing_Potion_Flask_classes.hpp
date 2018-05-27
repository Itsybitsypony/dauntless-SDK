#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Potion_Flask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C
// 0x000C (0x0624 - 0x0618)
class UAbility_QuickItem_Healing_Potion_Flask_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)
	float                                              Heal_Amount;                                              // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Healing_Potion_Flask.Ability_QuickItem_Healing_Potion_Flask_C");
		return ptr;
	}


	void ApplyEffect();
	void CustomCanActivateAbility(class AActor** ActorInfoOwnerActor, class AActor** ActorInfoAvatarActor, class APlayerController** ActorInfoPlayerController, class UAbilitySystemComponent** ActorInfoAbilitySystemComponent, class UAnimInstance** ActorInfoAnimInstance, class UMovementComponent** ActorInfoMovementComponent, bool* CanUse);
	void OnNotifyEnd_06029CF74F6357D225967A869924061C(const struct FName& NotifyName);
	void OnNotifyBegin_06029CF74F6357D225967A869924061C(const struct FName& NotifyName);
	void OnCancelled_06029CF74F6357D225967A869924061C(const struct FName& NotifyName);
	void OnInterrupted_06029CF74F6357D225967A869924061C(const struct FName& NotifyName);
	void OnBlendOut_06029CF74F6357D225967A869924061C(const struct FName& NotifyName);
	void OnCompleted_06029CF74F6357D225967A869924061C(const struct FName& NotifyName);
	void K2_ActivateAbility();
	void ExecuteUbergraph_Ability_QuickItem_Healing_Potion_Flask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
