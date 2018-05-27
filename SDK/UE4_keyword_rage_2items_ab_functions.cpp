// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_rage_2items_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_rage_2items_ab.keyword_rage_2items_ab_C.EventReceived_5788E0854BA5935E11D8BC9EB12CC424
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ukeyword_rage_2items_ab_C::EventReceived_5788E0854BA5935E11D8BC9EB12CC424(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_rage_2items_ab.keyword_rage_2items_ab_C.EventReceived_5788E0854BA5935E11D8BC9EB12CC424");

	Ukeyword_rage_2items_ab_C_EventReceived_5788E0854BA5935E11D8BC9EB12CC424_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_rage_2items_ab.keyword_rage_2items_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_rage_2items_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_rage_2items_ab.keyword_rage_2items_ab_C.K2_ActivateAbility");

	Ukeyword_rage_2items_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_rage_2items_ab.keyword_rage_2items_ab_C.ExecuteUbergraph_keyword_rage_2items_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_rage_2items_ab_C::ExecuteUbergraph_keyword_rage_2items_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_rage_2items_ab.keyword_rage_2items_ab_C.ExecuteUbergraph_keyword_rage_2items_ab");

	Ukeyword_rage_2items_ab_C_ExecuteUbergraph_keyword_rage_2items_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
