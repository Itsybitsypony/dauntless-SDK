#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lantern_base_bp.lantern_base_bp_C
// 0x012C (0x055C - 0x0430)
class Alantern_base_bp_C : public AArchonLantern
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      Lantern;                                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         Bottom;                                                   // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         front;                                                    // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         back;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         Right;                                                    // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         Left;                                                     // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lerp_timeline_lerp_alpha_63FD35504185CA95526C30AEC9F84D63;// 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    lerp_timeline__Direction_63FD35504185CA95526C30AEC9F84D63;// 0x046C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          lerp_timeline;                                            // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Materials;                                        // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USpotLightComponent*>                 Lights;                                                   // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       Light_Intensity;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Light_Color;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              New_Intensity;                                            // 0x04A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Old_Intensity;                                            // 0x04AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLazyEvalStatistic                          CurrentPrimaryCharge;                                     // 0x04B0(0x0014) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDischarging;                                            // 0x04C4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	class UAkAudioEventBase*                           DischargeVO;                                              // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RadarPingCooldown;                                        // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastTimePingUsed;                                         // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Ftier_lantern_data>                  tier_data;                                                // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class USkeletalMesh>                     LanternSkelMesh;                                          // 0x04E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstance*                           L_lantern_MI;                                             // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               has_loaded;                                               // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0511(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAddLanternChargeModifyHook;                             // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              PassiveSecondaryChargeRate;                               // 0x0528(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SingleChargeCost;                                         // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentRateMultiplier;                                    // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLazyEvalStatistic                          CurrentSecondaryCharge;                                   // 0x0534(0x0014) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	bool                                               FullyCharged;                                             // 0x0548(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	struct FLinearColor                                SparkColor;                                               // 0x054C(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lantern_base_bp.lantern_base_bp_C");
		return ptr;
	}


	void GetCurrentSecondaryChargeInterface(float* CurrentSecondaryCharge);
	void GetSingleChargeCostInterface(float* SingleChargeCost);
	void GetMaximumChargeInterface(float* MaximumCharge);
	void GetPrimaryChargePercentInterface(float* ChargePercent);
	void GetLanternMesh(class USkeletalMeshComponent** Mesh);
	void GetDischargeEndedSound(class UAkAudioEventBase** Sound);
	void GetDischargeLoopEndSound(class UAkAudioEventBase** Sound);
	void GetDischargeEndedEffect(class UParticleSystem** Effect);
	void GetDischargeLoopStartSound(class UAkAudioEventBase** Sound);
	void GetDischargeVO(class UAkAudioEventBase** Sound);
	void GetDischargeStartedSound(class UAkAudioEventBase** Sound);
	void GetDischargeLoopStartEffect(class UParticleSystem** Effect);
	void GetDischargeStartedEffect(class UParticleSystem** Effect);
	void GetDefaultPrimaryDye(struct FName* DyeRowName);
	void GetDefaultSecondaryDye(struct FName* DyeRowName);
	void GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset);
	void OutputDebugInformation();
	bool HasFinishedLoading();
	void GetSecondaryChargeCount(int* ChargePercent);
	void GetSecondaryChargePercent(float* ChargePercent);
	void ResetChargeRate();
	void InstantDischargeSecondary(bool* Success);
	void InstantDischargePrimary(bool* Success);
	bool LookupSetItemTableRow(struct FName* RowName, struct FArmourSetItemResistanceTableData* OutResistanceTableRow);
	bool LookupLanternResistanceTableRow(struct FName* RowName, struct FLanternResistanceTableData* OutResistanceTableRow);
	TAssetPtr<class USkeletalMesh> GetLanternSkelMeshPtr();
	void SetTierAttributes();
	void GetIsDischarging(bool* IsDischarging);
	void OnDamageGiven(class AActor* DamageTarget, float Damage);
	void StartDischarge(float DischargeDuration);
	void GetPrimaryChargePercent(float* ChargePercent);
	void AddCharge(float Charge);
	void UserConstructionScript();
	void lerp_timeline__FinishedFunc();
	void lerp_timeline__UpdateFunc();
	void OnLoaded_748850AA43EDFF2A6D33BD85E51AB6E5(class UObject* Loaded);
	void RegisterToModifyAddCharge();
	void ReceiveBeginPlay();
	void Flicker_Light();
	void BP_OnLanternEquipped();
	void BP_OnLanternUnEquipped();
	void Event_OnFullyCharged();
	void Event_OnDischargeEnded();
	void ReceiveTick(float* DeltaSeconds);
	void Event_OnChargeAdded(float ChargeAdded);
	void ReceiveGameplayStart();
	void Check_For_Transmog();
	void ReEquip();
	void StopDischarge();
	void OnOwnerHiddenInGame(bool bNewHidden);
	void AddChargeInterface(float Charge);
	void StartDischargeInterface(float DischargeDuration);
	void InstantDischargeSecondaryInterface();
	void InstantDischargePrimaryInterface();
	void ExecuteUbergraph_lantern_base_bp(int EntryPoint);
	void OnAddLanternChargeModifyHook__DelegateSignature(bool NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
