#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_ihammer_weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bp_ihammer_weapon.bp_ihammer_weapon_C
// 0x0117 (0x0B60 - 0x0A49)
class Abp_ihammer_weapon_C : public ABP_BaseArchonWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (Transient, DuplicateTransient)
	class Uammo_bpc_C*                                 AmmoComponent;                                            // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Clip;                                                     // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FStruct_IH_ParticleTrailSystems>     Weapon_Trail_Types;                                       // 0x0A68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Clip_Auto_Ejected;                                        // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0A79(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    Active_Reload_Start_Dispatcher;                           // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Active_Reload_Complete_Dispatcher;                        // 0x0A90(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               In_Reload_;                                               // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0AA1(0x0007) MISSED OFFSET
	class USkeletalMesh*                               Clip_Type;                                                // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Clip_Attach_Socket;                                       // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Ejected_Clip_Actor;                                       // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ClipOffset;                                               // 0x0AC0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadSpeedModifier;                                      // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadSuccessWindowPercent;                               // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InReloadInputWindow;                                      // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InReloadInputSuccessWindow;                               // 0x0AF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugHammer;                                              // 0x0AFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasPrimedAmmoShell;                                       // 0x0AFB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    p_PrimedParticle;                                         // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    p_LanternReload;                                          // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    p_ReloadClipBurst;                                        // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       WeaponMeleeImpactTags;                                    // 0x0B18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PrimedShellDamageMultiplier;                              // 0x0B38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrimedShellDamageFlatBonus;                               // 0x0B3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       PrimeBlastTagContainer;                                   // 0x0B40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_ihammer_weapon.bp_ihammer_weapon_C");
		return ptr;
	}


	void IsAmmoShellPrimed(bool* IsPrimed);
	bool PrimeAmmoShell();
	bool RemovePrimedAmmoShell();
	bool CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer);
	void CustomModifyDamageEventData(struct FDamageEventData* DamageEventData, class AActor** DamagedActor, struct FGameplayTagContainer* DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags);
	void SpecialAttackReady(bool* QReady);
	void Get_Appropriate_Weapon_Trails();
	void UserConstructionScript();
	void Eject_Clip();
	void Spawn_Shell_Casing(int Amount_To_Spawn);
	void OnAmmoCountChanged(int NewAmmoCount);
	void OnAmmoAdjusted(int AdjustedAmount);
	void OnReloadWeapon();
	void ClientAdjustAmmo(int Adjusted_Amount);
	void ClientOnReloadWeapon();
	void OnNotifyReloadInputWindowStarted(float TotalDuration);
	void OnNotifyReloadInputWindowEnded();
	void ReloadVFX();
	void AuthBroadcastInstantReloadEffects();
	void MulticastInstantReloadEffects();
	void OnComboEnded();
	void OnComboBuffered(EArchonAttackActionKey* PrimaryKey, EArchonAttackActionKeyModifier* ModifierKey);
	void OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer);
	void K2_OnEquip();
	void ClientTestForOwner();
	void Cheat_Charge_Weapon();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_bp_ihammer_weapon(int EntryPoint);
	void Active_Reload_Complete_Dispatcher__DelegateSignature(bool Active_Reload_Success_);
	void Active_Reload_Start_Dispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
