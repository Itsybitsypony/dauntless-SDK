#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_manager_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cell_manager_bpc.cell_manager_bpc_C
// 0x00E0 (0x02B0 - 0x01D0)
class Ucell_manager_bpc_C : public UArchonCellManagerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	float                                              MagnitudeToApply;                                         // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RankToApply;                                              // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AArchonBuff*>                         AppliedBuffs;                                             // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsApplyingEffects;                                        // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	TArray<struct FAppliedCellEffectCounter>           CurrentEffectsBeingApplied;                               // 0x01F8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	bool                                               HaveNewEffectsToApply;                                    // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	TArray<struct FAppliedCellEffectCounter>           NewEffectsToApply;                                        // 0x0210(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               RemoveEffectsAfterApplyingIsDone;                         // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	int                                                MatchingRankIndex;                                        // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TAssetPtr<class UClass>>                    GameplayEffectsToApply;                                   // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    AbilitiesToApply;                                         // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<TAssetPtr<class UClass>>                    BuffsToApply;                                             // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MagnitudeEffectsApplied;                                  // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RankedEffectsApplied;                                     // 0x0259(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x025A(0x0006) MISSED OFFSET
	TArray<class AArchonBuff*>                         L_AppliedBuffs;                                           // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    Client_CellEffectsChanged;                                // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<struct FGameplayAbilitySpecHandle>          AppliedAbilities;                                         // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAppliedCellEffectCounter>           BonusEffectsToAlwaysApply;                                // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAppliedCellEffectCounter>           L_Effects;                                                // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cell_manager_bpc.cell_manager_bpc_C");
		return ptr;
	}


	void AuthClearBonusEffects();
	void AuthAddBonusEffect(const struct FAppliedCellEffectCounter& Effect);
	void OnRep_CurrentEffectsBeingApplied();
	void SetCurrentEffects(TArray<struct FAppliedCellEffectCounter>* NewEffectsBeingApplied);
	void GetCurrentAppliedCellEffects(TArray<struct FAppliedCellEffectCounter>* AppliedCellEffects);
	void OnLoaded_F526342C4F02C9A0075E48B908F2675B(class UClass* Loaded);
	void OnLoaded_86E5A9064BCF5DEBBB33BA8B895D1B40(class UClass* Loaded);
	void OnLoaded_A682E46144FAAFA2F66151855B406D18(class UClass* Loaded);
	void RemoveCellBonuses();
	void ApplyCellBonuses(TArray<struct FAppliedCellEffectCounter>* EquippedCellEffects);
	void ApplyNextGameplayEffect();
	void ApplyNextCellEffect();
	void ApplyNextAbility();
	void ApplyNextBuff();
	void ApplyNewCellEffects();
	void PostApplyRemoveCellBonuses();
	void OnFinishedLoadingApplyingBuffs();
	void LoadAndApplyBuffs();
	void OnDestroyed_Event_1(class AActor* DestroyedActor);
	void BP_ApplyCellBonuses(TArray<struct FAppliedCellEffectCounter> CellEffects);
	void AuthClearAllBonusEffects();
	void AddNewBonusEffect(const struct FAppliedCellEffectCounter& AppliedCellEffectCounter);
	void ExecuteUbergraph_cell_manager_bpc(int EntryPoint);
	void Client_CellEffectsChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
