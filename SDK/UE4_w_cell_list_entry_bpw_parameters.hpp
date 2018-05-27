#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_cell_list_entry_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.Get_Item_Icon_ColorAndOpacity_1
struct Uw_cell_list_entry_bpw_C_Get_Item_Icon_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetDescription
struct Uw_cell_list_entry_bpw_C_SetDescription_Params
{
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.OnFocusReceived
struct Uw_cell_list_entry_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.GetVisibility_1
struct Uw_cell_list_entry_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetKind
struct Uw_cell_list_entry_bpw_C_SetKind_Params
{
	EItemGroupType                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetAmountAndCellKind
struct Uw_cell_list_entry_bpw_C_SetAmountAndCellKind_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UArchonInventoryItem*                        InventoryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetDisplayName
struct Uw_cell_list_entry_bpw_C_SetDisplayName_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.OnLoaded_4E2B05B24DAF71D16E4970BBA8E4FCE9
struct Uw_cell_list_entry_bpw_C_OnLoaded_4E2B05B24DAF71D16E4970BBA8E4FCE9_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.Construct
struct Uw_cell_list_entry_bpw_C_Construct_Params
{
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
struct Uw_cell_list_entry_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
struct Uw_cell_list_entry_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
struct Uw_cell_list_entry_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ExecuteUbergraph_w_cell_list_entry_bpw
struct Uw_cell_list_entry_bpw_C_ExecuteUbergraph_w_cell_list_entry_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ClearTooltip__DelegateSignature
struct Uw_cell_list_entry_bpw_C_ClearTooltip__DelegateSignature_Params
{
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ItemInstanceIdTooltip__DelegateSignature
struct Uw_cell_list_entry_bpw_C_ItemInstanceIdTooltip__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.CellButtonClicked__DelegateSignature
struct Uw_cell_list_entry_bpw_C_CellButtonClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
