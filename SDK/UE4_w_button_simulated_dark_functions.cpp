// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_simulated_dark_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_button_simulated_dark.w_button_simulated_dark_C.SetShouldCallAttention
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CallAttention                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simulated_dark_C::SetShouldCallAttention(bool CallAttention)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.SetShouldCallAttention");

	Uw_button_simulated_dark_C_SetShouldCallAttention_Params params;
	params.CallAttention = CallAttention;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simulated_dark.w_button_simulated_dark_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_button_simulated_dark_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.OnFocusReceived");

	Uw_button_simulated_dark_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_button_simulated_dark.w_button_simulated_dark_C.OnLoaded_A058EA6248D678A919D5DF9106B25F77
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simulated_dark_C::OnLoaded_A058EA6248D678A919D5DF9106B25F77(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.OnLoaded_A058EA6248D678A919D5DF9106B25F77");

	Uw_button_simulated_dark_C_OnLoaded_A058EA6248D678A919D5DF9106B25F77_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simulated_dark.w_button_simulated_dark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_button_simulated_dark_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.Construct");

	Uw_button_simulated_dark_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simulated_dark.w_button_simulated_dark_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)

void Uw_button_simulated_dark_C::LoadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.LoadIcon");

	Uw_button_simulated_dark_C_LoadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simulated_dark.w_button_simulated_dark_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simulated_dark_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.PreConstruct");

	Uw_button_simulated_dark_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simulated_dark.w_button_simulated_dark_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simulated_dark_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.SetIsSelected");

	Uw_button_simulated_dark_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simulated_dark.w_button_simulated_dark_C.OnInputSwap
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bUsingGamepad                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simulated_dark_C::OnInputSwap(bool* bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.OnInputSwap");

	Uw_button_simulated_dark_C_OnInputSwap_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_simulated_dark.w_button_simulated_dark_C.ExecuteUbergraph_w_button_simulated_dark
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_simulated_dark_C::ExecuteUbergraph_w_button_simulated_dark(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_simulated_dark.w_button_simulated_dark_C.ExecuteUbergraph_w_button_simulated_dark");

	Uw_button_simulated_dark_C_ExecuteUbergraph_w_button_simulated_dark_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
