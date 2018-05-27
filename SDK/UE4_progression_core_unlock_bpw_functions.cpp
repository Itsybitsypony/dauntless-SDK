// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_core_unlock_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Add Bar Animation to Panel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BarAnimation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_core_unlock_bpw_C::Add_Bar_Animation_to_Panel(class UWidget* BarAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Add Bar Animation to Panel");

	Uprogression_core_unlock_bpw_C_Add_Bar_Animation_to_Panel_Params params;
	params.BarAnimation = BarAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Setup Events
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_award      Grant                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_core_unlock_bpw_C::Setup_Events(const struct Fprogression_award& Grant, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Setup Events");

	Uprogression_core_unlock_bpw_C_Setup_Events_Params params;
	params.Grant = Grant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uprogression_core_unlock_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Construct");

	Uprogression_core_unlock_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_core_unlock_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Tick");

	Uprogression_core_unlock_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Bar Animation Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_event      Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uprogression_core_unlock_bpw_C::Bar_Animation_Finished(const struct Fprogression_event& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.Bar Animation Finished");

	Uprogression_core_unlock_bpw_C_Bar_Animation_Finished_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_core_unlock_bpw_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.OnAnimationFinished");

	Uprogression_core_unlock_bpw_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.ReceivedPatronBoostPlayers
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          PatronBoostPlayers             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uprogression_core_unlock_bpw_C::ReceivedPatronBoostPlayers(TArray<class FString> PatronBoostPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.ReceivedPatronBoostPlayers");

	Uprogression_core_unlock_bpw_C_ReceivedPatronBoostPlayers_Params params;
	params.PatronBoostPlayers = PatronBoostPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.ExecuteUbergraph_progression_core_unlock_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_core_unlock_bpw_C::ExecuteUbergraph_progression_core_unlock_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.ExecuteUbergraph_progression_core_unlock_bpw");

	Uprogression_core_unlock_bpw_C_ExecuteUbergraph_progression_core_unlock_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.AnimationsFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_award      Award                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uprogression_core_unlock_bpw_C::AnimationsFinished__DelegateSignature(const struct Fprogression_award& Award)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_core_unlock_bpw.progression_core_unlock_bpw_C.AnimationsFinished__DelegateSignature");

	Uprogression_core_unlock_bpw_C_AnimationsFinished__DelegateSignature_Params params;
	params.Award = Award;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
