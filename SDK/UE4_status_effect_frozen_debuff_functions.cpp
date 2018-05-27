// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_status_effect_frozen_debuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.StopFrozenAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void Astatus_effect_frozen_debuff_C::StopFrozenAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.StopFrozenAnimation");

	Astatus_effect_frozen_debuff_C_StopFrozenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Astatus_effect_frozen_debuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.UserConstructionScript");

	Astatus_effect_frozen_debuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.MulticastOnAdded
// (Event, Public, BlueprintEvent)

void Astatus_effect_frozen_debuff_C::MulticastOnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.MulticastOnAdded");

	Astatus_effect_frozen_debuff_C_MulticastOnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Astatus_effect_frozen_debuff_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveTick");

	Astatus_effect_frozen_debuff_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Astatus_effect_frozen_debuff_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveBeginPlay");

	Astatus_effect_frozen_debuff_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnRemoved
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Astatus_effect_frozen_debuff_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnRemoved");

	Astatus_effect_frozen_debuff_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Astatus_effect_frozen_debuff_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ReceiveDestroyed");

	Astatus_effect_frozen_debuff_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnGameplayEventTriggered
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Astatus_effect_frozen_debuff_C::OnGameplayEventTriggered(struct FGameplayEventData* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnGameplayEventTriggered");

	Astatus_effect_frozen_debuff_C_OnGameplayEventTriggered_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnDamageReceived
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonAbilityDamageInfo* DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Astatus_effect_frozen_debuff_C::OnDamageReceived(float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.OnDamageReceived");

	Astatus_effect_frozen_debuff_C_OnDamageReceived_Params params;
	params.DamageReceived = DamageReceived;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ExecuteUbergraph_status_effect_frozen_debuff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Astatus_effect_frozen_debuff_C::ExecuteUbergraph_status_effect_frozen_debuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_frozen_debuff.status_effect_frozen_debuff_C.ExecuteUbergraph_status_effect_frozen_debuff");

	Astatus_effect_frozen_debuff_C_ExecuteUbergraph_status_effect_frozen_debuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
