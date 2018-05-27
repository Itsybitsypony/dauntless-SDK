#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugInventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_DebugInventory.BPW_DebugInventory_C.GetDefaultFocusedWidget
struct UBPW_DebugInventory_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowChallenges
struct UBPW_DebugInventory_C_ShowChallenges_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowDataModel
struct UBPW_DebugInventory_C_ShowDataModel_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowCells
struct UBPW_DebugInventory_C_ShowCells_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowDebugCommands
struct UBPW_DebugInventory_C_ShowDebugCommands_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.Set SigilDyeSurfaceType
struct UBPW_DebugInventory_C_Set_SigilDyeSurfaceType_Params
{
	class UMaterialInstanceDynamic*                    InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.Set BorderDyeSurfaceType
struct UBPW_DebugInventory_C_Set_BorderDyeSurfaceType_Params
{
	class UMaterialInstanceDynamic*                    InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.Set FabricDyeSurfaceType
struct UBPW_DebugInventory_C_Set_FabricDyeSurfaceType_Params
{
	class UMaterialInstanceDynamic*                    InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmourDyeSurfaceType                              Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowTinting
struct UBPW_DebugInventory_C_ShowTinting_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnKeyDown
struct UBPW_DebugInventory_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowLoadout
struct UBPW_DebugInventory_C_ShowLoadout_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowCatalog
struct UBPW_DebugInventory_C_ShowCatalog_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ShowInventory
struct UBPW_DebugInventory_C_ShowInventory_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_9EA2D14B47EE7C91239632AB84B21F61
struct UBPW_DebugInventory_C_OnLoaded_9EA2D14B47EE7C91239632AB84B21F61_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_E16B41A74A714CCEB928A4BC74E9B6A8
struct UBPW_DebugInventory_C_OnLoaded_E16B41A74A714CCEB928A4BC74E9B6A8_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_1D18E0784A8669F687D90686988DAA83
struct UBPW_DebugInventory_C_OnLoaded_1D18E0784A8669F687D90686988DAA83_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_3401DEEF476AF8B4FAA930A291129175
struct UBPW_DebugInventory_C_OnLoaded_3401DEEF476AF8B4FAA930A291129175_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_6D437E5544B6B78808CAD4A90D711683
struct UBPW_DebugInventory_C_OnLoaded_6D437E5544B6B78808CAD4A90D711683_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_657040F04BF9B451FC0C3DBACE1DF91B
struct UBPW_DebugInventory_C_OnLoaded_657040F04BF9B451FC0C3DBACE1DF91B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_A704830146CF5BA966ABF594D7D5EEAE
struct UBPW_DebugInventory_C_OnLoaded_A704830146CF5BA966ABF594D7D5EEAE_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_643D9DA748556155B5C0D7BEE3701D7E
struct UBPW_DebugInventory_C_OnLoaded_643D9DA748556155B5C0D7BEE3701D7E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_86B0336B4A3A521EF61C108A9B0E0EE2
struct UBPW_DebugInventory_C_OnLoaded_86B0336B4A3A521EF61C108A9B0E0EE2_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_96ECD3B04D3C9EC14CC062BBDA7DFA20
struct UBPW_DebugInventory_C_OnLoaded_96ECD3B04D3C9EC14CC062BBDA7DFA20_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_8B27C243488D883A279982B07D8E8C7B
struct UBPW_DebugInventory_C_OnLoaded_8B27C243488D883A279982B07D8E8C7B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.OnLoaded_C5B3EF544EDF5898C520E4897CCFC684
struct UBPW_DebugInventory_C_OnLoaded_C5B3EF544EDF5898C520E4897CCFC684_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.Construct
struct UBPW_DebugInventory_C_Construct_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_455_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_475_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_475_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.Destruct
struct UBPW_DebugInventory_C_Destruct_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_1_PlayEmote__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_1_PlayEmote__DelegateSignature_Params
{
	class FString                                      emoteID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_576_ResetEmote__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__bpw_debug_emotes_K2Node_ComponentBoundEvent_576_ResetEmote__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_163_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_163_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.SpawnBanner
struct UBPW_DebugInventory_C_SpawnBanner_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.RefreshBanner
struct UBPW_DebugInventory_C_RefreshBanner_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1012_BannerUpdateEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1012_BannerUpdateEvent__DelegateSignature_Params
{
	struct FBannerCustomizationItemIDs                 BannerIDs;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Quests_K2Node_ComponentBoundEvent_382_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_Quests_K2Node_ComponentBoundEvent_382_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_141_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_141_K2Node_ComponentBoundEvent_491_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1224_BannerUpdateEvent_Dye__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__debug_BannerCustomization_bpw_498_K2Node_ComponentBoundEvent_1224_BannerUpdateEvent_Dye__DelegateSignature_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveDyeSlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_682_LoadoutCategoryHovered_L__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_682_LoadoutCategoryHovered_L__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_713_LoadoutCategoryHovered_R__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_713_LoadoutCategoryHovered_R__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_743_LoadoutCategoryHovered_D__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_743_LoadoutCategoryHovered_D__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_772_LoadoutCategorySelected_L_Weapons__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_772_LoadoutCategorySelected_L_Weapons__DelegateSignature_Params
{
	EWeaponType                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_800_LoadoutCategorySelected_R_Armour__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_800_LoadoutCategorySelected_R_Armour__DelegateSignature_Params
{
	TEnumAsByte<Earmor_slot_enum>                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_827_LoadoutCategorySelected_D_Consumables__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_827_LoadoutCategorySelected_D_Consumables__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_307_BackToMainStage_FromArmour__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_307_BackToMainStage_FromArmour__DelegateSignature_Params
{
	TEnumAsByte<ELoadout_ScreenMode>                   ScreenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_334_BackToMainStage_FromWeapons__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_334_BackToMainStage_FromWeapons__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_359_BackToMainStage_FromConsumables__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_359_BackToMainStage_FromConsumables__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.SetBannerMaterial
struct UBPW_DebugInventory_C_SetBannerMaterial_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_154_UpdatePaperdoll_EquipNewItem__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_154_UpdatePaperdoll_EquipNewItem__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemGroupType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_737_RefreshPaperdoll_Pose__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_737_RefreshPaperdoll_Pose__DelegateSignature_Params
{
	EWeaponType                                        NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_672_UpdatePaperdoll_ArmourTint__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Menu_LoadoutScreen_bpw_K2Node_ComponentBoundEvent_672_UpdatePaperdoll_ArmourTint__DelegateSignature_Params
{
	struct FDyeVariant                                 NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EArmorType                                         NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_237_K2Node_ComponentBoundEvent_545_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_237_K2Node_ComponentBoundEvent_545_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_353_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_Loadout_K2Node_ComponentBoundEvent_437_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__bpw_armor_tintcontrol_loadout_K2Node_ComponentBoundEvent_136_UpdatePaperdoll__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__bpw_armor_tintcontrol_loadout_K2Node_ComponentBoundEvent_136_UpdatePaperdoll__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Cells_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_Cells_K2Node_ComponentBoundEvent_274_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_DataModel_K2Node_ComponentBoundEvent_627_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_DataModel_K2Node_ComponentBoundEvent_627_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Challenges_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_Challenges_K2Node_ComponentBoundEvent_189_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_Catalog_K2Node_ComponentBoundEvent_423_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_Catalog_K2Node_ComponentBoundEvent_423_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature
struct UBPW_DebugInventory_C_BndEvt__Button_63_K2Node_ComponentBoundEvent_351_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function BPW_DebugInventory.BPW_DebugInventory_C.ExecuteUbergraph_BPW_DebugInventory
struct UBPW_DebugInventory_C_ExecuteUbergraph_BPW_DebugInventory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
