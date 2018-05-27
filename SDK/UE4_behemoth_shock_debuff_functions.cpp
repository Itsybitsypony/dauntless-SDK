// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_shock_debuff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_shock_debuff.behemoth_shock_debuff_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abehemoth_shock_debuff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shock_debuff.behemoth_shock_debuff_C.UserConstructionScript");

	Abehemoth_shock_debuff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_shock_debuff.behemoth_shock_debuff_C.OnAdded
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Abehemoth_shock_debuff_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shock_debuff.behemoth_shock_debuff_C.OnAdded");

	Abehemoth_shock_debuff_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_shock_debuff.behemoth_shock_debuff_C.MulticastOnAdded
// (Event, Public, BlueprintEvent)

void Abehemoth_shock_debuff_C::MulticastOnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shock_debuff.behemoth_shock_debuff_C.MulticastOnAdded");

	Abehemoth_shock_debuff_C_MulticastOnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_shock_debuff.behemoth_shock_debuff_C.OnRemoved
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void Abehemoth_shock_debuff_C::OnRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shock_debuff.behemoth_shock_debuff_C.OnRemoved");

	Abehemoth_shock_debuff_C_OnRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_shock_debuff.behemoth_shock_debuff_C.MultRemoved
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Abehemoth_shock_debuff_C::MultRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shock_debuff.behemoth_shock_debuff_C.MultRemoved");

	Abehemoth_shock_debuff_C_MultRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_shock_debuff.behemoth_shock_debuff_C.ExecuteUbergraph_behemoth_shock_debuff
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abehemoth_shock_debuff_C::ExecuteUbergraph_behemoth_shock_debuff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_shock_debuff.behemoth_shock_debuff_C.ExecuteUbergraph_behemoth_shock_debuff");

	Abehemoth_shock_debuff_C_ExecuteUbergraph_behemoth_shock_debuff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
