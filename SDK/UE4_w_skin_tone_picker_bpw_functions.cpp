// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_skin_tone_picker_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Hide Hover Indicators
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::Hide_Hover_Indicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Hide Hover Indicators");

	Uw_skin_tone_picker_bpw_C_Hide_Hover_Indicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Show Hover Indicators
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::Show_Hover_Indicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Show Hover Indicators");

	Uw_skin_tone_picker_bpw_C_Show_Hover_Indicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_skin_tone_picker_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnFocusReceived");

	Uw_skin_tone_picker_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_skin_tone_picker_bpw_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnPreviewKeyDown");

	Uw_skin_tone_picker_bpw_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.IsInteractable
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_skin_tone_picker_bpw_C::IsInteractable()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.IsInteractable");

	Uw_skin_tone_picker_bpw_C_IsInteractable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Get Selected Swatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Ubpw_skinpicksquare_C*   Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_skin_tone_picker_bpw_C::Get_Selected_Swatch(class Ubpw_skinpicksquare_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Get Selected Swatch");

	Uw_skin_tone_picker_bpw_C_Get_Selected_Swatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Highlight Selected Swatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_skin_tone_picker_bpw_C::Highlight_Selected_Swatch(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Highlight Selected Swatch");

	Uw_skin_tone_picker_bpw_C_Highlight_Selected_Swatch_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_skin_tone_picker_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnKeyDown");

	Uw_skin_tone_picker_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Construct");

	Uw_skin_tone_picker_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Change Skin Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_skinpicksquare_C*   Color_Picker                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectedSwatch                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_skin_tone_picker_bpw_C::Change_Skin_Color(class Ubpw_skinpicksquare_C* Color_Picker, int SelectedSwatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Change Skin Color");

	Uw_skin_tone_picker_bpw_C_Change_Skin_Color_Params params;
	params.Color_Picker = Color_Picker;
	params.SelectedSwatch = SelectedSwatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Enter Tone Picker
// (BlueprintCallable, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::Enter_Tone_Picker()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Enter Tone Picker");

	Uw_skin_tone_picker_bpw_C_Enter_Tone_Picker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Leave Tone Picker
// (BlueprintCallable, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::Leave_Tone_Picker()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Leave Tone Picker");

	Uw_skin_tone_picker_bpw_C_Leave_Tone_Picker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Next Swatch
// (BlueprintCallable, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::Next_Swatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Next Swatch");

	Uw_skin_tone_picker_bpw_C_Next_Swatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Previous Swatch
// (BlueprintCallable, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::Previous_Swatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.Previous Swatch");

	Uw_skin_tone_picker_bpw_C_Previous_Swatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_skin_tone_picker_bpw_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnFocusLost");

	Uw_skin_tone_picker_bpw_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_skin_tone_picker_bpw_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnMouseEnter");

	Uw_skin_tone_picker_bpw_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_skin_tone_picker_bpw_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnMouseLeave");

	Uw_skin_tone_picker_bpw_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.ExecuteUbergraph_w_skin_tone_picker_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_skin_tone_picker_bpw_C::ExecuteUbergraph_w_skin_tone_picker_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.ExecuteUbergraph_w_skin_tone_picker_bpw");

	Uw_skin_tone_picker_bpw_C_ExecuteUbergraph_w_skin_tone_picker_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnSkinColorChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::OnSkinColorChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnSkinColorChanged__DelegateSignature");

	Uw_skin_tone_picker_bpw_C_OnSkinColorChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnLeavePicker__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_skin_tone_picker_bpw_C::OnLeavePicker__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_skin_tone_picker_bpw.w_skin_tone_picker_bpw_C.OnLeavePicker__DelegateSignature");

	Uw_skin_tone_picker_bpw_C_OnLeavePicker__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
