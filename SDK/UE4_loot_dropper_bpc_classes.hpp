#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loot_dropper_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass loot_dropper_bpc.loot_dropper_bpc_C
// 0x0038 (0x0208 - 0x01D0)
class Uloot_dropper_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	class Ueqs_gameplay_bpc_C*                         eqs_gameplay_bpc;                                         // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fshiny_drop_queue_data>              ShinyDropQueue;                                           // 0x01E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UDataTable*                                  ConditionalDropTable;                                     // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      L_BehemothPrefix;                                         // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass loot_dropper_bpc.loot_dropper_bpc_C");
		return ptr;
	}


	void GetIndexOfLootInstanceForPlayer(class APlayerState* PlayerState, TArray<struct Fplayer_loot_instance>* LootInstances, int* Index);
	void GetMaxRarity(TArray<struct FGiveItemInfo>* Items, EItemRarityLevelType* MaxRarity);
	void CreateLootForActivePlayers(const struct FName& LootID, EItemRarityLevelType HideAndAutoGrantIfBelowThisRarity, TEnumAsByte<Ebehemoth_bodypart_type> BrokenBodyPart, TArray<struct Fplayer_loot_instance>* LootInstances);
	void AuthTrySpawnShiny(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime, EItemRarityLevelType MinRarityToSpawnShiny, TEnumAsByte<Ebehemoth_bodypart_type> BodyPartType);
	void ReceiveBeginPlay();
	void OnSpawnedProjectile_Event_1(class Aprojectile_base_bp_C* Projectile, const struct FVector& Target, const struct FGuid& Guid);
	void ExecuteUbergraph_loot_dropper_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
