// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_attack_speed_low_health_buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.HandleEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aattack_speed_low_health_buff_C::HandleEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.HandleEffects");

	Aattack_speed_low_health_buff_C_HandleEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aattack_speed_low_health_buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.UserConstructionScript");

	Aattack_speed_low_health_buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.OnAdded
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Aattack_speed_low_health_buff_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.OnAdded");

	Aattack_speed_low_health_buff_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.OnGameplayEventTriggered
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Aattack_speed_low_health_buff_C::OnGameplayEventTriggered(struct FGameplayEventData* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.OnGameplayEventTriggered");

	Aattack_speed_low_health_buff_C_OnGameplayEventTriggered_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Aattack_speed_low_health_buff_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.ReceiveDestroyed");

	Aattack_speed_low_health_buff_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.ExecuteUbergraph_attack_speed_low_health_buff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aattack_speed_low_health_buff_C::ExecuteUbergraph_attack_speed_low_health_buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function attack_speed_low_health_buff.attack_speed_low_health_buff_C.ExecuteUbergraph_attack_speed_low_health_buff");

	Aattack_speed_low_health_buff_C_ExecuteUbergraph_attack_speed_low_health_buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
