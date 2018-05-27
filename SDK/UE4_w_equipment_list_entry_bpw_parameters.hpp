#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_equipment_list_entry_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseButtonDown
struct Uw_equipment_list_entry_bpw_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnFocusReceived
struct Uw_equipment_list_entry_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.HACK_Is_Zone00_S01_Q01_FTUE_QuestActive
struct Uw_equipment_list_entry_bpw_C_HACK_Is_Zone00_S01_Q01_FTUE_QuestActive_Params
{
	bool                                               IsActive;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnKeyUp
struct Uw_equipment_list_entry_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnKeyDown
struct Uw_equipment_list_entry_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetKind
struct Uw_equipment_list_entry_bpw_C_SetKind_Params
{
	EItemGroupType                                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetAmountAndType
struct Uw_equipment_list_entry_bpw_C_SetAmountAndType_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UArchonInventoryItem*                        InventoryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetDisplayName
struct Uw_equipment_list_entry_bpw_C_SetDisplayName_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnLoaded_6E46B9A840CB1463FD5EFEB0F6587676
struct Uw_equipment_list_entry_bpw_C_OnLoaded_6E46B9A840CB1463FD5EFEB0F6587676_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseEnter
struct Uw_equipment_list_entry_bpw_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.UpdateWarningTooltip
struct Uw_equipment_list_entry_bpw_C_UpdateWarningTooltip_Params
{
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnMouseLeave
struct Uw_equipment_list_entry_bpw_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.BndEvt__w_listentry_charge_button_bpw_C_53_K2Node_ComponentBoundEvent_122_On Key Hold Complete__DelegateSignature
struct Uw_equipment_list_entry_bpw_C_BndEvt__w_listentry_charge_button_bpw_C_53_K2Node_ComponentBoundEvent_122_On_Key_Hold_Complete__DelegateSignature_Params
{
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Gamepad_SalvagePressed
struct Uw_equipment_list_entry_bpw_C_Gamepad_SalvagePressed_Params
{
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Gamepad_SalvageReleased
struct Uw_equipment_list_entry_bpw_C_Gamepad_SalvageReleased_Params
{
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.Construct
struct Uw_equipment_list_entry_bpw_C_Construct_Params
{
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Clicked
struct Uw_equipment_list_entry_bpw_C_On_User_Button_Clicked_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Focused
struct Uw_equipment_list_entry_bpw_C_On_User_Button_Focused_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.On User Button Focus Lost
struct Uw_equipment_list_entry_bpw_C_On_User_Button_Focus_Lost_Params
{
	class UArchonUserButton*                           Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.OnSecondaryClick
struct Uw_equipment_list_entry_bpw_C_OnSecondaryClick_Params
{
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct Uw_equipment_list_entry_bpw_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.SetupKindBG
struct Uw_equipment_list_entry_bpw_C_SetupKindBG_Params
{
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ExecuteUbergraph_w_equipment_list_entry_bpw
struct Uw_equipment_list_entry_bpw_C_ExecuteUbergraph_w_equipment_list_entry_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemSecondaryClicked__DelegateSignature
struct Uw_equipment_list_entry_bpw_C_ItemSecondaryClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemUnHovered__DelegateSignature
struct Uw_equipment_list_entry_bpw_C_ItemUnHovered__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemHovered__DelegateSignature
struct Uw_equipment_list_entry_bpw_C_ItemHovered__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.GetTooltipWarning__DelegateSignature
struct Uw_equipment_list_entry_bpw_C_GetTooltipWarning__DelegateSignature_Params
{
	class FString                                      TooltipString;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.ItemButtonClicked__DelegateSignature
struct Uw_equipment_list_entry_bpw_C_ItemButtonClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_equipment_list_entry_bpw.w_equipment_list_entry_bpw_C.DustButtonClicked__DelegateSignature
struct Uw_equipment_list_entry_bpw_C_DustButtonClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
