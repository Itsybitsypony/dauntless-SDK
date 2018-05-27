#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Loadout_Section_Weapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanModifyItems
struct Uw_Loadout_Section_Weapon_C_CanModifyItems_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanInspectItem
struct Uw_Loadout_Section_Weapon_C_CanInspectItem_Params
{
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Button Legend Action
struct Uw_Loadout_Section_Weapon_C_Clear_Button_Legend_Action_Params
{
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Update Button Legend Action
struct Uw_Loadout_Section_Weapon_C_Update_Button_Legend_Action_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScriptDelegate                             Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CanInfuseCell
struct Uw_Loadout_Section_Weapon_C_CanInfuseCell_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GetTransmogOrItemId
struct Uw_Loadout_Section_Weapon_C_GetTransmogOrItemId_Params
{
	class UArchonInventoryItem*                        WeaponItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GetVisibility_1
struct Uw_Loadout_Section_Weapon_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetupWeaponGrid
struct Uw_Loadout_Section_Weapon_C_SetupWeaponGrid_Params
{
	EWeaponType                                        FocusedWeaponType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Get_BigClickArea_0_Visibility_1
struct Uw_Loadout_Section_Weapon_C_Get_BigClickArea_0_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.UpdateWeaponPaperdoll
struct Uw_Loadout_Section_Weapon_C_UpdateWeaponPaperdoll_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnFocusReceived
struct Uw_Loadout_Section_Weapon_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_34_PickerBox_Left__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_34_PickerBox_Left__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_43_PickerBox_Right__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_43_PickerBox_Right__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_117_CenterPicker_Selected__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_117_CenterPicker_Selected__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_51_GroupPipSelected__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_51_GroupPipSelected__DelegateSignature_Params
{
	EWeaponType                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.GridItem_UnHovered
struct Uw_Loadout_Section_Weapon_C_GridItem_UnHovered_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.UnFocused
struct Uw_Loadout_Section_Weapon_C_UnFocused_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_32_ClearTooltip__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_32_ClearTooltip__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Preview Tooltip
struct Uw_Loadout_Section_Weapon_C_Clear_Preview_Tooltip_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetRootReference
struct Uw_Loadout_Section_Weapon_C_SetRootReference_Params
{
	class Uloadout_screen_bpw_C*                       Root_Menu;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 ButtonLegend;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_97_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__BigTriClickArea_K2Node_ComponentBoundEvent_124_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__Wep_Button_K2Node_ComponentBoundEvent_330_PushCategoryFocus__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__Wep_Button_K2Node_ComponentBoundEvent_330_PushCategoryFocus__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.EmptyGrid_UnHovered
struct Uw_Loadout_Section_Weapon_C_EmptyGrid_UnHovered_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemClicked_Event_1
struct Uw_Loadout_Section_Weapon_C_OnItemClicked_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ClickedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemFocused_Event_1
struct Uw_Loadout_Section_Weapon_C_OnItemFocused_Event_1_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.SetActiveInstanceIDToEquippedWeapon
struct Uw_Loadout_Section_Weapon_C_SetActiveInstanceIDToEquippedWeapon_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnItemSecondaryClicked
struct Uw_Loadout_Section_Weapon_C_OnItemSecondaryClicked_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Add Context Actions
struct Uw_Loadout_Section_Weapon_C_Add_Context_Actions_Params
{
	class Ucontext_menu_bpw_C*                         ContextMenu;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenInfuse
struct Uw_Loadout_Section_Weapon_C_OnOpenInfuse_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenDyes
struct Uw_Loadout_Section_Weapon_C_OnOpenDyes_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnOpenTransmog
struct Uw_Loadout_Section_Weapon_C_OnOpenTransmog_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnSalvage
struct Uw_Loadout_Section_Weapon_C_OnSalvage_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.EquipItem_Weapon
struct Uw_Loadout_Section_Weapon_C_EquipItem_Weapon_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenCellInfusion
struct Uw_Loadout_Section_Weapon_C_OpenCellInfusion_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenTransmogWindow
struct Uw_Loadout_Section_Weapon_C_OpenTransmogWindow_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Update Paperdoll Transmog
struct Uw_Loadout_Section_Weapon_C_Update_Paperdoll_Transmog_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_16_Button Hovered__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_16_Button_Hovered__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Show Context Menu
struct Uw_Loadout_Section_Weapon_C_Show_Context_Menu_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_11_Button Clicked__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BndEvt__w_LoadoutSec_Wep_Button_219_K2Node_ComponentBoundEvent_11_Button_Clicked__DelegateSignature_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Refresh Button Legend
struct Uw_Loadout_Section_Weapon_C_Refresh_Button_Legend_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendInfuse
struct Uw_Loadout_Section_Weapon_C_OnButtonLegendInfuse_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendDye
struct Uw_Loadout_Section_Weapon_C_OnButtonLegendDye_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendTransmog
struct Uw_Loadout_Section_Weapon_C_OnButtonLegendTransmog_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Clear Weapon Button Legend Actions
struct Uw_Loadout_Section_Weapon_C_Clear_Weapon_Button_Legend_Actions_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Construct
struct Uw_Loadout_Section_Weapon_C_Construct_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.Leave Weapon Section
struct Uw_Loadout_Section_Weapon_C_Leave_Weapon_Section_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnCellInfusionClosed
struct Uw_Loadout_Section_Weapon_C_OnCellInfusionClosed_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnInspect
struct Uw_Loadout_Section_Weapon_C_OnInspect_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OnButtonLegendInspect
struct Uw_Loadout_Section_Weapon_C_OnButtonLegendInspect_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.OpenInspect
struct Uw_Loadout_Section_Weapon_C_OpenInspect_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.CommitOnLoadoutChanged
struct Uw_Loadout_Section_Weapon_C_CommitOnLoadoutChanged_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.ExecuteUbergraph_w_Loadout_Section_Weapon
struct Uw_Loadout_Section_Weapon_C_ExecuteUbergraph_w_Loadout_Section_Weapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Transmog__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_PaperdollUpdate_Transmog__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.BlockParentInput__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_BlockParentInput__DelegateSignature_Params
{
	bool                                               BlockInput;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PushFocus__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_PushFocus__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   ScreenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Weapon4Pose__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_PaperdollUpdate_Weapon4Pose__DelegateSignature_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.PaperdollUpdate_Kind__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_PaperdollUpdate_Kind__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.WeaponCategoryHovered__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_WeaponCategoryHovered__DelegateSignature_Params
{
};

// Function w_Loadout_Section_Weapon.w_Loadout_Section_Weapon_C.WeaponCategorySelected__DelegateSignature
struct Uw_Loadout_Section_Weapon_C_WeaponCategorySelected__DelegateSignature_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
