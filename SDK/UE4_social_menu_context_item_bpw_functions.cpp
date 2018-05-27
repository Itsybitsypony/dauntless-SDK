// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_context_item_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Usocial_menu_context_item_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.OnFocusReceived");

	Usocial_menu_context_item_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Usocial_menu_context_item_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.Construct");

	Usocial_menu_context_item_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Usocial_menu_context_item_bpw_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature");

	Usocial_menu_context_item_bpw_C_BndEvt__ClickButton_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.ExecuteUbergraph_social_menu_context_item_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Usocial_menu_context_item_bpw_C::ExecuteUbergraph_social_menu_context_item_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.ExecuteUbergraph_social_menu_context_item_bpw");

	Usocial_menu_context_item_bpw_C_ExecuteUbergraph_social_menu_context_item_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.OnItemSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Usocial_menu_context_item_bpw_C::OnItemSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function social_menu_context_item_bpw.social_menu_context_item_bpw_C.OnItemSelected__DelegateSignature");

	Usocial_menu_context_item_bpw_C_OnItemSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
