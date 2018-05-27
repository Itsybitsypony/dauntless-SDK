#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Base.Ability_QuickItem_Base_C
// 0x0028 (0x0618 - 0x05F0)
class UAbility_QuickItem_Base_C : public UArchonQuickItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)
	bool                                               CanUseInBleedout;                                         // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanUseInMontage;                                          // 0x05F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x05FA(0x0006) MISSED OFFSET
	class UAkAudioEventBase*                           Audio_Activate;                                           // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEventBase*                           Audio_Deactivate;                                         // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Audio_ActivateDelay;                                      // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Audio_DeactivateDelay;                                    // 0x0614(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Base.Ability_QuickItem_Base_C");
		return ptr;
	}


	void CustomCanActivateAbility(class AActor* ActorInfoOwnerActor, class AActor* ActorInfoAvatarActor, class APlayerController* ActorInfoPlayerController, class UAbilitySystemComponent* ActorInfoAbilitySystemComponent, class UAnimInstance* ActorInfoAnimInstance, class UMovementComponent* ActorInfoMovementComponent, bool* CanUse);
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_Ability_QuickItem_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
