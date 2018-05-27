// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Consumables_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.GetQuickSlotWidgetByIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class Uw_loadout_quickslot_C*> Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_loadout_quickslot_C*  Array_Element                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::GetQuickSlotWidgetByIndex(int SlotIndex, TArray<class Uw_loadout_quickslot_C*>* Array, class Uw_loadout_quickslot_C** Array_Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.GetQuickSlotWidgetByIndex");

	Uw_Loadout_Section_Consumables_C_GetQuickSlotWidgetByIndex_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Array_Element != nullptr)
		*Array_Element = params.Array_Element;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Get_BigTriClickArea_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Loadout_Section_Consumables_C::Get_BigTriClickArea_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Get_BigTriClickArea_Visibility_1");

	Uw_Loadout_Section_Consumables_C_Get_BigTriClickArea_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Get_quickItem_categoryLabel_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Loadout_Section_Consumables_C::Get_quickItem_categoryLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Get_quickItem_categoryLabel_Text_1");

	Uw_Loadout_Section_Consumables_C_Get_quickItem_categoryLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Loadout_Section_Consumables_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnFocusReceived");

	Uw_Loadout_Section_Consumables_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Construct");

	Uw_Loadout_Section_Consumables_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.EquipQuickItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::EquipQuickItem(const class FString& ItemInstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.EquipQuickItem");

	Uw_Loadout_Section_Consumables_C_EquipQuickItem_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_215_SendFocusLeft__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_215_SendFocusLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_215_SendFocusLeft__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_215_SendFocusLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_223_SendFocusRight__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_223_SendFocusRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_223_SendFocusRight__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_223_SendFocusRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Grid Item UNFOCUSED
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::Grid_Item_UNFOCUSED()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Grid Item UNFOCUSED");

	Uw_Loadout_Section_Consumables_C_Grid_Item_UNFOCUSED_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Clear Tooltip
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::Clear_Tooltip()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Clear Tooltip");

	Uw_Loadout_Section_Consumables_C_Clear_Tooltip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_378_Main Button Hovered__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_378_Main_Button_Hovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_378_Main Button Hovered__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_378_Main_Button_Hovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_414_ConsumableSlotHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Quick_Slot_Index               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_414_ConsumableSlotHovered__DelegateSignature(const class FString& ItemID, int Quick_Slot_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_414_ConsumableSlotHovered__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_414_ConsumableSlotHovered__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.Quick_Slot_Index = Quick_Slot_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Set Root Reference
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uloadout_screen_bpw_C*   Root                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::Set_Root_Reference(class Uloadout_screen_bpw_C* Root)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Set Root Reference");

	Uw_Loadout_Section_Consumables_C_Set_Root_Reference_Params params;
	params.Root = Root;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_695_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_695_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_695_OnButtonClickedEvent__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_695_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_719_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_719_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_719_OnButtonHoverEvent__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_719_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_740_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_740_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_740_OnButtonClickedEvent__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_740_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_766_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_766_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_766_OnButtonHoverEvent__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_766_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OpenStorefromItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            GridSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::OpenStorefromItem(const class FString& ItemInstanceId, int GridSlot, EItemGroupType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OpenStorefromItem");

	Uw_Loadout_Section_Consumables_C_OpenStorefromItem_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.GridSlot = GridSlot;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_376_OpenAdvancedMenu__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_376_OpenAdvancedMenu__DelegateSignature(EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_376_OpenAdvancedMenu__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_376_OpenAdvancedMenu__DelegateSignature_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_422_Main Button Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_422_Main_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_422_Main Button Clicked__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_422_Main_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.UpdateInventoryPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            QuickItemIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::UpdateInventoryPanel(int QuickItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.UpdateInventoryPanel");

	Uw_Loadout_Section_Consumables_C_UpdateInventoryPanel_Params params;
	params.QuickItemIndex = QuickItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnInventoryItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ClickedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::OnInventoryItemClicked(const class FString& InstanceId, const class FString& ItemID, int ClickedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnInventoryItemClicked");

	Uw_Loadout_Section_Consumables_C_OnInventoryItemClicked_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.ClickedIndex = ClickedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            HoveredIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::OnItemHovered(const class FString& InstanceId, const class FString& ItemID, int HoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemHovered");

	Uw_Loadout_Section_Consumables_C_OnItemHovered_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.HoveredIndex = HoveredIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::OnItemFocused(const class FString& InstanceId, const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemFocused");

	Uw_Loadout_Section_Consumables_C_OnItemFocused_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemUnHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            UnHoveredIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::OnItemUnHovered(const class FString& InstanceId, const class FString& ItemID, int UnHoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemUnHovered");

	Uw_Loadout_Section_Consumables_C_OnItemUnHovered_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.UnHoveredIndex = UnHoveredIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_0_QuickSlotIndex_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            quickslot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_0_QuickSlotIndex_Pressed__DelegateSignature(int quickslot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_0_QuickSlotIndex_Pressed__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_0_QuickSlotIndex_Pressed__DelegateSignature_Params params;
	params.quickslot = quickslot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnAssignQuickItemComplete
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::OnAssignQuickItemComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnAssignQuickItemComplete");

	Uw_Loadout_Section_Consumables_C_OnAssignQuickItemComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_base_inventorypanel_C* InventoryPanel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::Bind_to_Inventory_Item_Clicked(class Uw_base_inventorypanel_C* InventoryPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Clicked");

	Uw_Loadout_Section_Consumables_C_Bind_to_Inventory_Item_Clicked_Params params;
	params.InventoryPanel = InventoryPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_base_inventorypanel_C* InventoryPanel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::Bind_to_Inventory_Item_Focus(class Uw_base_inventorypanel_C* InventoryPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Focus");

	Uw_Loadout_Section_Consumables_C_Bind_to_Inventory_Item_Focus_Params params;
	params.InventoryPanel = InventoryPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_base_inventorypanel_C* InventoryPanel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::Bind_to_Inventory_Item_Hover(class Uw_base_inventorypanel_C* InventoryPanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Hover");

	Uw_Loadout_Section_Consumables_C_Bind_to_Inventory_Item_Hover_Params params;
	params.InventoryPanel = InventoryPanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Refresh All Slots
// (BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::Refresh_All_Slots()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Refresh All Slots");

	Uw_Loadout_Section_Consumables_C_Refresh_All_Slots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ExecuteUbergraph_w_Loadout_Section_Consumables
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::ExecuteUbergraph_w_Loadout_Section_Consumables(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ExecuteUbergraph_w_Loadout_Section_Consumables");

	Uw_Loadout_Section_Consumables_C_ExecuteUbergraph_w_Loadout_Section_Consumables_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OpenStore_from_Item__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::OpenStore_from_Item__DelegateSignature(const class FString& InstanceId, int SlotIndex, EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OpenStore_from_Item__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_OpenStore_from_Item__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.SlotIndex = SlotIndex;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.SendFocus_to_Armour__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::SendFocus_to_Armour__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.SendFocus_to_Armour__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_SendFocus_to_Armour__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.SendFocus_to_Weapons__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::SendFocus_to_Weapons__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.SendFocus_to_Weapons__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_SendFocus_to_Weapons__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ConsumablesCategoryHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Loadout_Section_Consumables_C::ConsumablesCategoryHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ConsumablesCategoryHovered__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_ConsumablesCategoryHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ConsumablesCategorySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            quickslot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Loadout_Section_Consumables_C::ConsumablesCategorySelected__DelegateSignature(int quickslot)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ConsumablesCategorySelected__DelegateSignature");

	Uw_Loadout_Section_Consumables_C_ConsumablesCategorySelected__DelegateSignature_Params params;
	params.quickslot = quickslot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
