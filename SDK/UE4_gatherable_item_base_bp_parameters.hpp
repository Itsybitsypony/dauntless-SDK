#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_item_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.SetGrantItemID
struct Agatherable_item_base_bp_C_SetGrantItemID_Params
{
	class FString                                      GatherID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.EnableHighlightForDuration
struct Agatherable_item_base_bp_C_EnableHighlightForDuration_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.UserConstructionScript
struct Agatherable_item_base_bp_C_UserConstructionScript_Params
{
};

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.SpawnShinyLoot
struct Agatherable_item_base_bp_C_SpawnShinyLoot_Params
{
	struct FName                                       LootID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Feqs_lobbed_projectile_data                 ShinyInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UEnvQuery*                                   ShinyEQS;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.OnUserCompletedInteraction
struct Agatherable_item_base_bp_C_OnUserCompletedInteraction_Params
{
	class UArchonInteractionUserComponent**            User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.EventOnEnableHighlight
struct Agatherable_item_base_bp_C_EventOnEnableHighlight_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.EventOnDisableHighlight
struct Agatherable_item_base_bp_C_EventOnDisableHighlight_Params
{
};

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.SwapMesh
struct Agatherable_item_base_bp_C_SwapMesh_Params
{
};

// Function gatherable_item_base_bp.gatherable_item_base_bp_C.ExecuteUbergraph_gatherable_item_base_bp
struct Agatherable_item_base_bp_C_ExecuteUbergraph_gatherable_item_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
