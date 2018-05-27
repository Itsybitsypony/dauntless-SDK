// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Button_OptionsCat_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Button_OptionsCat_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.GetVisibility_1");

	Uw_Button_OptionsCat_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Button_OptionsCat_bpw_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Set Button Label");

	Uw_Button_OptionsCat_bpw_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Button_OptionsCat_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.OnFocusReceived");

	Uw_Button_OptionsCat_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_OptionsCat_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Tick");

	Uw_Button_OptionsCat_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Button_OptionsCat_bpw_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_Button_OptionsCat_bpw_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_OptionsCat_bpw_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Show Hover");

	Uw_Button_OptionsCat_bpw_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_OptionsCat_bpw_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Hide Hover");

	Uw_Button_OptionsCat_bpw_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Button_OptionsCat_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.OnSynchronizeProperties");

	Uw_Button_OptionsCat_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Button_OptionsCat_bpw_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	Uw_Button_OptionsCat_bpw_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.ExecuteUbergraph_w_Button_OptionsCat_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_OptionsCat_bpw_C::ExecuteUbergraph_w_Button_OptionsCat_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.ExecuteUbergraph_w_Button_OptionsCat_bpw");

	Uw_Button_OptionsCat_bpw_C_ExecuteUbergraph_w_Button_OptionsCat_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> Options                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_OptionsCat_bpw_C::Hovered__DelegateSignature(TEnumAsByte<EMenu_Options_Stage> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Hovered__DelegateSignature");

	Uw_Button_OptionsCat_bpw_C_Hovered__DelegateSignature_Params params;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.FocusReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_OptionsCat_bpw_C::FocusReceived__DelegateSignature(TEnumAsByte<EMenu_Options_Stage> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.FocusReceived__DelegateSignature");

	Uw_Button_OptionsCat_bpw_C_FocusReceived__DelegateSignature_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Option Cat Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMenu_Options_Stage> Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_OptionsCat_bpw_C::Option_Cat_Clicked__DelegateSignature(TEnumAsByte<EMenu_Options_Stage> Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_OptionsCat_bpw.w_Button_OptionsCat_bpw_C.Option Cat Clicked__DelegateSignature");

	Uw_Button_OptionsCat_bpw_C_Option_Cat_Clicked__DelegateSignature_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
