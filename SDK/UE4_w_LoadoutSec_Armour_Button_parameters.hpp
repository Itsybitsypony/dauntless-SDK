#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_LoadoutSec_Armour_Button_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Get_BGPanel_BorderBackground_ContentColorAndOpacity_1
struct Uw_LoadoutSec_Armour_Button_C_Get_BGPanel_BorderBackground_ContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Get_BGPanel_BorderForeground_ContentColorAndOpacity_1
struct Uw_LoadoutSec_Armour_Button_C_Get_BGPanel_BorderForeground_ContentColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.GetText_1
struct Uw_LoadoutSec_Armour_Button_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Get_HelmBranch_ColorAndOpacity_1
struct Uw_LoadoutSec_Armour_Button_C_Get_HelmBranch_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Get_TorsoBranch_ColorAndOpacity_1
struct Uw_LoadoutSec_Armour_Button_C_Get_TorsoBranch_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Get_LanternBranch_ColorAndOpacity_1
struct Uw_LoadoutSec_Armour_Button_C_Get_LanternBranch_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Get_ArmsBranch_ColorAndOpacity_1
struct Uw_LoadoutSec_Armour_Button_C_Get_ArmsBranch_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Get_LegsBranch_ColorAndOpacity_1
struct Uw_LoadoutSec_Armour_Button_C_Get_LegsBranch_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Clear All Checked States
struct Uw_LoadoutSec_Armour_Button_C_Clear_All_Checked_States_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Update Checked States
struct Uw_LoadoutSec_Armour_Button_C_Update_Checked_States_Params
{
	TEnumAsByte<Earmor_slot_enum>                      Checked_Slot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.GetVisibility_1
struct Uw_LoadoutSec_Armour_Button_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.RefreshAmourAndResistancesUI
struct Uw_LoadoutSec_Armour_Button_C_RefreshAmourAndResistancesUI_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.AddResistsFromElementFloatArray
struct Uw_LoadoutSec_Armour_Button_C_AddResistsFromElementFloatArray_Params
{
	TArray<struct Felement_float_pair>                 FloatPairs;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              GlobalResist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLantern;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.AddResists
struct Uw_LoadoutSec_Armour_Button_C_AddResists_Params
{
	float                                              GlobalResist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlameResist;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrostResist;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShockResist;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadiantResist;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              UmbralResist;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLantern;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.UpdateResistsFromLantern
struct Uw_LoadoutSec_Armour_Button_C_UpdateResistsFromLantern_Params
{
	class UArchonInventoryItem_Lantern*                Lantern;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.ResetResistances
struct Uw_LoadoutSec_Armour_Button_C_ResetResistances_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Push Focus To EquipSlot
struct Uw_LoadoutSec_Armour_Button_C_Push_Focus_To_EquipSlot_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.AddResistanceType
struct Uw_LoadoutSec_Armour_Button_C_AddResistanceType_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELoadoutStatTypes>                     Stat;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.UpdateArmour_Resistances
struct Uw_LoadoutSec_Armour_Button_C_UpdateArmour_Resistances_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.EquipNewItem
struct Uw_LoadoutSec_Armour_Button_C_EquipNewItem_Params
{
	class UArchonInventoryItem*                        NewItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.UpdateCharacterStats_Armour
struct Uw_LoadoutSec_Armour_Button_C_UpdateCharacterStats_Armour_Params
{
	class UArchonInventoryItem*                        NewItemEquipped;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Lookup Armour Power
struct Uw_LoadoutSec_Armour_Button_C_Lookup_Armour_Power_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              GlobalResistance;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Get Equipped Loadout Armour Valueby Type
struct Uw_LoadoutSec_Armour_Button_C_Get_Equipped_Loadout_Armour_Valueby_Type_Params
{
	EArmorType                                         armour_type;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.UpdateArmour_MainValue
struct Uw_LoadoutSec_Armour_Button_C_UpdateArmour_MainValue_Params
{
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.OnFocusReceived
struct Uw_LoadoutSec_Armour_Button_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Construct
struct Uw_LoadoutSec_Armour_Button_C_Construct_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Tick
struct Uw_LoadoutSec_Armour_Button_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Show Hover
struct Uw_LoadoutSec_Armour_Button_C_Show_Hover_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Hide Hover
struct Uw_LoadoutSec_Armour_Button_C_Hide_Hover_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Chest_K2Node_ComponentBoundEvent_7_EquipSlot_Clicked__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Chest_K2Node_ComponentBoundEvent_7_EquipSlot_Clicked__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Arms_K2Node_ComponentBoundEvent_11_EquipSlot_Clicked__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Arms_K2Node_ComponentBoundEvent_11_EquipSlot_Clicked__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Legs_K2Node_ComponentBoundEvent_17_EquipSlot_Clicked__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Legs_K2Node_ComponentBoundEvent_17_EquipSlot_Clicked__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Lantern_K2Node_ComponentBoundEvent_23_EquipSlot_Clicked__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Lantern_K2Node_ComponentBoundEvent_23_EquipSlot_Clicked__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Helm_K2Node_ComponentBoundEvent_30_EquipSlot_Clicked__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Helm_K2Node_ComponentBoundEvent_30_EquipSlot_Clicked__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Chest_K2Node_ComponentBoundEvent_38_EquipSlot_Hovered__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Chest_K2Node_ComponentBoundEvent_38_EquipSlot_Hovered__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Arms_K2Node_ComponentBoundEvent_47_EquipSlot_Hovered__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Arms_K2Node_ComponentBoundEvent_47_EquipSlot_Hovered__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Legs_K2Node_ComponentBoundEvent_57_EquipSlot_Hovered__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Legs_K2Node_ComponentBoundEvent_57_EquipSlot_Hovered__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Helm_K2Node_ComponentBoundEvent_68_EquipSlot_Hovered__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Helm_K2Node_ComponentBoundEvent_68_EquipSlot_Hovered__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Lantern_K2Node_ComponentBoundEvent_80_EquipSlot_Hovered__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Lantern_K2Node_ComponentBoundEvent_80_EquipSlot_Hovered__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Chest_K2Node_ComponentBoundEvent_84_EquipSlot_FocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Chest_K2Node_ComponentBoundEvent_84_EquipSlot_FocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Arms_K2Node_ComponentBoundEvent_254_EquipSlot_FocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Arms_K2Node_ComponentBoundEvent_254_EquipSlot_FocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Legs_K2Node_ComponentBoundEvent_269_EquipSlot_FocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Legs_K2Node_ComponentBoundEvent_269_EquipSlot_FocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Helm_K2Node_ComponentBoundEvent_285_EquipSlot_FocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Helm_K2Node_ComponentBoundEvent_285_EquipSlot_FocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__EquipSlot_Lantern_K2Node_ComponentBoundEvent_302_EquipSlot_FocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__EquipSlot_Lantern_K2Node_ComponentBoundEvent_302_EquipSlot_FocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__FakeFocus_DOWN_BlockEquipSlots_K2Node_ComponentBoundEvent_93_FakeFocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__FakeFocus_DOWN_BlockEquipSlots_K2Node_ComponentBoundEvent_93_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__FakeFocus_IN_UPtoCatButton_K2Node_ComponentBoundEvent_276_FakeFocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__FakeFocus_IN_UPtoCatButton_K2Node_ComponentBoundEvent_276_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.OnGetLanternResistance_Event_1
struct Uw_LoadoutSec_Armour_Button_C_OnGetLanternResistance_Event_1_Params
{
	float                                              GlobalResistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct Felement_float_pair>                 ElementalResistances;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__w_FakeFocusReceiveCaster_C_1_K2Node_ComponentBoundEvent_124_FakeFocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__w_FakeFocusReceiveCaster_C_1_K2Node_ComponentBoundEvent_124_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BndEvt__w_FocusReceiveL_SendIn_K2Node_ComponentBoundEvent_189_FakeFocusReceived__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_BndEvt__w_FocusReceiveL_SendIn_K2Node_ComponentBoundEvent_189_FakeFocusReceived__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.BigClick
struct Uw_LoadoutSec_Armour_Button_C_BigClick_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.RefreshCheckedStates
struct Uw_LoadoutSec_Armour_Button_C_RefreshCheckedStates_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.OnEquipSlotClicked
struct Uw_LoadoutSec_Armour_Button_C_OnEquipSlotClicked_Params
{
	TEnumAsByte<Earmor_slot_enum>                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.EquipSlot_Focused_Event_1
struct Uw_LoadoutSec_Armour_Button_C_EquipSlot_Focused_Event_1_Params
{
	TEnumAsByte<Earmor_slot_enum>                      FocusedSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.UpdateDataView
struct Uw_LoadoutSec_Armour_Button_C_UpdateDataView_Params
{
	TEnumAsByte<Earmor_slot_enum>                      SlotType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PushFocusToGrid;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.EquipSlots_Unhovered
struct Uw_LoadoutSec_Armour_Button_C_EquipSlots_Unhovered_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.ExecuteUbergraph_w_LoadoutSec_Armour_Button
struct Uw_LoadoutSec_Armour_Button_C_ExecuteUbergraph_w_LoadoutSec_Armour_Button_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.UnHovered__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_UnHovered__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.OpenAdvancedMenu__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_OpenAdvancedMenu__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.CategoryHovered__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_CategoryHovered__DelegateSignature_Params
{
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.SendFocus__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_SendFocus__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.EquipSlot_Focused__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_EquipSlot_Focused__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      FocusedSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.EquippedSlot_Clicked__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_EquippedSlot_Clicked__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Button Hovered__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_Button_Hovered__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      Armour_Slot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_LoadoutSec_Armour_Button.w_LoadoutSec_Armour_Button_C.Button Clicked__DelegateSignature
struct Uw_LoadoutSec_Armour_Button_C_Button_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
