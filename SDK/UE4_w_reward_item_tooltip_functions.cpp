// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_reward_item_tooltip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_reward_item_tooltip.w_reward_item_tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_reward_item_tooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_tooltip.w_reward_item_tooltip_C.Construct");

	Uw_reward_item_tooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reward_item_tooltip.w_reward_item_tooltip_C.ExecuteUbergraph_w_reward_item_tooltip
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reward_item_tooltip_C::ExecuteUbergraph_w_reward_item_tooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reward_item_tooltip.w_reward_item_tooltip_C.ExecuteUbergraph_w_reward_item_tooltip");

	Uw_reward_item_tooltip_C_ExecuteUbergraph_w_reward_item_tooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
