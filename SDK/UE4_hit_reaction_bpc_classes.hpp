#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hit_reaction_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass hit_reaction_bpc.hit_reaction_bpc_C
// 0x00C0 (0x0290 - 0x01D0)
class Uhit_reaction_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       AcceptedModifiers;                                        // 0x01D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       InstigatorTags;                                           // 0x01F8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0218(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      InstigatorActor;                                          // 0x0230(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackerAngle;                                            // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDebugInfo;                                          // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	class UClass*                                      HitReactionTable;                                         // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                InstigatorMontage;                                        // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MontageStartPosition;                                     // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	class AArchonBehemoth*                             Behemoth;                                                 // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UArchonGameplayOperation*                    OperationRef;                                             // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      OutputTest;                                               // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class Aua_hit_reaction_table_C*                    HitReactionTableRef;                                      // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      DamageSource;                                             // 0x0288(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass hit_reaction_bpc.hit_reaction_bpc_C");
		return ptr;
	}


	void TelemetryPlayerDowned(class AActor* Target, class AActor* Instigator);
	void GetHitReactionEntryInfo(const struct FHitReactionTableEntry& HitReactionEntry, bool Enable);
	void DebugInfo(bool Enable);
	void ConvertAngleToDirection(float Angle, EVictimRelativeHitDirection* Direction);
	void GetImpactDirection(class AActor* TargetActor, const struct FGameplayEffectContextHandle& EffectContext, EVictimRelativeHitDirection* Direction, float* Angle);
	void GetAttackerDirection(class AActor* InstigatorActor, class AActor* TargetActor, EVictimRelativeHitDirection* AttackerDirection, float* AttackerAngle);
	void FilterGameplayTagContainer(const struct FGameplayTagContainer& InstigatorTags, const struct FGameplayTagContainer& Filter_By, bool DebugPrint, struct FGameplayTagContainer* FilteredTags);
	void GetMatchingHitReaction(const struct FGameplayTagContainer& Filter_By, TArray<struct FHitReactionTableEntry>* HitReactionTable, struct FHitReactionTableEntry* MatchingEntry, bool* Success);
	void OnDamageReceived(const struct FGameplayTagContainer& InstigatorTags, const struct FGameplayEffectContextHandle& EffectContext, class AActor* InstigatorActor, class AActor* TargetActor, float Magnitude);
	void ReceiveTick(float* DeltaSeconds);
	void OnOperationEnd(class UArchonGameplayOperation* Op, const struct FArchonGameplayOperationArgs& Args, bool bInterrupted);
	void OnEndOperation();
	void UpdateOperation();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_hit_reaction_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
