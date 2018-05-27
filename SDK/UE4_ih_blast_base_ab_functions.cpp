// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ih_blast_base_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ih_blast_base_ab.ih_blast_base_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Uih_blast_base_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_base_ab.ih_blast_base_ab_C.K2_ActivateAbility");

	Uih_blast_base_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ih_blast_base_ab.ih_blast_base_ab_C.ExecuteUbergraph_ih_blast_base_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uih_blast_base_ab_C::ExecuteUbergraph_ih_blast_base_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_base_ab.ih_blast_base_ab_C.ExecuteUbergraph_ih_blast_base_ab");

	Uih_blast_base_ab_C_ExecuteUbergraph_ih_blast_base_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
