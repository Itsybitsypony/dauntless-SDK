// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_sturdy_2items_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.EventReceived_1C54E10D4FE4249B2ED174A236E6FA26
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ukeyword_sturdy_2items_ab_C::EventReceived_1C54E10D4FE4249B2ED174A236E6FA26(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.EventReceived_1C54E10D4FE4249B2ED174A236E6FA26");

	Ukeyword_sturdy_2items_ab_C_EventReceived_1C54E10D4FE4249B2ED174A236E6FA26_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_sturdy_2items_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.K2_ActivateAbility");

	Ukeyword_sturdy_2items_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.ApplyEffects
// (BlueprintCallable, BlueprintEvent)

void Ukeyword_sturdy_2items_ab_C::ApplyEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.ApplyEffects");

	Ukeyword_sturdy_2items_ab_C_ApplyEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.ResistStaggerFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Ukeyword_sturdy_2items_ab_C::ResistStaggerFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.ResistStaggerFX");

	Ukeyword_sturdy_2items_ab_C_ResistStaggerFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.ExecuteUbergraph_keyword_sturdy_2items_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_sturdy_2items_ab_C::ExecuteUbergraph_keyword_sturdy_2items_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_sturdy_2items_ab.keyword_sturdy_2items_ab_C.ExecuteUbergraph_keyword_sturdy_2items_ab");

	Ukeyword_sturdy_2items_ab_C_ExecuteUbergraph_keyword_sturdy_2items_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
