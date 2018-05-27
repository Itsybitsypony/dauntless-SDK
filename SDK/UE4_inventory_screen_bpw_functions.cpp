// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_inventory_screen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function inventory_screen_bpw.inventory_screen_bpw_C.Equip Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bDidEquip                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::Equip_Item(const class FString& ItemInstanceId, bool* bDidEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Equip Item");

	Uinventory_screen_bpw_C_Equip_Item_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDidEquip != nullptr)
		*bDidEquip = params.bDidEquip;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.Can Equip Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uinventory_screen_bpw_C::Can_Equip_Item(const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Can Equip Item");

	Uinventory_screen_bpw_C_Can_Equip_Item_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.HACK Is FTUE Tutorial S01_Q01 Active
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::HACK_Is_FTUE_Tutorial_S01_Q01_Active(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.HACK Is FTUE Tutorial S01_Q01 Active");

	Uinventory_screen_bpw_C_HACK_Is_FTUE_Tutorial_S01_Q01_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsActive != nullptr)
		*IsActive = params.IsActive;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.Can Dust Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uinventory_screen_bpw_C::Can_Dust_Item(const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Can Dust Item");

	Uinventory_screen_bpw_C_Can_Dust_Item_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.Get Inventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonInventory*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AArchonInventory* Uinventory_screen_bpw_C::Get_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Get Inventory");

	Uinventory_screen_bpw_C_Get_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uinventory_screen_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.GetDefaultFocusedWidget");

	Uinventory_screen_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.GetCategoryData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInventory_sorting_mode> SortingMode                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Finventory_panel_entry> Views                          (Parm, OutParm, ZeroConstructor)

void Uinventory_screen_bpw_C::GetCategoryData(TEnumAsByte<EInventory_sorting_mode> SortingMode, TArray<struct Finventory_panel_entry>* Views)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.GetCategoryData");

	Uinventory_screen_bpw_C_GetCategoryData_Params params;
	params.SortingMode = SortingMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Views != nullptr)
		*Views = params.Views;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.SetupPickerBox
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Finventory_panel_entry> Views                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uinventory_screen_bpw_C::SetupPickerBox(TArray<struct Finventory_panel_entry>* Views)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.SetupPickerBox");

	Uinventory_screen_bpw_C_SetupPickerBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Views != nullptr)
		*Views = params.Views;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.SetButton_Highlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Active_Button                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::SetButton_Highlighted(class UButton* Active_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.SetButton_Highlighted");

	Uinventory_screen_bpw_C_SetButton_Highlighted_Params params;
	params.Active_Button = Active_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uinventory_screen_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.OnKeyDown");

	Uinventory_screen_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.GTFO
// (BlueprintCallable, BlueprintEvent)

void Uinventory_screen_bpw_C::GTFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.GTFO");

	Uinventory_screen_bpw_C_GTFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.BndEvt__w_tabs_scaleable_bpw_56_K2Node_ComponentBoundEvent_321_TabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::BndEvt__w_tabs_scaleable_bpw_56_K2Node_ComponentBoundEvent_321_TabSelected__DelegateSignature(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.BndEvt__w_tabs_scaleable_bpw_56_K2Node_ComponentBoundEvent_321_TabSelected__DelegateSignature");

	Uinventory_screen_bpw_C_BndEvt__w_tabs_scaleable_bpw_56_K2Node_ComponentBoundEvent_321_TabSelected__DelegateSignature_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.DUST
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::DUST(const class FString& InstanceId, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.DUST");

	Uinventory_screen_bpw_C_DUST_Params params;
	params.InstanceId = InstanceId;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.BndEvt__w_Pickerbox_bpw_K2Node_ComponentBoundEvent_2001_PickerChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::BndEvt__w_Pickerbox_bpw_K2Node_ComponentBoundEvent_2001_PickerChanged__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.BndEvt__w_Pickerbox_bpw_K2Node_ComponentBoundEvent_2001_PickerChanged__DelegateSignature");

	Uinventory_screen_bpw_C_BndEvt__w_Pickerbox_bpw_K2Node_ComponentBoundEvent_2001_PickerChanged__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.UpdatedAfterInventoryChange
// (BlueprintCallable, BlueprintEvent)

void Uinventory_screen_bpw_C::UpdatedAfterInventoryChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.UpdatedAfterInventoryChange");

	Uinventory_screen_bpw_C_UpdatedAfterInventoryChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.ClientOnInventoryChanged
// (BlueprintCallable, BlueprintEvent)

void Uinventory_screen_bpw_C::ClientOnInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.ClientOnInventoryChanged");

	Uinventory_screen_bpw_C_ClientOnInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.ItemSetTooltip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  TooltipString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uinventory_screen_bpw_C::ItemSetTooltip(const class FString& TooltipString)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.ItemSetTooltip");

	Uinventory_screen_bpw_C_ItemSetTooltip_Params params;
	params.TooltipString = TooltipString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.ClearTooltip
// (BlueprintCallable, BlueprintEvent)

void Uinventory_screen_bpw_C::ClearTooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.ClearTooltip");

	Uinventory_screen_bpw_C_ClearTooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.AddItemTooltip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uinventory_screen_bpw_C::AddItemTooltip(const class FString& InstanceId, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.AddItemTooltip");

	Uinventory_screen_bpw_C_AddItemTooltip_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uinventory_screen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Construct");

	Uinventory_screen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.RefreshInventoryPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SendFocusToList                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::RefreshInventoryPanel(bool SendFocusToList)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.RefreshInventoryPanel");

	Uinventory_screen_bpw_C_RefreshInventoryPanel_Params params;
	params.SendFocusToList = SendFocusToList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.OnItemHovered_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            HoveredIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::OnItemHovered_Event_1(const class FString& InstanceId, const class FString& ItemID, int HoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.OnItemHovered_Event_1");

	Uinventory_screen_bpw_C_OnItemHovered_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.HoveredIndex = HoveredIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.OnItemUnHovered_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            UnHoveredIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::OnItemUnHovered_Event_1(const class FString& InstanceId, const class FString& ItemID, int UnHoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.OnItemUnHovered_Event_1");

	Uinventory_screen_bpw_C_OnItemUnHovered_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.UnHoveredIndex = UnHoveredIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.OnSalvageButtonClicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::OnSalvageButtonClicked_Event_1(const class FString& InstanceId, const class FString& ItemID, int Index, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.OnSalvageButtonClicked_Event_1");

	Uinventory_screen_bpw_C_OnSalvageButtonClicked_Event_1_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.OnTooltipWarningChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  TooltipString                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uinventory_screen_bpw_C::OnTooltipWarningChanged_Event_1(const class FString& TooltipString)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.OnTooltipWarningChanged_Event_1");

	Uinventory_screen_bpw_C_OnTooltipWarningChanged_Event_1_Params params;
	params.TooltipString = TooltipString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.SetTabIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TabIndex                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::SetTabIndex(int TabIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.SetTabIndex");

	Uinventory_screen_bpw_C_SetTabIndex_Params params;
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.OnSecondaryClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::OnSecondaryClick(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.OnSecondaryClick");

	Uinventory_screen_bpw_C_OnSecondaryClick_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.Show Context Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uinventory_screen_bpw_C::Show_Context_Menu(const class FString& InstanceId, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Show Context Menu");

	Uinventory_screen_bpw_C_Show_Context_Menu_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.Equip Selected
// (BlueprintCallable, BlueprintEvent)

void Uinventory_screen_bpw_C::Equip_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Equip Selected");

	Uinventory_screen_bpw_C_Equip_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.Dust Selected
// (BlueprintCallable, BlueprintEvent)

void Uinventory_screen_bpw_C::Dust_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Dust Selected");

	Uinventory_screen_bpw_C_Dust_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.Add Context Menu Actions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uinventory_screen_bpw_C::Add_Context_Menu_Actions(const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.Add Context Menu Actions");

	Uinventory_screen_bpw_C_Add_Context_Menu_Actions_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.TryEquipItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uinventory_screen_bpw_C::TryEquipItem(const class FString& ItemInstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.TryEquipItem");

	Uinventory_screen_bpw_C_TryEquipItem_Params params;
	params.ItemInstanceId = ItemInstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.CommitOnLoadoutChanged
// (BlueprintCallable, BlueprintEvent)

void Uinventory_screen_bpw_C::CommitOnLoadoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.CommitOnLoadoutChanged");

	Uinventory_screen_bpw_C_CommitOnLoadoutChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.ExecuteUbergraph_inventory_screen_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::ExecuteUbergraph_inventory_screen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.ExecuteUbergraph_inventory_screen_bpw");

	Uinventory_screen_bpw_C_ExecuteUbergraph_inventory_screen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.ItemDusted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uinventory_screen_bpw_C::ItemDusted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.ItemDusted__DelegateSignature");

	Uinventory_screen_bpw_C_ItemDusted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function inventory_screen_bpw.inventory_screen_bpw_C.OnInventoryClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eui_character_screen_mode> Previous_Screen                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_screen_bpw_C::OnInventoryClosed__DelegateSignature(TEnumAsByte<Eui_character_screen_mode> Previous_Screen)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_screen_bpw.inventory_screen_bpw_C.OnInventoryClosed__DelegateSignature");

	Uinventory_screen_bpw_C_OnInventoryClosed__DelegateSignature_Params params;
	params.Previous_Screen = Previous_Screen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
