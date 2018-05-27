#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_shiny_drop_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.EnableHighlightForDuration
struct Ashiny_drop_base_bp_C_EnableHighlightForDuration_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.SetGrantItemID
struct Ashiny_drop_base_bp_C_SetGrantItemID_Params
{
	class FString                                      GatherID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.SetLocalRarity
struct Ashiny_drop_base_bp_C_SetLocalRarity_Params
{
	EItemRarityLevelType                               NewLocalRarity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.OnRep_PlayerLootInstances
struct Ashiny_drop_base_bp_C_OnRep_PlayerLootInstances_Params
{
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.AuthSetPlayerLootInstances
struct Ashiny_drop_base_bp_C_AuthSetPlayerLootInstances_Params
{
	TArray<struct Fplayer_loot_instance>               NewPlayerLootInstances;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.GrantItem
struct Ashiny_drop_base_bp_C_GrantItem_Params
{
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.UserConstructionScript
struct Ashiny_drop_base_bp_C_UserConstructionScript_Params
{
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.SpawnShinyLoot
struct Ashiny_drop_base_bp_C_SpawnShinyLoot_Params
{
	struct FName                                       LootID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Feqs_lobbed_projectile_data                 ShinyInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   ShinyEQS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.ReceiveBeginPlay
struct Ashiny_drop_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.BndEvt__PlayerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct Ashiny_drop_base_bp_C_BndEvt__PlayerCollider_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.InteractComplete
struct Ashiny_drop_base_bp_C_InteractComplete_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.OnProjectileStopped
struct Ashiny_drop_base_bp_C_OnProjectileStopped_Params
{
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.DisableShiny
struct Ashiny_drop_base_bp_C_DisableShiny_Params
{
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.CleanUpSoonSinceWeHaveNoLootToGiveAnymore
struct Ashiny_drop_base_bp_C_CleanUpSoonSinceWeHaveNoLootToGiveAnymore_Params
{
};

// Function shiny_drop_base_bp.shiny_drop_base_bp_C.ExecuteUbergraph_shiny_drop_base_bp
struct Ashiny_drop_base_bp_C_ExecuteUbergraph_shiny_drop_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
