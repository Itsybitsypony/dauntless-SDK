// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_equipment_list_entry_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_equipment_list_entry_bpw_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseButtonDown");

	Uw_equipment_list_entry_bpw_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_equipment_list_entry_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnFocusReceived");

	Uw_equipment_list_entry_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.HACK_Is_Zone00_S01_Q01_FTUE_QuestActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::HACK_Is_Zone00_S01_Q01_FTUE_QuestActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.HACK_Is_Zone00_S01_Q01_FTUE_QuestActive");

	Uw_equipment_list_entry_bpw_C_HACK_Is_Zone00_S01_Q01_FTUE_QuestActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_equipment_list_entry_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnKeyUp");

	Uw_equipment_list_entry_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_equipment_list_entry_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnKeyDown");

	Uw_equipment_list_entry_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetKind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::SetKind(EItemGroupType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetKind");

	Uw_equipment_list_entry_bpw_C_SetKind_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetAmountAndType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UArchonInventoryItem*    InventoryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::SetAmountAndType(const struct FArchonCatalogItem& CatalogItem, class UArchonInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetAmountAndType");

	Uw_equipment_list_entry_bpw_C_SetAmountAndType_Params params;
	params.CatalogItem = CatalogItem;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetDisplayName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_equipment_list_entry_bpw_C::SetDisplayName(const struct FArchonCatalogItem& CatalogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetDisplayName");

	Uw_equipment_list_entry_bpw_C_SetDisplayName_Params params;
	params.CatalogItem = CatalogItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnLoaded_6E46B9A840CB1463FD5EFEB0F6587676
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::OnLoaded_6E46B9A840CB1463FD5EFEB0F6587676(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnLoaded_6E46B9A840CB1463FD5EFEB0F6587676");

	Uw_equipment_list_entry_bpw_C_OnLoaded_6E46B9A840CB1463FD5EFEB0F6587676_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_equipment_list_entry_bpw_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseEnter");

	Uw_equipment_list_entry_bpw_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.UpdateWarningTooltip
// (BlueprintCallable, BlueprintEvent)

void Uw_equipment_list_entry_bpw_C::UpdateWarningTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.UpdateWarningTooltip");

	Uw_equipment_list_entry_bpw_C_UpdateWarningTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_equipment_list_entry_bpw_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseLeave");

	Uw_equipment_list_entry_bpw_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.BndEvt__w_listentry_charge_button_bpw_C_53_K2Node_ComponentBoundEvent_122_On Key Hold Complete__DelegateSignature
// (BlueprintEvent)

void Uw_equipment_list_entry_bpw_C::BndEvt__w_listentry_charge_button_bpw_C_53_K2Node_ComponentBoundEvent_122_On_Key_Hold_Complete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.BndEvt__w_listentry_charge_button_bpw_C_53_K2Node_ComponentBoundEvent_122_On Key Hold Complete__DelegateSignature");

	Uw_equipment_list_entry_bpw_C_BndEvt__w_listentry_charge_button_bpw_C_53_K2Node_ComponentBoundEvent_122_On_Key_Hold_Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Gamepad_SalvagePressed
// (BlueprintCallable, BlueprintEvent)

void Uw_equipment_list_entry_bpw_C::Gamepad_SalvagePressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Gamepad_SalvagePressed");

	Uw_equipment_list_entry_bpw_C_Gamepad_SalvagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Gamepad_SalvageReleased
// (BlueprintCallable, BlueprintEvent)

void Uw_equipment_list_entry_bpw_C::Gamepad_SalvageReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Gamepad_SalvageReleased");

	Uw_equipment_list_entry_bpw_C_Gamepad_SalvageReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_equipment_list_entry_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Construct");

	Uw_equipment_list_entry_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::On_User_Button_Clicked(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Clicked");

	Uw_equipment_list_entry_bpw_C_On_User_Button_Clicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Focused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::On_User_Button_Focused(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Focused");

	Uw_equipment_list_entry_bpw_C_On_User_Button_Focused_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Focus Lost
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonUserButton*       Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::On_User_Button_Focus_Lost(class UArchonUserButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Focus Lost");

	Uw_equipment_list_entry_bpw_C_On_User_Button_Focus_Lost_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnSecondaryClick
// (BlueprintCallable, BlueprintEvent)

void Uw_equipment_list_entry_bpw_C::OnSecondaryClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnSecondaryClick");

	Uw_equipment_list_entry_bpw_C_OnSecondaryClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_equipment_list_entry_bpw_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	Uw_equipment_list_entry_bpw_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetupKindBG
// (BlueprintCallable, BlueprintEvent)

void Uw_equipment_list_entry_bpw_C::SetupKindBG()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetupKindBG");

	Uw_equipment_list_entry_bpw_C_SetupKindBG_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ExecuteUbergraph_w_equipment_list_entry_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::ExecuteUbergraph_w_equipment_list_entry_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ExecuteUbergraph_w_equipment_list_entry_bpw");

	Uw_equipment_list_entry_bpw_C_ExecuteUbergraph_w_equipment_list_entry_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemSecondaryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::ItemSecondaryClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemSecondaryClicked__DelegateSignature");

	Uw_equipment_list_entry_bpw_C_ItemSecondaryClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemUnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::ItemUnHovered__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemUnHovered__DelegateSignature");

	Uw_equipment_list_entry_bpw_C_ItemUnHovered__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::ItemHovered__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index, class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemHovered__DelegateSignature");

	Uw_equipment_list_entry_bpw_C_ItemHovered__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.GetTooltipWarning__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  TooltipString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_equipment_list_entry_bpw_C::GetTooltipWarning__DelegateSignature(const class FString& TooltipString)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.GetTooltipWarning__DelegateSignature");

	Uw_equipment_list_entry_bpw_C_GetTooltipWarning__DelegateSignature_Params params;
	params.TooltipString = TooltipString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::ItemButtonClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemButtonClicked__DelegateSignature");

	Uw_equipment_list_entry_bpw_C_ItemButtonClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.DustButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_equipment_list_entry_bpw_C::DustButtonClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID, int Index, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.DustButtonClicked__DelegateSignature");

	Uw_equipment_list_entry_bpw_C_DustButtonClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
