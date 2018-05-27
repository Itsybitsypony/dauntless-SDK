#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_hud_quickslot_item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetText_1
struct Ubpw_hud_quickslot_item_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetRemainingUses
struct Ubpw_hud_quickslot_item_C_GetRemainingUses_Params
{
	int                                                RemainingUses;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_TextBlock_Amount_Visibility_1
struct Ubpw_hud_quickslot_item_C_Get_TextBlock_Amount_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get Icon Visibility
struct Ubpw_hud_quickslot_item_C_Get_Icon_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.SetIcon
struct Ubpw_hud_quickslot_item_C_SetIcon_Params
{
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.GetItem
struct Ubpw_hud_quickslot_item_C_GetItem_Params
{
	class UArchonInventoryItem_QuickItem*              FoundItem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_ProgressBar_Icon_Percent_1
struct Ubpw_hud_quickslot_item_C_Get_ProgressBar_Icon_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Get_TextBlock_Amount_Text_1
struct Ubpw_hud_quickslot_item_C_Get_TextBlock_Amount_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.hide
struct Ubpw_hud_quickslot_item_C_hide_Params
{
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.OnLoaded_DB9D936A4AB5C6EB912797AF4EC44451
struct Ubpw_hud_quickslot_item_C_OnLoaded_DB9D936A4AB5C6EB912797AF4EC44451_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Construct
struct Ubpw_hud_quickslot_item_C_Construct_Params
{
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Tick
struct Ubpw_hud_quickslot_item_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Update From Loadout
struct Ubpw_hud_quickslot_item_C_Update_From_Loadout_Params
{
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.UpdateItem
struct Ubpw_hud_quickslot_item_C_UpdateItem_Params
{
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Loadout_UpdateIcon_ByID
struct Ubpw_hud_quickslot_item_C_Loadout_UpdateIcon_ByID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Loadout_UpdateIcon_ByID_WithCount
struct Ubpw_hud_quickslot_item_C_Loadout_UpdateIcon_ByID_WithCount_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                AmoutRemaining;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Update Quick Item ID
struct Ubpw_hud_quickslot_item_C_Update_Quick_Item_ID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                AmountRemaining;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Load Item Icon
struct Ubpw_hud_quickslot_item_C_Load_Item_Icon_Params
{
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.Clear Item Icon
struct Ubpw_hud_quickslot_item_C_Clear_Item_Icon_Params
{
};

// Function bpw_hud_quickslot_item.bpw_hud_quickslot_item_C.ExecuteUbergraph_bpw_hud_quickslot_item
struct Ubpw_hud_quickslot_item_C_ExecuteUbergraph_bpw_hud_quickslot_item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
