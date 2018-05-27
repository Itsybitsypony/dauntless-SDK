// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cinematic_overlay_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.DestroySubtitleWidget
// (Private, BlueprintCallable, BlueprintEvent)

void Ucinematic_overlay_bpw_C::DestroySubtitleWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.DestroySubtitleWidget");

	Ucinematic_overlay_bpw_C_DestroySubtitleWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.CreateSubtitleWidget
// (Private, BlueprintCallable, BlueprintEvent)

void Ucinematic_overlay_bpw_C::CreateSubtitleWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.CreateSubtitleWidget");

	Ucinematic_overlay_bpw_C_CreateSubtitleWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.SkipCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void Ucinematic_overlay_bpw_C::SkipCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.SkipCinematic");

	Ucinematic_overlay_bpw_C_SkipCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucinematic_overlay_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.OnKeyDown");

	Ucinematic_overlay_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ucinematic_overlay_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.GetDefaultFocusedWidget");

	Ucinematic_overlay_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.ConfigureForCinematics
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Activating                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucinematic_overlay_bpw_C::ConfigureForCinematics(bool Activating)
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.ConfigureForCinematics");

	Ucinematic_overlay_bpw_C_ConfigureForCinematics_Params params;
	params.Activating = Activating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.Update Subtitle
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SubtitleText                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucinematic_overlay_bpw_C::Update_Subtitle(const struct FText& SubtitleText, bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.Update Subtitle");

	Ucinematic_overlay_bpw_C_Update_Subtitle_Params params;
	params.SubtitleText = SubtitleText;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.ExecuteUbergraph_cinematic_overlay_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucinematic_overlay_bpw_C::ExecuteUbergraph_cinematic_overlay_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_overlay_bpw.cinematic_overlay_bpw_C.ExecuteUbergraph_cinematic_overlay_bpw");

	Ucinematic_overlay_bpw_C_ExecuteUbergraph_cinematic_overlay_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
