// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_message_slates_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_npc_interact_message_slates_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.GetDefaultFocusedWidget");

	Uw_npc_interact_message_slates_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.OnAquireTopOfFocusStack
// (Event, Public, BlueprintEvent)

void Uw_npc_interact_message_slates_bpw_C::OnAquireTopOfFocusStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.OnAquireTopOfFocusStack");

	Uw_npc_interact_message_slates_bpw_C_OnAquireTopOfFocusStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.DisplayNextSlate
// (BlueprintCallable, BlueprintEvent)

void Uw_npc_interact_message_slates_bpw_C::DisplayNextSlate()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.DisplayNextSlate");

	Uw_npc_interact_message_slates_bpw_C_DisplayNextSlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.Close
// (BlueprintCallable, BlueprintEvent)

void Uw_npc_interact_message_slates_bpw_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.Close");

	Uw_npc_interact_message_slates_bpw_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.ExecuteUbergraph_w_npc_interact_message_slates_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_npc_interact_message_slates_bpw_C::ExecuteUbergraph_w_npc_interact_message_slates_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C.ExecuteUbergraph_w_npc_interact_message_slates_bpw");

	Uw_npc_interact_message_slates_bpw_C_ExecuteUbergraph_w_npc_interact_message_slates_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
