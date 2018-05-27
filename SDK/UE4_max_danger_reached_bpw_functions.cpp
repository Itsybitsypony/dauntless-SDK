// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_max_danger_reached_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function max_danger_reached_bpw.max_danger_reached_bpw_C.Get_Crew Lives Remaining_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Umax_danger_reached_bpw_C::Get_Crew_Lives_Remaining_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function max_danger_reached_bpw.max_danger_reached_bpw_C.Get_Crew Lives Remaining_Text_1");

	Umax_danger_reached_bpw_C_Get_Crew_Lives_Remaining_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function max_danger_reached_bpw.max_danger_reached_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Umax_danger_reached_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function max_danger_reached_bpw.max_danger_reached_bpw_C.Construct");

	Umax_danger_reached_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function max_danger_reached_bpw.max_danger_reached_bpw_C.ExecuteUbergraph_max_danger_reached_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umax_danger_reached_bpw_C::ExecuteUbergraph_max_danger_reached_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function max_danger_reached_bpw.max_danger_reached_bpw_C.ExecuteUbergraph_max_danger_reached_bpw");

	Umax_danger_reached_bpw_C_ExecuteUbergraph_max_danger_reached_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
