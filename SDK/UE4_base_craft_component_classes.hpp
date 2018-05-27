#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_craft_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_craft_component.base_craft_component_C
// 0x0000 (0x03E0 - 0x03E0)
class Ubase_craft_component_C : public UArchonCraftComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_craft_component.base_craft_component_C");
		return ptr;
	}


	void GetAvalableInventoryRecipes(const class FString& Tag, TArray<class UArchonInventoryItem_Recipe*>* Recipes);
	void IsCraftingPossible(bool* Result);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
