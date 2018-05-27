// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_berserk_2items_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_berserk_2items_ab.keyword_berserk_2items_ab_C.EventReceived_9FA3DFA94041DD211047F6B93E969D6A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ukeyword_berserk_2items_ab_C::EventReceived_9FA3DFA94041DD211047F6B93E969D6A(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_berserk_2items_ab.keyword_berserk_2items_ab_C.EventReceived_9FA3DFA94041DD211047F6B93E969D6A");

	Ukeyword_berserk_2items_ab_C_EventReceived_9FA3DFA94041DD211047F6B93E969D6A_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_berserk_2items_ab.keyword_berserk_2items_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_berserk_2items_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_berserk_2items_ab.keyword_berserk_2items_ab_C.K2_ActivateAbility");

	Ukeyword_berserk_2items_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_berserk_2items_ab.keyword_berserk_2items_ab_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_berserk_2items_ab_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_berserk_2items_ab.keyword_berserk_2items_ab_C.K2_OnEndAbility");

	Ukeyword_berserk_2items_ab_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_berserk_2items_ab.keyword_berserk_2items_ab_C.ExecuteUbergraph_keyword_berserk_2items_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_berserk_2items_ab_C::ExecuteUbergraph_keyword_berserk_2items_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_berserk_2items_ab.keyword_berserk_2items_ab_C.ExecuteUbergraph_keyword_berserk_2items_ab");

	Ukeyword_berserk_2items_ab_C_ExecuteUbergraph_keyword_berserk_2items_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
