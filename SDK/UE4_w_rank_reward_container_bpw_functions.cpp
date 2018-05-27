// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_rank_reward_container_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_rank_reward_container_bpw.w_rank_reward_container_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_rank_reward_container_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_rank_reward_container_bpw.w_rank_reward_container_bpw_C.Construct");

	Uw_rank_reward_container_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_rank_reward_container_bpw.w_rank_reward_container_bpw_C.ExecuteUbergraph_w_rank_reward_container_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_rank_reward_container_bpw_C::ExecuteUbergraph_w_rank_reward_container_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_rank_reward_container_bpw.w_rank_reward_container_bpw_C.ExecuteUbergraph_w_rank_reward_container_bpw");

	Uw_rank_reward_container_bpw_C_ExecuteUbergraph_w_rank_reward_container_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
