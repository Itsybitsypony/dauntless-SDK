// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_weapon_gaxe_ui_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.GetColorAndOpacity_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Ubpw_weapon_gaxe_ui_C::GetColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.GetColorAndOpacity_2");

	Ubpw_weapon_gaxe_ui_C_GetColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Get_bar_BG_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Ubpw_weapon_gaxe_ui_C::Get_bar_BG_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Get_bar_BG_ColorAndOpacity_1");

	Ubpw_weapon_gaxe_ui_C_Get_bar_BG_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Get_flasherBG_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_weapon_gaxe_ui_C::Get_flasherBG_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Get_flasherBG_Visibility_1");

	Ubpw_weapon_gaxe_ui_C_Get_flasherBG_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.GetColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Ubpw_weapon_gaxe_ui_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.GetColorAndOpacity_1");

	Ubpw_weapon_gaxe_ui_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Get_MeterReady_Bar_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_weapon_gaxe_ui_C::Get_MeterReady_Bar_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Get_MeterReady_Bar_Visibility_1");

	Ubpw_weapon_gaxe_ui_C_Get_MeterReady_Bar_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_weapon_gaxe_ui_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.GetText_1");

	Ubpw_weapon_gaxe_ui_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_gaxe_ui_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Tick");

	Ubpw_weapon_gaxe_ui_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_weapon_gaxe_ui_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.Construct");

	Ubpw_weapon_gaxe_ui_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.ExecuteUbergraph_bpw_weapon_gaxe_ui
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_gaxe_ui_C::ExecuteUbergraph_bpw_weapon_gaxe_ui(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_gaxe_ui.bpw_weapon_gaxe_ui_C.ExecuteUbergraph_bpw_weapon_gaxe_ui");

	Ubpw_weapon_gaxe_ui_C_ExecuteUbergraph_bpw_weapon_gaxe_ui_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
