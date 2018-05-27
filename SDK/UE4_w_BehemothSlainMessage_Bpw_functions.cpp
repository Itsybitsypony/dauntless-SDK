// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_BehemothSlainMessage_Bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.SetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_BehemothSlainMessage_Bpw_C::SetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.SetText");

	Uw_BehemothSlainMessage_Bpw_C_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.PlayBehemothSlainText
// (BlueprintCallable, BlueprintEvent)

void Uw_BehemothSlainMessage_Bpw_C::PlayBehemothSlainText()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.PlayBehemothSlainText");

	Uw_BehemothSlainMessage_Bpw_C_PlayBehemothSlainText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_BehemothSlainMessage_Bpw_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.OnAnimationFinished");

	Uw_BehemothSlainMessage_Bpw_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_BehemothSlainMessage_Bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.Construct");

	Uw_BehemothSlainMessage_Bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.ExecuteUbergraph_w_BehemothSlainMessage_Bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_BehemothSlainMessage_Bpw_C::ExecuteUbergraph_w_BehemothSlainMessage_Bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_BehemothSlainMessage_Bpw.w_BehemothSlainMessage_Bpw_C.ExecuteUbergraph_w_BehemothSlainMessage_Bpw");

	Uw_BehemothSlainMessage_Bpw_C_ExecuteUbergraph_w_BehemothSlainMessage_Bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
