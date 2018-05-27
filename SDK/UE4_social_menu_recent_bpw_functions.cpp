// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_recent_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_recent_bpw.social_menu_recent_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_recent_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.Construct");

	Usocial_menu_recent_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_bpw.social_menu_recent_bpw_C.Recent Players Updated
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_recent_bpw_C::Recent_Players_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.Recent Players Updated");

	Usocial_menu_recent_bpw_C_Recent_Players_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_bpw.social_menu_recent_bpw_C.Friend Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasSuccessful                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FriendName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Usocial_menu_recent_bpw_C::Friend_Added(bool WasSuccessful, const class FString& FriendName)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.Friend Added");

	Usocial_menu_recent_bpw_C_Friend_Added_Params params;
	params.WasSuccessful = WasSuccessful;
	params.FriendName = FriendName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_bpw.social_menu_recent_bpw_C.Player Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_bpw_C::Player_Selected(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.Player Selected");

	Usocial_menu_recent_bpw_C_Player_Selected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_bpw.social_menu_recent_bpw_C.OnTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_bpw_C::OnTabSelected(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.OnTabSelected");

	Usocial_menu_recent_bpw_C_OnTabSelected_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_bpw.social_menu_recent_bpw_C.OnTabDeselected
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_recent_bpw_C::OnTabDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.OnTabDeselected");

	Usocial_menu_recent_bpw_C_OnTabDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_bpw.social_menu_recent_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_bpw_C::InputSwap(bool* IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.InputSwap");

	Usocial_menu_recent_bpw_C_InputSwap_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_bpw.social_menu_recent_bpw_C.SetDefaultFocus
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_recent_bpw_C::SetDefaultFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.SetDefaultFocus");

	Usocial_menu_recent_bpw_C_SetDefaultFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_bpw.social_menu_recent_bpw_C.ExecuteUbergraph_social_menu_recent_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_bpw_C::ExecuteUbergraph_social_menu_recent_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_bpw.social_menu_recent_bpw_C.ExecuteUbergraph_social_menu_recent_bpw");

	Usocial_menu_recent_bpw_C_ExecuteUbergraph_social_menu_recent_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
