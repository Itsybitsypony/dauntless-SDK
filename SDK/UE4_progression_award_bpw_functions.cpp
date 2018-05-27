// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_award_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function progression_award_bpw.progression_award_bpw_C.Add Bar Animation to Panel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BarAnimation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_award_bpw_C::Add_Bar_Animation_to_Panel(class UWidget* BarAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.Add Bar Animation to Panel");

	Uprogression_award_bpw_C_Add_Bar_Animation_to_Panel_Params params;
	params.BarAnimation = BarAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_award_bpw.progression_award_bpw_C.Setup Events
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_award      Grant                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_award_bpw_C::Setup_Events(const struct Fprogression_award& Grant, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.Setup Events");

	Uprogression_award_bpw_C_Setup_Events_Params params;
	params.Grant = Grant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function progression_award_bpw.progression_award_bpw_C.Set Rank Number
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_award_bpw_C::Set_Rank_Number(class UTextBlock* Target, int Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.Set Rank Number");

	Uprogression_award_bpw_C_Set_Rank_Number_Params params;
	params.Target = Target;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_award_bpw.progression_award_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uprogression_award_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.Construct");

	Uprogression_award_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_award_bpw.progression_award_bpw_C.Bar Animation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_event      Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uprogression_award_bpw_C::Bar_Animation_Finished(const struct Fprogression_event& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.Bar Animation Finished");

	Uprogression_award_bpw_C_Bar_Animation_Finished_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_award_bpw.progression_award_bpw_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_award_bpw_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.OnAnimationFinished");

	Uprogression_award_bpw_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_award_bpw.progression_award_bpw_C.ReceivedPatronBoostPlayers
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          PatronBoostPlayers             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uprogression_award_bpw_C::ReceivedPatronBoostPlayers(TArray<class FString> PatronBoostPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.ReceivedPatronBoostPlayers");

	Uprogression_award_bpw_C_ReceivedPatronBoostPlayers_Params params;
	params.PatronBoostPlayers = PatronBoostPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_award_bpw.progression_award_bpw_C.ExecuteUbergraph_progression_award_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_award_bpw_C::ExecuteUbergraph_progression_award_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.ExecuteUbergraph_progression_award_bpw");

	Uprogression_award_bpw_C_ExecuteUbergraph_progression_award_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_award_bpw.progression_award_bpw_C.AnimationsFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_award      Award                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uprogression_award_bpw_C::AnimationsFinished__DelegateSignature(const struct Fprogression_award& Award)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_award_bpw.progression_award_bpw_C.AnimationsFinished__DelegateSignature");

	Uprogression_award_bpw_C_AnimationsFinished__DelegateSignature_Params params;
	params.Award = Award;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
