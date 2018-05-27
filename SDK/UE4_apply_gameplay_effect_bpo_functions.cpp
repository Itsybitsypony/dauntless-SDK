// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_apply_gameplay_effect_bpo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function apply_gameplay_effect_bpo.apply_gameplay_effect_bpo_C.OnStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FArchonGameplayOperationArgs* Args                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uapply_gameplay_effect_bpo_C::OnStart(struct FArchonGameplayOperationArgs* Args)
{
	static auto fn = UObject::FindObject<UFunction>("Function apply_gameplay_effect_bpo.apply_gameplay_effect_bpo_C.OnStart");

	Uapply_gameplay_effect_bpo_C_OnStart_Params params;
	params.Args = Args;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function apply_gameplay_effect_bpo.apply_gameplay_effect_bpo_C.ExecuteUbergraph_apply_gameplay_effect_bpo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uapply_gameplay_effect_bpo_C::ExecuteUbergraph_apply_gameplay_effect_bpo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function apply_gameplay_effect_bpo.apply_gameplay_effect_bpo_C.ExecuteUbergraph_apply_gameplay_effect_bpo");

	Uapply_gameplay_effect_bpo_C_ExecuteUbergraph_apply_gameplay_effect_bpo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
