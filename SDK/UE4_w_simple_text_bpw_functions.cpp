// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_simple_text_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_simple_text_bpw.w_simple_text_bpw_C.GetText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_simple_text_bpw_C::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_simple_text_bpw.w_simple_text_bpw_C.GetText");

	Uw_simple_text_bpw_C_GetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_simple_text_bpw.w_simple_text_bpw_C.GetColorAndOpacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Uw_simple_text_bpw_C::GetColorAndOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_simple_text_bpw.w_simple_text_bpw_C.GetColorAndOpacity");

	Uw_simple_text_bpw_C_GetColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_simple_text_bpw.w_simple_text_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_simple_text_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_simple_text_bpw.w_simple_text_bpw_C.Construct");

	Uw_simple_text_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_simple_text_bpw.w_simple_text_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_simple_text_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_simple_text_bpw.w_simple_text_bpw_C.OnSynchronizeProperties");

	Uw_simple_text_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_simple_text_bpw.w_simple_text_bpw_C.ExecuteUbergraph_w_simple_text_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_simple_text_bpw_C::ExecuteUbergraph_w_simple_text_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_simple_text_bpw.w_simple_text_bpw_C.ExecuteUbergraph_w_simple_text_bpw");

	Uw_simple_text_bpw_C_ExecuteUbergraph_w_simple_text_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
