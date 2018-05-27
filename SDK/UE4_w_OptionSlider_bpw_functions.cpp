// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_OptionSlider_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.UpdateSlider
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_OptionSlider_bpw_C::UpdateSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.UpdateSlider");

	Uw_OptionSlider_bpw_C_UpdateSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_OptionSlider_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnKeyDown");

	Uw_OptionSlider_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_OptionSlider_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.GetVisibility_1");

	Uw_OptionSlider_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Get  Value
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_OptionSlider_bpw_C::Get__Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Get  Value");

	Uw_OptionSlider_bpw_C_Get__Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_OptionSlider_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnFocusReceived");

	Uw_OptionSlider_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Reset  Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_OptionSlider_bpw_C::Reset__Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Reset  Value");

	Uw_OptionSlider_bpw_C_Reset__Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Set  Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_OptionSlider_bpw_C::Set__Value(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Set  Value");

	Uw_OptionSlider_bpw_C_Set__Value_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Cancel Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_OptionSlider_bpw_C::Cancel_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Cancel Value");

	Uw_OptionSlider_bpw_C_Cancel_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Save Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_OptionSlider_bpw_C::Save_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Save Value");

	Uw_OptionSlider_bpw_C_Save_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_OptionSlider_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Construct");

	Uw_OptionSlider_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_OptionSlider_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Destruct");

	Uw_OptionSlider_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_OptionSlider_bpw_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature");

	Uw_OptionSlider_bpw_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void Uw_OptionSlider_bpw_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature");

	Uw_OptionSlider_bpw_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void Uw_OptionSlider_bpw_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature");

	Uw_OptionSlider_bpw_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void Uw_OptionSlider_bpw_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature");

	Uw_OptionSlider_bpw_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void Uw_OptionSlider_bpw_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature");

	Uw_OptionSlider_bpw_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_OptionSlider_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Tick");

	Uw_OptionSlider_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Slider Lost Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_OptionSlider_bpw_C::Slider_Lost_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Slider Lost Focus");

	Uw_OptionSlider_bpw_C_Slider_Lost_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Slider Gained Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_OptionSlider_bpw_C::Slider_Gained_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.Slider Gained Focus");

	Uw_OptionSlider_bpw_C_Slider_Gained_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_OptionSlider_bpw_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnMouseEnter");

	Uw_OptionSlider_bpw_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_OptionSlider_bpw_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnFocusLost");

	Uw_OptionSlider_bpw_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_OptionSlider_bpw_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.InputSwap");

	Uw_OptionSlider_bpw_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_OptionSlider_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.OnSynchronizeProperties");

	Uw_OptionSlider_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.RefreshShowSlider
// (BlueprintCallable, BlueprintEvent)

void Uw_OptionSlider_bpw_C::RefreshShowSlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.RefreshShowSlider");

	Uw_OptionSlider_bpw_C_RefreshShowSlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.ExecuteUbergraph_w_OptionSlider_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_OptionSlider_bpw_C::ExecuteUbergraph_w_OptionSlider_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.ExecuteUbergraph_w_OptionSlider_bpw");

	Uw_OptionSlider_bpw_C_ExecuteUbergraph_w_OptionSlider_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.ValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_OptionSlider_bpw_C::ValueChanged__DelegateSignature(float NewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_OptionSlider_bpw.w_OptionSlider_bpw_C.ValueChanged__DelegateSignature");

	Uw_OptionSlider_bpw_C_ValueChanged__DelegateSignature_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
