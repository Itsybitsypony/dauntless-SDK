// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanModifyItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_Loadout_Section_Weapon_C::CanModifyItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanModifyItems");

	Uw_Loadout_Section_Weapon_C_CanModifyItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanInspectItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_Loadout_Section_Weapon_C::CanInspectItem(class UArchonInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanInspectItem");

	Uw_Loadout_Section_Weapon_C_CanInspectItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Button Legend Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::Clear_Button_Legend_Action(const struct FName& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Button Legend Action");

	Uw_Loadout_Section_Weapon_C_Clear_Button_Legend_Action_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Update Button Legend Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::Update_Button_Legend_Action(bool Show, const struct FName& Action, const struct FText& Label, bool Enabled, struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Update Button Legend Action");

	Uw_Loadout_Section_Weapon_C_Update_Button_Legend_Action_Params params;
	params.Show = Show;
	params.Action = Action;
	params.Label = Label;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanInfuseCell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_Loadout_Section_Weapon_C::CanInfuseCell(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanInfuseCell");

	Uw_Loadout_Section_Weapon_C_CanInfuseCell_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GetTransmogOrItemId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonInventoryItem*    WeaponItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::GetTransmogOrItemId(class UArchonInventoryItem* WeaponItem, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GetTransmogOrItemId");

	Uw_Loadout_Section_Weapon_C_GetTransmogOrItemId_Params params;
	params.WeaponItem = WeaponItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Loadout_Section_Weapon_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GetVisibility_1");

	Uw_Loadout_Section_Weapon_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetupWeaponGrid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    FocusedWeaponType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::SetupWeaponGrid(EWeaponType FocusedWeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetupWeaponGrid");

	Uw_Loadout_Section_Weapon_C_SetupWeaponGrid_Params params;
	params.FocusedWeaponType = FocusedWeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Get_BigClickArea_0_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Loadout_Section_Weapon_C::Get_BigClickArea_0_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Get_BigClickArea_0_Visibility_1");

	Uw_Loadout_Section_Weapon_C_Get_BigClickArea_0_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.UpdateWeaponPaperdoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::UpdateWeaponPaperdoll(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.UpdateWeaponPaperdoll");

	Uw_Loadout_Section_Weapon_C_UpdateWeaponPaperdoll_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Loadout_Section_Weapon_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnFocusReceived");

	Uw_Loadout_Section_Weapon_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_34_PickerBox_Left__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::BndEvt__Wep_Button_K2Node_ComponentBoundEvent_34_PickerBox_Left__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_34_PickerBox_Left__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_34_PickerBox_Left__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_43_PickerBox_Right__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::BndEvt__Wep_Button_K2Node_ComponentBoundEvent_43_PickerBox_Right__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_43_PickerBox_Right__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_43_PickerBox_Right__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_117_CenterPicker_Selected__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::BndEvt__Wep_Button_K2Node_ComponentBoundEvent_117_CenterPicker_Selected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_117_CenterPicker_Selected__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_117_CenterPicker_Selected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_51_GroupPipSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::BndEvt__Wep_Button_K2Node_ComponentBoundEvent_51_GroupPipSelected__DelegateSignature(EWeaponType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_51_GroupPipSelected__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_51_GroupPipSelected__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GridItem_UnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::GridItem_UnHovered(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GridItem_UnHovered");

	Uw_Loadout_Section_Weapon_C_GridItem_UnHovered_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.UnFocused
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::UnFocused()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.UnFocused");

	Uw_Loadout_Section_Weapon_C_UnFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_32_ClearTooltip__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::BndEvt__Wep_Button_K2Node_ComponentBoundEvent_32_ClearTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_32_ClearTooltip__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_32_ClearTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Preview Tooltip
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::Clear_Preview_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Preview Tooltip");

	Uw_Loadout_Section_Weapon_C_Clear_Preview_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetRootReference
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uloadout_screen_bpw_C*   Root_Menu                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ButtonLegend                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::SetRootReference(class Uloadout_screen_bpw_C* Root_Menu, class UUserWidget* ButtonLegend)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetRootReference");

	Uw_Loadout_Section_Weapon_C_SetRootReference_Params params;
	params.Root_Menu = Root_Menu;
	params.ButtonLegend = ButtonLegend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_330_PushCategoryFocus__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::BndEvt__Wep_Button_K2Node_ComponentBoundEvent_330_PushCategoryFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_330_PushCategoryFocus__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_330_PushCategoryFocus__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.EmptyGrid_UnHovered
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::EmptyGrid_UnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.EmptyGrid_UnHovered");

	Uw_Loadout_Section_Weapon_C_EmptyGrid_UnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ClickedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::OnItemClicked_Event_1(const class FString& InstanceId, const class FString& ItemID, int ClickedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemClicked_Event_1");

	Uw_Loadout_Section_Weapon_C_OnItemClicked_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.ClickedIndex = ClickedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemFocused_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::OnItemFocused_Event_1(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemFocused_Event_1");

	Uw_Loadout_Section_Weapon_C_OnItemFocused_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetActiveInstanceIDToEquippedWeapon
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::SetActiveInstanceIDToEquippedWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetActiveInstanceIDToEquippedWeapon");

	Uw_Loadout_Section_Weapon_C_SetActiveInstanceIDToEquippedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemSecondaryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::OnItemSecondaryClicked(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemSecondaryClicked");

	Uw_Loadout_Section_Weapon_C_OnItemSecondaryClicked_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Add Context Actions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ucontext_menu_bpw_C*     ContextMenu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::Add_Context_Actions(class Ucontext_menu_bpw_C* ContextMenu, const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Add Context Actions");

	Uw_Loadout_Section_Weapon_C_Add_Context_Actions_Params params;
	params.ContextMenu = ContextMenu;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenInfuse
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnOpenInfuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenInfuse");

	Uw_Loadout_Section_Weapon_C_OnOpenInfuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenDyes
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnOpenDyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenDyes");

	Uw_Loadout_Section_Weapon_C_OnOpenDyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenTransmog
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnOpenTransmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenTransmog");

	Uw_Loadout_Section_Weapon_C_OnOpenTransmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnSalvage
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnSalvage()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnSalvage");

	Uw_Loadout_Section_Weapon_C_OnSalvage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.EquipItem_Weapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::EquipItem_Weapon(const class FString& InstanceId, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.EquipItem_Weapon");

	Uw_Loadout_Section_Weapon_C_EquipItem_Weapon_Params params;
	params.InstanceId = InstanceId;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenCellInfusion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::OpenCellInfusion(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenCellInfusion");

	Uw_Loadout_Section_Weapon_C_OpenCellInfusion_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenTransmogWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::OpenTransmogWindow(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenTransmogWindow");

	Uw_Loadout_Section_Weapon_C_OpenTransmogWindow_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Update Paperdoll Transmog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::Update_Paperdoll_Transmog(const class FString& InstanceId, const class FString& TransmogId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Update Paperdoll Transmog");

	Uw_Loadout_Section_Weapon_C_Update_Paperdoll_Transmog_Params params;
	params.InstanceId = InstanceId;
	params.TransmogId = TransmogId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_16_Button Hovered__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_16_Button_Hovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_16_Button Hovered__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_16_Button_Hovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Show Context Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::Show_Context_Menu(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Show Context Menu");

	Uw_Loadout_Section_Weapon_C_Show_Context_Menu_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_11_Button Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_11_Button_Clicked__DelegateSignature(EWeaponType WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_11_Button Clicked__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_11_Button_Clicked__DelegateSignature_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Refresh Button Legend
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::Refresh_Button_Legend()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Refresh Button Legend");

	Uw_Loadout_Section_Weapon_C_Refresh_Button_Legend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendInfuse
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnButtonLegendInfuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendInfuse");

	Uw_Loadout_Section_Weapon_C_OnButtonLegendInfuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendDye
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnButtonLegendDye()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendDye");

	Uw_Loadout_Section_Weapon_C_OnButtonLegendDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendTransmog
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnButtonLegendTransmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendTransmog");

	Uw_Loadout_Section_Weapon_C_OnButtonLegendTransmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Weapon Button Legend Actions
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::Clear_Weapon_Button_Legend_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Weapon Button Legend Actions");

	Uw_Loadout_Section_Weapon_C_Clear_Weapon_Button_Legend_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Construct");

	Uw_Loadout_Section_Weapon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Leave Weapon Section
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::Leave_Weapon_Section()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Leave Weapon Section");

	Uw_Loadout_Section_Weapon_C_Leave_Weapon_Section_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnCellInfusionClosed
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnCellInfusionClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnCellInfusionClosed");

	Uw_Loadout_Section_Weapon_C_OnCellInfusionClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnInspect
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnInspect");

	Uw_Loadout_Section_Weapon_C_OnInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendInspect
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::OnButtonLegendInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendInspect");

	Uw_Loadout_Section_Weapon_C_OnButtonLegendInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenInspect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::OpenInspect(const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenInspect");

	Uw_Loadout_Section_Weapon_C_OpenInspect_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CommitOnLoadoutChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::CommitOnLoadoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CommitOnLoadoutChanged");

	Uw_Loadout_Section_Weapon_C_CommitOnLoadoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.ExecuteUbergraph_w_Loadout_Section_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::ExecuteUbergraph_w_Loadout_Section_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.ExecuteUbergraph_w_Loadout_Section_Weapon");

	Uw_Loadout_Section_Weapon_C_ExecuteUbergraph_w_Loadout_Section_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Transmog__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Weapon_C::PaperdollUpdate_Transmog__DelegateSignature(const class FString& InstanceId, const class FString& TransmogId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Transmog__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_PaperdollUpdate_Transmog__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.TransmogId = TransmogId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BlockParentInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BlockInput                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::BlockParentInput__DelegateSignature(bool BlockInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BlockParentInput__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_BlockParentInput__DelegateSignature_Params params;
	params.BlockInput = BlockInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PushFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> ScreenMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::PushFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> ScreenMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PushFocus__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_PushFocus__DelegateSignature_Params params;
	params.ScreenMode = ScreenMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Weapon4Pose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::PaperdollUpdate_Weapon4Pose__DelegateSignature(EWeaponType WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Weapon4Pose__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_PaperdollUpdate_Weapon4Pose__DelegateSignature_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Kind__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::PaperdollUpdate_Kind__DelegateSignature(const class FString& ItemID, EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Kind__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_PaperdollUpdate_Kind__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.WeaponCategoryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Weapon_C::WeaponCategoryHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.WeaponCategoryHovered__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_WeaponCategoryHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.WeaponCategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Weapon_C::WeaponCategorySelected__DelegateSignature(EWeaponType WeaponType)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.WeaponCategorySelected__DelegateSignature");

	Uw_Loadout_Section_Weapon_C_WeaponCategorySelected__DelegateSignature_Params params;
	params.WeaponType = WeaponType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
