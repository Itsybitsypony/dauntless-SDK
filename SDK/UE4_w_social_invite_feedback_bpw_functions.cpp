// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_social_invite_feedback_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_social_invite_feedback_bpw.w_social_invite_feedback_bpw_C.OnInviteFailure
// (BlueprintCallable, BlueprintEvent)

void Uw_social_invite_feedback_bpw_C::OnInviteFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_invite_feedback_bpw.w_social_invite_feedback_bpw_C.OnInviteFailure");

	Uw_social_invite_feedback_bpw_C_OnInviteFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_invite_feedback_bpw.w_social_invite_feedback_bpw_C.Reset
// (BlueprintCallable, BlueprintEvent)

void Uw_social_invite_feedback_bpw_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_invite_feedback_bpw.w_social_invite_feedback_bpw_C.Reset");

	Uw_social_invite_feedback_bpw_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_invite_feedback_bpw.w_social_invite_feedback_bpw_C.OnInviteSuccess
// (BlueprintCallable, BlueprintEvent)

void Uw_social_invite_feedback_bpw_C::OnInviteSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_invite_feedback_bpw.w_social_invite_feedback_bpw_C.OnInviteSuccess");

	Uw_social_invite_feedback_bpw_C_OnInviteSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_social_invite_feedback_bpw.w_social_invite_feedback_bpw_C.ExecuteUbergraph_w_social_invite_feedback_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_social_invite_feedback_bpw_C::ExecuteUbergraph_w_social_invite_feedback_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_social_invite_feedback_bpw.w_social_invite_feedback_bpw_C.ExecuteUbergraph_w_social_invite_feedback_bpw");

	Uw_social_invite_feedback_bpw_C_ExecuteUbergraph_w_social_invite_feedback_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
