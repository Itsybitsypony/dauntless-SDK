// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Head_Blend_Slider_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.UpdateOriginalValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Head_Blend_Slider_C::UpdateOriginalValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.UpdateOriginalValue");

	Uw_Head_Blend_Slider_C_UpdateOriginalValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Get Morph Value
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Head_Blend_Slider_C::Get_Morph_Value(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Get Morph Value");

	Uw_Head_Blend_Slider_C_Get_Morph_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Head_Blend_Slider_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnFocusReceived");

	Uw_Head_Blend_Slider_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Reset Morph Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Head_Blend_Slider_C::Reset_Morph_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Reset Morph Value");

	Uw_Head_Blend_Slider_C_Reset_Morph_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Set Morph Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMorphValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Head_Blend_Slider_C::Set_Morph_Value(float NewMorphValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Set Morph Value");

	Uw_Head_Blend_Slider_C_Set_Morph_Value_Params params;
	params.NewMorphValue = NewMorphValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Cancel Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Head_Blend_Slider_C::Cancel_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Cancel Value");

	Uw_Head_Blend_Slider_C_Cancel_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Save Value
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Head_Blend_Slider_C::Save_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Save Value");

	Uw_Head_Blend_Slider_C_Save_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Set Target Mesh Component
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Skeletal_Mesh_Component        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFaceMorphTranslation   Morph_Info                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class USkeletalMeshComponent*  Beard_Mesh_Component           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Paperdoll_Beard_Mesh_Component (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Head_Blend_Slider_C::Set_Target_Mesh_Component(class USkeletalMeshComponent* Skeletal_Mesh_Component, const struct FFaceMorphTranslation& Morph_Info, class USkeletalMeshComponent* Beard_Mesh_Component, class USkeletalMeshComponent* Paperdoll_Beard_Mesh_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Set Target Mesh Component");

	Uw_Head_Blend_Slider_C_Set_Target_Mesh_Component_Params params;
	params.Skeletal_Mesh_Component = Skeletal_Mesh_Component;
	params.Morph_Info = Morph_Info;
	params.Beard_Mesh_Component = Beard_Mesh_Component;
	params.Paperdoll_Beard_Mesh_Component = Paperdoll_Beard_Mesh_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Head_Blend_Slider_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Construct");

	Uw_Head_Blend_Slider_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Head_Blend_Slider_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Destruct");

	Uw_Head_Blend_Slider_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Head_Blend_Slider_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature");

	Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_356_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Head_Blend_Slider_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature");

	Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_3_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Head_Blend_Slider_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature");

	Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Head_Blend_Slider_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature");

	Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_37_OnControllerCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Head_Blend_Slider_C::BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature");

	Uw_Head_Blend_Slider_C_BndEvt__MorphTargetValue_K2Node_ComponentBoundEvent_45_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Head_Blend_Slider_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Tick");

	Uw_Head_Blend_Slider_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Slider Lost Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_Head_Blend_Slider_C::Slider_Lost_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Slider Lost Focus");

	Uw_Head_Blend_Slider_C_Slider_Lost_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Slider Gained Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_Head_Blend_Slider_C::Slider_Gained_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Slider Gained Focus");

	Uw_Head_Blend_Slider_C_Slider_Gained_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_Head_Blend_Slider_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnMouseEnter");

	Uw_Head_Blend_Slider_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Head_Blend_Slider_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnFocusLost");

	Uw_Head_Blend_Slider_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.ExecuteUbergraph_w_Head_Blend_Slider
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Head_Blend_Slider_C::ExecuteUbergraph_w_Head_Blend_Slider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.ExecuteUbergraph_w_Head_Blend_Slider");

	Uw_Head_Blend_Slider_C_ExecuteUbergraph_w_Head_Blend_Slider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Interaction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Head_Blend_Slider_C::Interaction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.Interaction__DelegateSignature");

	Uw_Head_Blend_Slider_C_Interaction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnMorphValueChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMorphValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Head_Blend_Slider_C::OnMorphValueChanged__DelegateSignature(float NewMorphValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Head_Blend_Slider.w_Head_Blend_Slider_C.OnMorphValueChanged__DelegateSignature");

	Uw_Head_Blend_Slider_C_OnMorphValueChanged__DelegateSignature_Params params;
	params.NewMorphValue = NewMorphValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
