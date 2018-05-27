#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_craft_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_craft_component.base_craft_component_C.GetAvalableInventoryRecipes
struct Ubase_craft_component_C_GetAvalableInventoryRecipes_Params
{
	class FString                                      Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<class UArchonInventoryItem_Recipe*>         Recipes;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function base_craft_component.base_craft_component_C.IsCraftingPossible
struct Ubase_craft_component_C_IsCraftingPossible_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
