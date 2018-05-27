// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_quest_rewards_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_quest_rewards.bpw_debug_quest_rewards_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_debug_quest_rewards_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_rewards.bpw_debug_quest_rewards_C.Construct");

	Ubpw_debug_quest_rewards_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_rewards.bpw_debug_quest_rewards_C.ExecuteUbergraph_bpw_debug_quest_rewards
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_rewards_C::ExecuteUbergraph_bpw_debug_quest_rewards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_rewards.bpw_debug_quest_rewards_C.ExecuteUbergraph_bpw_debug_quest_rewards");

	Ubpw_debug_quest_rewards_C_ExecuteUbergraph_bpw_debug_quest_rewards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
