#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_elemental_health_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass elemental_health_bpc.elemental_health_bpc_C
// 0x0360 (0x0530 - 0x01D0)
class Uelemental_health_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TMap<EElementType, struct FGameplayEffectSpecHandle> ElementalDamageSpec;                                      // 0x01D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              OwnerMaxHealth;                                           // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	TMap<EElementType, struct FGameplayEffectSpecHandle> ElementalMaxHealthSpec;                                   // 0x0230(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAbilitySystemComponent*                     OwnerAbilitySystem;                                       // 0x0280(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EElementType, class UClass*>                  DebuffsOnProc;                                            // 0x0288(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<EElementType, class UClass*>                  BuffsOnProc;                                              // 0x02D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<EElementType, struct FName>                   ElementalToNames;                                         // 0x0328(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<EElementType, bool>                           ElementalHealthState;                                     // 0x0378(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UArchonBuffableComponent*                    OwnerBuffComponent;                                       // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, EElementType>                   ActivatedElementalDebuffs;                                // 0x03D0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Felemental_health_data>              ElementalHealthStages;                                    // 0x0420(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               DebugData;                                                // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class Ufloating_combat_text_bpc_C*                 OwnerCombatTextComponent;                                 // 0x0438(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<EElementType, int>                            CurrentStageElementalHealthData;                          // 0x0440(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EElementType, float>                          ElementalArmour;                                          // 0x0490(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<EElementType, class UParticleSystem*>         ElementalAnteProcVFX;                                     // 0x04E0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass elemental_health_bpc.elemental_health_bpc_C");
		return ptr;
	}


	void GetCurrentStage(EElementType Element, int* Stage);
	void InitializeHealth(EElementType Element, int Stage);
	void MoveToNextStage(EElementType Element);
	void AuthProcessDebuffStates(const struct FName& DebuffObjectName);
	void AuthHandleApplyStatus(class AActor* Instigator, EElementType Element, class AMonsterPartActor* PartDamaged, bool HasHitResult, const struct FHitResult& HitResult, const struct FGameplayTagContainer& DamageTags);
	void CreateSpecHandles();
	void GetCurrentMaxHealth(EElementType Element, float* Health);
	void GetCurrentHealth(EElementType Element, float* Health);
	void AuthRegenHealth(float DeltaTime);
	void AuthTryAddElementalDamage(class AActor* Instigator, class AMonsterPartActor* PartDamaged, const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageEventTags, bool HasHitResult, const struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void MultiShowElementalHealth();
	void OnComponentActivate(class UActorComponent* Component, bool bReset);
	void MultiMoveToNextStage(EElementType NewParam);
	void ExecuteUbergraph_elemental_health_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
