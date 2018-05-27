// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Morph_Blend_Slider2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Morph_Blend_Slider2_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnKeyDown");

	Uw_Morph_Blend_Slider2_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Morph_Blend_Slider2_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.GetVisibility_1");

	Uw_Morph_Blend_Slider2_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Get Morph Value
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Morph_Blend_Slider2_C::Get_Morph_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Get Morph Value");

	Uw_Morph_Blend_Slider2_C_Get_Morph_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Morph_Blend_Slider2_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnFocusReceived");

	Uw_Morph_Blend_Slider2_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Reset Morph Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::Reset_Morph_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Reset Morph Value");

	Uw_Morph_Blend_Slider2_C_Reset_Morph_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Set Morph Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMorphValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Morph_Blend_Slider2_C::Set_Morph_Value(float NewMorphValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Set Morph Value");

	Uw_Morph_Blend_Slider2_C_Set_Morph_Value_Params params;
	params.NewMorphValue = NewMorphValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Cancel Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::Cancel_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Cancel Value");

	Uw_Morph_Blend_Slider2_C_Cancel_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Save Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::Save_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Save Value");

	Uw_Morph_Blend_Slider2_C_Save_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Set Target Mesh Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Skeletal_Mesh_Component        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFaceMorphTranslation   Morph_Info                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class USkeletalMeshComponent*  Beard_Mesh_Component           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Morph_Blend_Slider2_C::Set_Target_Mesh_Component(class USkeletalMeshComponent* Skeletal_Mesh_Component, const struct FFaceMorphTranslation& Morph_Info, class USkeletalMeshComponent* Beard_Mesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Set Target Mesh Component");

	Uw_Morph_Blend_Slider2_C_Set_Target_Mesh_Component_Params params;
	params.Skeletal_Mesh_Component = Skeletal_Mesh_Component;
	params.Morph_Info = Morph_Info;
	params.Beard_Mesh_Component = Beard_Mesh_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Destruct");

	Uw_Morph_Blend_Slider2_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Morph_Blend_Slider2_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature");

	Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature");

	Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature");

	Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature");

	Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature");

	Uw_Morph_Blend_Slider2_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Morph_Blend_Slider2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Tick");

	Uw_Morph_Blend_Slider2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Slider Lost Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::Slider_Lost_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Slider Lost Focus");

	Uw_Morph_Blend_Slider2_C_Slider_Lost_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Slider Gained Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::Slider_Gained_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Slider Gained Focus");

	Uw_Morph_Blend_Slider2_C_Slider_Gained_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Morph_Blend_Slider2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.Construct");

	Uw_Morph_Blend_Slider2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_Morph_Blend_Slider2_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnMouseEnter");

	Uw_Morph_Blend_Slider2_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Morph_Blend_Slider2_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.OnFocusLost");

	Uw_Morph_Blend_Slider2_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Morph_Blend_Slider2_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.InputSwap");

	Uw_Morph_Blend_Slider2_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.ExecuteUbergraph_w_Morph_Blend_Slider2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Morph_Blend_Slider2_C::ExecuteUbergraph_w_Morph_Blend_Slider2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.ExecuteUbergraph_w_Morph_Blend_Slider2");

	Uw_Morph_Blend_Slider2_C_ExecuteUbergraph_w_Morph_Blend_Slider2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.MorphValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMorphValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFaceMorphTranslation   MorphInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Morph_Blend_Slider2_C::MorphValueChanged__DelegateSignature(float NewMorphValue, const struct FFaceMorphTranslation& MorphInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Morph_Blend_Slider2.w_Morph_Blend_Slider2_C.MorphValueChanged__DelegateSignature");

	Uw_Morph_Blend_Slider2_C_MorphValueChanged__DelegateSignature_Params params;
	params.NewMorphValue = NewMorphValue;
	params.MorphInfo = MorphInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
