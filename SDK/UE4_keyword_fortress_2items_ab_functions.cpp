// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_fortress_2items_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.DamageReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_fortress_2items_ab_C::DamageReceived(float Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.DamageReceived");

	Ukeyword_fortress_2items_ab_C_DamageReceived_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.SetShieldStrength
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewShield                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_fortress_2items_ab_C::SetShieldStrength(float NewShield)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.SetShieldStrength");

	Ukeyword_fortress_2items_ab_C_SetShieldStrength_Params params;
	params.NewShield = NewShield;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.EventReceived_42FC45474A30EC94BDC83CAAEB0DD5D1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ukeyword_fortress_2items_ab_C::EventReceived_42FC45474A30EC94BDC83CAAEB0DD5D1(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.EventReceived_42FC45474A30EC94BDC83CAAEB0DD5D1");

	Ukeyword_fortress_2items_ab_C_EventReceived_42FC45474A30EC94BDC83CAAEB0DD5D1_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_fortress_2items_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.K2_ActivateAbility");

	Ukeyword_fortress_2items_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void Ukeyword_fortress_2items_ab_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.K2_OnEndAbility");

	Ukeyword_fortress_2items_ab_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.ExecuteUbergraph_keyword_fortress_2items_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukeyword_fortress_2items_ab_C::ExecuteUbergraph_keyword_fortress_2items_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function keyword_fortress_2items_ab.keyword_fortress_2items_ab_C.ExecuteUbergraph_keyword_fortress_2items_ab");

	Ukeyword_fortress_2items_ab_C_ExecuteUbergraph_keyword_fortress_2items_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
