#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_cell_gear_slot_entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.SetIsSelected
struct Ubpw_debug_cell_gear_slot_entry_C_SetIsSelected_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.OnMouseButtonDown_1
struct Ubpw_debug_cell_gear_slot_entry_C_OnMouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_debug_cell_gear_slot_entry.bpw_debug_cell_gear_slot_entry_C.SetData
struct Ubpw_debug_cell_gear_slot_entry_C_SetData_Params
{
	ECellType                                          CellType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               CellRarity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EquippedName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FLinearColor                                NameColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class Ubpw_debug_cell_gear_entry_C*                OwningWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CellSlotIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Empty;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               EquippedItemRarity;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
