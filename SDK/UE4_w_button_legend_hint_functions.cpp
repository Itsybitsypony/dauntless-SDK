// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_legend_hint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_button_legend_hint.w_button_legend_hint_C.OnLoaded_A058EA6248D678A919D5DF914C67A5D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_hint_C::OnLoaded_A058EA6248D678A919D5DF914C67A5D8(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_hint.w_button_legend_hint_C.OnLoaded_A058EA6248D678A919D5DF914C67A5D8");

	Uw_button_legend_hint_C_OnLoaded_A058EA6248D678A919D5DF914C67A5D8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_hint.w_button_legend_hint_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_hint_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_hint.w_button_legend_hint_C.PreConstruct");

	Uw_button_legend_hint_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_hint.w_button_legend_hint_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_button_legend_hint_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_hint.w_button_legend_hint_C.Construct");

	Uw_button_legend_hint_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_hint.w_button_legend_hint_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_hint_C::InputSwap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_hint.w_button_legend_hint_C.InputSwap");

	Uw_button_legend_hint_C_InputSwap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend_hint.w_button_legend_hint_C.ExecuteUbergraph_w_button_legend_hint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_hint_C::ExecuteUbergraph_w_button_legend_hint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend_hint.w_button_legend_hint_C.ExecuteUbergraph_w_button_legend_hint");

	Uw_button_legend_hint_C_ExecuteUbergraph_w_button_legend_hint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
