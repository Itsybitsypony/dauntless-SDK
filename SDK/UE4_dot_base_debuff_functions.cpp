// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dot_base_debuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dot_base_debuff.dot_base_debuff_C.UpdateEffectTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adot_base_debuff_C::UpdateEffectTime(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.UpdateEffectTime");

	Adot_base_debuff_C_UpdateEffectTime_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_base_debuff.dot_base_debuff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Adot_base_debuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.UserConstructionScript");

	Adot_base_debuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_base_debuff.dot_base_debuff_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adot_base_debuff_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.ReceiveTick");

	Adot_base_debuff_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_base_debuff.dot_base_debuff_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Adot_base_debuff_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.ReceiveDestroyed");

	Adot_base_debuff_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_base_debuff.dot_base_debuff_C.OnAdded
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Adot_base_debuff_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.OnAdded");

	Adot_base_debuff_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_base_debuff.dot_base_debuff_C.AuthDoDamage
// (BlueprintCallable, BlueprintEvent)

void Adot_base_debuff_C::AuthDoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.AuthDoDamage");

	Adot_base_debuff_C_AuthDoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_base_debuff.dot_base_debuff_C.MulticastOnAdded
// (Event, Public, BlueprintEvent)

void Adot_base_debuff_C::MulticastOnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.MulticastOnAdded");

	Adot_base_debuff_C_MulticastOnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_base_debuff.dot_base_debuff_C.MulticastCombatText
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adot_base_debuff_C::MulticastCombatText(float DamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.MulticastCombatText");

	Adot_base_debuff_C_MulticastCombatText_Params params;
	params.DamageAmount = DamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_base_debuff.dot_base_debuff_C.ExecuteUbergraph_dot_base_debuff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adot_base_debuff_C::ExecuteUbergraph_dot_base_debuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_base_debuff.dot_base_debuff_C.ExecuteUbergraph_dot_base_debuff");

	Adot_base_debuff_C_ExecuteUbergraph_dot_base_debuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
