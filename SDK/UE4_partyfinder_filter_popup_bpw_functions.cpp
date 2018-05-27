// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_partyfinder_filter_popup_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.AddRegionHeader
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Upartyfinder_filter_popup_bpw_C::AddRegionHeader(const struct FText& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.AddRegionHeader");

	Upartyfinder_filter_popup_bpw_C_AddRegionHeader_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.AddHuntCheckbox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ContextName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Tooltip                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Upartyfinder_filter_popup_bpw_C::AddHuntCheckbox(const struct FText& Label, const struct FName& ContextName, const struct FText& Tooltip)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.AddHuntCheckbox");

	Upartyfinder_filter_popup_bpw_C_AddHuntCheckbox_Params params;
	params.Label = Label;
	params.ContextName = ContextName;
	params.Tooltip = Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.HandleCommit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Upartyfinder_filter_popup_bpw_C::HandleCommit()
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.HandleCommit");

	Upartyfinder_filter_popup_bpw_C_HandleCommit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Upartyfinder_filter_popup_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnKeyDown");

	Upartyfinder_filter_popup_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Upartyfinder_filter_popup_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnFocusReceived");

	Upartyfinder_filter_popup_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.PopulateHunts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Upartyfinder_filter_popup_bpw_C::PopulateHunts()
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.PopulateHunts");

	Upartyfinder_filter_popup_bpw_C_PopulateHunts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.ValidateCommit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Upartyfinder_filter_popup_bpw_C::ValidateCommit(bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.ValidateCommit");

	Upartyfinder_filter_popup_bpw_C_ValidateCommit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Upartyfinder_filter_popup_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.Construct");

	Upartyfinder_filter_popup_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__InviteToGuildText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upartyfinder_filter_popup_bpw_C::BndEvt__InviteToGuildText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__InviteToGuildText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Upartyfinder_filter_popup_bpw_C_BndEvt__InviteToGuildText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
// (BlueprintEvent)

void Upartyfinder_filter_popup_bpw_C::BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	Upartyfinder_filter_popup_bpw_C_BndEvt__w_social_button_bpw_C_0_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_72_OnClicked__DelegateSignature
// (BlueprintEvent)

void Upartyfinder_filter_popup_bpw_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_72_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_72_OnClicked__DelegateSignature");

	Upartyfinder_filter_popup_bpw_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_72_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__FarmCheckbox_K2Node_ComponentBoundEvent_85_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upartyfinder_filter_popup_bpw_C::BndEvt__FarmCheckbox_K2Node_ComponentBoundEvent_85_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__FarmCheckbox_K2Node_ComponentBoundEvent_85_OnCheckStateChanged__DelegateSignature");

	Upartyfinder_filter_popup_bpw_C_BndEvt__FarmCheckbox_K2Node_ComponentBoundEvent_85_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__BreakCheckbox_K2Node_ComponentBoundEvent_94_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upartyfinder_filter_popup_bpw_C::BndEvt__BreakCheckbox_K2Node_ComponentBoundEvent_94_OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__BreakCheckbox_K2Node_ComponentBoundEvent_94_OnCheckStateChanged__DelegateSignature");

	Upartyfinder_filter_popup_bpw_C_BndEvt__BreakCheckbox_K2Node_ComponentBoundEvent_94_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_377_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Upartyfinder_filter_popup_bpw_C::BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_377_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_377_OnButtonClickedEvent__DelegateSignature");

	Upartyfinder_filter_popup_bpw_C_BndEvt__BackgroundClicker_K2Node_ComponentBoundEvent_377_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnConfirmCreate
// (BlueprintCallable, BlueprintEvent)

void Upartyfinder_filter_popup_bpw_C::OnConfirmCreate()
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnConfirmCreate");

	Upartyfinder_filter_popup_bpw_C_OnConfirmCreate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.ExecuteUbergraph_partyfinder_filter_popup_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Upartyfinder_filter_popup_bpw_C::ExecuteUbergraph_partyfinder_filter_popup_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.ExecuteUbergraph_partyfinder_filter_popup_bpw");

	Upartyfinder_filter_popup_bpw_C_ExecuteUbergraph_partyfinder_filter_popup_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnCommit__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Description                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           RequireGather                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RequireBreaks                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           HuntIds                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Upartyfinder_filter_popup_bpw_C::OnCommit__DelegateSignature(const class FString& Description, bool RequireGather, bool RequireBreaks, TArray<struct FName>* HuntIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function partyfinder_filter_popup_bpw.partyfinder_filter_popup_bpw_C.OnCommit__DelegateSignature");

	Upartyfinder_filter_popup_bpw_C_OnCommit__DelegateSignature_Params params;
	params.Description = Description;
	params.RequireGather = RequireGather;
	params.RequireBreaks = RequireBreaks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntIds != nullptr)
		*HuntIds = params.HuntIds;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
