#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eblade_crowbear_exotic_00_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C
// 0x018F (0x0C98 - 0x0B09)
class Aeblade_crowbear_exotic_00_bp_C : public ABP_EB_Weapon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B09(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B10(0x0008) (Transient, DuplicateTransient)
	struct FWeaponPowerTableData                       LWeaponPowerData;                                         // 0x0B18(0x0168) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BlinkTimerValue;                                          // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C84(0x0004) MISSED OFFSET
	class UAnimSequence*                               BlinkAnim;                                                // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LEyeBlinkCurrent;                                         // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LEyeBlinkTarget;                                          // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C");
		return ptr;
	}


	void GetRangedModeTunables(struct Fmspear_tunables_str* Tunables);
	void GetMeterGainScale(float* Scale);
	void GetCurrentMeterAmmoQuality(float* CurrentAmmoQuality);
	void GetLastFiredShotAmmoScale(float* LastFiredShotAmmoScale);
	void GetMeter_AmmoQualityRanges(float* AmmoQualityThresh_1, float* AmmoQualityThresh_2, float* AmmoQualityThresh_3, float* AmmoQualityThresh_4, float* AmmoQualityThresh_5, int* AmmoMax);
	void PlayBlinkAnim(float ExplicitTime);
	void CustomModifyDamageEventData(struct FDamageEventData* DamageEventData, class AActor** DamagedActor, struct FGameplayTagContainer* DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags);
	bool CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer);
	void SpecialAttackReady(bool* QReady);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void Cheat_Charge_Weapon();
	void K2_OnEquip();
	void Ember_Charge___Tick(float* Delta_Seconds);
	void EyeAnimOff();
	void EyeAnimOn();
	void EyeBlinkTick();
	void ExecuteUbergraph_eblade_crowbear_exotic_00_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
