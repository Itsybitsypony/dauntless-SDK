// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_cell_gear_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.OnCellSlotClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_debug_cell_gear_slot_entry_C* Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_cell_gear_entry_C::OnCellSlotClicked(class Ubpw_debug_cell_gear_slot_entry_C* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.OnCellSlotClicked");

	Ubpw_debug_cell_gear_entry_C_OnCellSlotClicked_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.SetIsSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_cell_gear_entry_C::SetIsSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.SetIsSelected");

	Ubpw_debug_cell_gear_entry_C_SetIsSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem_CellContainer* InvItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPW_DebugCellScreen_C*  OwnerScreen                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_cell_gear_entry_C::SetData(class UArchonInventoryItem_CellContainer* InvItem, class UBPW_DebugCellScreen_C* OwnerScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.SetData");

	Ubpw_debug_cell_gear_entry_C_SetData_Params params;
	params.InvItem = InvItem;
	params.OwnerScreen = OwnerScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.PopulateCells
// (BlueprintCallable, BlueprintEvent)

void Ubpw_debug_cell_gear_entry_C::PopulateCells()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.PopulateCells");

	Ubpw_debug_cell_gear_entry_C_PopulateCells_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.OnUpdateEquippedCells
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_debug_cell_gear_entry_C::OnUpdateEquippedCells(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.OnUpdateEquippedCells");

	Ubpw_debug_cell_gear_entry_C_OnUpdateEquippedCells_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.ExecuteUbergraph_bpw_debug_cell_gear_entry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_cell_gear_entry_C::ExecuteUbergraph_bpw_debug_cell_gear_entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.ExecuteUbergraph_bpw_debug_cell_gear_entry");

	Ubpw_debug_cell_gear_entry_C_ExecuteUbergraph_bpw_debug_cell_gear_entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
