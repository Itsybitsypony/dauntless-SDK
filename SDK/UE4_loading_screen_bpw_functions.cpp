// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loading_screen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function loading_screen_bpw.loading_screen_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uloading_screen_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen_bpw.loading_screen_bpw_C.OnKeyDown");

	Uloading_screen_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loading_screen_bpw.loading_screen_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uloading_screen_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen_bpw.loading_screen_bpw_C.GetDefaultFocusedWidget");

	Uloading_screen_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loading_screen_bpw.loading_screen_bpw_C.ScreenFadeOut
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadScreenStyle>* LoadScreenStyle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloading_screen_bpw_C::ScreenFadeOut(TEnumAsByte<ELoadScreenStyle>* LoadScreenStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen_bpw.loading_screen_bpw_C.ScreenFadeOut");

	Uloading_screen_bpw_C_ScreenFadeOut_Params params;
	params.LoadScreenStyle = LoadScreenStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loading_screen_bpw.loading_screen_bpw_C.ScreenFadeIn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadScreenStyle>* LoadScreenStyle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloading_screen_bpw_C::ScreenFadeIn(TEnumAsByte<ELoadScreenStyle>* LoadScreenStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen_bpw.loading_screen_bpw_C.ScreenFadeIn");

	Uloading_screen_bpw_C_ScreenFadeIn_Params params;
	params.LoadScreenStyle = LoadScreenStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loading_screen_bpw.loading_screen_bpw_C.OnFadeOutComplete
// (BlueprintCallable, BlueprintEvent)

void Uloading_screen_bpw_C::OnFadeOutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen_bpw.loading_screen_bpw_C.OnFadeOutComplete");

	Uloading_screen_bpw_C_OnFadeOutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loading_screen_bpw.loading_screen_bpw_C.ExecuteUbergraph_loading_screen_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloading_screen_bpw_C::ExecuteUbergraph_loading_screen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function loading_screen_bpw.loading_screen_bpw_C.ExecuteUbergraph_loading_screen_bpw");

	Uloading_screen_bpw_C_ExecuteUbergraph_loading_screen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
