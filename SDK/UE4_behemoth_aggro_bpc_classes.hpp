#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_aggro_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_aggro_bpc.behemoth_aggro_bpc_C
// 0x0130 (0x0300 - 0x01D0)
class Ubehemoth_aggro_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	float                                              CurrentFrustration;                                       // 0x01D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFrustration;                                           // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrustrationPerSecWhileOutOfZone;                          // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrustrationOnTargetInvalidated;                           // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromZoneToStartApplyingFrustration;               // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DegenDelayAfterFrustrationAdded;                          // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrustrationDegenPerSecond;                                // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FTimerHandle                                FrustrationDegenDelayTimer;                               // 0x01F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct Ffrustration_float_pair>             FrustrationTracking;                                      // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FrustrationDegenInterval;                                 // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0214(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    StartedFrustration;                                       // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               FullyFrustrated;                                          // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    EndedFrustration;                                         // 0x0230(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               DebugAggro;                                               // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0241(0x0003) MISSED OFFSET
	float                                              CostToTarget;                                             // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PathToTargetExists;                                       // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0249(0x0003) MISSED OFFSET
	struct FVector                                     AccessibleTargetTolerance;                                // 0x024C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct Ftarget_data>                        TargetData;                                               // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                L_Index;                                                  // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrustrationPer100DamageFromInaccessibleTargets;           // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrustrationPerSecInaccessibleTarget;                      // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	struct FTimerHandle                                FrustrationPauseTimer;                                    // 0x0278(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               FrustrationPaused;                                        // 0x0280(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0281(0x0007) MISSED OFFSET
	class UEnvQuery*                                   TargettingQuery;                                          // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTargetIndex;                                       // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentTargetStickiness;                                  // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumValidTargets;                                          // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    TargetChanged;                                            // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              TimeForTargetToExitLOS;                                   // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeForTargetToExitAccessibility;                         // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccessibleTargetInAirCheck;                               // 0x02B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    TookDamage;                                               // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              MaxPathCostForAccessibility;                              // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAccessible;                                             // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	float                                              SightRange;                                               // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnterCombatRange;                                         // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetStickinessDecayTime;                                // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetStickinessMax;                                      // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetStickinessMin;                                      // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetChangedTimestamp;                                   // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      L_CurrentTarget;                                          // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_aggro_bpc.behemoth_aggro_bpc_C");
		return ptr;
	}


	void GetTargets(TEnumAsByte<Etarget_access_requirement> AccessibilityRequirement, TArray<struct Ftarget_data>* MatchingTargetDatas);
	void GetAccessibilityTypeFromBools(bool IsAccessible, bool IsVisible, TEnumAsByte<Etarget_access_requirement>* AccesibilityType);
	void GetTargetAccessibilityAndVisibility(int TargetIndex, bool* Accessible, bool* Visible);
	void IsTimestampAccessible(float Timestamp, bool* IsAccessible);
	void IsTimestampVisible(float LastSeenTimestamp, bool* Visible);
	void TryPickNewTarget(bool* ChangedTarget, int* TargetIndex);
	void UpdateAfterTargetDataChange();
	void IsTargetValid(int Index, TEnumAsByte<Etarget_access_requirement> Requirement, bool* TargetIsValid);
	void GetOrAddTargetData(class AActor* Target, bool RefreshCachedData, struct Ftarget_data* TargetData, int* DataIndex);
	void GetIndexOfTarget(class AActor* Target, int* Index);
	void BehemothTookDamage(float DamageAmount, class AActor* DamageInstigator);
	void CalculateAccessiblity(class AActor* Target, const struct Ftarget_data& TargetData, TEnumAsByte<Etarget_accessibility_type>* TargetIsAccessible, bool* PathExists, float* PathCostIfPathExists);
	void IsAbleToBuildFrustration(bool* AbleToBuildFrustration);
	void ResetFrustration();
	void DecreaseFrustration(float Amount, bool OverridePause);
	void GetIndexOfTrackedFrustration(TEnumAsByte<Ebehemoth_frustration_reason> Reason, int* Index);
	void IncreaseFrustration(float Amount, TEnumAsByte<Ebehemoth_frustration_reason> Reason);
	void ValidateComponent();
	void ReceiveBeginPlay();
	void CheckDistanceFrustration();
	void TryDelayDegen();
	void Stub();
	void TryDegenFrustration();
	void ReceiveTick(float* DeltaSeconds);
	void CalculatePathCosts();
	void RefreshAndScoreTargets();
	void OnQueryFinishedEvent_Event_1(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void RefreshTargetVisibility();
	void OnTargetDestroyed(class AActor* Target);
	void ExecuteUbergraph_behemoth_aggro_bpc(int EntryPoint);
	void TookDamage__DelegateSignature(float DamageAmount, class AActor* DamageInstigator);
	void TargetChanged__DelegateSignature(int OldTarget, int NewTarget);
	void EndedFrustration__DelegateSignature();
	void StartedFrustration__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
