// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bleedout_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bleedout_ab.bleedout_ab_C.EventReceived_43784A084ABB1A0B658EADACBDE45AC7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubleedout_ab_C::EventReceived_43784A084ABB1A0B658EADACBDE45AC7(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function bleedout_ab.bleedout_ab_C.EventReceived_43784A084ABB1A0B658EADACBDE45AC7");

	Ubleedout_ab_C_EventReceived_43784A084ABB1A0B658EADACBDE45AC7_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bleedout_ab.bleedout_ab_C.OnCancelled_6764EC5047F88D2849F3AA973992F96F
// (BlueprintCallable, BlueprintEvent)

void Ubleedout_ab_C::OnCancelled_6764EC5047F88D2849F3AA973992F96F()
{
	static auto fn = UObject::FindObject<UFunction>("Function bleedout_ab.bleedout_ab_C.OnCancelled_6764EC5047F88D2849F3AA973992F96F");

	Ubleedout_ab_C_OnCancelled_6764EC5047F88D2849F3AA973992F96F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bleedout_ab.bleedout_ab_C.OnInterrupted_6764EC5047F88D2849F3AA973992F96F
// (BlueprintCallable, BlueprintEvent)

void Ubleedout_ab_C::OnInterrupted_6764EC5047F88D2849F3AA973992F96F()
{
	static auto fn = UObject::FindObject<UFunction>("Function bleedout_ab.bleedout_ab_C.OnInterrupted_6764EC5047F88D2849F3AA973992F96F");

	Ubleedout_ab_C_OnInterrupted_6764EC5047F88D2849F3AA973992F96F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bleedout_ab.bleedout_ab_C.OnBlendOut_6764EC5047F88D2849F3AA973992F96F
// (BlueprintCallable, BlueprintEvent)

void Ubleedout_ab_C::OnBlendOut_6764EC5047F88D2849F3AA973992F96F()
{
	static auto fn = UObject::FindObject<UFunction>("Function bleedout_ab.bleedout_ab_C.OnBlendOut_6764EC5047F88D2849F3AA973992F96F");

	Ubleedout_ab_C_OnBlendOut_6764EC5047F88D2849F3AA973992F96F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bleedout_ab.bleedout_ab_C.OnCompleted_6764EC5047F88D2849F3AA973992F96F
// (BlueprintCallable, BlueprintEvent)

void Ubleedout_ab_C::OnCompleted_6764EC5047F88D2849F3AA973992F96F()
{
	static auto fn = UObject::FindObject<UFunction>("Function bleedout_ab.bleedout_ab_C.OnCompleted_6764EC5047F88D2849F3AA973992F96F");

	Ubleedout_ab_C_OnCompleted_6764EC5047F88D2849F3AA973992F96F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bleedout_ab.bleedout_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ubleedout_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function bleedout_ab.bleedout_ab_C.K2_ActivateAbility");

	Ubleedout_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bleedout_ab.bleedout_ab_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void Ubleedout_ab_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function bleedout_ab.bleedout_ab_C.K2_OnEndAbility");

	Ubleedout_ab_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bleedout_ab.bleedout_ab_C.ExecuteUbergraph_bleedout_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubleedout_ab_C::ExecuteUbergraph_bleedout_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bleedout_ab.bleedout_ab_C.ExecuteUbergraph_bleedout_ab");

	Ubleedout_ab_C_ExecuteUbergraph_bleedout_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
