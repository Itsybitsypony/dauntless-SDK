#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_LoadoutSec_Wep_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ResetWeaponMeter
struct Uw_LoadoutSec_Wep_Button_C_ResetWeaponMeter_Params
{
	bool                                               Successful;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_3
struct Uw_LoadoutSec_Wep_Button_C_GetVisibility_3_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_2
struct Uw_LoadoutSec_Wep_Button_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GetVisibility_1
struct Uw_LoadoutSec_Wep_Button_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Refresh
struct Uw_LoadoutSec_Wep_Button_C_Refresh_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Get_txt_ElementalPower_Visibility_1
struct Uw_LoadoutSec_Wep_Button_C_Get_txt_ElementalPower_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateEquippedWeaponName
struct Uw_LoadoutSec_Wep_Button_C_UpdateEquippedWeaponName_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.SwitchOnIndexCall
struct Uw_LoadoutSec_Wep_Button_C_SwitchOnIndexCall_Params
{
	EWeaponType                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.EquippedWeaponSlotClicked
struct Uw_LoadoutSec_Wep_Button_C_EquippedWeaponSlotClicked_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.AddWeaponDamageTypeIcon
struct Uw_LoadoutSec_Wep_Button_C_AddWeaponDamageTypeIcon_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadoutStatTypes>                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.LookupEquippedWeaponPower
struct Uw_LoadoutSec_Wep_Button_C_LookupEquippedWeaponPower_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateCharacterStats_Weapon
struct Uw_LoadoutSec_Wep_Button_C_UpdateCharacterStats_Weapon_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.OnFocusReceived
struct Uw_LoadoutSec_Wep_Button_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Construct
struct Uw_LoadoutSec_Wep_Button_C_Construct_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Tick
struct Uw_LoadoutSec_Wep_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Show Hover
struct Uw_LoadoutSec_Wep_Button_C_Show_Hover_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Hide Hover
struct Uw_LoadoutSec_Wep_Button_C_Hide_Hover_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_7_EquipSlot_Clicked__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_7_EquipSlot_Clicked__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_0_On Left Selected__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_0_On_Left_Selected__DelegateSignature_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_51_On Right Selected__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_51_On_Right_Selected__DelegateSignature_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.UpdateGroupName
struct Uw_LoadoutSec_Wep_Button_C_UpdateGroupName_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_310_On Group Selected__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_310_On_Group_Selected__DelegateSignature_Params
{
	EWeaponType                                        Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_396_PushFocus_Down__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_396_PushFocus_Down__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.OnItemEquipped
struct Uw_LoadoutSec_Wep_Button_C_OnItemEquipped_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_30_PickerFocused__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_Tabs_Pickerbox_K2Node_ComponentBoundEvent_30_PickerFocused__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_78_EquipSlot_FocusReceived__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__EquipSlot_Weapon_K2Node_ComponentBoundEvent_78_EquipSlot_FocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_128_FakeFocusReceived__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_128_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_11_K2Node_ComponentBoundEvent_233_FakeFocusReceived__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_FakeFocusReceiveCaster_C_11_K2Node_ComponentBoundEvent_233_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_23_K2Node_ComponentBoundEvent_401_FakeFocusReceived__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_FakeFocusReceiveCaster_C_23_K2Node_ComponentBoundEvent_401_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_24_K2Node_ComponentBoundEvent_601_FakeFocusReceived__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_BndEvt__w_FakeFocusReceiveCaster_C_24_K2Node_ComponentBoundEvent_601_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.InputSwap
struct Uw_LoadoutSec_Wep_Button_C_InputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.RefreshInventoryPanel
struct Uw_LoadoutSec_Wep_Button_C_RefreshInventoryPanel_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Elist_focus_type>                      FocusType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ExecuteUbergraph_w_LoadoutSec_Wep_Button
struct Uw_LoadoutSec_Wep_Button_C_ExecuteUbergraph_w_LoadoutSec_Wep_Button_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PushCategoryFocus__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_PushCategoryFocus__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.ClearTooltip__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_ClearTooltip__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.GroupPipSelected__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_GroupPipSelected__DelegateSignature_Params
{
	EWeaponType                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.CenterPicker_Selected__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_CenterPicker_Selected__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PickerBox_Right__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_PickerBox_Right__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.PickerBox_Left__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_PickerBox_Left__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Button Hovered__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_Button_Hovered__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Wep_Button.w_LoadoutSec_Wep_Button_C.Button Clicked__DelegateSignature
struct Uw_LoadoutSec_Wep_Button_C_Button_Clicked__DelegateSignature_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
