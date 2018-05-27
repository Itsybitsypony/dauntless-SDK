// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_social_context_menu_button_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_social_context_menu_button_bpw_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.Set Button Label");

	Uw_social_context_menu_button_bpw_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_social_context_menu_button_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.OnFocusReceived");

	Uw_social_context_menu_button_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_social_context_menu_button_bpw_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_social_context_menu_button_bpw_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_social_context_menu_button_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.OnSynchronizeProperties");

	Uw_social_context_menu_button_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.ExecuteUbergraph_w_social_context_menu_button_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_context_menu_button_bpw_C::ExecuteUbergraph_w_social_context_menu_button_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.ExecuteUbergraph_w_social_context_menu_button_bpw");

	Uw_social_context_menu_button_bpw_C_ExecuteUbergraph_w_social_context_menu_button_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_social_context_menu_button_bpw_C::Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_context_menu_button_bpw.w_social_context_menu_button_bpw_C.Button Clicked__DelegateSignature");

	Uw_social_context_menu_button_bpw_C_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
