// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_simple_base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_button_simple_base.w_button_simple_base_C.SetShouldCallAttention
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CallAttention                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simple_base_C::SetShouldCallAttention(bool CallAttention)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.SetShouldCallAttention");

	Uw_button_simple_base_C_SetShouldCallAttention_Params params;
	params.CallAttention = CallAttention;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simple_base.w_button_simple_base_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_button_simple_base_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.OnFocusReceived");

	Uw_button_simple_base_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_button_simple_base.w_button_simple_base_C.OnLoaded_A058EA6248D678A919D5DF9121E36961
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simple_base_C::OnLoaded_A058EA6248D678A919D5DF9121E36961(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.OnLoaded_A058EA6248D678A919D5DF9121E36961");

	Uw_button_simple_base_C_OnLoaded_A058EA6248D678A919D5DF9121E36961_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simple_base.w_button_simple_base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_button_simple_base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.Construct");

	Uw_button_simple_base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simple_base.w_button_simple_base_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simple_base_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.Input Swap");

	Uw_button_simple_base_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simple_base.w_button_simple_base_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)

void Uw_button_simple_base_C::LoadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.LoadIcon");

	Uw_button_simple_base_C_LoadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simple_base.w_button_simple_base_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simple_base_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.PreConstruct");

	Uw_button_simple_base_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simple_base.w_button_simple_base_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simple_base_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.SetIsSelected");

	Uw_button_simple_base_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simple_base.w_button_simple_base_C.ExecuteUbergraph_w_button_simple_base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simple_base_C::ExecuteUbergraph_w_button_simple_base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simple_base.w_button_simple_base_C.ExecuteUbergraph_w_button_simple_base");

	Uw_button_simple_base_C_ExecuteUbergraph_w_button_simple_base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
