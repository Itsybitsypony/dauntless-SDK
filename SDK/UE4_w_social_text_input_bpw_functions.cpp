// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_social_text_input_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_social_text_input_bpw.w_social_text_input_bpw_C.MinimizeFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_text_input_bpw_C::MinimizeFocus(bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.MinimizeFocus");

	Uw_social_text_input_bpw_C_MinimizeFocus_Params params;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_social_text_input_bpw_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.GetText");

	Uw_social_text_input_bpw_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   In_Text                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_social_text_input_bpw_C::SetText(const struct FText& In_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.SetText");

	Uw_social_text_input_bpw_C_SetText_Params params;
	params.In_Text = In_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_social_text_input_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnKeyDown");

	Uw_social_text_input_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_social_text_input_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusReceived");

	Uw_social_text_input_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_56_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_social_text_input_bpw_C::BndEvt__SearchText_K2Node_ComponentBoundEvent_56_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_56_OnEditableTextBoxChangedEvent__DelegateSignature");

	Uw_social_text_input_bpw_C_BndEvt__SearchText_K2Node_ComponentBoundEvent_56_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_67_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_text_input_bpw_C::BndEvt__SearchText_K2Node_ComponentBoundEvent_67_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_67_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Uw_social_text_input_bpw_C_BndEvt__SearchText_K2Node_ComponentBoundEvent_67_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_social_text_input_bpw_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	Uw_social_text_input_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_text_input_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.Tick");

	Uw_social_text_input_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_social_text_input_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.Construct");

	Uw_social_text_input_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_social_text_input_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnSynchronizeProperties");

	Uw_social_text_input_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.ExecuteUbergraph_w_social_text_input_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_text_input_bpw_C::ExecuteUbergraph_w_social_text_input_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.ExecuteUbergraph_w_social_text_input_bpw");

	Uw_social_text_input_bpw_C_ExecuteUbergraph_w_social_text_input_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnTextCommitted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<ETextCommit>       Commit_Method                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_text_input_bpw_C::OnTextCommitted__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> Commit_Method)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnTextCommitted__DelegateSignature");

	Uw_social_text_input_bpw_C_OnTextCommitted__DelegateSignature_Params params;
	params.Text = Text;
	params.Commit_Method = Commit_Method;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnTextChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_social_text_input_bpw_C::OnTextChanged__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnTextChanged__DelegateSignature");

	Uw_social_text_input_bpw_C_OnTextChanged__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusTextLost__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_social_text_input_bpw_C::OnFocusTextLost__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusTextLost__DelegateSignature");

	Uw_social_text_input_bpw_C_OnFocusTextLost__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusText__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_social_text_input_bpw_C::OnFocusText__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_text_input_bpw.w_social_text_input_bpw_C.OnFocusText__DelegateSignature");

	Uw_social_text_input_bpw_C_OnFocusText__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
