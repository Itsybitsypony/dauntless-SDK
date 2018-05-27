#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_staggerable_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass staggerable_bpc.staggerable_bpc_C
// 0x0080 (0x0250 - 0x01D0)
class Ustaggerable_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<struct Fstagger_stage>                      StaggerData;                                              // 0x01D8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	float                                              PerPlayerScaling;                                         // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentStaggerHealth;                                     // 0x01EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentStaggerStage;                                      // 0x01F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Efinal_stagger_stage_strategy>         FinalStageStrategy;                                       // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FinishedStaggerStages;                                    // 0x01F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugStaggers;                                            // 0x01F6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01F7(0x0001) MISSED OFFSET
	float                                              CurrentStaggerMaxHealth;                                  // 0x01F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug1HitStagger;                                         // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET
	TArray<struct Fstagger_telemetry_data>             StaggerTelemetryData;                                     // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StaggerArmorDuration;                                     // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CloseToStaggerEffectsActive;                              // 0x0214(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    AlmostStaggeredVFX;                                       // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fstagger_stage>                      BaseStaggerData;                                          // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Fstagger_armor_data>                 StaggerArmorStack;                                        // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                L_armorIndex;                                             // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArmorScalingFactor;                                       // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalArmorValueForUI;                                     // 0x0248(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalInitialArmorValueForUI;                              // 0x024C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass staggerable_bpc.staggerable_bpc_C");
		return ptr;
	}


	void GetTotalArmor(float* TotalArmor, float* TotalInitalArmor);
	void ReduceArmor(float Amount, float* AmountRemaining);
	void AddStaggerArmor(float UnscaledArmorAmount, float ArmorDuration, struct FGuid* ArmorGUID);
	void OnRep_CloseToStaggerEffectsActive();
	void GetIndexOfStaggerData(class AActor* Instigator, int* Index);
	void RecordStaggerDamage(class AActor* Instigator, float StaggerDamage, bool CausedAStagger);
	void GetPlayerScalingFactor(float* ScalingFactor);
	void ChangeStaggerStage(bool DoStagger, int NewStaggerStage, class UMonsterPartComponent* StaggeredPart, TEnumAsByte<Estagger_type> StaggerType, class AActor* StaggerCauser);
	void CanReceiveStaggerDamage(bool* Staggerable);
	void GetCurrentStaggerData(struct Fstagger_stage* StaggerData);
	void TryAddStaggerDamage(float TotalBaseStaggerDamage, class AActor* Instigator, float PostCalcStaggerMultiplier, float BaseDamageStaggerMultiplier, float PerHitStaggerBonus, float StaggerResistPenetrationPercent, class UMonsterPartComponent* StaggeredPart, bool* StaggerCausedByThisDamage, float* StaggerDamageDealt);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void MulticastCombatText(float DamageAmount, class AActor* DamageInstigator, const struct FLinearColor& BaseColor);
	void AuthSendStaggerTelemetryData();
	void MulticastTelemetryData(TArray<struct Fstagger_telemetry_data> StaggerTelemetryData);
	void DegenStaggerArmor();
	void RefreshStaggerEffectsActive();
	void ExecuteUbergraph_staggerable_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
