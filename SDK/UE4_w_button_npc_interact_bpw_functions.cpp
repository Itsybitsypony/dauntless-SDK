// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_npc_interact_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.SetShouldCallAttention
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CallAttention                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_npc_interact_bpw_C::SetShouldCallAttention(bool CallAttention)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.SetShouldCallAttention");

	Uw_button_npc_interact_bpw_C_SetShouldCallAttention_Params params;
	params.CallAttention = CallAttention;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_button_npc_interact_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.OnFocusReceived");

	Uw_button_npc_interact_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_button_npc_interact_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.Construct");

	Uw_button_npc_interact_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_514_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_button_npc_interact_bpw_C::BndEvt__ActualButton_K2Node_ComponentBoundEvent_514_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.BndEvt__ActualButton_K2Node_ComponentBoundEvent_514_OnButtonClickedEvent__DelegateSignature");

	Uw_button_npc_interact_bpw_C_BndEvt__ActualButton_K2Node_ComponentBoundEvent_514_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.ExecuteUbergraph_w_button_npc_interact_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_npc_interact_bpw_C::ExecuteUbergraph_w_button_npc_interact_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.ExecuteUbergraph_w_button_npc_interact_bpw");

	Uw_button_npc_interact_bpw_C_ExecuteUbergraph_w_button_npc_interact_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.OnQuestButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fnpc_ui_struct          MenuInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_button_npc_interact_bpw_C::OnQuestButtonSelected__DelegateSignature(class UQuest* Quest, const struct Fnpc_ui_struct& MenuInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_npc_interact_bpw.w_button_npc_interact_bpw_C.OnQuestButtonSelected__DelegateSignature");

	Uw_button_npc_interact_bpw_C_OnQuestButtonSelected__DelegateSignature_Params params;
	params.Quest = Quest;
	params.MenuInfo = MenuInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
