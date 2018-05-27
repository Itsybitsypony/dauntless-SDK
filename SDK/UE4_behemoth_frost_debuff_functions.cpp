// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_frost_debuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_frost_debuff.behemoth_frost_debuff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abehemoth_frost_debuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_frost_debuff.behemoth_frost_debuff_C.UserConstructionScript");

	Abehemoth_frost_debuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_frost_debuff.behemoth_frost_debuff_C.MulticastOnAdded
// (Event, Public, BlueprintEvent)

void Abehemoth_frost_debuff_C::MulticastOnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_frost_debuff.behemoth_frost_debuff_C.MulticastOnAdded");

	Abehemoth_frost_debuff_C_MulticastOnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_frost_debuff.behemoth_frost_debuff_C.OnAdded
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Abehemoth_frost_debuff_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_frost_debuff.behemoth_frost_debuff_C.OnAdded");

	Abehemoth_frost_debuff_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_frost_debuff.behemoth_frost_debuff_C.OnGameplayEffectRemoved
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Abehemoth_frost_debuff_C::OnGameplayEffectRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_frost_debuff.behemoth_frost_debuff_C.OnGameplayEffectRemoved");

	Abehemoth_frost_debuff_C_OnGameplayEffectRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_frost_debuff.behemoth_frost_debuff_C.Multicast On Gameplay Effect Removed
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Abehemoth_frost_debuff_C::Multicast_On_Gameplay_Effect_Removed()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_frost_debuff.behemoth_frost_debuff_C.Multicast On Gameplay Effect Removed");

	Abehemoth_frost_debuff_C_Multicast_On_Gameplay_Effect_Removed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_frost_debuff.behemoth_frost_debuff_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Abehemoth_frost_debuff_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_frost_debuff.behemoth_frost_debuff_C.ReceiveDestroyed");

	Abehemoth_frost_debuff_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_frost_debuff.behemoth_frost_debuff_C.ExecuteUbergraph_behemoth_frost_debuff
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_frost_debuff_C::ExecuteUbergraph_behemoth_frost_debuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_frost_debuff.behemoth_frost_debuff_C.ExecuteUbergraph_behemoth_frost_debuff");

	Abehemoth_frost_debuff_C_ExecuteUbergraph_behemoth_frost_debuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
