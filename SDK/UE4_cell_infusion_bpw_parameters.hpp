#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_infusion_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cell_infusion_bpw.cell_infusion_bpw_C.OnKeyDown
struct Ucell_infusion_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.GetDefaultFocusedWidget
struct Ucell_infusion_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.GetVisibility_1
struct Ucell_infusion_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.Get_Image_0_Visibility_1
struct Ucell_infusion_bpw_C_Get_Image_0_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.GetVisibility_InfusionButton
struct Ucell_infusion_bpw_C_GetVisibility_InfusionButton_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.ClearTooltipInfo
struct Ucell_infusion_bpw_C_ClearTooltipInfo_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.Set Cell Tooltip Info
struct Ucell_infusion_bpw_C_Set_Cell_Tooltip_Info_Params
{
	class FString                                      CellID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Preview;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECellType                                          SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.SetPreviewCellID
struct Ucell_infusion_bpw_C_SetPreviewCellID_Params
{
	class FString                                      Cell_Preview;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.Get_txt_itemName_Text_1
struct Ucell_infusion_bpw_C_Get_txt_itemName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.Construct
struct Ucell_infusion_bpw_C_Construct_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.SetupSlots
struct Ucell_infusion_bpw_C_SetupSlots_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.SlotClicked
struct Ucell_infusion_bpw_C_SlotClicked_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECellType                                          Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.RefreshAvailableCells
struct Ucell_infusion_bpw_C_RefreshAvailableCells_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.PreviewSlottedCell
struct Ucell_infusion_bpw_C_PreviewSlottedCell_Params
{
	class FString                                      Cell_InstanceID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Cell_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.UpdateTooltip
struct Ucell_infusion_bpw_C_UpdateTooltip_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.CommitChanges
struct Ucell_infusion_bpw_C_CommitChanges_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.Clear All to None
struct Ucell_infusion_bpw_C_Clear_All_to_None_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_238_On Key Hold Complete__DelegateSignature
struct Ucell_infusion_bpw_C_BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_238_On_Key_Hold_Complete__DelegateSignature_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_328_On Mouse Down__DelegateSignature
struct Ucell_infusion_bpw_C_BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_328_On_Mouse_Down__DelegateSignature_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_350_On Mouse Up__DelegateSignature
struct Ucell_infusion_bpw_C_BndEvt__w_ChargeButton_K2Node_ComponentBoundEvent_350_On_Mouse_Up__DelegateSignature_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.GetEquippedCellInfo
struct Ucell_infusion_bpw_C_GetEquippedCellInfo_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.RefreshItem
struct Ucell_infusion_bpw_C_RefreshItem_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.SlotHovered
struct Ucell_infusion_bpw_C_SlotHovered_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Slot_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.UnHover
struct Ucell_infusion_bpw_C_UnHover_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.TryCloseScreen
struct Ucell_infusion_bpw_C_TryCloseScreen_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.ExtractCellButtonClicked_Event_1
struct Ucell_infusion_bpw_C_ExtractCellButtonClicked_Event_1_Params
{
	class Uw_tooltip_cell_infusion_C*                  ObjectThatContainsButton;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.ConfirmExtraction
struct Ucell_infusion_bpw_C_ConfirmExtraction_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.Close Screen
struct Ucell_infusion_bpw_C_Close_Screen_Params
{
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.ExecuteUbergraph_cell_infusion_bpw
struct Ucell_infusion_bpw_C_ExecuteUbergraph_cell_infusion_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_infusion_bpw.cell_infusion_bpw_C.OnClosed__DelegateSignature
struct Ucell_infusion_bpw_C_OnClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
