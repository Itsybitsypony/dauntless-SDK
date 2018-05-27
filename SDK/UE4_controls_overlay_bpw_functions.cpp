// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_controls_overlay_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function controls_overlay_bpw.controls_overlay_bpw_C.GetText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ucontrols_overlay_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.GetText_1");

	Ucontrols_overlay_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function controls_overlay_bpw.controls_overlay_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucontrols_overlay_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.OnKeyUp");

	Ucontrols_overlay_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function controls_overlay_bpw.controls_overlay_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucontrols_overlay_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.OnKeyDown");

	Ucontrols_overlay_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function controls_overlay_bpw.controls_overlay_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucontrols_overlay_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.Construct");

	Ucontrols_overlay_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function controls_overlay_bpw.controls_overlay_bpw_C.SwaptoKeyBindingOverlay
// (BlueprintCallable, BlueprintEvent)

void Ucontrols_overlay_bpw_C::SwaptoKeyBindingOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.SwaptoKeyBindingOverlay");

	Ucontrols_overlay_bpw_C_SwaptoKeyBindingOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function controls_overlay_bpw.controls_overlay_bpw_C.SwaptoComboKeyOverlay
// (BlueprintCallable, BlueprintEvent)

void Ucontrols_overlay_bpw_C::SwaptoComboKeyOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.SwaptoComboKeyOverlay");

	Ucontrols_overlay_bpw_C_SwaptoComboKeyOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function controls_overlay_bpw.controls_overlay_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontrols_overlay_bpw_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.InputSwap");

	Ucontrols_overlay_bpw_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function controls_overlay_bpw.controls_overlay_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucontrols_overlay_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.OnSynchronizeProperties");

	Ucontrols_overlay_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function controls_overlay_bpw.controls_overlay_bpw_C.ExecuteUbergraph_controls_overlay_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontrols_overlay_bpw_C::ExecuteUbergraph_controls_overlay_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function controls_overlay_bpw.controls_overlay_bpw_C.ExecuteUbergraph_controls_overlay_bpw");

	Ucontrols_overlay_bpw_C_ExecuteUbergraph_controls_overlay_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
