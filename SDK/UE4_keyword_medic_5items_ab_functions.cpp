// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_medic_5items_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_medic_5items_ab.keyword_medic_5items_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_medic_5items_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_medic_5items_ab.keyword_medic_5items_ab_C.K2_ActivateAbility");

	Ukeyword_medic_5items_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_medic_5items_ab.keyword_medic_5items_ab_C.ExecuteUbergraph_keyword_medic_5items_ab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_medic_5items_ab_C::ExecuteUbergraph_keyword_medic_5items_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_medic_5items_ab.keyword_medic_5items_ab_C.ExecuteUbergraph_keyword_medic_5items_ab");

	Ukeyword_medic_5items_ab_C_ExecuteUbergraph_keyword_medic_5items_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
