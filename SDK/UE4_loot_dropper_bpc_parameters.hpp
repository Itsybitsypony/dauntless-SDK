#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loot_dropper_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function loot_dropper_bpc.loot_dropper_bpc_C.GetIndexOfLootInstanceForPlayer
struct Uloot_dropper_bpc_C_GetIndexOfLootInstanceForPlayer_Params
{
	class APlayerState*                                PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fplayer_loot_instance>               LootInstances;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function loot_dropper_bpc.loot_dropper_bpc_C.GetMaxRarity
struct Uloot_dropper_bpc_C_GetMaxRarity_Params
{
	TArray<struct FGiveItemInfo>                       Items;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EItemRarityLevelType                               MaxRarity;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function loot_dropper_bpc.loot_dropper_bpc_C.CreateLootForActivePlayers
struct Uloot_dropper_bpc_C_CreateLootForActivePlayers_Params
{
	struct FName                                       LootID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               HideAndAutoGrantIfBelowThisRarity;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_bodypart_type>               BrokenBodyPart;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Fplayer_loot_instance>               LootInstances;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function loot_dropper_bpc.loot_dropper_bpc_C.AuthTrySpawnShiny
struct Uloot_dropper_bpc_C_AuthTrySpawnShiny_Params
{
	struct FName                                       LootID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Feqs_lobbed_projectile_data                 ShinyInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   ShinyEQS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               MinRarityToSpawnShiny;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_bodypart_type>               BodyPartType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loot_dropper_bpc.loot_dropper_bpc_C.ReceiveBeginPlay
struct Uloot_dropper_bpc_C_ReceiveBeginPlay_Params
{
};

// Function loot_dropper_bpc.loot_dropper_bpc_C.OnSpawnedProjectile_Event_1
struct Uloot_dropper_bpc_C_OnSpawnedProjectile_Event_1_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function loot_dropper_bpc.loot_dropper_bpc_C.ExecuteUbergraph_loot_dropper_bpc
struct Uloot_dropper_bpc_C_ExecuteUbergraph_loot_dropper_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
