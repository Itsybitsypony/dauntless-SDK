// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_all_players_critical_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function all_players_critical_bpw.all_players_critical_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uall_players_critical_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function all_players_critical_bpw.all_players_critical_bpw_C.Construct");

	Uall_players_critical_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function all_players_critical_bpw.all_players_critical_bpw_C.ExecuteUbergraph_all_players_critical_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uall_players_critical_bpw_C::ExecuteUbergraph_all_players_critical_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function all_players_critical_bpw.all_players_critical_bpw_C.ExecuteUbergraph_all_players_critical_bpw");

	Uall_players_critical_bpw_C_ExecuteUbergraph_all_players_critical_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
