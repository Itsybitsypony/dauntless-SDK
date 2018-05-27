// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_hud_danger_meter_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_hud_danger_meter_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.GetVisibility_1");

	Uw_hud_danger_meter_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Get_TextBlock_0_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_hud_danger_meter_bpw_C::Get_TextBlock_0_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Get_TextBlock_0_Text_1");

	Uw_hud_danger_meter_bpw_C_Get_TextBlock_0_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.UpdateDanger_Level
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_hud_danger_meter_bpw_C::UpdateDanger_Level(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.UpdateDanger_Level");

	Uw_hud_danger_meter_bpw_C_UpdateDanger_Level_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Get_DangerValue_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_hud_danger_meter_bpw_C::Get_DangerValue_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Get_DangerValue_Text_1");

	Uw_hud_danger_meter_bpw_C_Get_DangerValue_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_hud_danger_meter_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Construct");

	Uw_hud_danger_meter_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_hud_danger_meter_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.Tick");

	Uw_hud_danger_meter_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.DangerANimTimeline
// (BlueprintCallable, BlueprintEvent)

void Uw_hud_danger_meter_bpw_C::DangerANimTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.DangerANimTimeline");

	Uw_hud_danger_meter_bpw_C_DangerANimTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_hud_danger_meter_bpw_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.OnAnimationFinished");

	Uw_hud_danger_meter_bpw_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_hud_danger_meter_bpw_C::OnAnimationStarted(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.OnAnimationStarted");

	Uw_hud_danger_meter_bpw_C_OnAnimationStarted_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.ExecuteUbergraph_w_hud_danger_meter_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_hud_danger_meter_bpw_C::ExecuteUbergraph_w_hud_danger_meter_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_danger_meter_bpw.w_hud_danger_meter_bpw_C.ExecuteUbergraph_w_hud_danger_meter_bpw");

	Uw_hud_danger_meter_bpw_C_ExecuteUbergraph_w_hud_danger_meter_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
