// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_sturdy_4items_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_sturdy_4items_ab.keyword_sturdy_4items_ab_C.ApplyEffects
// (BlueprintCallable, BlueprintEvent)

void Ukeyword_sturdy_4items_ab_C::ApplyEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_sturdy_4items_ab.keyword_sturdy_4items_ab_C.ApplyEffects");

	Ukeyword_sturdy_4items_ab_C_ApplyEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_sturdy_4items_ab.keyword_sturdy_4items_ab_C.ExecuteUbergraph_keyword_sturdy_4items_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_sturdy_4items_ab_C::ExecuteUbergraph_keyword_sturdy_4items_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_sturdy_4items_ab.keyword_sturdy_4items_ab_C.ExecuteUbergraph_keyword_sturdy_4items_ab");

	Ukeyword_sturdy_4items_ab_C_ExecuteUbergraph_keyword_sturdy_4items_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
