// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_accept_quest_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_npc_interact_accept_quest_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.OnKeyDown");

	Uw_npc_interact_accept_quest_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_npc_interact_accept_quest_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.GetDefaultFocusedWidget");

	Uw_npc_interact_accept_quest_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.DeclineQuest
// (BlueprintCallable, BlueprintEvent)

void Uw_npc_interact_accept_quest_bpw_C::DeclineQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.DeclineQuest");

	Uw_npc_interact_accept_quest_bpw_C_DeclineQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.AcceptQuest
// (BlueprintCallable, BlueprintEvent)

void Uw_npc_interact_accept_quest_bpw_C::AcceptQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.AcceptQuest");

	Uw_npc_interact_accept_quest_bpw_C_AcceptQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.CloseMenu
// (BlueprintCallable, BlueprintEvent)

void Uw_npc_interact_accept_quest_bpw_C::CloseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.CloseMenu");

	Uw_npc_interact_accept_quest_bpw_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_npc_interact_accept_quest_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.Construct");

	Uw_npc_interact_accept_quest_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.CheckQuestStatus
// (BlueprintCallable, BlueprintEvent)

void Uw_npc_interact_accept_quest_bpw_C::CheckQuestStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.CheckQuestStatus");

	Uw_npc_interact_accept_quest_bpw_C_CheckQuestStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.ExecuteUbergraph_w_npc_interact_accept_quest_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_npc_interact_accept_quest_bpw_C::ExecuteUbergraph_w_npc_interact_accept_quest_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_accept_quest_bpw.w_npc_interact_accept_quest_bpw_C.ExecuteUbergraph_w_npc_interact_accept_quest_bpw");

	Uw_npc_interact_accept_quest_bpw_C_ExecuteUbergraph_w_npc_interact_accept_quest_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
