#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugLoadoutScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableFlask
struct UBPW_DebugLoadoutScreen_C_DisplayAvailableFlask_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnFlaskSelectionChanged
struct UBPW_DebugLoadoutScreen_C_OnFlaskSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnBannerOptionChanged
struct UBPW_DebugLoadoutScreen_C_OnBannerOptionChanged_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableBannerDyes
struct UBPW_DebugLoadoutScreen_C_DisplayAvailableBannerDyes_Params
{
	class UComboBoxString*                             ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableBannerOptions
struct UBPW_DebugLoadoutScreen_C_DisplayAvailableBannerOptions_Params
{
	class UComboBoxString*                             ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EItemGroupType                                     OptionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteCustomChanged
struct UBPW_DebugLoadoutScreen_C_OnEmoteCustomChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteEndChanged
struct UBPW_DebugLoadoutScreen_C_OnEmoteEndChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnEmoteIntroChanged
struct UBPW_DebugLoadoutScreen_C_OnEmoteIntroChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableEmotes
struct UBPW_DebugLoadoutScreen_C_DisplayAvailableEmotes_Params
{
	class UComboBoxString*                             ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EEmoteType                                         EmoteType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CustomIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateAllArmourStats
struct UBPW_DebugLoadoutScreen_C_UpdateAllArmourStats_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateArmourStats
struct UBPW_DebugLoadoutScreen_C_UpdateArmourStats_Params
{
	class UScrollBox*                                  ScrollBox;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 InvItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.AddArmourStat
struct UBPW_DebugLoadoutScreen_C_AddArmourStat_Params
{
	class FString                                      TextValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FSlateColor                                 Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UPanelWidget*                                Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateLanternStats
struct UBPW_DebugLoadoutScreen_C_UpdateLanternStats_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.UpdateSetBonuses
struct UBPW_DebugLoadoutScreen_C_UpdateSetBonuses_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableLantern
struct UBPW_DebugLoadoutScreen_C_DisplayAvailableLantern_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnLanternSelectionChanged
struct UBPW_DebugLoadoutScreen_C_OnLanternSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnLegsSelectionChanged
struct UBPW_DebugLoadoutScreen_C_OnLegsSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnArmsSelectionChanged
struct UBPW_DebugLoadoutScreen_C_OnArmsSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnChestSelectionChanged
struct UBPW_DebugLoadoutScreen_C_OnChestSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnHelmetSelectionChanged
struct UBPW_DebugLoadoutScreen_C_OnHelmetSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableArmour
struct UBPW_DebugLoadoutScreen_C_DisplayAvailableArmour_Params
{
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UComboBoxString*                             ComboBox;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnWeaponSelectionChanged
struct UBPW_DebugLoadoutScreen_C_OnWeaponSelectionChanged_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DisplayAvailableWeapon
struct UBPW_DebugLoadoutScreen_C_DisplayAvailableWeapon_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.hide
struct UBPW_DebugLoadoutScreen_C_hide_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.Show
struct UBPW_DebugLoadoutScreen_C_Show_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.Construct
struct UBPW_DebugLoadoutScreen_C_Construct_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_361_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_361_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DelayedUpdateSetBonuses
struct UBPW_DebugLoadoutScreen_C_DelayedUpdateSetBonuses_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.DelayedUpdateStats
struct UBPW_DebugLoadoutScreen_C_DelayedUpdateStats_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_246_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__Button_Emotes_K2Node_ComponentBoundEvent_265_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot1_K2Node_ComponentBoundEvent_129_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_EmoteSlot1_K2Node_ComponentBoundEvent_129_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot2_K2Node_ComponentBoundEvent_138_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_EmoteSlot2_K2Node_ComponentBoundEvent_138_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot3_K2Node_ComponentBoundEvent_148_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_EmoteSlot3_K2Node_ComponentBoundEvent_148_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_EmoteSlot4_K2Node_ComponentBoundEvent_159_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_EmoteSlot4_K2Node_ComponentBoundEvent_159_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__Button_Banner_K2Node_ComponentBoundEvent_302_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__Button_Banner_K2Node_ComponentBoundEvent_302_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerMesh_K2Node_ComponentBoundEvent_277_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerMesh_K2Node_ComponentBoundEvent_277_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBorderPattern_K2Node_ComponentBoundEvent_534_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerBorderPattern_K2Node_ComponentBoundEvent_534_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerSigilPattern_K2Node_ComponentBoundEvent_579_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerSigilPattern_K2Node_ComponentBoundEvent_579_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerVFX_K2Node_ComponentBoundEvent_595_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerVFX_K2Node_ComponentBoundEvent_595_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerAnimation_K2Node_ComponentBoundEvent_612_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerAnimation_K2Node_ComponentBoundEvent_612_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBackgroundColor_K2Node_ComponentBoundEvent_630_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerBackgroundColor_K2Node_ComponentBoundEvent_630_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerBorderColor_K2Node_ComponentBoundEvent_649_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerBorderColor_K2Node_ComponentBoundEvent_649_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.BndEvt__ComboBox_BannerSigilColor_K2Node_ComponentBoundEvent_669_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugLoadoutScreen_C_BndEvt__ComboBox_BannerSigilColor_K2Node_ComponentBoundEvent_669_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.OnPlayerLoadoutChanged
struct UBPW_DebugLoadoutScreen_C_OnPlayerLoadoutChanged_Params
{
};

// Function BPW_DebugLoadoutScreen.BPW_DebugLoadoutScreen_C.ExecuteUbergraph_BPW_DebugLoadoutScreen
struct UBPW_DebugLoadoutScreen_C_ExecuteUbergraph_BPW_DebugLoadoutScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
