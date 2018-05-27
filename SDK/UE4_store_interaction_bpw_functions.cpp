// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_store_interaction_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function store_interaction_bpw.store_interaction_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ustore_interaction_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function store_interaction_bpw.store_interaction_bpw_C.Construct");

	Ustore_interaction_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function store_interaction_bpw.store_interaction_bpw_C.RemoveThisWidget
// (BlueprintCallable, BlueprintEvent)

void Ustore_interaction_bpw_C::RemoveThisWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function store_interaction_bpw.store_interaction_bpw_C.RemoveThisWidget");

	Ustore_interaction_bpw_C_RemoveThisWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function store_interaction_bpw.store_interaction_bpw_C.ExecuteUbergraph_store_interaction_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustore_interaction_bpw_C::ExecuteUbergraph_store_interaction_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function store_interaction_bpw.store_interaction_bpw_C.ExecuteUbergraph_store_interaction_bpw");

	Ustore_interaction_bpw_C_ExecuteUbergraph_store_interaction_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
