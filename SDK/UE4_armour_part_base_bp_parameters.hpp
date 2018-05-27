#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_armour_part_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function armour_part_base_bp.armour_part_base_bp_C.OutputDebugInformation
struct Aarmour_part_base_bp_C_OutputDebugInformation_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.HasFinishedLoading
struct Aarmour_part_base_bp_C_HasFinishedLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetDefaultPrimaryDye
struct Aarmour_part_base_bp_C_GetDefaultPrimaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetDefaultSecondaryDye
struct Aarmour_part_base_bp_C_GetDefaultSecondaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetPresentationInfo
struct Aarmour_part_base_bp_C_GetPresentationInfo_Params
{
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // (Parm, OutParm)
	struct FVector                                     DisplayOffset;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.LookupSetItemTableRow
struct Aarmour_part_base_bp_C_LookupSetItemTableRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FArmourSetItemResistanceTableData           OutResistanceTableRow;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.LookupResistanceTableRow
struct Aarmour_part_base_bp_C_LookupResistanceTableRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FArmourResistanceTableData                  OutResistanceTableRow;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.OnOwnerHidden
struct Aarmour_part_base_bp_C_OnOwnerHidden_Params
{
	bool                                               Hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OutHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetSkeletalMeshAssetID
struct Aarmour_part_base_bp_C_GetSkeletalMeshAssetID_Params
{
	TAssetPtr<class USkeletalMesh>                     Out;                                                      // (Parm, OutParm)
};

// Function armour_part_base_bp.armour_part_base_bp_C.SetSecondaryMotionProperties
struct Aarmour_part_base_bp_C_SetSecondaryMotionProperties_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.SetTierAttributes
struct Aarmour_part_base_bp_C_SetTierAttributes_Params
{
	class UMaterialInterface*                          Material_interface;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Array_Index;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.ResetArmourHiding
struct Aarmour_part_base_bp_C_ResetArmourHiding_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetIsJumping
struct Aarmour_part_base_bp_C_GetIsJumping_Params
{
	bool                                               Is_Jumping_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.ConsumeStamina
struct Aarmour_part_base_bp_C_ConsumeStamina_Params
{
	float                                              StaminaCost;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RestrictedByStaminaAmount_;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.OnGameModeStartEvent
struct Aarmour_part_base_bp_C_OnGameModeStartEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetIsFalling
struct Aarmour_part_base_bp_C_GetIsFalling_Params
{
	bool                                               Is_Falling_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetIsInSlowChargeState
struct Aarmour_part_base_bp_C_GetIsInSlowChargeState_Params
{
	bool                                               Is_slow_charging_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetIsInStaminaThresholdRecoveryPeriod
struct Aarmour_part_base_bp_C_GetIsInStaminaThresholdRecoveryPeriod_Params
{
	bool                                               Is_in_stamina_threshold_recovery_period_;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetIsSheathed
struct Aarmour_part_base_bp_C_GetIsSheathed_Params
{
	bool                                               Weapon_Sheathed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetIsInCity
struct Aarmour_part_base_bp_C_GetIsInCity_Params
{
	bool                                               Is_In_City;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetPlayerStats
struct Aarmour_part_base_bp_C_GetPlayerStats_Params
{
	float                                              Current_Health;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Stamina;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetClientUsedGamePad
struct Aarmour_part_base_bp_C_GetClientUsedGamePad_Params
{
	bool                                               ClientUsedGamePad;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetClientUsedMouse
struct Aarmour_part_base_bp_C_GetClientUsedMouse_Params
{
	bool                                               ClientUsedMouse;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GatherStringDataInterface
struct Aarmour_part_base_bp_C_GatherStringDataInterface_Params
{
	TArray<struct FAppearanceStringData>               AssetData;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetBleedOutTimer
struct Aarmour_part_base_bp_C_GetBleedOutTimer_Params
{
	struct FTimerHandle                                BleedOutTImer;                                            // (Parm, OutParm)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetNamePlate
struct Aarmour_part_base_bp_C_GetNamePlate_Params
{
	class UWidgetComponent*                            Nameplate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetCurrentHealth
struct Aarmour_part_base_bp_C_GetCurrentHealth_Params
{
	float                                              CurrentHealth;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetReviveHealthThreshold
struct Aarmour_part_base_bp_C_GetReviveHealthThreshold_Params
{
	float                                              ReviveHealthThreshold;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetBleedOutState
struct Aarmour_part_base_bp_C_GetBleedOutState_Params
{
	bool                                               BleedOutState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetIsDying
struct Aarmour_part_base_bp_C_GetIsDying_Params
{
	bool                                               IsDying;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetFollowCamera
struct Aarmour_part_base_bp_C_GetFollowCamera_Params
{
	class UCameraComponent*                            FollowCamera;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetSkeletalMeshComponent
struct Aarmour_part_base_bp_C_GetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetWeaponMesh
struct Aarmour_part_base_bp_C_GetWeaponMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetBodyType
struct Aarmour_part_base_bp_C_GetBodyType_Params
{
	EArchonBodyType                                    BodyType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.GetHairSlotComponent
struct Aarmour_part_base_bp_C_GetHairSlotComponent_Params
{
	class USkeletalMeshComponent*                      HairSlotComponent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.UserConstructionScript
struct Aarmour_part_base_bp_C_UserConstructionScript_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_378134254CA67BC28732379C25907FC6
struct Aarmour_part_base_bp_C_OnLoaded_378134254CA67BC28732379C25907FC6_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_574EFF0C41E058D1635965A61AB667E6
struct Aarmour_part_base_bp_C_OnLoaded_574EFF0C41E058D1635965A61AB667E6_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_182A3F9B4742D91996AFD2892981F7E3
struct Aarmour_part_base_bp_C_OnLoaded_182A3F9B4742D91996AFD2892981F7E3_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.OnLoaded_D85D8FAD413751E53FDC23AF10FE54B5
struct Aarmour_part_base_bp_C_OnLoaded_D85D8FAD413751E53FDC23AF10FE54B5_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.ReceiveBeginPlay
struct Aarmour_part_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.OnDyeChanged
struct Aarmour_part_base_bp_C_OnDyeChanged_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.BP_OnArmourEquipped
struct Aarmour_part_base_bp_C_BP_OnArmourEquipped_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.BP_OnArmourUnEquipped
struct Aarmour_part_base_bp_C_BP_OnArmourUnEquipped_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.ReEquip
struct Aarmour_part_base_bp_C_ReEquip_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.ReceiveGameplayStart
struct Aarmour_part_base_bp_C_ReceiveGameplayStart_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.Check For Transmog
struct Aarmour_part_base_bp_C_Check_For_Transmog_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.BPCallableOnDyeChanged
struct Aarmour_part_base_bp_C_BPCallableOnDyeChanged_Params
{
};

// Function armour_part_base_bp.armour_part_base_bp_C.OnActorSetHiddenInGame
struct Aarmour_part_base_bp_C_OnActorSetHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function armour_part_base_bp.armour_part_base_bp_C.ExecuteUbergraph_armour_part_base_bp
struct Aarmour_part_base_bp_C_ExecuteUbergraph_armour_part_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
