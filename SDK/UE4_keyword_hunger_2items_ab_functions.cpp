// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_hunger_2items_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.IsBelowHealthThreshold
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ukeyword_hunger_2items_ab_C::IsBelowHealthThreshold(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.IsBelowHealthThreshold");

	Ukeyword_hunger_2items_ab_C_IsBelowHealthThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.EventReceived_F008A7394276CBF053F158A69C525A84
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ukeyword_hunger_2items_ab_C::EventReceived_F008A7394276CBF053F158A69C525A84(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.EventReceived_F008A7394276CBF053F158A69C525A84");

	Ukeyword_hunger_2items_ab_C_EventReceived_F008A7394276CBF053F158A69C525A84_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.EventReceived_55A03C8B44A091BB2D74D589A21DC5DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ukeyword_hunger_2items_ab_C::EventReceived_55A03C8B44A091BB2D74D589A21DC5DC(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.EventReceived_55A03C8B44A091BB2D74D589A21DC5DC");

	Ukeyword_hunger_2items_ab_C_EventReceived_55A03C8B44A091BB2D74D589A21DC5DC_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_hunger_2items_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.K2_ActivateAbility");

	Ukeyword_hunger_2items_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.ExecuteUbergraph_keyword_hunger_2items_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_hunger_2items_ab_C::ExecuteUbergraph_keyword_hunger_2items_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_hunger_2items_ab.keyword_hunger_2items_ab_C.ExecuteUbergraph_keyword_hunger_2items_ab");

	Ukeyword_hunger_2items_ab_C_ExecuteUbergraph_keyword_hunger_2items_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
