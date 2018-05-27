#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_shiny_drop_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass shiny_drop_base_bp.shiny_drop_base_bp_C
// 0x0089 (0x06F1 - 0x0668)
class Ashiny_drop_base_bp_C : public Alobbed_projectile_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0668(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            InteractionCallout;                                       // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_interactioncode_component_C*           InteractionComponent;                                     // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           PlayerCollider;                                           // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      LootItemID;                                               // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               GrantImmediately;                                         // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	TArray<class AActor*>                              DisallowedActors;                                         // 0x06A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               DestroyOnPickup;                                          // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06B9(0x0003) MISSED OFFSET
	float                                              LifeTime;                                                 // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fplayer_loot_instance>               PlayerLootInstances;                                      // 0x06C0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	EItemRarityLevelType                               LocalRarity;                                              // 0x06D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ShinyObjectMaterialInstance;                              // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APlayerState*>                        PlayerStatesWithLootAvailable;                            // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TEnumAsByte<Eloot_condition_type>                  LootCondition;                                            // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass shiny_drop_base_bp.shiny_drop_base_bp_C");
		return ptr;
	}


	void EnableHighlightForDuration(float Duration, bool* Output);
	void SetGrantItemID(const class FString& GatherID, bool* Output);
	void SetLocalRarity(EItemRarityLevelType NewLocalRarity);
	void OnRep_PlayerLootInstances();
	void AuthSetPlayerLootInstances(TArray<struct Fplayer_loot_instance>* NewPlayerLootInstances);
	void GrantItem(class AActor* Player);
	void UserConstructionScript();
	void SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime);
	void ReceiveBeginPlay();
	void BndEvt__PlayerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void InteractComplete(class UArchonInteractionUserComponent* User);
	void OnProjectileStopped();
	void DisableShiny();
	void CleanUpSoonSinceWeHaveNoLootToGiveAnymore();
	void ExecuteUbergraph_shiny_drop_base_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
