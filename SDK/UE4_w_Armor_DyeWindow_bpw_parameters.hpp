#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Armor_DyeWindow_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get Preview Dye Variant
struct Uw_Armor_DyeWindow_bpw_C_Get_Preview_Dye_Variant_Params
{
	struct FDyeVariant                                 InVariant;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDyeVariant                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get Dye Target Item ID
struct Uw_Armor_DyeWindow_bpw_C_Get_Dye_Target_Item_ID_Params
{
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Validate Dye RowName
struct Uw_Armor_DyeWindow_bpw_C_Validate_Dye_RowName_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPrimary;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ValidRowName;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Temp_AddPhx4Phx
struct Uw_Armor_DyeWindow_bpw_C_Temp_AddPhx4Phx_Params
{
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.RefreshButtonLegend
struct Uw_Armor_DyeWindow_bpw_C_RefreshButtonLegend_Params
{
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Has Made Dye Changes
struct Uw_Armor_DyeWindow_bpw_C_Has_Made_Dye_Changes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetDefaultFocusedWidget
struct Uw_Armor_DyeWindow_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Setup Default Dye
struct Uw_Armor_DyeWindow_bpw_C_Setup_Default_Dye_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.RemoveDefaultTints
struct Uw_Armor_DyeWindow_bpw_C_RemoveDefaultTints_Params
{
	TArray<struct FName>                               RowNamesIn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               RowNamesFiltered;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Secondary_Default_DyeBU_Visibility_1
struct Uw_Armor_DyeWindow_bpw_C_Get_Secondary_Default_DyeBU_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Primary_Default_DyeBU_Visibility_1
struct Uw_Armor_DyeWindow_bpw_C_Get_Primary_Default_DyeBU_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Secondary_Default_DyeBU_ColorAndOpacity_1
struct Uw_Armor_DyeWindow_bpw_C_Get_Secondary_Default_DyeBU_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Get_Primary_Default_DyeBU_ColorAndOpacity_1
struct Uw_Armor_DyeWindow_bpw_C_Get_Primary_Default_DyeBU_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.SetTintValuesAndClose
struct Uw_Armor_DyeWindow_bpw_C_SetTintValuesAndClose_Params
{
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Build Dye Swatches
struct Uw_Armor_DyeWindow_bpw_C_Build_Dye_Swatches_Params
{
	bool                                               ShowAllTints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetDyeInfo
struct Uw_Armor_DyeWindow_bpw_C_GetDyeInfo_Params
{
	struct FName                                       DyeN_Row;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                RemainingUses;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.OnKeyDown
struct Uw_Armor_DyeWindow_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Setup
struct Uw_Armor_DyeWindow_bpw_C_Setup_Params
{
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.GetSelectedArmourItem
struct Uw_Armor_DyeWindow_bpw_C_GetSelectedArmourItem_Params
{
	class UArchonInventoryItem_Armour*                 ArmourItem;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Manage Selection Changes
struct Uw_Armor_DyeWindow_bpw_C_Manage_Selection_Changes_Params
{
	bool                                               Primary_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Change Primary Color
struct Uw_Armor_DyeWindow_bpw_C_Change_Primary_Color_Params
{
	class Ubpw_colorpicksquare_C*                      Reference;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Color Selection Made
struct Uw_Armor_DyeWindow_bpw_C_Color_Selection_Made_Params
{
	class Ubpw_colorpicksquare_C*                      Color_Picker_Reference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ResetPrimary
struct Uw_Armor_DyeWindow_bpw_C_ResetPrimary_Params
{
	class Ubpw_colorpicksquare_C*                      DyeButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ResetSecondary
struct Uw_Armor_DyeWindow_bpw_C_ResetSecondary_Params
{
	class Ubpw_colorpicksquare_C*                      DyeButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Select Secondary Slot
struct Uw_Armor_DyeWindow_bpw_C_Select_Secondary_Slot_Params
{
	class Ubpw_colorpicksquare_C*                      Color_Picker_Square;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Update Primary Color
struct Uw_Armor_DyeWindow_bpw_C_Update_Primary_Color_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Select Primary Slot
struct Uw_Armor_DyeWindow_bpw_C_Select_Primary_Slot_Params
{
	class Ubpw_colorpicksquare_C*                      Color_Picker_Square;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Update Secondary Color
struct Uw_Armor_DyeWindow_bpw_C_Update_Secondary_Color_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Change Secondary Color
struct Uw_Armor_DyeWindow_bpw_C_Change_Secondary_Color_Params
{
	class Ubpw_colorpicksquare_C*                      Reference;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Construct
struct Uw_Armor_DyeWindow_bpw_C_Construct_Params
{
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Revert Dyes
struct Uw_Armor_DyeWindow_bpw_C_Revert_Dyes_Params
{
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.Close Screen
struct Uw_Armor_DyeWindow_bpw_C_Close_Screen_Params
{
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.ExecuteUbergraph_w_Armor_DyeWindow_bpw
struct Uw_Armor_DyeWindow_bpw_C_ExecuteUbergraph_w_Armor_DyeWindow_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.UpdatePaperdoll_Tints__DelegateSignature
struct Uw_Armor_DyeWindow_bpw_C_UpdatePaperdoll_Tints__DelegateSignature_Params
{
	struct FDyeVariant                                 DyeStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EArmorType                                         ArmourPart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Armor_DyeWindow_bpw.w_Armor_DyeWindow_bpw_C.CloseButton_RemoveTintWindow__DelegateSignature
struct Uw_Armor_DyeWindow_bpw_C_CloseButton_RemoveTintWindow__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
