// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ih_primed_ammo_shell_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ih_primed_ammo_shell_ab.ih_primed_ammo_shell_ab_C.EventReceived_6222CCCF45E36BAB149D5E95C01399AB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uih_primed_ammo_shell_ab_C::EventReceived_6222CCCF45E36BAB149D5E95C01399AB(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_primed_ammo_shell_ab.ih_primed_ammo_shell_ab_C.EventReceived_6222CCCF45E36BAB149D5E95C01399AB");

	Uih_primed_ammo_shell_ab_C_EventReceived_6222CCCF45E36BAB149D5E95C01399AB_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ih_primed_ammo_shell_ab.ih_primed_ammo_shell_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Uih_primed_ammo_shell_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_primed_ammo_shell_ab.ih_primed_ammo_shell_ab_C.K2_ActivateAbility");

	Uih_primed_ammo_shell_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ih_primed_ammo_shell_ab.ih_primed_ammo_shell_ab_C.ExecuteUbergraph_ih_primed_ammo_shell_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uih_primed_ammo_shell_ab_C::ExecuteUbergraph_ih_primed_ammo_shell_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_primed_ammo_shell_ab.ih_primed_ammo_shell_ab_C.ExecuteUbergraph_ih_primed_ammo_shell_ab");

	Uih_primed_ammo_shell_ab_C_ExecuteUbergraph_ih_primed_ammo_shell_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
