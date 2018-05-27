#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_equip_preview_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.OnKeyDown
struct Ulobby_equip_preview_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Get Quick Item Details
struct Ulobby_equip_preview_bpw_C_Get_Quick_Item_Details_Params
{
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Update Lobby Quick Item Slot
struct Ulobby_equip_preview_bpw_C_Update_Lobby_Quick_Item_Slot_Params
{
	class Ubpw_hud_quickslot_item_C*                   QuickitemWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.SetupExamineItems
struct Ulobby_equip_preview_bpw_C_SetupExamineItems_Params
{
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.GetDefaultFocusedWidget
struct Ulobby_equip_preview_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Construct
struct Ulobby_equip_preview_bpw_C_Construct_Params
{
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.Close Screen
struct Ulobby_equip_preview_bpw_C_Close_Screen_Params
{
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.OnAnimationFinished
struct Ulobby_equip_preview_bpw_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ShowTooltipForSlot
struct Ulobby_equip_preview_bpw_C_ShowTooltipForSlot_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ClearTooltipForSlot
struct Ulobby_equip_preview_bpw_C_ClearTooltipForSlot_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.ExecuteUbergraph_lobby_equip_preview_bpw
struct Ulobby_equip_preview_bpw_C_ExecuteUbergraph_lobby_equip_preview_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lobby_equip_preview_bpw.lobby_equip_preview_bpw_C.EquipPreviewClosed__DelegateSignature
struct Ulobby_equip_preview_bpw_C_EquipPreviewClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
