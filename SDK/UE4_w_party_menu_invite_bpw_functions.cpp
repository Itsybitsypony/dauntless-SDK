// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_party_menu_invite_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_party_menu_invite_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.GetDefaultFocusedWidget");

	Uw_party_menu_invite_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_party_menu_invite_bpw_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnMouseButtonDown");

	Uw_party_menu_invite_bpw_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_party_menu_invite_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnKeyDown");

	Uw_party_menu_invite_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_invite_bpw_C::BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Uw_party_menu_invite_bpw_C_BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_party_menu_invite_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Construct");

	Uw_party_menu_invite_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnAvailablePlayers
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class APlayerState*>    AvailablePlayers               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_party_menu_invite_bpw_C::OnAvailablePlayers(bool bSuccess, TArray<class APlayerState*> AvailablePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnAvailablePlayers");

	Uw_party_menu_invite_bpw_C_OnAvailablePlayers_Params params;
	params.bSuccess = bSuccess;
	params.AvailablePlayers = AvailablePlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.AddPlayerToQuickList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Player_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FUniqueNetIdRepl        Player_ID                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Invite_Sent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_invite_bpw_C::AddPlayerToQuickList(const class FString& Player_Name, const struct FUniqueNetIdRepl& Player_ID, bool Invite_Sent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.AddPlayerToQuickList");

	Uw_party_menu_invite_bpw_C_AddPlayerToQuickList_Params params;
	params.Player_Name = Player_Name;
	params.Player_ID = Player_ID;
	params.Invite_Sent = Invite_Sent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_invite_bpw_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");

	Uw_party_menu_invite_bpw_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Close
// (BlueprintCallable, BlueprintEvent)

void Uw_party_menu_invite_bpw_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Close");

	Uw_party_menu_invite_bpw_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_invite_bpw_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");

	Uw_party_menu_invite_bpw_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnInviteSent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUniqueNetIdRepl        ReceiverId                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  ReceiverDisplayName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_party_menu_invite_bpw_C::OnInviteSent(bool bSuccess, const struct FUniqueNetIdRepl& ReceiverId, const class FString& ReceiverDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnInviteSent");

	Uw_party_menu_invite_bpw_C_OnInviteSent_Params params;
	params.bSuccess = bSuccess;
	params.ReceiverId = ReceiverId;
	params.ReceiverDisplayName = ReceiverDisplayName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_party_menu_invite_bpw_C::BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature");

	Uw_party_menu_invite_bpw_C_BndEvt__w_social_button_bpw_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_24_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_party_menu_invite_bpw_C::BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_24_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_24_OnEditableTextBoxChangedEvent__DelegateSignature");

	Uw_party_menu_invite_bpw_C_BndEvt__AddToPartyNameInput_K2Node_ComponentBoundEvent_24_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_invite_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.Tick");

	Uw_party_menu_invite_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.ExecuteUbergraph_w_party_menu_invite_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_party_menu_invite_bpw_C::ExecuteUbergraph_w_party_menu_invite_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.ExecuteUbergraph_w_party_menu_invite_bpw");

	Uw_party_menu_invite_bpw_C_ExecuteUbergraph_w_party_menu_invite_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_party_menu_invite_bpw_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_party_menu_invite_bpw.w_party_menu_invite_bpw_C.OnClosed__DelegateSignature");

	Uw_party_menu_invite_bpw_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
