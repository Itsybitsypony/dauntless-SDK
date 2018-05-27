// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugCellScreen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.SetSelectedCell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_debug_cell_entry_C* Cell                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugCellScreen_C::SetSelectedCell(class Ubpw_debug_cell_entry_C* Cell)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.SetSelectedCell");

	UBPW_DebugCellScreen_C_SetSelectedCell_Params params;
	params.Cell = Cell;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.SetSelectedGearAndSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_debug_cell_gear_entry_C* Gear                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Ubpw_debug_cell_gear_slot_entry_C* Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugCellScreen_C::SetSelectedGearAndSlot(class Ubpw_debug_cell_gear_entry_C* Gear, class Ubpw_debug_cell_gear_slot_entry_C* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.SetSelectedGearAndSlot");

	UBPW_DebugCellScreen_C_SetSelectedGearAndSlot_Params params;
	params.Gear = Gear;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateEquipPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_DebugCellScreen_C::UpdateEquipPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateEquipPanel");

	UBPW_DebugCellScreen_C_UpdateEquipPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.DeselectAllGear
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugCellScreen_C::DeselectAllGear()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.DeselectAllGear");

	UBPW_DebugCellScreen_C_DeselectAllGear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.DeselectAllCells
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugCellScreen_C::DeselectAllCells()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.DeselectAllCells");

	UBPW_DebugCellScreen_C_DeselectAllCells_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateGearList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBPW_DebugCellScreen_C::UpdateGearList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateGearList");

	UBPW_DebugCellScreen_C_UpdateGearList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugCellScreen_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.Show");

	UBPW_DebugCellScreen_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateCellList
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_DebugCellScreen_C::UpdateCellList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateCellList");

	UBPW_DebugCellScreen_C_UpdateCellList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_DebugCellScreen_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature");

	UBPW_DebugCellScreen_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.OnClientInventoryChanged
// (BlueprintCallable, BlueprintEvent)

void UBPW_DebugCellScreen_C::OnClientInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.OnClientInventoryChanged");

	UBPW_DebugCellScreen_C_OnClientInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.BndEvt__GearTypeDropDown_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugCellScreen_C::BndEvt__GearTypeDropDown_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.BndEvt__GearTypeDropDown_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature");

	UBPW_DebugCellScreen_C_BndEvt__GearTypeDropDown_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.ExecuteUbergraph_BPW_DebugCellScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DebugCellScreen_C::ExecuteUbergraph_BPW_DebugCellScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.ExecuteUbergraph_BPW_DebugCellScreen");

	UBPW_DebugCellScreen_C_ExecuteUbergraph_BPW_DebugCellScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
