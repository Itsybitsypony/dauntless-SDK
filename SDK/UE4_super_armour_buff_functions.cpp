// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_super_armour_buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function super_armour_buff.super_armour_buff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Asuper_armour_buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.UserConstructionScript");

	Asuper_armour_buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function super_armour_buff.super_armour_buff_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void Asuper_armour_buff_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.Timeline_2__FinishedFunc");

	Asuper_armour_buff_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function super_armour_buff.super_armour_buff_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void Asuper_armour_buff_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.Timeline_2__UpdateFunc");

	Asuper_armour_buff_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function super_armour_buff.super_armour_buff_C.MulticastOnAdded
// (Event, Public, BlueprintEvent)

void Asuper_armour_buff_C::MulticastOnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.MulticastOnAdded");

	Asuper_armour_buff_C_MulticastOnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function super_armour_buff.super_armour_buff_C.End Multicast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Asuper_armour_buff_C::End_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.End Multicast");

	Asuper_armour_buff_C_End_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function super_armour_buff.super_armour_buff_C.OnDamageReceived
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonAbilityDamageInfo* DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Asuper_armour_buff_C::OnDamageReceived(float* DamageReceived, class AController** InstigatedBy, class AActor** DamageCauser, struct FArchonAbilityDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.OnDamageReceived");

	Asuper_armour_buff_C_OnDamageReceived_Params params;
	params.DamageReceived = DamageReceived;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function super_armour_buff.super_armour_buff_C.MultiShield
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Asuper_armour_buff_C::MultiShield(const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.MultiShield");

	Asuper_armour_buff_C_MultiShield_Params params;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function super_armour_buff.super_armour_buff_C.OnRemoved
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Asuper_armour_buff_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.OnRemoved");

	Asuper_armour_buff_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function super_armour_buff.super_armour_buff_C.ExecuteUbergraph_super_armour_buff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Asuper_armour_buff_C::ExecuteUbergraph_super_armour_buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function super_armour_buff.super_armour_buff_C.ExecuteUbergraph_super_armour_buff");

	Asuper_armour_buff_C_ExecuteUbergraph_super_armour_buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
