#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_buff_applier_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass buff_applier_bpc.buff_applier_bpc_C
// 0x0108 (0x02D8 - 0x01D0)
class Ubuff_applier_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TMap<class UClass*, struct Fbuff_override_struct>  BuffOverrides;                                            // 0x01D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UClass*, struct Fge_override_struct>    GameplayEffectOverrides;                                  // 0x0228(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class UClass*, struct Fbuff_override_struct>  ProjectileBuffOverrides;                                  // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              L_Buffs;                                                  // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass buff_applier_bpc.buff_applier_bpc_C");
		return ptr;
	}


	void ClearProjectileClassBuffs(class UClass** Key);
	void AddProjectileClassBuffs(class UClass* ProjectileClass, const struct Fbuff_override_struct& BuffOverrides);
	void ClearGameplayEffectOverrides(class UClass* GameplayEffectClass);
	void AddGameplayEffectOverride(class UClass* GameplayEffectClass, const struct Fge_override_struct& OverrideData);
	void AddGameplayEffects(class AActor* TargetActor, TArray<struct Feffect_magitudes_struct>* GameplayEffects);
	void ClearBuffOverrides(class UClass* BuffClass);
	void AddBuffOverride(class UClass* Key, const struct Fbuff_override_struct& Value);
	void TryAddBuff(class UClass* BuffClass, class AActor* Target, const struct FHitResult& OptionalHitResult, bool StartBuff, class AArchonBuff** BuffRef, bool* BuffWasReplacedByOverrides);
	void OnSpawnedProjectile_Event_1(class Aprojectile_base_bp_C* Projectile, const struct FVector& Target, const struct FGuid& Guid);
	void ExecuteUbergraph_buff_applier_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
