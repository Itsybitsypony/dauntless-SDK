#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Armour_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanModifyItems
struct Uw_Loadout_Section_Armour_C_CanModifyItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanInspectItem
struct Uw_Loadout_Section_Armour_C_CanInspectItem_Params
{
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Clear Button Legend Action
struct Uw_Loadout_Section_Armour_C_Clear_Button_Legend_Action_Params
{
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Button Legend Action
struct Uw_Loadout_Section_Armour_C_Update_Button_Legend_Action_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Server Assign Armour Item
struct Uw_Loadout_Section_Armour_C_Server_Assign_Armour_Item_Params
{
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Earmor_slot_enum>                      ArmorSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CanInfuseCell
struct Uw_Loadout_Section_Armour_C_CanInfuseCell_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GetVisibility_1
struct Uw_Loadout_Section_Armour_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Get_BigClickArea_Visibility
struct Uw_Loadout_Section_Armour_C_Get_BigClickArea_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GetEquippedItem
struct Uw_Loadout_Section_Armour_C_GetEquippedItem_Params
{
	TEnumAsByte<Earmor_slot_enum>                      Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnFocusReceived
struct Uw_Loadout_Section_Armour_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.GamepadFocused
struct Uw_Loadout_Section_Armour_C_GamepadFocused_Params
{
	TEnumAsByte<Earmor_slot_enum>                      ArmourSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearPreviewTooltip
struct Uw_Loadout_Section_Armour_C_ClearPreviewTooltip_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetRootReference
struct Uw_Loadout_Section_Armour_C_SetRootReference_Params
{
	class Uloadout_screen_bpw_C*                       Root;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ButtonLegend;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_318_OnButtonClickedEvent__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_318_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_346_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearEquippedTooltip
struct Uw_Loadout_Section_Armour_C_ClearEquippedTooltip_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_551_CategoryHovered__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_551_CategoryHovered__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_80_SendFocus__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_80_SendFocus__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenCellMenu
struct Uw_Loadout_Section_Armour_C_OpenCellMenu_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenCellInfusion
struct Uw_Loadout_Section_Armour_C_OpenCellInfusion_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.UpdateFocusedInstance
struct Uw_Loadout_Section_Armour_C_UpdateFocusedInstance_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenTintWindow
struct Uw_Loadout_Section_Armour_C_OpenTintWindow_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BlockInput
struct Uw_Loadout_Section_Armour_C_BlockInput_Params
{
	bool                                               BlockInput;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmorCategorySelected
struct Uw_Loadout_Section_Armour_C_ArmorCategorySelected_Params
{
	TEnumAsByte<Earmor_slot_enum>                      EquipSlotClicked;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PushFocustoGrid_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.AttachToLoadoutGrid
struct Uw_Loadout_Section_Armour_C_AttachToLoadoutGrid_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemClicked_Event_1
struct Uw_Loadout_Section_Armour_C_OnItemClicked_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ClickedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemHovered_Event_1
struct Uw_Loadout_Section_Armour_C_OnItemHovered_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                HoveredIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemFocused_Event_1
struct Uw_Loadout_Section_Armour_C_OnItemFocused_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetEquippedTooltipInstanceID
struct Uw_Loadout_Section_Armour_C_SetEquippedTooltipInstanceID_Params
{
	class FString                                      NewTooltipInstanceID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SetPreviewTooltipInstanceID
struct Uw_Loadout_Section_Armour_C_SetPreviewTooltipInstanceID_Params
{
	class FString                                      NewTooltipInstanceID;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.FocusArmorSlot
struct Uw_Loadout_Section_Armour_C_FocusArmorSlot_Params
{
	TEnumAsByte<Earmor_slot_enum>                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_38_EquipSlot_Focused__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_38_EquipSlot_Focused__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      FocusedSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnItemSecondaryClick
struct Uw_Loadout_Section_Armour_C_OnItemSecondaryClick_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Show Context Menu
struct Uw_Loadout_Section_Armour_C_Show_Context_Menu_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Add Context Actions
struct Uw_Loadout_Section_Armour_C_Add_Context_Actions_Params
{
	class Ucontext_menu_bpw_C*                         ContextMenu;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenInfuse
struct Uw_Loadout_Section_Armour_C_OnOpenInfuse_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenDyes
struct Uw_Loadout_Section_Armour_C_OnOpenDyes_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnOpenTransmog
struct Uw_Loadout_Section_Armour_C_OnOpenTransmog_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnSalvage
struct Uw_Loadout_Section_Armour_C_OnSalvage_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.EquipItem
struct Uw_Loadout_Section_Armour_C_EquipItem_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_223_EquippedSlot_Clicked__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_223_EquippedSlot_Clicked__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Paperdoll Tints
struct Uw_Loadout_Section_Armour_C_Update_Paperdoll_Tints_Params
{
	struct FDyeVariant                                 DyeStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EArmorType                                         ArmourPart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_6_Button Hovered__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_6_Button_Hovered__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      Armour_Slot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenTransmogWindow
struct Uw_Loadout_Section_Armour_C_OpenTransmogWindow_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Update Paperdoll Transmog
struct Uw_Loadout_Section_Armour_C_Update_Paperdoll_Transmog_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_38_Button Clicked__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__w_LoadoutSec_Armour_Button_C_135_K2Node_ComponentBoundEvent_38_Button_Clicked__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Refresh Button Legend
struct Uw_Loadout_Section_Armour_C_Refresh_Button_Legend_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Tick
struct Uw_Loadout_Section_Armour_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendInfuse
struct Uw_Loadout_Section_Armour_C_OnButtonLegendInfuse_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendDye
struct Uw_Loadout_Section_Armour_C_OnButtonLegendDye_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendTransmog
struct Uw_Loadout_Section_Armour_C_OnButtonLegendTransmog_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Construct
struct Uw_Loadout_Section_Armour_C_Construct_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Leave Armour Section
struct Uw_Loadout_Section_Armour_C_Leave_Armour_Section_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Clear Armour Button Legend Actions
struct Uw_Loadout_Section_Armour_C_Clear_Armour_Button_Legend_Actions_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnInspect
struct Uw_Loadout_Section_Armour_C_OnInspect_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_107_UnHovered__DelegateSignature
struct Uw_Loadout_Section_Armour_C_BndEvt__Loadout_Armour_Button_K2Node_ComponentBoundEvent_107_UnHovered__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OnButtonLegendInspect
struct Uw_Loadout_Section_Armour_C_OnButtonLegendInspect_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.OpenInspect
struct Uw_Loadout_Section_Armour_C_OpenInspect_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.Cell Infusion Closed
struct Uw_Loadout_Section_Armour_C_Cell_Infusion_Closed_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.CommitOnLoadoutChanged
struct Uw_Loadout_Section_Armour_C_CommitOnLoadoutChanged_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ExecuteUbergraph_w_Loadout_Section_Armour
struct Uw_Loadout_Section_Armour_C_ExecuteUbergraph_w_Loadout_Section_Armour_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourTransmogUpdated__DelegateSignature
struct Uw_Loadout_Section_Armour_C_ArmourTransmogUpdated__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.NewEventDispatcher_0__DelegateSignature
struct Uw_Loadout_Section_Armour_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ParentBlockInput__DelegateSignature
struct Uw_Loadout_Section_Armour_C_ParentBlockInput__DelegateSignature_Params
{
	bool                                               BlockInput;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ClearTooltips__DelegateSignature
struct Uw_Loadout_Section_Armour_C_ClearTooltips__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.TintWindow_Closed__DelegateSignature
struct Uw_Loadout_Section_Armour_C_TintWindow_Closed__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      focused_Slot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.UpdateArmourDyes_PaperDoll__DelegateSignature
struct Uw_Loadout_Section_Armour_C_UpdateArmourDyes_PaperDoll__DelegateSignature_Params
{
	struct FDyeVariant                                 DyeStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EArmorType                                         ArmourSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.SendFocus__DelegateSignature
struct Uw_Loadout_Section_Armour_C_SendFocus__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCat_PaperdollUpdate__DelegateSignature
struct Uw_Loadout_Section_Armour_C_ArmourCat_PaperdollUpdate__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemGroupType                                     ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategorySelected_BySlot__DelegateSignature
struct Uw_Loadout_Section_Armour_C_ArmourCategorySelected_BySlot__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      EquipSlotClicked;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategoryHovered__DelegateSignature
struct Uw_Loadout_Section_Armour_C_ArmourCategoryHovered__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Armour.w_Loadout_Section_Armour_C.ArmourCategorySelected__DelegateSignature
struct Uw_Loadout_Section_Armour_C_ArmourCategorySelected__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
