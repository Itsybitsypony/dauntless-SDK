// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_challenge_objective_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_challenge_objective.w_challenge_objective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_challenge_objective_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_challenge_objective.w_challenge_objective_C.Construct");

	Uw_challenge_objective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_challenge_objective.w_challenge_objective_C.ExecuteUbergraph_w_challenge_objective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_challenge_objective_C::ExecuteUbergraph_w_challenge_objective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_challenge_objective.w_challenge_objective_C.ExecuteUbergraph_w_challenge_objective");

	Uw_challenge_objective_C_ExecuteUbergraph_w_challenge_objective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
