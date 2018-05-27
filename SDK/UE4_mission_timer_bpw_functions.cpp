// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mission_timer_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mission_timer_bpw.mission_timer_bpw_C.Get_TimeRemaining_ShadowColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Umission_timer_bpw_C::Get_TimeRemaining_ShadowColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mission_timer_bpw.mission_timer_bpw_C.Get_TimeRemaining_ShadowColorAndOpacity_1");

	Umission_timer_bpw_C_Get_TimeRemaining_ShadowColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mission_timer_bpw.mission_timer_bpw_C.Get_TimeRemaining_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Umission_timer_bpw_C::Get_TimeRemaining_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mission_timer_bpw.mission_timer_bpw_C.Get_TimeRemaining_ColorAndOpacity_1");

	Umission_timer_bpw_C_Get_TimeRemaining_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mission_timer_bpw.mission_timer_bpw_C.Get_Crew Lives Remaining_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Umission_timer_bpw_C::Get_Crew_Lives_Remaining_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function mission_timer_bpw.mission_timer_bpw_C.Get_Crew Lives Remaining_Text_1");

	Umission_timer_bpw_C_Get_Crew_Lives_Remaining_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function mission_timer_bpw.mission_timer_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Umission_timer_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function mission_timer_bpw.mission_timer_bpw_C.Construct");

	Umission_timer_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mission_timer_bpw.mission_timer_bpw_C.FadeOut
// (BlueprintCallable, BlueprintEvent)

void Umission_timer_bpw_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function mission_timer_bpw.mission_timer_bpw_C.FadeOut");

	Umission_timer_bpw_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mission_timer_bpw.mission_timer_bpw_C.ExecuteUbergraph_mission_timer_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umission_timer_bpw_C::ExecuteUbergraph_mission_timer_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mission_timer_bpw.mission_timer_bpw_C.ExecuteUbergraph_mission_timer_bpw");

	Umission_timer_bpw_C_ExecuteUbergraph_mission_timer_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
