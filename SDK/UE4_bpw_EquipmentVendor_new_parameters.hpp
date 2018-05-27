#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_EquipmentVendor_new_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetLanternSetWidget
struct Ubpw_EquipmentVendor_new_C_GetLanternSetWidget_Params
{
	class FString                                      Set_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Found_Widget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentVendor_Set_Lantern_C*            Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetupLanternSetWidget
struct Ubpw_EquipmentVendor_new_C_SetupLanternSetWidget_Params
{
	class FString                                      Set_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetDefaultFocusedWidget
struct Ubpw_EquipmentVendor_new_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Set Weapon Filter
struct Ubpw_EquipmentVendor_new_C_Set_Weapon_Filter_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get All Items For Vendor
struct Ubpw_EquipmentVendor_new_C_Get_All_Items_For_Vendor_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetAndStore_NPCCamera
struct Ubpw_EquipmentVendor_new_C_GetAndStore_NPCCamera_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.DoCraftVO
struct Ubpw_EquipmentVendor_new_C_DoCraftVO_Params
{
	class UArchonInventoryItem*                        InventoryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Crafted Item
struct Ubpw_EquipmentVendor_new_C_Get_Crafted_Item_Params
{
	class UCraftingRecipeDataAsset*                    Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Current Item Focus
struct Ubpw_EquipmentVendor_new_C_Get_Desired_Current_Item_Focus_Params
{
	class UWidget*                                     DesiredFocusWidget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Detail Item Focus
struct Ubpw_EquipmentVendor_new_C_Get_Desired_Detail_Item_Focus_Params
{
	class UWidget*                                     DesiredFocusWidget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnKeyDown
struct Ubpw_EquipmentVendor_new_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetText_CraftedItem
struct Ubpw_EquipmentVendor_new_C_GetText_CraftedItem_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.3D Viewer
struct Ubpw_EquipmentVendor_new_C__3D_Viewer_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Holding Crafting Key
struct Ubpw_EquipmentVendor_new_C_Is_Holding_Crafting_Key_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Custom Equipment Vendor Setup
struct Ubpw_EquipmentVendor_new_C_Custom_Equipment_Vendor_Setup_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Weapon Filter Label
struct Ubpw_EquipmentVendor_new_C_Get_Weapon_Filter_Label_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Weapon Filter Key
struct Ubpw_EquipmentVendor_new_C_Is_Weapon_Filter_Key_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Item Set Focus
struct Ubpw_EquipmentVendor_new_C_Get_Desired_Item_Set_Focus_Params
{
	class UWidget*                                     DesiredFocusWidget;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Weapon Set Widget
struct Ubpw_EquipmentVendor_new_C_Get_Weapon_Set_Widget_Params
{
	class FString                                      Set_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Found_Widget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentVendor_Set_Weapon_C*             Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Weapon Set Widget
struct Ubpw_EquipmentVendor_new_C_Setup_Weapon_Set_Widget_Params
{
	class FString                                      Set_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Armour Set Widget
struct Ubpw_EquipmentVendor_new_C_Setup_Armour_Set_Widget_Params
{
	class FString                                      Set_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Has Crafting Item Focus
struct Ubpw_EquipmentVendor_new_C_Has_Crafting_Item_Focus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Show Quest Button on start?
struct Ubpw_EquipmentVendor_new_C_Show_Quest_Button_on_start__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnPreviewKeyDown
struct Ubpw_EquipmentVendor_new_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Should Display Set
struct Ubpw_EquipmentVendor_new_C_Should_Display_Set_Params
{
	class FString                                      Set_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Inventory
struct Ubpw_EquipmentVendor_new_C_Get_Inventory_Params
{
	class AArchonInventory*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Build Crafting Payload
struct Ubpw_EquipmentVendor_new_C_Build_Crafting_Payload_Params
{
	struct FCraftingPayload                            Payload;                                                  // (Parm, OutParm)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Try Crafting Item
struct Ubpw_EquipmentVendor_new_C_Try_Crafting_Item_Params
{
	bool                                               Request_Sent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Armour Set Widget
struct Ubpw_EquipmentVendor_new_C_Get_Armour_Set_Widget_Params
{
	class FString                                      Set_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Found_Widget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentVendor_Set_Armour_C*             Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Start Crafting Button
struct Ubpw_EquipmentVendor_new_C_Start_Crafting_Button_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Can Craft Current Item
struct Ubpw_EquipmentVendor_new_C_Can_Craft_Current_Item_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnKeyUp
struct Ubpw_EquipmentVendor_new_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Crafting Button Key
struct Ubpw_EquipmentVendor_new_C_Is_Crafting_Button_Key_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Vendor
struct Ubpw_EquipmentVendor_new_C_Setup_Vendor_Params
{
	TScriptInterface<class Uinteractable_npc_interface_C> Vendor_NPC;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Show Vendor
struct Ubpw_EquipmentVendor_new_C_On_Show_Vendor_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__VendorButton_K2Node_ComponentBoundEvent_268_OnButtonClickedEvent__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_BndEvt__VendorButton_K2Node_ComponentBoundEvent_268_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Intro_VendorSelect
struct Ubpw_EquipmentVendor_new_C_Intro_VendorSelect_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.NPCInteractInitialize
struct Ubpw_EquipmentVendor_new_C_NPCInteractInitialize_Params
{
	class Avendor_interactive_bp_C*                    Vendor;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fnpc_ui_struct                              NPCMenuTuning;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Construct
struct Ubpw_EquipmentVendor_new_C_Construct_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_2_On Back__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_2_On_Back__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_3_On Next__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_3_On_Next__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Item Hovered
struct Ubpw_EquipmentVendor_new_C_On_Item_Hovered_Params
{
	class Uw_EquipmentVendor_Item_C*                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Refresh Vendor Items
struct Ubpw_EquipmentVendor_new_C_Refresh_Vendor_Items_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_0_On Key Hold Complete__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_BndEvt__CraftingButton_K2Node_ComponentBoundEvent_0_On_Key_Hold_Complete__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Crafted Item Granted
struct Ubpw_EquipmentVendor_new_C_On_Crafted_Item_Granted_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On Vendor Refresh__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On_Vendor_Refresh__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_On Mouse Down__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_On_Mouse_Down__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On Mouse Up__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On_Mouse_Up__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Close Screen
struct Ubpw_EquipmentVendor_new_C_Close_Screen_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Weapon Filter Changed
struct Ubpw_EquipmentVendor_new_C_On_Weapon_Filter_Changed_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Init3dViewer
struct Ubpw_EquipmentVendor_new_C_Init3dViewer_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Update 3d Preview
struct Ubpw_EquipmentVendor_new_C_Update_3d_Preview_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Armour Set Details
struct Ubpw_EquipmentVendor_new_C_On_Armour_Set_Details_Params
{
	class FString                                      SetName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Escape Set Details
struct Ubpw_EquipmentVendor_new_C_On_Escape_Set_Details_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GTFO
struct Ubpw_EquipmentVendor_new_C_GTFO_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetCamera_Crafting
struct Ubpw_EquipmentVendor_new_C_SetCamera_Crafting_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetCamera_Return
struct Ubpw_EquipmentVendor_new_C_SetCamera_Return_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.ResetCamera
struct Ubpw_EquipmentVendor_new_C_ResetCamera_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Item Upgraded
struct Ubpw_EquipmentVendor_new_C_On_Item_Upgraded_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CategoryTabs_K2Node_ComponentBoundEvent_142_TabSelected__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_BndEvt__CategoryTabs_K2Node_ComponentBoundEvent_142_TabSelected__DelegateSignature_Params
{
	int                                                NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.ExecuteUbergraph_bpw_EquipmentVendor_new
struct Ubpw_EquipmentVendor_new_C_ExecuteUbergraph_bpw_EquipmentVendor_new_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Update3dItem__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_Update3dItem__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.CameraToNPC__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_CameraToNPC__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.CameraToCraftTarget__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_CameraToCraftTarget__DelegateSignature_Params
{
};

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnMenuClosed__DelegateSignature
struct Ubpw_EquipmentVendor_new_C_OnMenuClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
