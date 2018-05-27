// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EndOfHunt_FailScreen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_FailScreen_bpw_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.GetText_1");

	UEndOfHunt_FailScreen_bpw_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.DecreaseTimeLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UEndOfHunt_FailScreen_bpw_C::DecreaseTimeLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.DecreaseTimeLeft");

	UEndOfHunt_FailScreen_bpw_C_DecreaseTimeLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Get_Time_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_FailScreen_bpw_C::Get_Time_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Get_Time_Text_1");

	UEndOfHunt_FailScreen_bpw_C_Get_Time_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.SetFightDuration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_FailScreen_bpw_C::SetFightDuration(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.SetFightDuration");

	UEndOfHunt_FailScreen_bpw_C_SetFightDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Set Success State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success_State                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_FailScreen_bpw_C::Set_Success_State(bool Success_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Set Success State");

	UEndOfHunt_FailScreen_bpw_C_Set_Success_State_Params params;
	params.Success_State = Success_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Get Mission End Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_FailScreen_bpw_C::Get_Mission_End_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Get Mission End Text");

	UEndOfHunt_FailScreen_bpw_C_Get_Mission_End_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_FailScreen_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Tick");

	UEndOfHunt_FailScreen_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEndOfHunt_FailScreen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Construct");

	UEndOfHunt_FailScreen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEndOfHunt_FailScreen_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.Destruct");

	UEndOfHunt_FailScreen_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.BndEvt__w_EndOfHunt_Buttons_K2Node_ComponentBoundEvent_79_RateMatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            MatchRating                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_FailScreen_bpw_C::BndEvt__w_EndOfHunt_Buttons_K2Node_ComponentBoundEvent_79_RateMatch__DelegateSignature(int MatchRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.BndEvt__w_EndOfHunt_Buttons_K2Node_ComponentBoundEvent_79_RateMatch__DelegateSignature");

	UEndOfHunt_FailScreen_bpw_C_BndEvt__w_EndOfHunt_Buttons_K2Node_ComponentBoundEvent_79_RateMatch__DelegateSignature_Params params;
	params.MatchRating = MatchRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.ExecuteUbergraph_EndOfHunt_FailScreen_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_FailScreen_bpw_C::ExecuteUbergraph_EndOfHunt_FailScreen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_FailScreen_bpw.EndOfHunt_FailScreen_bpw_C.ExecuteUbergraph_EndOfHunt_FailScreen_bpw");

	UEndOfHunt_FailScreen_bpw_C_ExecuteUbergraph_EndOfHunt_FailScreen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
