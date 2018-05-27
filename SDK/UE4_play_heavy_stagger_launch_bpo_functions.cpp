// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_play_heavy_stagger_launch_bpo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function play_heavy_stagger_launch_bpo.play_heavy_stagger_launch_bpo_C.OnTick
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FArchonGameplayOperationArgs* Args                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uplay_heavy_stagger_launch_bpo_C::OnTick(struct FArchonGameplayOperationArgs* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_heavy_stagger_launch_bpo.play_heavy_stagger_launch_bpo_C.OnTick");

	Uplay_heavy_stagger_launch_bpo_C_OnTick_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function play_heavy_stagger_launch_bpo.play_heavy_stagger_launch_bpo_C.ExecuteUbergraph_play_heavy_stagger_launch_bpo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplay_heavy_stagger_launch_bpo_C::ExecuteUbergraph_play_heavy_stagger_launch_bpo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function play_heavy_stagger_launch_bpo.play_heavy_stagger_launch_bpo_C.ExecuteUbergraph_play_heavy_stagger_launch_bpo");

	Uplay_heavy_stagger_launch_bpo_C_ExecuteUbergraph_play_heavy_stagger_launch_bpo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
