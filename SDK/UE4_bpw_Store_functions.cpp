// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_Store_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_Store.bpw_Store_C.Get_img_noGamepad_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_Store_C::Get_img_noGamepad_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.Get_img_noGamepad_Visibility_1");

	Ubpw_Store_C_Get_img_noGamepad_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_Store.bpw_Store_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ubpw_Store_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.GetDefaultFocusedWidget");

	Ubpw_Store_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_Store.bpw_Store_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_Store_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.OnKeyDown");

	Ubpw_Store_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_Store.bpw_Store_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_Store_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.OnKeyUp");

	Ubpw_Store_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_Store.bpw_Store_C.Close Store
// (BlueprintCallable, BlueprintEvent)

void Ubpw_Store_C::Close_Store()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.Close Store");

	Ubpw_Store_C_Close_Store_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.BndEvt__UnavailablePopup_K2Node_ComponentBoundEvent_6_Ready To Close__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_character_screen_mode> Previous_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_Store_C::BndEvt__UnavailablePopup_K2Node_ComponentBoundEvent_6_Ready_To_Close__DelegateSignature(TEnumAsByte<Eui_character_screen_mode> Previous_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.BndEvt__UnavailablePopup_K2Node_ComponentBoundEvent_6_Ready To Close__DelegateSignature");

	Ubpw_Store_C_BndEvt__UnavailablePopup_K2Node_ComponentBoundEvent_6_Ready_To_Close__DelegateSignature_Params params;
	params.Previous_Screen = Previous_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.Store Unavailable
// (BlueprintCallable, BlueprintEvent)

void Ubpw_Store_C::Store_Unavailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.Store Unavailable");

	Ubpw_Store_C_Store_Unavailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_Store_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.Tick");

	Ubpw_Store_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.DelayedCloseStore
// (BlueprintCallable, BlueprintEvent)

void Ubpw_Store_C::DelayedCloseStore()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.DelayedCloseStore");

	Ubpw_Store_C_DelayedCloseStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.EntitlementsRefreshed
// (BlueprintCallable, BlueprintEvent)

void Ubpw_Store_C::EntitlementsRefreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.EntitlementsRefreshed");

	Ubpw_Store_C_EntitlementsRefreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_20_On Back__DelegateSignature
// (BlueprintEvent)

void Ubpw_Store_C::BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_20_On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_20_On Back__DelegateSignature");

	Ubpw_Store_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_20_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_Store_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.InputSwap");

	Ubpw_Store_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_Store_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.Construct");

	Ubpw_Store_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.ExecuteUbergraph_bpw_Store
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_Store_C::ExecuteUbergraph_bpw_Store(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.ExecuteUbergraph_bpw_Store");

	Ubpw_Store_C_ExecuteUbergraph_bpw_Store_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_Store.bpw_Store_C.RemoveStore__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_Store_C::RemoveStore__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_Store.bpw_Store_C.RemoveStore__DelegateSignature");

	Ubpw_Store_C_RemoveStore__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
