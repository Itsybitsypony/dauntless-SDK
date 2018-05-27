// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Armour_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanModifyItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_Loadout_Section_Armour_C::CanModifyItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanModifyItems");

	Uw_Loadout_Section_Armour_C_CanModifyItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanInspectItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_Loadout_Section_Armour_C::CanInspectItem(class UArchonInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanInspectItem");

	Uw_Loadout_Section_Armour_C_CanInspectItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Clear Button Legend Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::Clear_Button_Legend_Action(const struct FName& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Clear Button Legend Action");

	Uw_Loadout_Section_Armour_C_Clear_Button_Legend_Action_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Button Legend Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::Update_Button_Legend_Action(bool Show, const struct FName& Action, const struct FText& Label, bool Enabled, struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Button Legend Action");

	Uw_Loadout_Section_Armour_C_Update_Button_Legend_Action_Params params;
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


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Server Assign Armour Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Earmor_slot_enum>  ArmorSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::Server_Assign_Armour_Item(class UArchonInventoryItem* Item, TEnumAsByte<Earmor_slot_enum> ArmorSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Server Assign Armour Item");

	Uw_Loadout_Section_Armour_C_Server_Assign_Armour_Item_Params params;
	params.Item = Item;
	params.ArmorSlot = ArmorSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanInfuseCell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_Loadout_Section_Armour_C::CanInfuseCell(class UObject* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanInfuseCell");

	Uw_Loadout_Section_Armour_C_CanInfuseCell_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Loadout_Section_Armour_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GetVisibility_1");

	Uw_Loadout_Section_Armour_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Get_BigClickArea_Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Loadout_Section_Armour_C::Get_BigClickArea_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Get_BigClickArea_Visibility");

	Uw_Loadout_Section_Armour_C_Get_BigClickArea_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GetEquippedItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// class FString                  ItemInstanceId                 (Parm, OutParm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::GetEquippedItem(TEnumAsByte<Earmor_slot_enum> Selection, class FString* ItemID, class FString* ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GetEquippedItem");

	Uw_Loadout_Section_Armour_C_GetEquippedItem_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (ItemInstanceId != nullptr)
		*ItemInstanceId = params.ItemInstanceId;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Loadout_Section_Armour_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnFocusReceived");

	Uw_Loadout_Section_Armour_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GamepadFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  ArmourSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::GamepadFocused(TEnumAsByte<Earmor_slot_enum> ArmourSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GamepadFocused");

	Uw_Loadout_Section_Armour_C_GamepadFocused_Params params;
	params.ArmourSlot = ArmourSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearPreviewTooltip
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::ClearPreviewTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearPreviewTooltip");

	Uw_Loadout_Section_Armour_C_ClearPreviewTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetRootReference
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uloadout_screen_bpw_C*   Root                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             ButtonLegend                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::SetRootReference(class Uloadout_screen_bpw_C* Root, class UUserWidget* ButtonLegend)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetRootReference");

	Uw_Loadout_Section_Armour_C_SetRootReference_Params params;
	params.Root = Root;
	params.ButtonLegend = ButtonLegend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_318_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Armour_C::BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_318_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_318_OnButtonClickedEvent__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_318_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Armour_C::BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearEquippedTooltip
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::ClearEquippedTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearEquippedTooltip");

	Uw_Loadout_Section_Armour_C_ClearEquippedTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_551_CategoryHovered__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Armour_C::BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_551_CategoryHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_551_CategoryHovered__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_551_CategoryHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_80_SendFocus__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_80_SendFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_80_SendFocus__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_80_SendFocus__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenCellMenu
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OpenCellMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenCellMenu");

	Uw_Loadout_Section_Armour_C_OpenCellMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenCellInfusion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::OpenCellInfusion(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenCellInfusion");

	Uw_Loadout_Section_Armour_C_OpenCellInfusion_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.UpdateFocusedInstance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::UpdateFocusedInstance(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.UpdateFocusedInstance");

	Uw_Loadout_Section_Armour_C_UpdateFocusedInstance_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenTintWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::OpenTintWindow(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenTintWindow");

	Uw_Loadout_Section_Armour_C_OpenTintWindow_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BlockInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BlockInput                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::BlockInput(bool BlockInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BlockInput");

	Uw_Loadout_Section_Armour_C_BlockInput_Params params;
	params.BlockInput = BlockInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmorCategorySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  EquipSlotClicked               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PushFocustoGrid_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::ArmorCategorySelected(TEnumAsByte<Earmor_slot_enum> EquipSlotClicked, bool PushFocustoGrid_)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmorCategorySelected");

	Uw_Loadout_Section_Armour_C_ArmorCategorySelected_Params params;
	params.EquipSlotClicked = EquipSlotClicked;
	params.PushFocustoGrid_ = PushFocustoGrid_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.AttachToLoadoutGrid
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::AttachToLoadoutGrid()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.AttachToLoadoutGrid");

	Uw_Loadout_Section_Armour_C_AttachToLoadoutGrid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ClickedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::OnItemClicked_Event_1(const class FString& InstanceId, const class FString& ItemID, int ClickedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemClicked_Event_1");

	Uw_Loadout_Section_Armour_C_OnItemClicked_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.ClickedIndex = ClickedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemHovered_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            HoveredIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::OnItemHovered_Event_1(const class FString& InstanceId, const class FString& ItemID, int HoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemHovered_Event_1");

	Uw_Loadout_Section_Armour_C_OnItemHovered_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.HoveredIndex = HoveredIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemFocused_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::OnItemFocused_Event_1(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemFocused_Event_1");

	Uw_Loadout_Section_Armour_C_OnItemFocused_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetEquippedTooltipInstanceID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  NewTooltipInstanceID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::SetEquippedTooltipInstanceID(const class FString& NewTooltipInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetEquippedTooltipInstanceID");

	Uw_Loadout_Section_Armour_C_SetEquippedTooltipInstanceID_Params params;
	params.NewTooltipInstanceID = NewTooltipInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetPreviewTooltipInstanceID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  NewTooltipInstanceID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::SetPreviewTooltipInstanceID(const class FString& NewTooltipInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetPreviewTooltipInstanceID");

	Uw_Loadout_Section_Armour_C_SetPreviewTooltipInstanceID_Params params;
	params.NewTooltipInstanceID = NewTooltipInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.FocusArmorSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::FocusArmorSlot(TEnumAsByte<Earmor_slot_enum> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.FocusArmorSlot");

	Uw_Loadout_Section_Armour_C_FocusArmorSlot_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_38_EquipSlot_Focused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  FocusedSlot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_38_EquipSlot_Focused__DelegateSignature(TEnumAsByte<Earmor_slot_enum> FocusedSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_38_EquipSlot_Focused__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_38_EquipSlot_Focused__DelegateSignature_Params params;
	params.FocusedSlot = FocusedSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemSecondaryClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::OnItemSecondaryClick(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemSecondaryClick");

	Uw_Loadout_Section_Armour_C_OnItemSecondaryClick_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Show Context Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::Show_Context_Menu(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Show Context Menu");

	Uw_Loadout_Section_Armour_C_Show_Context_Menu_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Add Context Actions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ucontext_menu_bpw_C*     ContextMenu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::Add_Context_Actions(class Ucontext_menu_bpw_C* ContextMenu, const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Add Context Actions");

	Uw_Loadout_Section_Armour_C_Add_Context_Actions_Params params;
	params.ContextMenu = ContextMenu;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenInfuse
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnOpenInfuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenInfuse");

	Uw_Loadout_Section_Armour_C_OnOpenInfuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenDyes
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnOpenDyes()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenDyes");

	Uw_Loadout_Section_Armour_C_OnOpenDyes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenTransmog
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnOpenTransmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenTransmog");

	Uw_Loadout_Section_Armour_C_OnOpenTransmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnSalvage
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnSalvage()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnSalvage");

	Uw_Loadout_Section_Armour_C_OnSalvage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.EquipItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::EquipItem(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.EquipItem");

	Uw_Loadout_Section_Armour_C_EquipItem_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_223_EquippedSlot_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_223_EquippedSlot_Clicked__DelegateSignature(TEnumAsByte<Earmor_slot_enum> Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_223_EquippedSlot_Clicked__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_223_EquippedSlot_Clicked__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Paperdoll Tints
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDyeVariant             DyeStruct                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EArmorType                     ArmourPart                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::Update_Paperdoll_Tints(const struct FDyeVariant& DyeStruct, EArmorType ArmourPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Paperdoll Tints");

	Uw_Loadout_Section_Armour_C_Update_Paperdoll_Tints_Params params;
	params.DyeStruct = DyeStruct;
	params.ArmourPart = ArmourPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_6_Button Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  Armour_Slot                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_6_Button_Hovered__DelegateSignature(TEnumAsByte<Earmor_slot_enum> Armour_Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_6_Button Hovered__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_6_Button_Hovered__DelegateSignature_Params params;
	params.Armour_Slot = Armour_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenTransmogWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::OpenTransmogWindow(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenTransmogWindow");

	Uw_Loadout_Section_Armour_C_OpenTransmogWindow_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Paperdoll Transmog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::Update_Paperdoll_Transmog(const class FString& InstanceId, const class FString& TransmogId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Paperdoll Transmog");

	Uw_Loadout_Section_Armour_C_Update_Paperdoll_Transmog_Params params;
	params.InstanceId = InstanceId;
	params.TransmogId = TransmogId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_38_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Armour_C::BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_38_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_38_Button Clicked__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_38_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Refresh Button Legend
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::Refresh_Button_Legend()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Refresh Button Legend");

	Uw_Loadout_Section_Armour_C_Refresh_Button_Legend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Tick");

	Uw_Loadout_Section_Armour_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendInfuse
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnButtonLegendInfuse()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendInfuse");

	Uw_Loadout_Section_Armour_C_OnButtonLegendInfuse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendDye
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnButtonLegendDye()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendDye");

	Uw_Loadout_Section_Armour_C_OnButtonLegendDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendTransmog
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnButtonLegendTransmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendTransmog");

	Uw_Loadout_Section_Armour_C_OnButtonLegendTransmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Construct");

	Uw_Loadout_Section_Armour_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Leave Armour Section
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::Leave_Armour_Section()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Leave Armour Section");

	Uw_Loadout_Section_Armour_C_Leave_Armour_Section_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Clear Armour Button Legend Actions
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::Clear_Armour_Button_Legend_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Clear Armour Button Legend Actions");

	Uw_Loadout_Section_Armour_C_Clear_Armour_Button_Legend_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnInspect
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnInspect");

	Uw_Loadout_Section_Armour_C_OnInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_107_UnHovered__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Armour_C::BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_107_UnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_107_UnHovered__DelegateSignature");

	Uw_Loadout_Section_Armour_C_BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_107_UnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendInspect
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::OnButtonLegendInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendInspect");

	Uw_Loadout_Section_Armour_C_OnButtonLegendInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenInspect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::OpenInspect(const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenInspect");

	Uw_Loadout_Section_Armour_C_OpenInspect_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Cell Infusion Closed
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::Cell_Infusion_Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Cell Infusion Closed");

	Uw_Loadout_Section_Armour_C_Cell_Infusion_Closed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CommitOnLoadoutChanged
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::CommitOnLoadoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CommitOnLoadoutChanged");

	Uw_Loadout_Section_Armour_C_CommitOnLoadoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ExecuteUbergraph_w_Loadout_Section_Armour
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::ExecuteUbergraph_w_Loadout_Section_Armour(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ExecuteUbergraph_w_Loadout_Section_Armour");

	Uw_Loadout_Section_Armour_C_ExecuteUbergraph_w_Loadout_Section_Armour_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourTransmogUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::ArmourTransmogUpdated__DelegateSignature(const class FString& InstanceId, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourTransmogUpdated__DelegateSignature");

	Uw_Loadout_Section_Armour_C_ArmourTransmogUpdated__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::NewEventDispatcher_0__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.NewEventDispatcher_0__DelegateSignature");

	Uw_Loadout_Section_Armour_C_NewEventDispatcher_0__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ParentBlockInput__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BlockInput                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::ParentBlockInput__DelegateSignature(bool BlockInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ParentBlockInput__DelegateSignature");

	Uw_Loadout_Section_Armour_C_ParentBlockInput__DelegateSignature_Params params;
	params.BlockInput = BlockInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearTooltips__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::ClearTooltips__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearTooltips__DelegateSignature");

	Uw_Loadout_Section_Armour_C_ClearTooltips__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.TintWindow_Closed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  focused_Slot                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::TintWindow_Closed__DelegateSignature(TEnumAsByte<Earmor_slot_enum> focused_Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.TintWindow_Closed__DelegateSignature");

	Uw_Loadout_Section_Armour_C_TintWindow_Closed__DelegateSignature_Params params;
	params.focused_Slot = focused_Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.UpdateArmourDyes_PaperDoll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDyeVariant             DyeStruct                      (BlueprintVisible, BlueprintReadOnly, Parm)
// EArmorType                     ArmourSlot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::UpdateArmourDyes_PaperDoll__DelegateSignature(const struct FDyeVariant& DyeStruct, EArmorType ArmourSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.UpdateArmourDyes_PaperDoll__DelegateSignature");

	Uw_Loadout_Section_Armour_C_UpdateArmourDyes_PaperDoll__DelegateSignature_Params params;
	params.DyeStruct = DyeStruct;
	params.ArmourSlot = ArmourSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SendFocus__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELoadout_ScreenMode> Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::SendFocus__DelegateSignature(TEnumAsByte<ELoadout_ScreenMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SendFocus__DelegateSignature");

	Uw_Loadout_Section_Armour_C_SendFocus__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCat_PaperdollUpdate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EItemGroupType                 ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Loadout_Section_Armour_C::ArmourCat_PaperdollUpdate__DelegateSignature(const class FString& ItemID, EItemGroupType ItemType, const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCat_PaperdollUpdate__DelegateSignature");

	Uw_Loadout_Section_Armour_C_ArmourCat_PaperdollUpdate__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.ItemType = ItemType;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategorySelected_BySlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  EquipSlotClicked               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::ArmourCategorySelected_BySlot__DelegateSignature(TEnumAsByte<Earmor_slot_enum> EquipSlotClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategorySelected_BySlot__DelegateSignature");

	Uw_Loadout_Section_Armour_C_ArmourCategorySelected_BySlot__DelegateSignature_Params params;
	params.EquipSlotClicked = EquipSlotClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategoryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Armour_C::ArmourCategoryHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategoryHovered__DelegateSignature");

	Uw_Loadout_Section_Armour_C_ArmourCategoryHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Armour_C::ArmourCategorySelected__DelegateSignature(TEnumAsByte<Earmor_slot_enum> NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategorySelected__DelegateSignature");

	Uw_Loadout_Section_Armour_C_ArmourCategorySelected__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
