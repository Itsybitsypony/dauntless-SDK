// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_challenge_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_challenge_entry.w_challenge_entry_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_challenge_entry_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_challenge_entry.w_challenge_entry_C.Refresh");

	Uw_challenge_entry_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_challenge_entry.w_challenge_entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_challenge_entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_challenge_entry.w_challenge_entry_C.Construct");

	Uw_challenge_entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_challenge_entry.w_challenge_entry_C.ExecuteUbergraph_w_challenge_entry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_challenge_entry_C::ExecuteUbergraph_w_challenge_entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_challenge_entry.w_challenge_entry_C.ExecuteUbergraph_w_challenge_entry");

	Uw_challenge_entry_C_ExecuteUbergraph_w_challenge_entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
