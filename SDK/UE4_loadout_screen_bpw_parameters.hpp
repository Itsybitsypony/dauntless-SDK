#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loadout_screen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function loadout_screen_bpw.loadout_screen_bpw_C.GetVisibility_1
struct Uloadout_screen_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_7_Text_1
struct Uloadout_screen_bpw_C_Get_TextBlock_7_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_6_Text_1
struct Uloadout_screen_bpw_C_Get_TextBlock_6_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.Get_TextBlock_5_Text_1
struct Uloadout_screen_bpw_C_Get_TextBlock_5_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.GetText_1
struct Uloadout_screen_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.OpenStorefromSelectedItemInstanceID
struct Uloadout_screen_bpw_C_OpenStorefromSelectedItemInstanceID_Params
{
	int                                                FocusedSlot;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.CategorySubGroups_Focus_Enable
struct Uloadout_screen_bpw_C_CategorySubGroups_Focus_Enable_Params
{
	bool                                               Enable_WeaponEquipSlot;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_ArmourButton;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_ConsumableButton;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.ClearTooltips
struct Uloadout_screen_bpw_C_ClearTooltips_Params
{
	bool                                               Weapons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Armour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Consumable;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.Category_Focus_Enable
struct Uloadout_screen_bpw_C_Category_Focus_Enable_Params
{
	bool                                               Enable_WeaponCatFocus;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_ArmourCatFocus;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Enable_Consumable_Focus;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.OnKeyDown
struct Uloadout_screen_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.ArmourIntro_BySlot_PlayAnimation
struct Uloadout_screen_bpw_C_ArmourIntro_BySlot_PlayAnimation_Params
{
	TEnumAsByte<Earmor_slot_enum>                      SlotClicked;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_185_ArmourCategorySelected_BySlot__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__ArmourStage_K2Node_ComponentBoundEvent_185_ArmourCategorySelected_BySlot__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      EquipSlotClicked;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutMenu_FocusOnStart
struct Uloadout_screen_bpw_C_LoadoutMenu_FocusOnStart_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_30_ArmourCat_PaperdollUpdate__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__ArmourStage_K2Node_ComponentBoundEvent_30_ArmourCat_PaperdollUpdate__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemGroupType                                     ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.HoverLeft
struct Uloadout_screen_bpw_C_HoverLeft_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.HoverRight
struct Uloadout_screen_bpw_C_HoverRight_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.Hover Down
struct Uloadout_screen_bpw_C_Hover_Down_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_920_SendFocus_to_Weapons__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_920_SendFocus_to_Weapons__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_935_SendFocus_to_Armour__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__ConsumableStage_K2Node_ComponentBoundEvent_935_SendFocus_to_Armour__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_1068_ArmourCategorySelected__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__ArmourStage_K2Node_ComponentBoundEvent_1068_ArmourCategorySelected__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.OnAnimationFinished
struct Uloadout_screen_bpw_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.ani_ResetMainStage
struct Uloadout_screen_bpw_C_ani_ResetMainStage_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__ArmourStage_K2Node_ComponentBoundEvent_74_SendFocus_ToConsumables__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__ArmourStage_K2Node_ComponentBoundEvent_74_SendFocus_ToConsumables__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__WeaponStage_K2Node_ComponentBoundEvent_475_PaperdollUpdate_Kind__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__WeaponStage_K2Node_ComponentBoundEvent_475_PaperdollUpdate_Kind__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__WeaponStage_K2Node_ComponentBoundEvent_493_PaperdollUpdate_Weapon4Pose__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__WeaponStage_K2Node_ComponentBoundEvent_493_PaperdollUpdate_Weapon4Pose__DelegateSignature_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_328_UpdateArmourDyes_PaperDoll__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_328_UpdateArmourDyes_PaperDoll__DelegateSignature_Params
{
	struct FDyeVariant                                 DyeStruct;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	EArmorType                                         ArmourSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_505_TintWindow_Closed__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__Slot_2ArmourStage_K2Node_ComponentBoundEvent_505_TintWindow_Closed__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      focused_Slot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.Construct
struct Uloadout_screen_bpw_C_Construct_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_555_FakeFocusReceived__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__w_FakeFocusReceiveCaster_K2Node_ComponentBoundEvent_555_FakeFocusReceived__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__GamepadFocusReceiveRight_K2Node_ComponentBoundEvent_631_FakeFocusReceived__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__GamepadFocusReceiveRight_K2Node_ComponentBoundEvent_631_FakeFocusReceived__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__GamepadFocusReceiveDown_K2Node_ComponentBoundEvent_692_FakeFocusReceived__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__GamepadFocusReceiveDown_K2Node_ComponentBoundEvent_692_FakeFocusReceived__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutBack
struct Uloadout_screen_bpw_C_LoadoutBack_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainstage_FromConsumables
struct Uloadout_screen_bpw_C_MenuNav_ToMainstage_FromConsumables_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainstage_FromWeapons
struct Uloadout_screen_bpw_C_MenuNav_ToMainstage_FromWeapons_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.MenuNav_ToMainStage_FromArmour
struct Uloadout_screen_bpw_C_MenuNav_ToMainStage_FromArmour_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.ExitWeaponCellStage
struct Uloadout_screen_bpw_C_ExitWeaponCellStage_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.OpenWebStore
struct Uloadout_screen_bpw_C_OpenWebStore_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.CloseTintWindow
struct Uloadout_screen_bpw_C_CloseTintWindow_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.OpenAdvancedMenu
struct Uloadout_screen_bpw_C_OpenAdvancedMenu_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.GTFO
struct Uloadout_screen_bpw_C_GTFO_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_2715_PushFocus__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_2715_PushFocus__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   ScreenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.FocusWeapons
struct Uloadout_screen_bpw_C_FocusWeapons_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.FocusArmour
struct Uloadout_screen_bpw_C_FocusArmour_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.CocusConsumables
struct Uloadout_screen_bpw_C_CocusConsumables_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_1061_SendFocus__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_1061_SendFocus__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.PushFocus
struct Uloadout_screen_bpw_C_PushFocus_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__FullscreenBG_K2Node_ComponentBoundEvent_30_On Back__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__FullscreenBG_K2Node_ComponentBoundEvent_30_On_Back__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_139_WeaponCategoryHovered__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_139_WeaponCategoryHovered__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___3ConsumableStage_K2Node_ComponentBoundEvent_119_OpenStore_from_Item__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt___3ConsumableStage_K2Node_ComponentBoundEvent_119_OpenStore_from_Item__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdolLCamera
struct Uloadout_screen_bpw_C_UpdatePaperdolLCamera_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BlockInput
struct Uloadout_screen_bpw_C_BlockInput_Params
{
	bool                                               BlockInput;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_0_ArmourTransmogUpdated__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt___2ArmourStage_K2Node_ComponentBoundEvent_0_ArmourTransmogUpdated__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_0_PaperdollUpdate_Transmog__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt___1WeaponStage_K2Node_ComponentBoundEvent_0_PaperdollUpdate_Transmog__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_311_WeaponCategorySelected__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Weapon_380_K2Node_ComponentBoundEvent_311_WeaponCategorySelected__DelegateSignature_Params
{
	EWeaponType                                        WeaponType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_169_ConsumablesCategoryHovered__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_169_ConsumablesCategoryHovered__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_159_ConsumablesCategorySelected__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Consumables_487_K2Node_ComponentBoundEvent_159_ConsumablesCategorySelected__DelegateSignature_Params
{
	int                                                quickslot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BndEvt__w_Loadout_Section_Armour_196_K2Node_ComponentBoundEvent_145_ArmourCategoryHovered__DelegateSignature
struct Uloadout_screen_bpw_C_BndEvt__w_Loadout_Section_Armour_196_K2Node_ComponentBoundEvent_145_ArmourCategoryHovered__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.ExecuteUbergraph_loadout_screen_bpw
struct Uloadout_screen_bpw_C_ExecuteUbergraph_loadout_screen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_Transmog__DelegateSignature
struct Uloadout_screen_bpw_C_UpdatePaperdoll_Transmog__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BlockParentInput__DelegateSignature
struct Uloadout_screen_bpw_C_BlockParentInput__DelegateSignature_Params
{
	bool                                               BlockInput;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_Anim__DelegateSignature
struct Uloadout_screen_bpw_C_UpdatePaperdoll_Anim__DelegateSignature_Params
{
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.ResetCamera__DelegateSignature
struct Uloadout_screen_bpw_C_ResetCamera__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdollCam_LocRot__DelegateSignature
struct Uloadout_screen_bpw_C_UpdatePaperdollCam_LocRot__DelegateSignature_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.ExitLoadout__DelegateSignature
struct Uloadout_screen_bpw_C_ExitLoadout__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_ArmourTint__DelegateSignature
struct Uloadout_screen_bpw_C_UpdatePaperdoll_ArmourTint__DelegateSignature_Params
{
	struct FDyeVariant                                 NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EArmorType                                         NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.RefreshPaperdoll_Pose__DelegateSignature
struct Uloadout_screen_bpw_C_RefreshPaperdoll_Pose__DelegateSignature_Params
{
	EWeaponType                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.UpdatePaperdoll_EquipNewItem__DelegateSignature
struct Uloadout_screen_bpw_C_UpdatePaperdoll_EquipNewItem__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemGroupType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.BackToMainStage_From__DelegateSignature
struct Uloadout_screen_bpw_C_BackToMainStage_From__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   ScreenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_Consumables__DelegateSignature
struct Uloadout_screen_bpw_C_LoadoutCategorySelected_Consumables__DelegateSignature_Params
{
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_R_Armour__DelegateSignature
struct Uloadout_screen_bpw_C_LoadoutCategorySelected_R_Armour__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategorySelected_L_Weapons__DelegateSignature
struct Uloadout_screen_bpw_C_LoadoutCategorySelected_L_Weapons__DelegateSignature_Params
{
	EWeaponType                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_screen_bpw.loadout_screen_bpw_C.LoadoutCategoryHovered__DelegateSignature
struct Uloadout_screen_bpw_C_LoadoutCategoryHovered__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
