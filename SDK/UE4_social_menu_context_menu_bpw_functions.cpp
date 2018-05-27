// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_context_menu_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Usocial_menu_context_menu_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.OnKeyDown");

	Usocial_menu_context_menu_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Usocial_menu_context_menu_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.OnFocusReceived");

	Usocial_menu_context_menu_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.AddMenuItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class Usocial_menu_context_item_bpw_C* MenuItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_context_menu_bpw_C::AddMenuItem(const struct FText& Label, class Usocial_menu_context_item_bpw_C** MenuItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.AddMenuItem");

	Usocial_menu_context_menu_bpw_C_AddMenuItem_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuItem != nullptr)
		*MenuItem = params.MenuItem;
}


// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_context_menu_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.Construct");

	Usocial_menu_context_menu_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.Close
// (BlueprintCallable, BlueprintEvent)

void Usocial_menu_context_menu_bpw_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.Close");

	Usocial_menu_context_menu_bpw_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.ExecuteUbergraph_social_menu_context_menu_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_context_menu_bpw_C::ExecuteUbergraph_social_menu_context_menu_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.ExecuteUbergraph_social_menu_context_menu_bpw");

	Usocial_menu_context_menu_bpw_C_ExecuteUbergraph_social_menu_context_menu_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.RequestClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Usocial_menu_context_menu_bpw_C::RequestClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.RequestClose__DelegateSignature");

	Usocial_menu_context_menu_bpw_C_RequestClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
