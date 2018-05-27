#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugCellScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.SetSelectedCell
struct UBPW_DebugCellScreen_C_SetSelectedCell_Params
{
	class Ubpw_debug_cell_entry_C*                     Cell;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.SetSelectedGearAndSlot
struct UBPW_DebugCellScreen_C_SetSelectedGearAndSlot_Params
{
	class Ubpw_debug_cell_gear_entry_C*                Gear;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Ubpw_debug_cell_gear_slot_entry_C*           Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateEquipPanel
struct UBPW_DebugCellScreen_C_UpdateEquipPanel_Params
{
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.DeselectAllGear
struct UBPW_DebugCellScreen_C_DeselectAllGear_Params
{
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.DeselectAllCells
struct UBPW_DebugCellScreen_C_DeselectAllCells_Params
{
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateGearList
struct UBPW_DebugCellScreen_C_UpdateGearList_Params
{
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.Show
struct UBPW_DebugCellScreen_C_Show_Params
{
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.UpdateCellList
struct UBPW_DebugCellScreen_C_UpdateCellList_Params
{
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugCellScreen_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.OnClientInventoryChanged
struct UBPW_DebugCellScreen_C_OnClientInventoryChanged_Params
{
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.BndEvt__GearTypeDropDown_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugCellScreen_C_BndEvt__GearTypeDropDown_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugCellScreen.BPW_DebugCellScreen_C.ExecuteUbergraph_BPW_DebugCellScreen
struct UBPW_DebugCellScreen_C_ExecuteUbergraph_BPW_DebugCellScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
