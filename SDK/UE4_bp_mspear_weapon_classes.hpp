#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_mspear_weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bp_mspear_weapon.bp_mspear_weapon_C
// 0x01F3 (0x0C3C - 0x0A49)
class Abp_mspear_weapon_C : public ABP_BaseArchonWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (Transient, DuplicateTransient)
	class Ucombat_combo_counter_bpc_C*                 combat_combo_counter_bpc;                                 // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Uammo_bpc_C*                                 AmmoComponent;                                            // 0x0A60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x0A68(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastFrameRotation;                                        // 0x0A74(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct Fmspear_tunables_str                        RangedModeTunables;                                       // 0x0A80(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              AimAccuracyStartedTime;                                   // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimAccuracyDuration;                                      // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A94(0x0004) MISSED OFFSET
	class UCurveFloat*                                 AimAccuracyCurve;                                         // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinInaccuracyPitchOffset;                                 // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInaccuracyPitchOffset;                                 // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxInaccuracyYawOffset;                                   // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ErraticMovementRatePitch;                                 // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ErraticMovementRateYaw;                                   // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeterGainScale;                                           // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponPowerTableData                       LWeaponPowerData;                                         // 0x0AB8(0x0168) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    p_SpearAim;                                               // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    p_SpearBeam;                                              // 0x0C28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    X5IndicatorRef;                                           // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastFiredShotAmmoScale;                                   // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_mspear_weapon.bp_mspear_weapon_C");
		return ptr;
	}


	void GetMeter_AmmoQualityRanges(float* AmmoQualityThresh_1, float* AmmoQualityThresh_2, float* AmmoQualityThresh_3, float* AmmoQualityThresh_4, float* AmmoQualityThresh_5, int* AmmoMax);
	void GetLastFiredShotAmmoScale(float* LastFiredShotAmmoScale);
	void GetCurrentMeterAmmoQuality(float* CurrentAmmoQuality);
	void GetMeterGainScale(float* Scale);
	void GetRangedModeTunables(struct Fmspear_tunables_str* Tunables);
	bool CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer);
	void CustomModifyDamageEventData(struct FDamageEventData* DamageEventData, class AActor** DamagedActor, struct FGameplayTagContainer* DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags);
	void GetCurrentAmmoScale();
	void GetCurrentAimAccuracy(float* Accuracy);
	void UserConstructionScript();
	void CallWeaponSpecificFunction(struct FName* Function_Name);
	void EndAiming();
	void OnNotifyAimAccuracyStarted();
	void OnComboEnd_Event_1();
	void ServerOnAmmoAdjustedPreClamp_Event_1(int OldAmmoCount, int NewAmmoCount);
	void OnComboIncremented_Event_1(EArchonAttackActionKey AttackType);
	void ReceiveTick(float* DeltaSeconds);
	void Cheat_Charge_Weapon();
	void K2_OnEquip();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_bp_mspear_weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
