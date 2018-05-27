// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_social_menu_tab_body_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.GetDefaultFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 DesiredFocusWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_social_menu_tab_body_bpw_C::GetDefaultFocus(class UWidget** DesiredFocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.GetDefaultFocus");

	Uw_social_menu_tab_body_bpw_C_GetDefaultFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredFocusWidget != nullptr)
		*DesiredFocusWidget = params.DesiredFocusWidget;
}


// Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.OnTabSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_menu_tab_body_bpw_C::OnTabSelected(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.OnTabSelected");

	Uw_social_menu_tab_body_bpw_C_OnTabSelected_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.OnTabDeselected
// (BlueprintCallable, BlueprintEvent)

void Uw_social_menu_tab_body_bpw_C::OnTabDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.OnTabDeselected");

	Uw_social_menu_tab_body_bpw_C_OnTabDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsUsingGamepad                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_menu_tab_body_bpw_C::InputSwap(bool IsUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.InputSwap");

	Uw_social_menu_tab_body_bpw_C_InputSwap_Params params;
	params.IsUsingGamepad = IsUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.ExecuteUbergraph_w_social_menu_tab_body_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_menu_tab_body_bpw_C::ExecuteUbergraph_w_social_menu_tab_body_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C.ExecuteUbergraph_w_social_menu_tab_body_bpw");

	Uw_social_menu_tab_body_bpw_C_ExecuteUbergraph_w_social_menu_tab_body_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
