// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_enragebonus_buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function damage_enragebonus_buff.damage_enragebonus_buff_C.RemoveBonusEffect
// (Public, BlueprintCallable, BlueprintEvent)

void Adamage_enragebonus_buff_C::RemoveBonusEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_enragebonus_buff.damage_enragebonus_buff_C.RemoveBonusEffect");

	Adamage_enragebonus_buff_C_RemoveBonusEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function damage_enragebonus_buff.damage_enragebonus_buff_C.ApplyEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bonus                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adamage_enragebonus_buff_C::ApplyEffect(bool Bonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_enragebonus_buff.damage_enragebonus_buff_C.ApplyEffect");

	Adamage_enragebonus_buff_C_ApplyEffect_Params params;
	params.Bonus = Bonus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function damage_enragebonus_buff.damage_enragebonus_buff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Adamage_enragebonus_buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_enragebonus_buff.damage_enragebonus_buff_C.UserConstructionScript");

	Adamage_enragebonus_buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function damage_enragebonus_buff.damage_enragebonus_buff_C.OnAdded
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Adamage_enragebonus_buff_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_enragebonus_buff.damage_enragebonus_buff_C.OnAdded");

	Adamage_enragebonus_buff_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function damage_enragebonus_buff.damage_enragebonus_buff_C.OnGameplayEventTriggered
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     Payload                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Adamage_enragebonus_buff_C::OnGameplayEventTriggered(struct FGameplayEventData* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_enragebonus_buff.damage_enragebonus_buff_C.OnGameplayEventTriggered");

	Adamage_enragebonus_buff_C_OnGameplayEventTriggered_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function damage_enragebonus_buff.damage_enragebonus_buff_C.MulticastOnAdded
// (Event, Public, BlueprintEvent)

void Adamage_enragebonus_buff_C::MulticastOnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_enragebonus_buff.damage_enragebonus_buff_C.MulticastOnAdded");

	Adamage_enragebonus_buff_C_MulticastOnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function damage_enragebonus_buff.damage_enragebonus_buff_C.ExecuteUbergraph_damage_enragebonus_buff
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adamage_enragebonus_buff_C::ExecuteUbergraph_damage_enragebonus_buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function damage_enragebonus_buff.damage_enragebonus_buff_C.ExecuteUbergraph_damage_enragebonus_buff");

	Adamage_enragebonus_buff_C_ExecuteUbergraph_damage_enragebonus_buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
