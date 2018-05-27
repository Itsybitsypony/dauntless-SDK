// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_quest_objective_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_quest_objective.bpw_debug_quest_objective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_debug_quest_objective_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_objective.bpw_debug_quest_objective_C.Construct");

	Ubpw_debug_quest_objective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_objective.bpw_debug_quest_objective_C.ExecuteUbergraph_bpw_debug_quest_objective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_objective_C::ExecuteUbergraph_bpw_debug_quest_objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_objective.bpw_debug_quest_objective_C.ExecuteUbergraph_bpw_debug_quest_objective");

	Ubpw_debug_quest_objective_C_ExecuteUbergraph_bpw_debug_quest_objective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
