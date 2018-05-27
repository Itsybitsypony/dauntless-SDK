#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Consumables_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.GetQuickSlotWidgetByIndex
struct Uw_Loadout_Section_Consumables_C_GetQuickSlotWidgetByIndex_Params
{
	TArray<class Uw_loadout_quickslot_C*>              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_loadout_quickslot_C*                      Array_Element;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Get_BigTriClickArea_Visibility_1
struct Uw_Loadout_Section_Consumables_C_Get_BigTriClickArea_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Get_quickItem_categoryLabel_Text_1
struct Uw_Loadout_Section_Consumables_C_Get_quickItem_categoryLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnFocusReceived
struct Uw_Loadout_Section_Consumables_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Construct
struct Uw_Loadout_Section_Consumables_C_Construct_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.EquipQuickItem
struct Uw_Loadout_Section_Consumables_C_EquipQuickItem_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_215_SendFocusLeft__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_215_SendFocusLeft__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_223_SendFocusRight__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_223_SendFocusRight__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Grid Item UNFOCUSED
struct Uw_Loadout_Section_Consumables_C_Grid_Item_UNFOCUSED_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Clear Tooltip
struct Uw_Loadout_Section_Consumables_C_Clear_Tooltip_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_378_Main Button Hovered__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_378_Main_Button_Hovered__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_414_ConsumableSlotHovered__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_414_ConsumableSlotHovered__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Quick_Slot_Index;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Set Root Reference
struct Uw_Loadout_Section_Consumables_C_Set_Root_Reference_Params
{
	class Uloadout_screen_bpw_C*                       Root;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_695_OnButtonClickedEvent__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_695_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_719_OnButtonHoverEvent__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__BigTriClickArea3_K2Node_ComponentBoundEvent_719_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_740_OnButtonClickedEvent__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_740_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_766_OnButtonHoverEvent__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__BigTriClickArea2_K2Node_ComponentBoundEvent_766_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OpenStorefromItem
struct Uw_Loadout_Section_Consumables_C_OpenStorefromItem_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                GridSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_376_OpenAdvancedMenu__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_376_OpenAdvancedMenu__DelegateSignature_Params
{
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_422_Main Button Clicked__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_422_Main_Button_Clicked__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.UpdateInventoryPanel
struct Uw_Loadout_Section_Consumables_C_UpdateInventoryPanel_Params
{
	int                                                QuickItemIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnInventoryItemClicked
struct Uw_Loadout_Section_Consumables_C_OnInventoryItemClicked_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ClickedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemHovered
struct Uw_Loadout_Section_Consumables_C_OnItemHovered_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                HoveredIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemFocused
struct Uw_Loadout_Section_Consumables_C_OnItemFocused_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnItemUnHovered
struct Uw_Loadout_Section_Consumables_C_OnItemUnHovered_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                UnHoveredIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_0_QuickSlotIndex_Pressed__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_BndEvt__Consumables_Button_K2Node_ComponentBoundEvent_0_QuickSlotIndex_Pressed__DelegateSignature_Params
{
	int                                                quickslot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OnAssignQuickItemComplete
struct Uw_Loadout_Section_Consumables_C_OnAssignQuickItemComplete_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Clicked
struct Uw_Loadout_Section_Consumables_C_Bind_to_Inventory_Item_Clicked_Params
{
	class Uw_base_inventorypanel_C*                    InventoryPanel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Focus
struct Uw_Loadout_Section_Consumables_C_Bind_to_Inventory_Item_Focus_Params
{
	class Uw_base_inventorypanel_C*                    InventoryPanel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Bind to Inventory Item Hover
struct Uw_Loadout_Section_Consumables_C_Bind_to_Inventory_Item_Hover_Params
{
	class Uw_base_inventorypanel_C*                    InventoryPanel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.Refresh All Slots
struct Uw_Loadout_Section_Consumables_C_Refresh_All_Slots_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ExecuteUbergraph_w_Loadout_Section_Consumables
struct Uw_Loadout_Section_Consumables_C_ExecuteUbergraph_w_Loadout_Section_Consumables_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.OpenStore_from_Item__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_OpenStore_from_Item__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.SendFocus_to_Armour__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_SendFocus_to_Armour__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.SendFocus_to_Weapons__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_SendFocus_to_Weapons__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ConsumablesCategoryHovered__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_ConsumablesCategoryHovered__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Consumables.w_Loadout_Section_Consumables_C.ConsumablesCategorySelected__DelegateSignature
struct Uw_Loadout_Section_Consumables_C_ConsumablesCategorySelected__DelegateSignature_Params
{
	int                                                quickslot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
