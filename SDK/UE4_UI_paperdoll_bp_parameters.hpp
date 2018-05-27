#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UI_paperdoll_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.GetMorphTargetDriver
struct AUI_paperdoll_bp_C_GetMorphTargetDriver_Params
{
	class USkeletalMeshComponent*                      MorphTargetOwner;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      AnimInstanceOwner;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.HideSkinUnderArmor
struct AUI_paperdoll_bp_C_HideSkinUnderArmor_Params
{
	TArray<class UMaterialInstanceDynamic*>            SkinDynamicMats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  CutMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aarmour_part_base_bp_C*                      ArmourPart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkinMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetBillboard_TargetBasedOnLevel
struct AUI_paperdoll_bp_C_SetBillboard_TargetBasedOnLevel_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Lantern
struct AUI_paperdoll_bp_C_Get_Equipped_Lantern_Params
{
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Weapon
struct AUI_paperdoll_bp_C_Get_Equipped_Weapon_Params
{
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Legs
struct AUI_paperdoll_bp_C_Get_Equipped_Legs_Params
{
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Arms
struct AUI_paperdoll_bp_C_Get_Equipped_Arms_Params
{
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Chest
struct AUI_paperdoll_bp_C_Get_Equipped_Chest_Params
{
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Get Equipped Helmet
struct AUI_paperdoll_bp_C_Get_Equipped_Helmet_Params
{
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraLocationFunction
struct AUI_paperdoll_bp_C_SetCameraLocationFunction_Params
{
	TEnumAsByte<Epaperdoll_camera_location>            Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetSkinHiding
struct AUI_paperdoll_bp_C_SetSkinHiding_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  CutMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.CameraAspectOffset
struct AUI_paperdoll_bp_C_CameraAspectOffset_Params
{
	struct FVector                                     A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ForceHelmHidden
struct AUI_paperdoll_bp_C_ForceHelmHidden_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetDyes
struct AUI_paperdoll_bp_C_SetDyes_Params
{
	struct FDyeVariant                                 ArmourDyeVariant;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Material_Array;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetDye - CUSTOMIZED
struct AUI_paperdoll_bp_C_SetDye___CUSTOMIZED_Params
{
	struct FName                                       DyeRowName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Material_Array;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<EUI_RowType>                           DyeRow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Set Dye - DEFAULT
struct AUI_paperdoll_bp_C_Set_Dye___DEFAULT_Params
{
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialArray;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     DefaultObjectBP;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUI_RowType>                           DyeRow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetHairAndEyesAndSkin
struct AUI_paperdoll_bp_C_SetHairAndEyesAndSkin_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetFace
struct AUI_paperdoll_bp_C_SetFace_Params
{
	bool                                               UpdateSkinAndArmor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetBodyType
struct AUI_paperdoll_bp_C_SetBodyType_Params
{
	bool                                               UpdateSkinAndArmor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SpawnBanner
struct AUI_paperdoll_bp_C_SpawnBanner_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetBannerPlantingMode
struct AUI_paperdoll_bp_C_ResetBannerPlantingMode_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupBannerPlantingPreviewMode
struct AUI_paperdoll_bp_C_SetupBannerPlantingPreviewMode_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.WeaponUpdate
struct AUI_paperdoll_bp_C_WeaponUpdate_Params
{
	EWeaponType                                        Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.GetDyeConfig_FromInventory_viaInstanceId
struct AUI_paperdoll_bp_C_GetDyeConfig_FromInventory_viaInstanceId_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      DefaultsItemID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetIdleStateMachine
struct AUI_paperdoll_bp_C_ResetIdleStateMachine_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetTriSectionHighlights
struct AUI_paperdoll_bp_C_SetTriSectionHighlights_Params
{
	float                                              Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Down;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupSkin&Appearance
struct AUI_paperdoll_bp_C_SetupSkin_Appearance_Params
{
	TArray<struct FAppearanceStringData>               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetMorphs
struct AUI_paperdoll_bp_C_SetMorphs_Params
{
	struct FArchonMeshAppearanceData                   ArchonMeshAppearanceData;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      SelectedMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupDynamicUI_MaterialReferences
struct AUI_paperdoll_bp_C_SetupDynamicUI_MaterialReferences_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetAnimationIdle
struct AUI_paperdoll_bp_C_ResetAnimationIdle_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.PlayEmoteAnimation
struct AUI_paperdoll_bp_C_PlayEmoteAnimation_Params
{
	class UAnimationAsset*                             NewAnimToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Loop_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UserConstructionScript
struct AUI_paperdoll_bp_C_UserConstructionScript_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_0__FinishedFunc
struct AUI_paperdoll_bp_C_Timeline_0__FinishedFunc_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_0__UpdateFunc
struct AUI_paperdoll_bp_C_Timeline_0__UpdateFunc_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_1__FinishedFunc
struct AUI_paperdoll_bp_C_Timeline_1__FinishedFunc_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_1__UpdateFunc
struct AUI_paperdoll_bp_C_Timeline_1__UpdateFunc_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_2__FinishedFunc
struct AUI_paperdoll_bp_C_Timeline_2__FinishedFunc_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Timeline_2__UpdateFunc
struct AUI_paperdoll_bp_C_Timeline_2__UpdateFunc_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_A84DC90E4DE9D8FDE79DE699524FF1AF
struct AUI_paperdoll_bp_C_OnLoaded_A84DC90E4DE9D8FDE79DE699524FF1AF_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_E2CC42014A795FFB25953CA36F7C1EEA
struct AUI_paperdoll_bp_C_OnLoaded_E2CC42014A795FFB25953CA36F7C1EEA_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_292D503843FC19A7C7D6F690D65B15D5
struct AUI_paperdoll_bp_C_OnLoaded_292D503843FC19A7C7D6F690D65B15D5_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_80A00ED34BED1658D7B9C0813DF7210F
struct AUI_paperdoll_bp_C_OnLoaded_80A00ED34BED1658D7B9C0813DF7210F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_1E0B6EBD4AD45957DBA6C0B3FD6A720F
struct AUI_paperdoll_bp_C_OnLoaded_1E0B6EBD4AD45957DBA6C0B3FD6A720F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_58D83B764B2C1B0F753F828B3CA9F019
struct AUI_paperdoll_bp_C_OnLoaded_58D83B764B2C1B0F753F828B3CA9F019_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_D8F0A3DC41B2DDFD8108EF98C893051E
struct AUI_paperdoll_bp_C_OnLoaded_D8F0A3DC41B2DDFD8108EF98C893051E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_BE54537D480AFB0D68575FBA9CA4D2FE
struct AUI_paperdoll_bp_C_OnLoaded_BE54537D480AFB0D68575FBA9CA4D2FE_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_13A34AAC4B87E0AD0BBC7187156B8BE5
struct AUI_paperdoll_bp_C_OnLoaded_13A34AAC4B87E0AD0BBC7187156B8BE5_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_001B4BB4401E4BB458A57CA169AAF77D
struct AUI_paperdoll_bp_C_OnLoaded_001B4BB4401E4BB458A57CA169AAF77D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_15667D18465264D6A50313A8DB9D9FB5
struct AUI_paperdoll_bp_C_OnLoaded_15667D18465264D6A50313A8DB9D9FB5_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_2C58ACF449742CBA2804B0A05881BE6B
struct AUI_paperdoll_bp_C_OnLoaded_2C58ACF449742CBA2804B0A05881BE6B_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_FB9230194302D43D036009B56A395E47
struct AUI_paperdoll_bp_C_OnLoaded_FB9230194302D43D036009B56A395E47_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_8F7955394E4545204238249F3C78C999
struct AUI_paperdoll_bp_C_OnLoaded_8F7955394E4545204238249F3C78C999_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_96016E024DF049511E7259B324C7CC2A
struct AUI_paperdoll_bp_C_OnLoaded_96016E024DF049511E7259B324C7CC2A_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.OnLoaded_B176CECD49B41E171512B783BF325D69
struct AUI_paperdoll_bp_C_OnLoaded_B176CECD49B41E171512B783BF325D69_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_LEFT
struct AUI_paperdoll_bp_C_Animate_TriSection_LEFT_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_DOWN
struct AUI_paperdoll_bp_C_Animate_TriSection_DOWN_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_RIGHT
struct AUI_paperdoll_bp_C_Animate_TriSection_RIGHT_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Right_to_Centered
struct AUI_paperdoll_bp_C_Animate_TriSection_Right_to_Centered_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Down_to_Centered
struct AUI_paperdoll_bp_C_Animate_TriSection_Down_to_Centered_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Animate_TriSection_Left_to_Main
struct AUI_paperdoll_bp_C_Animate_TriSection_Left_to_Main_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraFace
struct AUI_paperdoll_bp_C_SetCameraFace_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraEyes
struct AUI_paperdoll_bp_C_SetCameraEyes_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCameraCCBody
struct AUI_paperdoll_bp_C_SetCameraCCBody_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetCamera_AdvancedMenu
struct AUI_paperdoll_bp_C_SetCamera_AdvancedMenu_Params
{
	struct FVector                                     CameraOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetCameratoOriginal
struct AUI_paperdoll_bp_C_ResetCameratoOriginal_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Weapon
struct AUI_paperdoll_bp_C_UpdatePaperdollMesh_Weapon_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               UpdateEquipped_;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Legs
struct AUI_paperdoll_bp_C_UpdatePaperdollMesh_Legs_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Helm
struct AUI_paperdoll_bp_C_UpdatePaperdollMesh_Helm_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Lantern
struct AUI_paperdoll_bp_C_UpdatePaperdollMesh_Lantern_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Chest
struct AUI_paperdoll_bp_C_UpdatePaperdollMesh_Chest_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdollMesh_Arms
struct AUI_paperdoll_bp_C_UpdatePaperdollMesh_Arms_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdoll_FromMenu
struct AUI_paperdoll_bp_C_UpdatePaperdoll_FromMenu_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemGroupType                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.RefreshAllDyes
struct AUI_paperdoll_bp_C_RefreshAllDyes_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Refresh Dye Part
struct AUI_paperdoll_bp_C_Refresh_Dye_Part_Params
{
	struct FDyeVariant                                 NewDyeConfig;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID_ForDefaultStuff_;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdatePaperdoll_Transmog
struct AUI_paperdoll_bp_C_UpdatePaperdoll_Transmog_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ReceiveBeginPlay
struct AUI_paperdoll_bp_C_ReceiveBeginPlay_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.PlayEmote
struct AUI_paperdoll_bp_C_PlayEmote_Params
{
	class FString                                      NewAnimToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ResetEmote
struct AUI_paperdoll_bp_C_ResetEmote_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupHair
struct AUI_paperdoll_bp_C_SetupHair_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_LEFT_LoadoutWeapons
struct AUI_paperdoll_bp_C_Hover_LEFT_LoadoutWeapons_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_RIGHT_LoadoutArmour
struct AUI_paperdoll_bp_C_Hover_RIGHT_LoadoutArmour_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Hover_DOWN_LoadoutConsumables
struct AUI_paperdoll_bp_C_Hover_DOWN_LoadoutConsumables_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Turn Off HOVER LIGHTS
struct AUI_paperdoll_bp_C_Turn_Off_HOVER_LIGHTS_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetupTriHighlight_Material
struct AUI_paperdoll_bp_C_SetupTriHighlight_Material_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetUI_WeaponPose
struct AUI_paperdoll_bp_C_SetUI_WeaponPose_Params
{
	EWeaponType                                        Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetUI_ArmourPose
struct AUI_paperdoll_bp_C_SetUI_ArmourPose_Params
{
	TEnumAsByte<Earmor_slot_enum>                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.RefreshAllArmour
struct AUI_paperdoll_bp_C_RefreshAllArmour_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Set FadeIn of All Players
struct AUI_paperdoll_bp_C_Set_FadeIn_of_All_Players_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.Play Arrival
struct AUI_paperdoll_bp_C_Play_Arrival_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ShowEquippedWeapon
struct AUI_paperdoll_bp_C_ShowEquippedWeapon_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.HideWeapon
struct AUI_paperdoll_bp_C_HideWeapon_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.BannerEmote
struct AUI_paperdoll_bp_C_BannerEmote_Params
{
	class FString                                      BannerEmoteID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.InstantFadeOutPlayers
struct AUI_paperdoll_bp_C_InstantFadeOutPlayers_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.InstantFadeInPlayers
struct AUI_paperdoll_bp_C_InstantFadeInPlayers_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.SetFacialHair
struct AUI_paperdoll_bp_C_SetFacialHair_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ShowFlare
struct AUI_paperdoll_bp_C_ShowFlare_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.UpdateFlare
struct AUI_paperdoll_bp_C_UpdateFlare_Params
{
};

// Function UI_paperdoll_bp.UI_paperdoll_bp_C.ExecuteUbergraph_UI_paperdoll_bp
struct AUI_paperdoll_bp_C_ExecuteUbergraph_UI_paperdoll_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
