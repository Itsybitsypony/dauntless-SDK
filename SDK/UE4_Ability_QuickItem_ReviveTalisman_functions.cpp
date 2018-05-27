// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_ReviveTalisman_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_QuickItem_ReviveTalisman.Ability_QuickItem_ReviveTalisman_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UAbility_QuickItem_ReviveTalisman_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_ReviveTalisman.Ability_QuickItem_ReviveTalisman_C.K2_ActivateAbility");

	UAbility_QuickItem_ReviveTalisman_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_QuickItem_ReviveTalisman.Ability_QuickItem_ReviveTalisman_C.ExecuteUbergraph_Ability_QuickItem_ReviveTalisman
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_QuickItem_ReviveTalisman_C::ExecuteUbergraph_Ability_QuickItem_ReviveTalisman(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_QuickItem_ReviveTalisman.Ability_QuickItem_ReviveTalisman_C.ExecuteUbergraph_Ability_QuickItem_ReviveTalisman");

	UAbility_QuickItem_ReviveTalisman_C_ExecuteUbergraph_Ability_QuickItem_ReviveTalisman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
