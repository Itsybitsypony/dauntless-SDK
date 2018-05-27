#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_harvestable_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass fauna_harvestable_bp.fauna_harvestable_bp_C
// 0x0138 (0x0C28 - 0x0AF0)
class Afauna_harvestable_bp_C : public Afauna_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	class Uloot_dropper_bpc_C*                         loot_dropper_bpc;                                         // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_interactioncode_component_C*           interaction_component;                                    // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ueqs_gameplay_bpc_C*                         eqs_gameplay_bpc;                                         // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonAbilitySystemComponent*               ArchonAbilitySystem;                                      // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            Damage;                                                   // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Used;                                                     // 0x0B20(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B21(0x0007) MISSED OFFSET
	class FString                                      LootID;                                                   // 0x0B28(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B48(0x0008) MISSED OFFSET
	struct Feqs_lobbed_projectile_data                 ShinyInfo;                                                // 0x0B50(0x00C0) (Edit, BlueprintVisible)
	class UEnvQuery*                                   ShinyEQS;                                                 // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FEnvNamedValue>                      ShinyQueryParameters;                                     // 0x0C18(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass fauna_harvestable_bp.fauna_harvestable_bp_C");
		return ptr;
	}


	void EnableHighlightForDuration(float Duration, bool* Output);
	void SetGrantItemID(const class FString& GatherID, bool* Output);
	void ModifyEQSGameplaySpawnPosPreCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& InitialStartPosition, const struct FVector& InitialTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewStartPosition, bool* ModifiedPosition);
	void ModifyEQSGameplaySpawnPosPostCalc(const struct Feqs_spawn_query& EQSSpawnQuery, const struct FVector& StartPosition, const struct FVector& FinalTargetPosition, class AActor* PossiblyNullTargetActor, struct FVector* NewPosition, bool* ModifiedPosition);
	void ModifyEQSGameplayData(const struct Feqs_spawn_query& EQSSpawnQuery, struct Feqs_spawn_query* NewEQSSpawnQuery, bool* ModifiedData);
	void OnRep_Used();
	void GetMesh(class USkeletalMeshComponent** SkeletalMesh);
	void GetFallbackProjectileSpawnOffset(struct FVector* Offset);
	void UserConstructionScript();
	void ReceivedArchonAbilityDamage(float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo);
	void ReceiveBeginPlay();
	void EQSActorSpawned(class AActor* Actor, const struct FGuid& Guid);
	void SetLocoState(TEnumAsByte<Efauna_loco_state_enum>* NewState);
	void EQSProjectileSpawned(class Aprojectile_base_bp_C* Projectile, const struct FVector& ProjectileTarget, const struct FGuid& Guid);
	void SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime);
	void ExecuteUbergraph_fauna_harvestable_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
