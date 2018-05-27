// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_event_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function progression_event_bpw.progression_event_bpw_C.Setup Animation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_event      progression_event              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uprogression_event_bpw_C::Setup_Animation(struct Fprogression_event* progression_event, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_event_bpw.progression_event_bpw_C.Setup Animation");

	Uprogression_event_bpw_C_Setup_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (progression_event != nullptr)
		*progression_event = params.progression_event;
	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function progression_event_bpw.progression_event_bpw_C.Bar Fill Finished
// (BlueprintCallable, BlueprintEvent)

void Uprogression_event_bpw_C::Bar_Fill_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_event_bpw.progression_event_bpw_C.Bar Fill Finished");

	Uprogression_event_bpw_C_Bar_Fill_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_event_bpw.progression_event_bpw_C.Bar Fill Started
// (BlueprintCallable, BlueprintEvent)

void Uprogression_event_bpw_C::Bar_Fill_Started()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_event_bpw.progression_event_bpw_C.Bar Fill Started");

	Uprogression_event_bpw_C_Bar_Fill_Started_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_event_bpw.progression_event_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_event_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_event_bpw.progression_event_bpw_C.Tick");

	Uprogression_event_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_event_bpw.progression_event_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uprogression_event_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_event_bpw.progression_event_bpw_C.Construct");

	Uprogression_event_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_event_bpw.progression_event_bpw_C.ExecuteUbergraph_progression_event_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uprogression_event_bpw_C::ExecuteUbergraph_progression_event_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_event_bpw.progression_event_bpw_C.ExecuteUbergraph_progression_event_bpw");

	Uprogression_event_bpw_C_ExecuteUbergraph_progression_event_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function progression_event_bpw.progression_event_bpw_C.AnimationFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fprogression_event      Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uprogression_event_bpw_C::AnimationFinished__DelegateSignature(const struct Fprogression_event& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function progression_event_bpw.progression_event_bpw_C.AnimationFinished__DelegateSignature");

	Uprogression_event_bpw_C_AnimationFinished__DelegateSignature_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
