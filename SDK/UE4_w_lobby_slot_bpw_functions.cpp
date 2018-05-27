// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_lobby_slot_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Get_image_status_ready_ColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_lobby_slot_bpw_C::Get_image_status_ready_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Get_image_status_ready_ColorAndOpacity_1");

	Uw_lobby_slot_bpw_C_Get_image_status_ready_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetVisibility_hover
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_lobby_slot_bpw_C::GetVisibility_hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetVisibility_hover");

	Uw_lobby_slot_bpw_C_GetVisibility_hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.status_ready_hideShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_lobby_slot_bpw_C::status_ready_hideShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.status_ready_hideShow");

	Uw_lobby_slot_bpw_C_status_ready_hideShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetVisibility_HasFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_lobby_slot_bpw_C::GetVisibility_HasFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetVisibility_HasFocus");

	Uw_lobby_slot_bpw_C_GetVisibility_HasFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Get_image_status_ready_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_lobby_slot_bpw_C::Get_image_status_ready_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Get_image_status_ready_Brush_1");

	Uw_lobby_slot_bpw_C_Get_image_status_ready_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetScreenspacePositionPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               Position                       (Parm, OutParm, IsPlainOldData)

void Uw_lobby_slot_bpw_C::GetScreenspacePositionPlayer(struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.GetScreenspacePositionPlayer");

	Uw_lobby_slot_bpw_C_GetScreenspacePositionPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetStatusReady
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReadyStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_slot_bpw_C::SetStatusReady(bool ReadyStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetStatusReady");

	Uw_lobby_slot_bpw_C_SetStatusReady_Params params;
	params.ReadyStatus = ReadyStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetupWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_slot_bpw_C::SetupWidget(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetupWidget");

	Uw_lobby_slot_bpw_C_SetupWidget_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetScreenspacePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               TopLevelGeometry               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_lobby_slot_bpw_C::SetScreenspacePosition(const struct FGeometry& TopLevelGeometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.SetScreenspacePosition");

	Uw_lobby_slot_bpw_C_SetScreenspacePosition_Params params;
	params.TopLevelGeometry = TopLevelGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.ResetAssignment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_lobby_slot_bpw_C::ResetAssignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.ResetAssignment");

	Uw_lobby_slot_bpw_C_ResetAssignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.AssignPaperDoll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Alobby_paperdoll_bp_C*   Paperdoll                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_slot_bpw_C::AssignPaperDoll(class Alobby_paperdoll_bp_C* Paperdoll)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.AssignPaperDoll");

	Uw_lobby_slot_bpw_C_AssignPaperDoll_Params params;
	params.Paperdoll = Paperdoll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.AssignPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_lobby_slot_bpw_C::AssignPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.AssignPlayer");

	Uw_lobby_slot_bpw_C_AssignPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_lobby_slot_bpw_C::BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature");

	Uw_lobby_slot_bpw_C_BndEvt__w_SwappableButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_lobby_slot_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Construct");

	Uw_lobby_slot_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_slot_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.Tick");

	Uw_lobby_slot_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.ExecuteUbergraph_w_lobby_slot_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_slot_bpw_C::ExecuteUbergraph_w_lobby_slot_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.ExecuteUbergraph_w_lobby_slot_bpw");

	Uw_lobby_slot_bpw_C_ExecuteUbergraph_w_lobby_slot_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.LobbySlotClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_lobby_slot_bpw_C*     SlotWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_slot_bpw_C::LobbySlotClicked__DelegateSignature(int Slot, class Uw_lobby_slot_bpw_C* SlotWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_slot_bpw.w_lobby_slot_bpw_C.LobbySlotClicked__DelegateSignature");

	Uw_lobby_slot_bpw_C_LobbySlotClicked__DelegateSignature_Params params;
	params.Slot = Slot;
	params.SlotWidget = SlotWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
