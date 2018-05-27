#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_cell_gear_entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.OnCellSlotClicked
struct Ubpw_debug_cell_gear_entry_C_OnCellSlotClicked_Params
{
	class Ubpw_debug_cell_gear_slot_entry_C*           Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.SetIsSelected
struct Ubpw_debug_cell_gear_entry_C_SetIsSelected_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.SetData
struct Ubpw_debug_cell_gear_entry_C_SetData_Params
{
	class UArchonInventoryItem_CellContainer*          InvItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPW_DebugCellScreen_C*                      OwnerScreen;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.PopulateCells
struct Ubpw_debug_cell_gear_entry_C_PopulateCells_Params
{
};

// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.OnUpdateEquippedCells
struct Ubpw_debug_cell_gear_entry_C_OnUpdateEquippedCells_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_debug_cell_gear_entry.bpw_debug_cell_gear_entry_C.ExecuteUbergraph_bpw_debug_cell_gear_entry
struct Ubpw_debug_cell_gear_entry_C_ExecuteUbergraph_bpw_debug_cell_gear_entry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
