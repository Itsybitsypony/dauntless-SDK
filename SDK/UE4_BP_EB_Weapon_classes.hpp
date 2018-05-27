#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_EB_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EB_Weapon.BP_EB_Weapon_C
// 0x00C0 (0x0B09 - 0x0A49)
class ABP_EB_Weapon_C : public ABP_BaseArchonWeapon_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A50(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    p_super_mode;                                             // 0x0A58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WeaponDynamicMaterial;                                    // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Base_Color;                                               // 0x0A68(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DAMAGE_WINDOW_COLOR;                                      // 0x0A78(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_CHARGE_GAIN_PER_X_STRIKE;                            // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_CHARGE_DECAY_RATE;                                   // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_CHARGE_LOW_DECAY_DELAY;                              // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_CHARGE_HIGH_DECAY_DELAY;                             // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_CHARGE_MAX;                                          // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_SUPER_DECAY_RATE;                                    // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BASE_CHARGE_GAIN_PER_EMBER_STRIKE;                        // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Current_Ember_Charge;                                     // 0x0AA4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Decay_Charge_Meter_;                                      // 0x0AA8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ember_Charged_;                                           // 0x0AA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0AAA(0x0002) MISSED OFFSET
	float                                              Ember_Charge_To_Add_On_Strike;                            // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DAMAGE_WINDOW_EMBER_COLOR;                                // 0x0AB0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Remaining_Charge_Delay;                                   // 0x0AC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Charge_Delay_To_Set;                                      // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EMBER_CHARGE_SPECIAL_ATTACK_COST;                         // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CHARGE_WINDOW_COLOR;                                      // 0x0ACC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Ember_Charge_Failed;                                      // 0x0ADC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Doing_Special_Attack_;                                    // 0x0ADD(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0ADE(0x0002) MISSED OFFSET
	struct FLinearColor                                SPECIAL_ATTACK_COLOR;                                     // 0x0AE0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_Regen_Charge;                                       // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InSuperMode;                                              // 0x0AF1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0AF2(0x0002) MISSED OFFSET
	float                                              BASE_CHARGE_GAIN_PER_Y_STRIKE;                            // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBAttackType>                          Attack_Type;                                              // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0AF9(0x0003) MISSED OFFSET
	float                                              Super_Mode_Attack_Rate;                                   // 0x0AFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Super_Weapon_Scale_Factor;                                // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Base_Weapon_Scale_Factor;                                 // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsesBaseWeaponSuperMode;                                  // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EB_Weapon.BP_EB_Weapon_C");
		return ptr;
	}


	void GetUsesBaseWeaponSuperMode(bool* Return);
	void GetIsInSuperMode(bool* Return);
	void GetMaxEmberCharge(float* MaxCharge);
	void GetCurrentEmberCharge(float* CurrentCharge);
	void CustomModifyDamageEventData(struct FDamageEventData* DamageEventData, class AActor** DamagedActor, struct FGameplayTagContainer* DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags);
	void OnRep_InSuperMode();
	bool CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer);
	void SpecialAttackReady(bool* QReady);
	void Set_Attack_Speed_Rate(float New_Attack_Speed_Rate);
	void Add_Ember_Charge_On_Hit();
	void Update_Ember_Charge_Decay(float Delta_Seconds);
	void Debug_Set_Weapon_Color(const struct FLinearColor& Color);
	void Consume_Ember_Charge(float Amount_To_Consume);
	void Get_Current_Ember_Charge_Percent(float* Percent);
	void UserConstructionScript();
	void OnEmberChargeWindowEnd();
	void OnEmberChargeWindowStart();
	void OnEmberChargeFail();
	void Trigger_Charge_Meter_Delay(bool High_Delay_);
	void Ember_Charge___Tick(float Delta_Seconds);
	void Evaluate_Ember_Charge();
	void ReceiveTick(float* DeltaSeconds);
	void OnComboStarted();
	void OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer);
	void OnComboEnded();
	void OnEmberChargeSuccessful();
	void Cheat_Charge_Weapon();
	void K2_OnEquip();
	void ExecuteUbergraph_BP_EB_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
