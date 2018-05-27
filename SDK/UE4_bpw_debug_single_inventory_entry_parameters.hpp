#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_single_inventory_entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Add Transmog None Option
struct Ubpw_debug_single_inventory_entry_C_Add_Transmog_None_Option_Params
{
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Lantern Transmog
struct Ubpw_debug_single_inventory_entry_C_Setup_Lantern_Transmog_Params
{
	class AArchonInventory*                            Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Weapon Transmog
struct Ubpw_debug_single_inventory_entry_C_Setup_Weapon_Transmog_Params
{
	class AArchonInventory*                            Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Armor Transmog
struct Ubpw_debug_single_inventory_entry_C_Setup_Armor_Transmog_Params
{
	class AArchonInventory*                            Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Succeeded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.GetToolTipWidget_1
struct Ubpw_debug_single_inventory_entry_C_GetToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.VisibleForBundle
struct Ubpw_debug_single_inventory_entry_C_VisibleForBundle_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.GetBrush_1
struct Ubpw_debug_single_inventory_entry_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.SetAmountAndType
struct Ubpw_debug_single_inventory_entry_C_SetAmountAndType_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.SetDisplayName
struct Ubpw_debug_single_inventory_entry_C_SetDisplayName_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature
struct Ubpw_debug_single_inventory_entry_C_BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature
struct Ubpw_debug_single_inventory_entry_C_BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Construct
struct Ubpw_debug_single_inventory_entry_C_Construct_Params
{
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Transmog_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
struct Ubpw_debug_single_inventory_entry_C_BndEvt__Transmog_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.ExecuteUbergraph_bpw_debug_single_inventory_entry
struct Ubpw_debug_single_inventory_entry_C_ExecuteUbergraph_bpw_debug_single_inventory_entry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
