#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_eventdispatcher_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_eventdispatcher_bpc.player_eventdispatcher_bpc_C
// 0x01B8 (0x0388 - 0x01D0)
class Uplayer_eventdispatcher_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnPreMitigationHitWithWeaponSwing;                        // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDodgeRollBegin;                                         // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPerfectDodgeRoll;                                       // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnExposedPart;                                            // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStaggeredBehemoth;                                      // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBrokePart;                                              // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CustomPreMitigationDamageHook;                            // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class AActor*>                              ModifiersRegisteredToModifyOutgoingDamagePreMitigation;   // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnPostMitigationHitWithWeapon;                            // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRevivedOtherPlayer;                                     // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWasRevived;                                             // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostMitigationDealtAnyDamage;                           // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostWeaponHitComplete;                                  // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AboutToDie;                                               // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class AActor*>                              ModifiersRegisteredToModifyAnyOutgoingDamagePremit;       // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              ModifiersRegisteredToModifyIncomingDamagePreMitigation;   // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              ModifiersRegisteredToModifyAnyIncomingDamagePremit;       // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FDamageEventData                            L_ModifiedDamageEvent;                                    // 0x02E8(0x0058) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       L_ModifiedTAgs;                                           // 0x0340(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               L_DamageModified;                                         // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               L_TagsModified;                                           // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0362(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBehemothStaggeredByAnyone;                              // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBehemothExposedByAnyone;                                // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_eventdispatcher_bpc.player_eventdispatcher_bpc_C");
		return ptr;
	}


	void RegisterToModifyAnyIncomingDamagePremit(class AActor* DamageModifier);
	void TryModifyAnyIncomingDamagePremit(const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageTags, class AActor* DamagingActor, bool* DamageModified, struct FDamageEventData* ModifiedDamageEvent, bool* TagsModified, struct FGameplayTagContainer* ModifiedTags);
	void AddPrioritizedModifier(class AActor* NewModifier, TArray<class AActor*>* ModifierList, TArray<class AActor*>* OutModifierList);
	void TryModifyAnyOutgoingDamagePremit(const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageTags, class AActor* DamagedActor, bool* DamageModified, struct FDamageEventData* ModifiedDamageEvent, bool* TagsModified, struct FGameplayTagContainer* ModifiedTags);
	void RegisterToModifyAnyOutgoingDamagePremit(class AActor* DamageModifier);
	void TryModfiyOutgoingWeaponDamagePreMitigation(const struct FDamageEventData& DamageEvent, class AActor* DamagedActor, const struct FGameplayTagContainer& DamageTags, bool* DamageModified, struct FDamageEventData* ModifiedDamageEvent, bool* TagsModified, struct FGameplayTagContainer* ModifiedTags);
	void RegisterToModifyOutgoingWeaponDamagePreMitigation(class AActor* DamageEventModifier);
	void ModifyOutgoingDamagePreMitigationActorDestroyed(class AActor* DestroyedModifier);
	void ModifyAnyOutgoingDamagePremitActorDestroyed(class AActor* DestroyedModifier);
	void ReceiveBeginPlay();
	void OnStaggeredBehemoth_Event();
	void ModifyAnyIncomingDamagePremitActorDestroyed(class AActor* DestroyedModifier);
	void ModifyIncomingDamagePreMitigationActorDestroyed(class AActor* DestroyedModifier);
	void OnExposedBehemoth_Event();
	void ExecuteUbergraph_player_eventdispatcher_bpc(int EntryPoint);
	void OnBehemothExposedByAnyone__DelegateSignature();
	void OnBehemothStaggeredByAnyone__DelegateSignature();
	void AboutToDie__DelegateSignature();
	void OnPostWeaponHitComplete__DelegateSignature(const struct FGameplayTagContainer& DamageAndInstigatorTags, class AActor* DamagedActor, float FinalDamageAmount);
	void OnPostMitigationDealtAnyDamage__DelegateSignature(const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags, class AActor* DamagedActor);
	void OnWasRevived__DelegateSignature(class AActor* Reviver);
	void OnRevivedOtherPlayer__DelegateSignature(class AActor* OtherPlayer);
	void OnPostMitigationHitWithWeapon__DelegateSignature(class AActor* DamagedActor, const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags);
	void CustomPreMitigationDamageHook__DelegateSignature(const struct FDamageEventData& DamageEventData);
	void OnBrokePart__DelegateSignature();
	void OnStaggeredBehemoth__DelegateSignature();
	void OnExposedPart__DelegateSignature();
	void OnPerfectDodgeRoll__DelegateSignature(float DamageMitigated);
	void OnDodgeRollBegin__DelegateSignature();
	void OnPreMitigationHitWithWeaponSwing__DelegateSignature(const struct FGameplayTagContainer& DamageTags, class AActor* DamagedActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
