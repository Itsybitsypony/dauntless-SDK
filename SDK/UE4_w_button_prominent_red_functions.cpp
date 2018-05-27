// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_prominent_red_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_button_prominent_red.w_button_prominent_red_C.SetShouldCallAttention
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CallAttention                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_prominent_red_C::SetShouldCallAttention(bool CallAttention)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.SetShouldCallAttention");

	Uw_button_prominent_red_C_SetShouldCallAttention_Params params;
	params.CallAttention = CallAttention;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_prominent_red.w_button_prominent_red_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_button_prominent_red_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.OnFocusReceived");

	Uw_button_prominent_red_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_button_prominent_red.w_button_prominent_red_C.OnLoaded_A058EA6248D678A919D5DF91B60473D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_prominent_red_C::OnLoaded_A058EA6248D678A919D5DF91B60473D4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.OnLoaded_A058EA6248D678A919D5DF91B60473D4");

	Uw_button_prominent_red_C_OnLoaded_A058EA6248D678A919D5DF91B60473D4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_prominent_red.w_button_prominent_red_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_button_prominent_red_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.Construct");

	Uw_button_prominent_red_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_prominent_red.w_button_prominent_red_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)

void Uw_button_prominent_red_C::LoadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.LoadIcon");

	Uw_button_prominent_red_C_LoadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_prominent_red.w_button_prominent_red_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_prominent_red_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.PreConstruct");

	Uw_button_prominent_red_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_prominent_red.w_button_prominent_red_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_prominent_red_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.SetIsSelected");

	Uw_button_prominent_red_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_prominent_red.w_button_prominent_red_C.OnInputSwap
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_prominent_red_C::OnInputSwap(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.OnInputSwap");

	Uw_button_prominent_red_C_OnInputSwap_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_prominent_red.w_button_prominent_red_C.ExecuteUbergraph_w_button_prominent_red
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_prominent_red_C::ExecuteUbergraph_w_button_prominent_red(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_prominent_red.w_button_prominent_red_C.ExecuteUbergraph_w_button_prominent_red");

	Uw_button_prominent_red_C_ExecuteUbergraph_w_button_prominent_red_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
