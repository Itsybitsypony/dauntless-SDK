#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_received_hit_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass received_hit_ab.received_hit_ab_C
// 0x00CC (0x065C - 0x0590)
class Ureceived_hit_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	class ABP_PlayerCharacter_C*                       Player;                                                   // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           Controller;                                               // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x05A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       Instigator_Tags;                                          // 0x05C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fstagger_animset_str                        AnimSet;                                                  // 0x05E0(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MediumDamage;                                             // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeavyDamage;                                              // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FacingForward_;                                           // 0x0628(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0629(0x0003) MISSED OFFSET
	float                                              BaseHeavyHitDuration;                                     // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      OutputTest;                                               // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AActor*                                      DataTarget;                                               // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FreezeDuration;                                           // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x064C(0x0004) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMagnitude;                                          // 0x0658(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass received_hit_ab.received_hit_ab_C");
		return ptr;
	}


	void FlipYawForRootMotion(const struct FRotator& Rotation, struct FRotator* FlippedRotation);
	void GetHitDirection(const struct FGameplayEffectContextHandle& EffectContext, struct FVector* HitDirection);
	struct FVector GetModifiedSpaceWarpScale();
	void GetOptimalityScale(const struct FGameplayTagContainer& TagContainer, float* OptimalityScale);
	void GetDirectionalAnimation(const struct Fstagger_montage_data_str& StaggerStruct, class UAnimMontage** Montage);
	void GetJumpForceData(const struct FGameplayTagContainer& TagContainer, float* Distance, float* Height, float* Duration);
	void GetAnimSet(class ABP_PlayerCharacter_C* Player, struct Fstagger_animset_str* StaggerAnimset);
	void GetFacingDirection(const struct FGameplayEffectContextHandle& EffectContext, bool* FaceAttacker);
	void SetDirectionFromInputAcceleration_(bool Direction_from_Input_Acceleration);
	void ApplyTurnWarp(const struct FGameplayEffectContextHandle& Effect_Context);
	void GetHitRotation(const struct FGameplayEffectContextHandle& EffectContext, struct FRotator* HitRotation);
	void TelemetryPlayerDowned(class ABP_PlayerCharacter_C* Player, class AActor* Instigator);
	void HandleDeath(const struct FGameplayTagContainer& Tag_Container, class ABP_PlayerCharacter_C* BP_PlayerCharacter, class AActor* Instigator);
	void OnCancelled_12D922E24C5DB599201BD2A8857E2975();
	void OnInterrupted_12D922E24C5DB599201BD2A8857E2975();
	void OnBlendOut_12D922E24C5DB599201BD2A8857E2975();
	void OnCompleted_12D922E24C5DB599201BD2A8857E2975();
	void OnCancelled_57424C6941C506B6B611A19406EFFE91();
	void OnInterrupted_57424C6941C506B6B611A19406EFFE91();
	void OnBlendOut_57424C6941C506B6B611A19406EFFE91();
	void OnCompleted_57424C6941C506B6B611A19406EFFE91();
	void OnCancelled_ACD8760E43E78C95D15D14A1F7011A13();
	void OnInterrupted_ACD8760E43E78C95D15D14A1F7011A13();
	void OnBlendOut_ACD8760E43E78C95D15D14A1F7011A13();
	void OnCompleted_ACD8760E43E78C95D15D14A1F7011A13();
	void OnFinish_AD5F50BF46D768C0817B86A10B6997C9();
	void OnCancelled_5F7CE90948F82B771F678FBD624230E5();
	void OnInterrupted_5F7CE90948F82B771F678FBD624230E5();
	void OnBlendOut_5F7CE90948F82B771F678FBD624230E5();
	void OnCompleted_5F7CE90948F82B771F678FBD624230E5();
	void OnCancelled_0F2506B14E69B2FB2E7E4AA91854A3C1();
	void OnInterrupted_0F2506B14E69B2FB2E7E4AA91854A3C1();
	void OnBlendOut_0F2506B14E69B2FB2E7E4AA91854A3C1();
	void OnCompleted_0F2506B14E69B2FB2E7E4AA91854A3C1();
	void OnCancelled_B2D861ED403B854C973AEE9D44329AC0();
	void OnInterrupted_B2D861ED403B854C973AEE9D44329AC0();
	void OnBlendOut_B2D861ED403B854C973AEE9D44329AC0();
	void OnCompleted_B2D861ED403B854C973AEE9D44329AC0();
	void OnCancelled_E7B9F52841F57CB77BB22C83EA22344B();
	void OnInterrupted_E7B9F52841F57CB77BB22C83EA22344B();
	void OnBlendOut_E7B9F52841F57CB77BB22C83EA22344B();
	void OnCompleted_E7B9F52841F57CB77BB22C83EA22344B();
	void OnChange_1D47339647CBBA83521CB28A0634E11F(TEnumAsByte<EMovementMode> NewMovementMode);
	void OnChange_21C583704649DB7E31C853A07150F629(TEnumAsByte<EMovementMode> NewMovementMode);
	void OnFinish_B62FAF974BBA6569828EFAB0A0C8F0BA();
	void OnChange_9D7338F8437FF3ABDA0235BA8A4DBEA0(TEnumAsByte<EMovementMode> NewMovementMode);
	void EventReceived_A2F2479E4E0B4EA6483AC9B3E4C8A33C(const struct FGameplayEventData& Payload);
	void OnFinish_3AECE750475E4A3DF74836BFB5825EBA();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void K2_OnEndAbility();
	void ExecuteUbergraph_received_hit_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
