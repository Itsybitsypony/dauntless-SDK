// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_weapon_ihammer_activereload_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Set Slider Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Slider_Color                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ubpw_weapon_ihammer_activereload_C::Set_Slider_Color(const struct FLinearColor& Slider_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Set Slider Color");

	Ubpw_weapon_ihammer_activereload_C_Set_Slider_Color_Params params;
	params.Slider_Color = Slider_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Reset Colors
// (BlueprintCallable, BlueprintEvent)

void Ubpw_weapon_ihammer_activereload_C::Reset_Colors()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Reset Colors");

	Ubpw_weapon_ihammer_activereload_C_Reset_Colors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_ihammer_activereload_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnAnimationFinished");

	Ubpw_weapon_ihammer_activereload_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnActiveReloadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active_Reload_Success_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_ihammer_activereload_C::OnActiveReloadComplete(bool Active_Reload_Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnActiveReloadComplete");

	Ubpw_weapon_ihammer_activereload_C_OnActiveReloadComplete_Params params;
	params.Active_Reload_Success_ = Active_Reload_Success_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_ihammer_activereload_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Tick");

	Ubpw_weapon_ihammer_activereload_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.UpdateMeter
// (BlueprintCallable, BlueprintEvent)

void Ubpw_weapon_ihammer_activereload_C::UpdateMeter()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.UpdateMeter");

	Ubpw_weapon_ihammer_activereload_C_UpdateMeter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_weapon_ihammer_activereload_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.Construct");

	Ubpw_weapon_ihammer_activereload_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnActiveReloadStarted
// (BlueprintCallable, BlueprintEvent)

void Ubpw_weapon_ihammer_activereload_C::OnActiveReloadStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.OnActiveReloadStarted");

	Ubpw_weapon_ihammer_activereload_C_OnActiveReloadStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.ExecuteUbergraph_bpw_weapon_ihammer_activereload
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_ihammer_activereload_C::ExecuteUbergraph_bpw_weapon_ihammer_activereload(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_ihammer_activereload.bpw_weapon_ihammer_activereload_C.ExecuteUbergraph_bpw_weapon_ihammer_activereload");

	Ubpw_weapon_ihammer_activereload_C_ExecuteUbergraph_bpw_weapon_ihammer_activereload_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
