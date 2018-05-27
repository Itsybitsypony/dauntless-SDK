#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_cell_slot_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.Get_Cell_Image_Brush_1
struct Uw_cell_slot_bpw_C_Get_Cell_Image_Brush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.GetRarityColor
struct Uw_cell_slot_bpw_C_GetRarityColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.GetVisibility_1
struct Uw_cell_slot_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.Get_Cell_Image_Visibility_1
struct Uw_cell_slot_bpw_C_Get_Cell_Image_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.GetBrush_1
struct Uw_cell_slot_bpw_C_GetBrush_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.Get_PreviewOverlay_Visibility_1
struct Uw_cell_slot_bpw_C_Get_PreviewOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.Get_tmp_slottype_Text_1
struct Uw_cell_slot_bpw_C_Get_tmp_slottype_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
struct Uw_cell_slot_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
struct Uw_cell_slot_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature
struct Uw_cell_slot_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_58_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.ExecuteUbergraph_w_cell_slot_bpw
struct Uw_cell_slot_bpw_C_ExecuteUbergraph_w_cell_slot_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.UnHovered__DelegateSignature
struct Uw_cell_slot_bpw_C_UnHovered__DelegateSignature_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.Hovered__DelegateSignature
struct Uw_cell_slot_bpw_C_Hovered__DelegateSignature_Params
{
	class FString                                      CellID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_cell_slot_bpw.w_cell_slot_bpw_C.SlotClicked__DelegateSignature
struct Uw_cell_slot_bpw_C_SlotClicked__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ECellType                                          Slot_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
