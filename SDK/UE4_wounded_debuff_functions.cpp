// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_wounded_debuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wounded_debuff.wounded_debuff_C.GetInitialMitigatedDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Awounded_debuff_C::GetInitialMitigatedDuration(float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.GetInitialMitigatedDuration");

	Awounded_debuff_C_GetInitialMitigatedDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function wounded_debuff.wounded_debuff_C.InitializeMovementCheckArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Awounded_debuff_C::InitializeMovementCheckArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.InitializeMovementCheckArray");

	Awounded_debuff_C_InitializeMovementCheckArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.CheckMovementOverTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasMoved                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Awounded_debuff_C::CheckMovementOverTime(bool* HasMoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.CheckMovementOverTime");

	Awounded_debuff_C_CheckMovementOverTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasMoved != nullptr)
		*HasMoved = params.HasMoved;
}


// Function wounded_debuff.wounded_debuff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awounded_debuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.UserConstructionScript");

	Awounded_debuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void Awounded_debuff_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.Timeline_0__FinishedFunc");

	Awounded_debuff_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void Awounded_debuff_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.Timeline_0__UpdateFunc");

	Awounded_debuff_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.OnGameplayEventTriggered
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Awounded_debuff_C::OnGameplayEventTriggered(struct FGameplayEventData* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.OnGameplayEventTriggered");

	Awounded_debuff_C_OnGameplayEventTriggered_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.MulticastPlayWoundedEffects
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Awounded_debuff_C::MulticastPlayWoundedEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.MulticastPlayWoundedEffects");

	Awounded_debuff_C_MulticastPlayWoundedEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.OnAdded
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Awounded_debuff_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.OnAdded");

	Awounded_debuff_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.OnGameplayEffectRemoved
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Awounded_debuff_C::OnGameplayEffectRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.OnGameplayEffectRemoved");

	Awounded_debuff_C_OnGameplayEffectRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.AuthCheckMovement
// (BlueprintCallable, BlueprintEvent)

void Awounded_debuff_C::AuthCheckMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.AuthCheckMovement");

	Awounded_debuff_C_AuthCheckMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Awounded_debuff_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.ReceiveDestroyed");

	Awounded_debuff_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wounded_debuff.wounded_debuff_C.ExecuteUbergraph_wounded_debuff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Awounded_debuff_C::ExecuteUbergraph_wounded_debuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wounded_debuff.wounded_debuff_C.ExecuteUbergraph_wounded_debuff");

	Awounded_debuff_C_ExecuteUbergraph_wounded_debuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
