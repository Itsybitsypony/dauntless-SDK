// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_craft_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_craft_component.base_craft_component_C.GetAvalableInventoryRecipes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<class UArchonInventoryItem_Recipe*> Recipes                        (Parm, OutParm, ZeroConstructor)

void Ubase_craft_component_C::GetAvalableInventoryRecipes(const class FString& Tag, TArray<class UArchonInventoryItem_Recipe*>* Recipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_craft_component.base_craft_component_C.GetAvalableInventoryRecipes");

	Ubase_craft_component_C_GetAvalableInventoryRecipes_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Recipes != nullptr)
		*Recipes = params.Recipes;
}


// Function base_craft_component.base_craft_component_C.IsCraftingPossible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubase_craft_component_C::IsCraftingPossible(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_craft_component.base_craft_component_C.IsCraftingPossible");

	Ubase_craft_component_C_IsCraftingPossible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
