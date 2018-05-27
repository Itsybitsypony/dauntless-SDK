#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_shrowd_exotic_charge_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C
// 0x01E0 (0x0770 - 0x0590)
class Ushrowd_exotic_charge_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	bool                                               DeterminationDebuggingEnabled;                            // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class Uammo_bpc_C*                                 AmmoComponent;                                            // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MeterGainScale;                                           // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeterGainScaleInitialized;                                // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	class Aeblade_crowbear_exotic_00_bp_C*             LWeapon;                                                  // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponPowerTableData                       LWeaponPowerData;                                         // 0x05B8(0x0168) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LDeterminationTickPeriod;                                 // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LDeterminationBracketRange;                               // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAbilityTask_WaitDelay*                      MeterDecayTask;                                           // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecayTimer;                                               // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InSuperMode;                                              // 0x0734(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0735(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    FeastFX;                                                  // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Heal_Amount;                                              // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	class Aik_eblade_crowbear_exotic_hand_bp_C*        CrowbearHand;                                             // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              Meshes;                                                   // 0x0750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C");
		return ptr;
	}


	void PerHitMeterGain(bool Secondary, float* Gain);
	void HealSelf(float HealAmount);
	void GetDetermination(float* Determination);
	void DebugOutputToLog(const class FString& Text);
	void EventReceived_F8A282F74ACD98F3B36ECE8CF8693997(const struct FGameplayEventData& Payload);
	void EventReceived_7CB3DECB4F9FE0EE522CEDBAAA536912(const struct FGameplayEventData& Payload);
	void OnFinish_9B96D0604F5CA231AE7E7B855556BC2B();
	void OnChange_8C72C6FB4BA6F3A0D68D1E8A0150971C();
	void OnChange_39EBBEB1494661FE7A5810836000692F();
	void OnFinish_832D54B24CE4507307DEB4879E879169();
	void EventReceived_E8AE810B4C4D95D374CE1BACE392A2C8(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void StartMeterDecay();
	void OnComboNextMove_Event_1(const struct FComboInputBuffer& ComboInputBuffer);
	void EndDecay();
	void ClientStartFX(class AActor* Owner, class Aeblade_crowbear_exotic_00_bp_C* Weapon);
	void ClientStopFX(class UObject* Owner, class Aeblade_crowbear_exotic_00_bp_C* Weapon);
	void ExecuteUbergraph_shrowd_exotic_charge_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
