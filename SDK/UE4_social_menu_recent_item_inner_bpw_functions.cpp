// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_recent_item_inner_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.GetLastSeenText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Usocial_menu_recent_item_inner_bpw_C::GetLastSeenText()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.GetLastSeenText");

	Usocial_menu_recent_item_inner_bpw_C_GetLastSeenText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.RefreshPlayerData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Usocial_menu_recent_item_inner_bpw_C::RefreshPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.RefreshPlayerData");

	Usocial_menu_recent_item_inner_bpw_C_RefreshPlayerData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_recent_item_inner_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.Construct");

	Usocial_menu_recent_item_inner_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_recent_item_inner_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.OnSynchronizeProperties");

	Usocial_menu_recent_item_inner_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.ExecuteUbergraph_social_menu_recent_item_inner_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_recent_item_inner_bpw_C::ExecuteUbergraph_social_menu_recent_item_inner_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_recent_item_inner_bpw.social_menu_recent_item_inner_bpw_C.ExecuteUbergraph_social_menu_recent_item_inner_bpw");

	Usocial_menu_recent_item_inner_bpw_C_ExecuteUbergraph_social_menu_recent_item_inner_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
