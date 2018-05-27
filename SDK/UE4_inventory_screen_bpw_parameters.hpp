#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_inventory_screen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function inventory_screen_bpw.inventory_screen_bpw_C.Equip Item
struct Uinventory_screen_bpw_C_Equip_Item_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bDidEquip;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.Can Equip Item
struct Uinventory_screen_bpw_C_Can_Equip_Item_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.HACK Is FTUE Tutorial S01_Q01 Active
struct Uinventory_screen_bpw_C_HACK_Is_FTUE_Tutorial_S01_Q01_Active_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.Can Dust Item
struct Uinventory_screen_bpw_C_Can_Dust_Item_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.Get Inventory
struct Uinventory_screen_bpw_C_Get_Inventory_Params
{
	class AArchonInventory*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.GetDefaultFocusedWidget
struct Uinventory_screen_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.GetCategoryData
struct Uinventory_screen_bpw_C_GetCategoryData_Params
{
	TEnumAsByte<EInventory_sorting_mode>               SortingMode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Finventory_panel_entry>              Views;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.SetupPickerBox
struct Uinventory_screen_bpw_C_SetupPickerBox_Params
{
	TArray<struct Finventory_panel_entry>              Views;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.SetButton_Highlighted
struct Uinventory_screen_bpw_C_SetButton_Highlighted_Params
{
	class UButton*                                     Active_Button;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.OnKeyDown
struct Uinventory_screen_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.GTFO
struct Uinventory_screen_bpw_C_GTFO_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.BndEvt__w_tabs_scaleable_bpw_56_K2Node_ComponentBoundEvent_321_TabSelected__DelegateSignature
struct Uinventory_screen_bpw_C_BndEvt__w_tabs_scaleable_bpw_56_K2Node_ComponentBoundEvent_321_TabSelected__DelegateSignature_Params
{
	int                                                NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.DUST
struct Uinventory_screen_bpw_C_DUST_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.BndEvt__w_Pickerbox_bpw_K2Node_ComponentBoundEvent_2001_PickerChanged__DelegateSignature
struct Uinventory_screen_bpw_C_BndEvt__w_Pickerbox_bpw_K2Node_ComponentBoundEvent_2001_PickerChanged__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.UpdatedAfterInventoryChange
struct Uinventory_screen_bpw_C_UpdatedAfterInventoryChange_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.ClientOnInventoryChanged
struct Uinventory_screen_bpw_C_ClientOnInventoryChanged_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.ItemSetTooltip
struct Uinventory_screen_bpw_C_ItemSetTooltip_Params
{
	class FString                                      TooltipString;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.ClearTooltip
struct Uinventory_screen_bpw_C_ClearTooltip_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.AddItemTooltip
struct Uinventory_screen_bpw_C_AddItemTooltip_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.Construct
struct Uinventory_screen_bpw_C_Construct_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.RefreshInventoryPanel
struct Uinventory_screen_bpw_C_RefreshInventoryPanel_Params
{
	bool                                               SendFocusToList;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.OnItemHovered_Event_1
struct Uinventory_screen_bpw_C_OnItemHovered_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                HoveredIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.OnItemUnHovered_Event_1
struct Uinventory_screen_bpw_C_OnItemUnHovered_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                UnHoveredIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.OnSalvageButtonClicked_Event_1
struct Uinventory_screen_bpw_C_OnSalvageButtonClicked_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.OnTooltipWarningChanged_Event_1
struct Uinventory_screen_bpw_C_OnTooltipWarningChanged_Event_1_Params
{
	class FString                                      TooltipString;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.SetTabIndex
struct Uinventory_screen_bpw_C_SetTabIndex_Params
{
	int                                                TabIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.OnSecondaryClick
struct Uinventory_screen_bpw_C_OnSecondaryClick_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.Show Context Menu
struct Uinventory_screen_bpw_C_Show_Context_Menu_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.Equip Selected
struct Uinventory_screen_bpw_C_Equip_Selected_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.Dust Selected
struct Uinventory_screen_bpw_C_Dust_Selected_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.Add Context Menu Actions
struct Uinventory_screen_bpw_C_Add_Context_Menu_Actions_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.TryEquipItem
struct Uinventory_screen_bpw_C_TryEquipItem_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.CommitOnLoadoutChanged
struct Uinventory_screen_bpw_C_CommitOnLoadoutChanged_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.ExecuteUbergraph_inventory_screen_bpw
struct Uinventory_screen_bpw_C_ExecuteUbergraph_inventory_screen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.ItemDusted__DelegateSignature
struct Uinventory_screen_bpw_C_ItemDusted__DelegateSignature_Params
{
};

// Function inventory_screen_bpw.inventory_screen_bpw_C.OnInventoryClosed__DelegateSignature
struct Uinventory_screen_bpw_C_OnInventoryClosed__DelegateSignature_Params
{
	TEnumAsByte<Eui_character_screen_mode>             Previous_Screen;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
