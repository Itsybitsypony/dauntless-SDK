// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_base_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_base_ab.keyword_base_ab_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_base_ab_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_base_ab.keyword_base_ab_C.K2_OnEndAbility");

	Ukeyword_base_ab_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_base_ab.keyword_base_ab_C.ExecuteUbergraph_keyword_base_ab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_base_ab_C::ExecuteUbergraph_keyword_base_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_base_ab.keyword_base_ab_C.ExecuteUbergraph_keyword_base_ab");

	Ukeyword_base_ab_C_ExecuteUbergraph_keyword_base_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
