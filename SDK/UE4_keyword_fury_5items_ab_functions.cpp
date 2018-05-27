// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_fury_5items_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_fury_5items_ab.keyword_fury_5items_ab_C.ApplyOnDamageGivenEffect
// (BlueprintCallable, BlueprintEvent)

void Ukeyword_fury_5items_ab_C::ApplyOnDamageGivenEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_fury_5items_ab.keyword_fury_5items_ab_C.ApplyOnDamageGivenEffect");

	Ukeyword_fury_5items_ab_C_ApplyOnDamageGivenEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_fury_5items_ab.keyword_fury_5items_ab_C.ExecuteUbergraph_keyword_fury_5items_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_fury_5items_ab_C::ExecuteUbergraph_keyword_fury_5items_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_fury_5items_ab.keyword_fury_5items_ab_C.ExecuteUbergraph_keyword_fury_5items_ab");

	Ukeyword_fury_5items_ab_C_ExecuteUbergraph_keyword_fury_5items_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
