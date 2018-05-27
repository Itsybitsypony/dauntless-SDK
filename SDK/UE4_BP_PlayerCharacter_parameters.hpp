#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_PlayerCharacter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMorphTargetDriver
struct ABP_PlayerCharacter_C_GetMorphTargetDriver_Params
{
	class USkeletalMeshComponent*                      MorphTargetOwner;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      AnimInstanceOwner;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HideSkinUnderArmor
struct ABP_PlayerCharacter_C_HideSkinUnderArmor_Params
{
	TArray<class UMaterialInstanceDynamic*>            SkinDynamicMats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  CutMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aarmour_part_base_bp_C*                      ArmourPart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkinMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDamageRow
struct ABP_PlayerCharacter_C_GetDamageRow_Params
{
	struct FName                                       DamageKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageRow;                                                // (Parm, OutParm)
	float                                              DamageScale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplaySpawnPosPreCalc
struct ABP_PlayerCharacter_C_ModifyEQSGameplaySpawnPosPreCalc_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     InitialStartPosition;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     InitialTargetPosition;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewStartPosition;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ModifiedPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplaySpawnPosPostCalc
struct ABP_PlayerCharacter_C_ModifyEQSGameplaySpawnPosPostCalc_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     StartPosition;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     FinalTargetPosition;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class AActor*                                      PossiblyNullTargetActor;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewPosition;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ModifiedPosition;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ModifyEQSGameplayData
struct ABP_PlayerCharacter_C_ModifyEQSGameplayData_Params
{
	struct Feqs_spawn_query                            EQSSpawnQuery;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct Feqs_spawn_query                            NewEQSSpawnQuery;                                         // (Parm, OutParm)
	bool                                               ModifiedData;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanHitCBPushPullTarget
struct ABP_PlayerCharacter_C_CanHitCBPushPullTarget_Params
{
	bool                                               Hits_;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDefaultElementalAttackType
struct ABP_PlayerCharacter_C_GetDefaultElementalAttackType_Params
{
	EElementType                                       DefaultElementalAttackType;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtVector
struct ABP_PlayerCharacter_C_GetLookAtVector_Params
{
	struct FVector                                     LookAtVector;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtAlpha
struct ABP_PlayerCharacter_C_GetLookAtAlpha_Params
{
	float                                              LookAtAlpha;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMesh
struct ABP_PlayerCharacter_C_GetMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFallbackProjectileSpawnOffset
struct ABP_PlayerCharacter_C_GetFallbackProjectileSpawnOffset_Params
{
	struct FVector                                     Offset;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHairColour
struct ABP_PlayerCharacter_C_GetHairColour_Params
{
	struct FLinearColor                                hair_colour;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformEmote
struct ABP_PlayerCharacter_C_CanPerformEmote_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsLocalPlayerAudioEnabled
struct ABP_PlayerCharacter_C_GetIsLocalPlayerAudioEnabled_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetGenderIdentity
struct ABP_PlayerCharacter_C_GetGenderIdentity_Params
{
	EArchonGender                                      GenderId;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBodyMaterials
struct ABP_PlayerCharacter_C_GetBodyMaterials_Params
{
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponMaterials
struct ABP_PlayerCharacter_C_GetWeaponMaterials_Params
{
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxFallTimer
struct ABP_PlayerCharacter_C_ResetMaxFallTimer_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsSprinting
struct ABP_PlayerCharacter_C_GetIsSprinting_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNumPlayersReviving
struct ABP_PlayerCharacter_C_GetNumPlayersReviving_Params
{
	int                                                NumPlayers;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsHelmVisible
struct ABP_PlayerCharacter_C_IsHelmVisible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFacialHairSlotComponent
struct ABP_PlayerCharacter_C_GetFacialHairSlotComponent_Params
{
	class USkeletalMeshComponent*                      Facial_Hair_Slot;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponAbilityDamageRowOverride
struct ABP_PlayerCharacter_C_GetWeaponAbilityDamageRowOverride_Params
{
	struct FName                                       WeaponAbilityDamageRowOverride;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.isinlobby
struct ABP_PlayerCharacter_C_isinlobby_Params
{
	bool                                               isinlobby;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInCity
struct ABP_PlayerCharacter_C_IsInCity_Params
{
	bool                                               IsInCity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastDamagedMonsterPart
struct ABP_PlayerCharacter_C_GetLastDamagedMonsterPart_Params
{
	class UMonsterPartComponent*                       MonsterPart;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLastDamagedActor
struct ABP_PlayerCharacter_C_GetLastDamagedActor_Params
{
	class AActor*                                      LastDamagedActor;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHelmHidingSetting
struct ABP_PlayerCharacter_C_GetHelmHidingSetting_Params
{
	class FString                                      Helm_Hiding;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSprintInputValue
struct ABP_PlayerCharacter_C_GetSprintInputValue_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayerStateMeetsRequirements
struct ABP_PlayerCharacter_C_PlayerStateMeetsRequirements_Params
{
	struct Fplayer_requirements_str                    PlayerRequirements;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PassesRequirements;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPonytailComponent
struct ABP_PlayerCharacter_C_GetPonytailComponent_Params
{
	class USkeletalMeshComponent*                      ponytail;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsBannerEnabled
struct ABP_PlayerCharacter_C_IsBannerEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentAimDirection
struct ABP_PlayerCharacter_C_GetCurrentAimDirection_Params
{
	struct FVector                                     CurrentAimDirection;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLoadout
struct ABP_PlayerCharacter_C_GetLoadout_Params
{
	class AArchonLoadout*                              LOADOUT;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCinematicState
struct ABP_PlayerCharacter_C_SetCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECinematicPlayerState>                 CinematicStte;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCinematicState
struct ABP_PlayerCharacter_C_GetCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCombatComponent
struct ABP_PlayerCharacter_C_GetCombatComponent_Params
{
	class UArchonCombatComponent*                      CombatComponent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInteracting
struct ABP_PlayerCharacter_C_IsInteracting_Params
{
	bool                                               Interacting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDynamicMaterials
struct ABP_PlayerCharacter_C_GetDynamicMaterials_Params
{
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedoutLevel
struct ABP_PlayerCharacter_C_GetBleedoutLevel_Params
{
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAbilitySystemComponent
struct ABP_PlayerCharacter_C_GetAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCollisionWithDestructible
struct ABP_PlayerCharacter_C_SetCollisionWithDestructible_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHeadSlotComponent 
struct ABP_PlayerCharacter_C_GetHeadSlotComponent__Params
{
	class USkeletalMeshComponent*                      Head_Slot_Component;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLantern
struct ABP_PlayerCharacter_C_GetLantern_Params
{
	class AArchonLantern*                              Lantern;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBodyType
struct ABP_PlayerCharacter_C_GetBodyType_Params
{
	EArchonBodyType                                    BodyType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetHairSlotComponent
struct ABP_PlayerCharacter_C_GetHairSlotComponent_Params
{
	class USkeletalMeshComponent*                      HairSlotComponent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetWeaponMesh
struct ABP_PlayerCharacter_C_GetWeaponMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetSkeletalMeshComponent
struct ABP_PlayerCharacter_C_GetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFollowCamera
struct ABP_PlayerCharacter_C_GetFollowCamera_Params
{
	class UCameraComponent*                            FollowCamera;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsDying
struct ABP_PlayerCharacter_C_GetIsDying_Params
{
	bool                                               IsDying;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedOutState
struct ABP_PlayerCharacter_C_GetBleedOutState_Params
{
	bool                                               BleedOutState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCurrentHealth
struct ABP_PlayerCharacter_C_GetCurrentHealth_Params
{
	float                                              CurrentHealth;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetReviveHealthThreshold
struct ABP_PlayerCharacter_C_GetReviveHealthThreshold_Params
{
	float                                              ReviveHealthThreshold;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetBleedOutTimer
struct ABP_PlayerCharacter_C_GetBleedOutTimer_Params
{
	struct FTimerHandle                                BleedOutTImer;                                            // (Parm, OutParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetNamePlate
struct ABP_PlayerCharacter_C_GetNamePlate_Params
{
	class UWidgetComponent*                            Nameplate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GatherStringDataInterface
struct ABP_PlayerCharacter_C_GatherStringDataInterface_Params
{
	TArray<struct FAppearanceStringData>               AssetData;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetClientUsedGamePad
struct ABP_PlayerCharacter_C_GetClientUsedGamePad_Params
{
	bool                                               ClientUsedGamePad;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetClientUsedMouse
struct ABP_PlayerCharacter_C_GetClientUsedMouse_Params
{
	bool                                               ClientUsedMouse;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetPlayerStats
struct ABP_PlayerCharacter_C_GetPlayerStats_Params
{
	float                                              Current_Health;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Stamina;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInCity-Deprecated
struct ABP_PlayerCharacter_C_GetIsInCity_Deprecated_Params
{
	bool                                               Is_In_City;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsSheathed
struct ABP_PlayerCharacter_C_GetIsSheathed_Params
{
	bool                                               Weapon_Sheathed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInStaminaThresholdRecoveryPeriod
struct ABP_PlayerCharacter_C_GetIsInStaminaThresholdRecoveryPeriod_Params
{
	bool                                               Is_in_stamina_threshold_recovery_period_;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsInSlowChargeState
struct ABP_PlayerCharacter_C_GetIsInSlowChargeState_Params
{
	bool                                               Is_slow_charging_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsFalling
struct ABP_PlayerCharacter_C_GetIsFalling_Params
{
	bool                                               Is_Falling_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnGameModeStartEvent
struct ABP_PlayerCharacter_C_OnGameModeStartEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ConsumeStamina
struct ABP_PlayerCharacter_C_ConsumeStamina_Params
{
	float                                              StaminaCost;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RestrictedByStaminaAmount_;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsJumping
struct ABP_PlayerCharacter_C_GetIsJumping_Params
{
	bool                                               Is_Jumping_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetOwnedWeapon
struct ABP_PlayerCharacter_C_GetOwnedWeapon_Params
{
	class AArchonWeapon*                               Weapon;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanUseQuickSlotItem
struct ABP_PlayerCharacter_C_CanUseQuickSlotItem_Params
{
	bool                                               CanUseInBleedout;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanUse;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetInputActionKeyHeld
struct ABP_PlayerCharacter_C_GetInputActionKeyHeld_Params
{
	bool                                               PrimaryAttackHeld;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SecondaryAttackHeld;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               SpecialAttackHeld;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetDefaultWarpSmoothing
struct ABP_PlayerCharacter_C_GetDefaultWarpSmoothing_Params
{
	float                                              Smoothing;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_CinematicState
struct ABP_PlayerCharacter_C_OnRep_CinematicState_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateCombatAudio
struct ABP_PlayerCharacter_C_UpdateCombatAudio_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPreMitigateDamageBP
struct ABP_PlayerCharacter_C_OnPreMitigateDamageBP_Params
{
	class AActor**                                     DamageGiver;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bHasHitResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOverrideDamageData;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OutDamageEventTags;                                       // (Parm, OutParm)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLanternHold
struct ABP_PlayerCharacter_C_UpdateLanternHold_Params
{
	bool                                               Force_Activation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsLanternHoldExpired
struct ABP_PlayerCharacter_C_IsLanternHoldExpired_Params
{
	bool                                               Expired_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Show Player Marker
struct ABP_PlayerCharacter_C_Can_Show_Player_Marker_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TryPerformDodgeAttack
struct ABP_PlayerCharacter_C_TryPerformDodgeAttack_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanExecuteCombo
struct ABP_PlayerCharacter_C_CanExecuteCombo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsCancelToDodgeNotifyActive?
struct ABP_PlayerCharacter_C_IsCancelToDodgeNotifyActive__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnAboutToDieBP
struct ABP_PlayerCharacter_C_OnAboutToDieBP_Params
{
	bool                                               PreventDeath;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Is_in_lobby?
struct ABP_PlayerCharacter_C_Is_in_lobby__Params
{
	bool                                               isinlobby;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateIsPlayerSupported
struct ABP_PlayerCharacter_C_UpdateIsPlayerSupported_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAttackModifier
struct ABP_PlayerCharacter_C_GetAttackModifier_Params
{
	EArchonAttackActionKeyModifier                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PreHitHandleLifestealAndWeaponCharge
struct ABP_PlayerCharacter_C_PreHitHandleLifestealAndWeaponCharge_Params
{
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_EmpoweredWeaponEffectRequestCount
struct ABP_PlayerCharacter_C_OnRep_EmpoweredWeaponEffectRequestCount_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnPreMitigateOutgoingDamageBP
struct ABP_PlayerCharacter_C_OnPreMitigateOutgoingDamageBP_Params
{
	class AActor**                                     DamageTaker;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              bHasHitResult;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOverrideDamageData;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OutDamageEventTags;                                       // (Parm, OutParm)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_GetTagsToApplyPostDamageCalculation
struct ABP_PlayerCharacter_C_BP_GetTagsToApplyPostDamageCalculation_Params
{
	float*                                             DamageApplied;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMontagePlayRate
struct ABP_PlayerCharacter_C_ResetMontagePlayRate_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetSprintInput
struct ABP_PlayerCharacter_C_SetSprintInput_Params
{
	bool                                               NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InternalCanPerformEmote
struct ABP_PlayerCharacter_C_InternalCanPerformEmote_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsCity
struct ABP_PlayerCharacter_C_IsCity_Params
{
	bool                                               IsCity;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Send Input Scheme Telemetry
struct ABP_PlayerCharacter_C_Send_Input_Scheme_Telemetry_Params
{
	class FString                                      Scheme;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetInStaminaThresholdRecoveryMaxDesiredLocoState
struct ABP_PlayerCharacter_C_SetInStaminaThresholdRecoveryMaxDesiredLocoState_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      MaxDesiredLocoState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetMaxDesiredLocoState
struct ABP_PlayerCharacter_C_GetMaxDesiredLocoState_Params
{
	TEnumAsByte<ELocomotionState>                      DesiredLocoState;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyHitFVX
struct ABP_PlayerCharacter_C_ApplyHitFVX_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_LookAtTarget
struct ABP_PlayerCharacter_C_OnRep_LookAtTarget_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLookAt
struct ABP_PlayerCharacter_C_UpdateLookAt_Params
{
	struct FVector                                     LookAtTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetLookAtTarget
struct ABP_PlayerCharacter_C_GetLookAtTarget_Params
{
	struct FVector                                     LookAtTarget;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AdjustRotationRateFromMovementMode
struct ABP_PlayerCharacter_C_AdjustRotationRateFromMovementMode_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         EqualTo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetIsFallingConst
struct ABP_PlayerCharacter_C_GetIsFallingConst_Params
{
	bool                                               IsFalling_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_AudioIsLocalPlayer
struct ABP_PlayerCharacter_C_OnRep_AudioIsLocalPlayer_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetPonyTailProperties
struct ABP_PlayerCharacter_C_SetPonyTailProperties_Params
{
	class USkeletalMesh*                               hair_mesh;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsPlantingBanner?
struct ABP_PlayerCharacter_C_IsPlantingBanner__Params
{
	bool                                               PlantingBanner;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartOrBufferCombo
struct ABP_PlayerCharacter_C_StartOrBufferCombo_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArchonCombatInputType                             InputType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClampCameraPitchYaw
struct ABP_PlayerCharacter_C_ClampCameraPitchYaw_Params
{
	bool                                               Clamp;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraAttackValues
struct ABP_PlayerCharacter_C_CalculateCameraAttackValues_Params
{
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraOffset;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              CameraFOVDelta;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateStatusEffects
struct ABP_PlayerCharacter_C_UpdateStatusEffects_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetAttackTargetScore
struct ABP_PlayerCharacter_C_GetAttackTargetScore_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableAnimationOnDedicatedServer
struct ABP_PlayerCharacter_C_DisableAnimationOnDedicatedServer_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInputEnabled
struct ABP_PlayerCharacter_C_IsInputEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraCityValues
struct ABP_PlayerCharacter_C_CalculateCameraCityValues_Params
{
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Camera_Offset;                                            // (Parm, OutParm, IsPlainOldData)
	float                                              CameraFoV;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayPlantedTurnAnimation
struct ABP_PlayerCharacter_C_PlayPlantedTurnAnimation_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsValidPlantedTurnAttempt
struct ABP_PlayerCharacter_C_IsValidPlantedTurnAttempt_Params
{
	bool                                               Valid_Planted_Turn;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetupComponentsForHighlight
struct ABP_PlayerCharacter_C_SetupComponentsForHighlight_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LogAppearanceCastError
struct ABP_PlayerCharacter_C_LogAppearanceCastError_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UObject>                           AssetID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                      Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LogAppearanceLoadingError
struct ABP_PlayerCharacter_C_LogAppearanceLoadingError_Params
{
	struct FName                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UObject>                           AssetID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintGatherStringData
struct ABP_PlayerCharacter_C_BlueprintGatherStringData_Params
{
	TArray<struct FAppearanceStringData>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintGatherAssetReferences
struct ABP_PlayerCharacter_C_BlueprintGatherAssetReferences_Params
{
	TArray<struct FAppearanceAssetReference>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecoverFromEdgeFall
struct ABP_PlayerCharacter_C_RecoverFromEdgeFall_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableCityPlayerCollision
struct ABP_PlayerCharacter_C_DisableCityPlayerCollision_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateEnableTraversal
struct ABP_PlayerCharacter_C_CalculateEnableTraversal_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetCameraShakeScale
struct ABP_PlayerCharacter_C_GetCameraShakeScale_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              HeavyThreshold;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MediumThreshold;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugStamina
struct ABP_PlayerCharacter_C_DebugStamina_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StaminaDrainPerSecond;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformLanding?
struct ABP_PlayerCharacter_C_CanPerformLanding__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateLastValidLocation
struct ABP_PlayerCharacter_C_UpdateLastValidLocation_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraSprintValues
struct ABP_PlayerCharacter_C_CalculateCameraSprintValues_Params
{
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraOffset;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              FOVDelta;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalculateCameraCombatValues
struct ABP_PlayerCharacter_C_CalculateCameraCombatValues_Params
{
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraOffset;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AdjustCameraFromPitch
struct ABP_PlayerCharacter_C_AdjustCameraFromPitch_Params
{
	float                                              DesiredFollowDist;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DesiredFoV;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraDistance;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CameraFoV;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsWeaponSheathed?
struct ABP_PlayerCharacter_C_IsWeaponSheathed__Params
{
	bool                                               WeaponSheathed;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsSprinting
struct ABP_PlayerCharacter_C_IsSprinting_Params
{
	bool                                               Sprinting;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DetermineItemOrEmote
struct ABP_PlayerCharacter_C_DetermineItemOrEmote_Params
{
	int                                                EmoteIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuickItemIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EmoteModifierPressed?
struct ABP_PlayerCharacter_C_EmoteModifierPressed__Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Cancel Use?
struct ABP_PlayerCharacter_C_Can_Cancel_Use__Params
{
	bool                                               Can_Cancel_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Use?
struct ABP_PlayerCharacter_C_Can_Use__Params
{
	class APawn*                                       Using_Pawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Usable_;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Use Cost
struct ABP_PlayerCharacter_C_Get_Use_Cost_Params
{
	TEnumAsByte<EUsableObjectResourceCostTypes>        Resource_Type;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EquipWeapon
struct ABP_PlayerCharacter_C_EquipWeapon_Params
{
	class UObject*                                     Previous_Weapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Next_Weapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BaseArchonWeapon_C*                      AsBP_Base_Archon_Weapon;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAnimationBlueprint
struct ABP_PlayerCharacter_C_SetAnimationBlueprint_Params
{
	class UObject*                                     Weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.IsInCity?-Deprecated
struct ABP_PlayerCharacter_C_IsInCity__Deprecated_Params
{
	bool                                               InCity;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Evaluate Camera Conversation Transition Offset
struct ABP_PlayerCharacter_C_Evaluate_Camera_Conversation_Transition_Offset_Params
{
	float                                              Desired_Offset;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Armour
struct ABP_PlayerCharacter_C_Get_Armour_Params
{
	TArray<TAssetPtr<class USkeletalMesh>>             Armour;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetCollisionWithMonster
struct ABP_PlayerCharacter_C_SetCollisionWithMonster_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get All Dynamic Materials
struct ABP_PlayerCharacter_C_Get_All_Dynamic_Materials_Params
{
	TArray<class UMaterialInstanceDynamic*>            All_Dynamic_Materials;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GetFlickAccelerationDirection
struct ABP_PlayerCharacter_C_GetFlickAccelerationDirection_Params
{
	struct FVector                                     Out;                                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Update Rotation Rate
struct ABP_PlayerCharacter_C_Update_Rotation_Rate_Params
{
	TEnumAsByte<ELocomotionState>                      Locomotion_State;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Current Direction Vector
struct ABP_PlayerCharacter_C_Get_Current_Direction_Vector_Params
{
	struct FVector                                     Return_Value;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Desired Direction Vector
struct ABP_PlayerCharacter_C_Get_Desired_Direction_Vector_Params
{
	float                                              Tolerance;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Return_Value;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformAction
struct ABP_PlayerCharacter_C_CanPerformAction_Params
{
	bool                                               PerformingAction;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TurnToFaceInput
struct ABP_PlayerCharacter_C_TurnToFaceInput_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EvaluateCameraModifiers
struct ABP_PlayerCharacter_C_EvaluateCameraModifiers_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdatePlantedTurns
struct ABP_PlayerCharacter_C_UpdatePlantedTurns_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CalcTurnRate
struct ABP_PlayerCharacter_C_CalcTurnRate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CheckAndRegisterAttackID
struct ABP_PlayerCharacter_C_CheckAndRegisterAttackID_Params
{
	struct FGuid                                       AttackID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               IDExisted;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Current Locomotion State
struct ABP_PlayerCharacter_C_Calculate_Current_Locomotion_State_Params
{
	TEnumAsByte<ELocomotionState>                      Current_State;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_DollyZoom
struct ABP_PlayerCharacter_C_OnRep_DollyZoom_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddUniqueSpeedModCurve
struct ABP_PlayerCharacter_C_AddUniqueSpeedModCurve_Params
{
	class UCurveFloat*                                 Curve;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanJumpInternal
struct ABP_PlayerCharacter_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Movement Input
struct ABP_PlayerCharacter_C_Calculate_Movement_Input_Params
{
	float                                              Forward_Axis;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Right_Axis;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Use A Quickslot Item Old
struct ABP_PlayerCharacter_C_Can_Use_A_Quickslot_Item_Old_Params
{
	bool                                               Can_Use_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C. Monster Lock
struct ABP_PlayerCharacter_C__Monster_Lock_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Angle of Player Input Along Right Vector
struct ABP_PlayerCharacter_C_Get_Angle_of_Player_Input_Along_Right_Vector_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Directional Input Modifier Key
struct ABP_PlayerCharacter_C_Get_Directional_Input_Modifier_Key_Params
{
	EArchonAttackActionKeyModifier                     Modifier_Key;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_Slow Charge State
struct ABP_PlayerCharacter_C_OnRep_Slow_Charge_State_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_Current Health
struct ABP_PlayerCharacter_C_OnRep_Current_Health_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio-UpdateMovementFoley
struct ABP_PlayerCharacter_C_Audio_UpdateMovementFoley_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Handle Camera Auto-panning
struct ABP_PlayerCharacter_C_Handle_Camera_Auto_panning_Params
{
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Play Heavy Land Animation
struct ABP_PlayerCharacter_C_Play_Heavy_Land_Animation_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanExecuteComboTransition
struct ABP_PlayerCharacter_C_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Get Angle of Player Input Along Forward Vector
struct ABP_PlayerCharacter_C_Get_Angle_of_Player_Input_Along_Forward_Vector_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Kill
struct ABP_PlayerCharacter_C_Kill_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CanPerformDodge
struct ABP_PlayerCharacter_C_CanPerformDodge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Bleedout State
struct ABP_PlayerCharacter_C_Set_Bleedout_State_Params
{
	bool                                               Bleeding_Out_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Reduce Resource Amount
struct ABP_PlayerCharacter_C_Reduce_Resource_Amount_Params
{
	TEnumAsByte<EUsableObjectResourceCostTypes>        Resource_Type;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Consume Resource Cost
struct ABP_PlayerCharacter_C_Consume_Resource_Cost_Params
{
	TEnumAsByte<EUsableObjectResourceCostTypes>        Resource_Type;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Amount_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Check For Resource Amount
struct ABP_PlayerCharacter_C_Check_For_Resource_Amount_Params
{
	TEnumAsByte<EUsableObjectResourceCostTypes>        Resource_Type;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Amount_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Input Enable State
struct ABP_PlayerCharacter_C_Set_Input_Enable_State_Params
{
	bool                                               Input_Enabled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Player Body Type Mesh Data
struct ABP_PlayerCharacter_C_Set_Player_Body_Type_Mesh_Data_Params
{
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Evaluate Stamina System
struct ABP_PlayerCharacter_C_Evaluate_Stamina_System_Params
{
	float                                              In_Delta_Seconds;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Desired Locomotion State
struct ABP_PlayerCharacter_C_Calculate_Desired_Locomotion_State_Params
{
	TEnumAsByte<ELocomotionState>                      Desired_State;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Can Player Start A Sprint?
struct ABP_PlayerCharacter_C_Can_Player_Start_A_Sprint__Params
{
	bool                                               Sprint_Capable;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Calculate Player Max Movement Speed
struct ABP_PlayerCharacter_C_Calculate_Player_Max_Movement_Speed_Params
{
	float                                              Delta_Seconds;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UserConstructionScript
struct ABP_PlayerCharacter_C_UserConstructionScript_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_5__FinishedFunc
struct ABP_PlayerCharacter_C_Timeline_5__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_5__UpdateFunc
struct ABP_PlayerCharacter_C_Timeline_5__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_7__FinishedFunc
struct ABP_PlayerCharacter_C_Timeline_7__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_7__UpdateFunc
struct ABP_PlayerCharacter_C_Timeline_7__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_0__FinishedFunc
struct ABP_PlayerCharacter_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Timeline_0__UpdateFunc
struct ABP_PlayerCharacter_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Camera Interpolation__FinishedFunc
struct ABP_PlayerCharacter_C_Camera_Interpolation__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Camera Interpolation__UpdateFunc
struct ABP_PlayerCharacter_C_Camera_Interpolation__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionOutTimeline__FinishedFunc
struct ABP_PlayerCharacter_C_EdgeRecoveryTransitionOutTimeline__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionOutTimeline__UpdateFunc
struct ABP_PlayerCharacter_C_EdgeRecoveryTransitionOutTimeline__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionInTimeline__FinishedFunc
struct ABP_PlayerCharacter_C_EdgeRecoveryTransitionInTimeline__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EdgeRecoveryTransitionInTimeline__UpdateFunc
struct ABP_PlayerCharacter_C_EdgeRecoveryTransitionInTimeline__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.phys_alpha_blend__FinishedFunc
struct ABP_PlayerCharacter_C_phys_alpha_blend__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.phys_alpha_blend__UpdateFunc
struct ABP_PlayerCharacter_C_phys_alpha_blend__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.tempered_phys_blend__FinishedFunc
struct ABP_PlayerCharacter_C_tempered_phys_blend__FinishedFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.tempered_phys_blend__UpdateFunc
struct ABP_PlayerCharacter_C_tempered_phys_blend__UpdateFunc_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_30F34C0543F8C8CF77B296BC3CEF7F2D
struct ABP_PlayerCharacter_C_OnLoaded_30F34C0543F8C8CF77B296BC3CEF7F2D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_33FA1AE84C0E5455E94B4B809B28F4D5
struct ABP_PlayerCharacter_C_OnLoaded_33FA1AE84C0E5455E94B4B809B28F4D5_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_49ABAC9F497E108CAB4448A1E0E63608
struct ABP_PlayerCharacter_C_OnLoaded_49ABAC9F497E108CAB4448A1E0E63608_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_3004D3C1442BBE040C05ADA282F687DF
struct ABP_PlayerCharacter_C_OnLoaded_3004D3C1442BBE040C05ADA282F687DF_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_FB16DFFA4CE21605F0F1E1A463F891CB
struct ABP_PlayerCharacter_C_OnLoaded_FB16DFFA4CE21605F0F1E1A463F891CB_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_40
struct ABP_PlayerCharacter_C_InpActEvt_Sprint_K2Node_InputActionEvent_40_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_39
struct ABP_PlayerCharacter_C_InpActEvt_Sprint_K2Node_InputActionEvent_39_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Reset Camera_K2Node_InputActionEvent_38
struct ABP_PlayerCharacter_C_InpActEvt_Reset_Camera_K2Node_InputActionEvent_38_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 2_K2Node_InputActionEvent_37
struct ABP_PlayerCharacter_C_InpActEvt_Quickslot_2_K2Node_InputActionEvent_37_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 3_K2Node_InputActionEvent_36
struct ABP_PlayerCharacter_C_InpActEvt_Quickslot_3_K2Node_InputActionEvent_36_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 1_K2Node_InputActionEvent_35
struct ABP_PlayerCharacter_C_InpActEvt_Quickslot_1_K2Node_InputActionEvent_35_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_34
struct ABP_PlayerCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_34_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_33
struct ABP_PlayerCharacter_C_InpActEvt_Interact_K2Node_InputActionEvent_33_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Jump_K2Node_InputActionEvent_32
struct ABP_PlayerCharacter_C_InpActEvt_Jump_K2Node_InputActionEvent_32_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Lantern Ability_K2Node_InputActionEvent_31
struct ABP_PlayerCharacter_C_InpActEvt_Lantern_Ability_K2Node_InputActionEvent_31_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Lantern Ability_K2Node_InputActionEvent_30
struct ABP_PlayerCharacter_C_InpActEvt_Lantern_Ability_K2Node_InputActionEvent_30_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_BannerPlant_K2Node_InputActionEvent_29
struct ABP_PlayerCharacter_C_InpActEvt_BannerPlant_K2Node_InputActionEvent_29_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_4808835940AB2CAA2C965E99DF64B565
struct ABP_PlayerCharacter_C_OnLoaded_4808835940AB2CAA2C965E99DF64B565_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_ToggleSheathe_K2Node_InputActionEvent_28
struct ABP_PlayerCharacter_C_InpActEvt_ToggleSheathe_K2Node_InputActionEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Quickslot 4_K2Node_InputActionEvent_27
struct ABP_PlayerCharacter_C_InpActEvt_Quickslot_4_K2Node_InputActionEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_26
struct ABP_PlayerCharacter_C_InpActEvt_Primary_Attack_K2Node_InputActionEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Primary Attack_K2Node_InputActionEvent_25
struct ABP_PlayerCharacter_C_InpActEvt_Primary_Attack_K2Node_InputActionEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_24
struct ABP_PlayerCharacter_C_InpActEvt_Secondary_Attack_K2Node_InputActionEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Secondary Attack_K2Node_InputActionEvent_23
struct ABP_PlayerCharacter_C_InpActEvt_Secondary_Attack_K2Node_InputActionEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Special Action_K2Node_InputActionEvent_22
struct ABP_PlayerCharacter_C_InpActEvt_Special_Action_K2Node_InputActionEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpActEvt_Special Action_K2Node_InputActionEvent_21
struct ABP_PlayerCharacter_C_InpActEvt_Special_Action_K2Node_InputActionEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLoaded_E1115A0B428C1B7C348612A98A0B0169
struct ABP_PlayerCharacter_C_OnLoaded_E1115A0B428C1B7C348612A98A0B0169_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EQSProjectileSpawned
struct ABP_PlayerCharacter_C_EQSProjectileSpawned_Params
{
	class Aprojectile_base_bp_C*                       Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileTarget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EQSActorSpawned
struct ABP_PlayerCharacter_C_EQSActorSpawned_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RegisterInteraction
struct ABP_PlayerCharacter_C_RegisterInteraction_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnregisterInteraction
struct ABP_PlayerCharacter_C_UnregisterInteraction_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLanternGlowIntensity
struct ABP_PlayerCharacter_C_SetLanternGlowIntensity_Params
{
	float                                              emissive_value;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateDebrisState
struct ABP_PlayerCharacter_C_UpdateDebrisState_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddDebrisState
struct ABP_PlayerCharacter_C_AddDebrisState_Params
{
	class UAnimNotifyState*                            CallerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fvfx_state_id_struct                        StateId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleSprintCamera
struct ABP_PlayerCharacter_C_ToggleSprintCamera_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayCue.Combat.SuperArmour
struct ABP_PlayerCharacter_C_GameplayCue_Combat_SuperArmour_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintApplyAssetReferences
struct ABP_PlayerCharacter_C_BlueprintApplyAssetReferences_Params
{
	TArray<struct FAppearanceAssetReference>*          References;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BlueprintApplyStringData
struct ABP_PlayerCharacter_C_BlueprintApplyStringData_Params
{
	TArray<struct FAppearanceStringData>*              StringData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyStringDataInterface
struct ABP_PlayerCharacter_C_ApplyStringDataInterface_Params
{
	TArray<struct FAppearanceStringData>               String_Data;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetBodyType
struct ABP_PlayerCharacter_C_SetBodyType_Params
{
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RPCSetBodyType
struct ABP_PlayerCharacter_C_RPCSetBodyType_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadHairAsset
struct ABP_PlayerCharacter_C_LoadHairAsset_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LoadFacialHairAsset
struct ABP_PlayerCharacter_C_LoadFacialHairAsset_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetGenderIdentity
struct ABP_PlayerCharacter_C_SetGenderIdentity_Params
{
	EArchonGender                                      GenderId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerChargeGlowIntensity
struct ABP_PlayerCharacter_C_Event__PlayerChargeGlowIntensity_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Toggle Player Fadeout
struct ABP_PlayerCharacter_C_Toggle_Player_Fadeout_Params
{
	bool                                               Fadeout_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event ShowHideWeapon
struct ABP_PlayerCharacter_C_Event_ShowHideWeapon_Params
{
	bool                                               hide;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerCharge_Level
struct ABP_PlayerCharacter_C_Event__PlayerCharge_Level_Params
{
	int                                                Charge_level;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Event _PlayerCharge_Reset
struct ABP_PlayerCharacter_C_Event__PlayerCharge_Reset_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InstantFadeIn
struct ABP_PlayerCharacter_C_InstantFadeIn_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InstantFadeOut
struct ABP_PlayerCharacter_C_InstantFadeOut_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerCameraBoomOffset
struct ABP_PlayerCharacter_C_TriggerCameraBoomOffset_Params
{
	class UCurveFloat*                                 TargetCurve;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraOffset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              CameraArmLengthOffset;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraFOVDelta;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EndCameraBoomOffset
struct ABP_PlayerCharacter_C_EndCameraBoomOffset_Params
{
	class UCurveFloat*                                 Target_Curve;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Player Camera Conversation Transition
struct ABP_PlayerCharacter_C_Player_Camera_Conversation_Transition_Params
{
	float                                              Time_to_Transition;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Local_Offset;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Transition_To_Local_Offset;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveDebugComponent
struct ABP_PlayerCharacter_C_RemoveDebugComponent_Params
{
	class UActorComponent*                             Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerStuck
struct ABP_PlayerCharacter_C_ServerStuck_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.CallLegalStuck
struct ABP_PlayerCharacter_C_CallLegalStuck_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio - Event Tick
struct ABP_PlayerCharacter_C_Audio___Event_Tick_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Audio - Evaluate Stamina
struct ABP_PlayerCharacter_C_Audio___Evaluate_Stamina_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.GameplayCue.Combat.OnDamageReceived
struct ABP_PlayerCharacter_C_GameplayCue_Combat_OnDamageReceived_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Rotate Camera To Target
struct ABP_PlayerCharacter_C_Rotate_Camera_To_Target_Params
{
	struct FRotator                                    Target_Rotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cancel Rotate Camera To Target
struct ABP_PlayerCharacter_C_Cancel_Rotate_Camera_To_Target_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39
struct ABP_PlayerCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_39_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54
struct ABP_PlayerCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_54_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_41
struct ABP_PlayerCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_41_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_48
struct ABP_PlayerCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_48_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DesiredLocomotion Event
struct ABP_PlayerCharacter_C_DesiredLocomotion_Event_Params
{
	TEnumAsByte<ELocomotionState>                      Desired_State;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanMove;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerEmote
struct ABP_PlayerCharacter_C_TriggerEmote_Params
{
	int                                                EmoteIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Enable Input From Emote
struct ABP_PlayerCharacter_C_Enable_Input_From_Emote_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DoEmote
struct ABP_PlayerCharacter_C_DoEmote_Params
{
	int                                                emoteID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMaxDesiredLocoState
struct ABP_PlayerCharacter_C_SetMaxDesiredLocoState_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      MaxDesiredLocoState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ScaleInputTurnRate
struct ABP_PlayerCharacter_C_ScaleInputTurnRate_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetInputTurnRate
struct ABP_PlayerCharacter_C_ResetInputTurnRate_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayEmoteAnim
struct ABP_PlayerCharacter_C_PlayEmoteAnim_Params
{
	TAssetPtr<class UObject>                           Asset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSheatheWeaponEnd_Event_1
struct ABP_PlayerCharacter_C_OnSheatheWeaponEnd_Event_1_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnSheatheWeaponEnd
struct ABP_PlayerCharacter_C_OnSheatheWeaponEnd_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetSprintInput
struct ABP_PlayerCharacter_C_ServerSetSprintInput_Params
{
	bool                                               NewValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AutoplayerAutorun
struct ABP_PlayerCharacter_C_AutoplayerAutorun_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEmoteTurnWarpEnabled
struct ABP_PlayerCharacter_C_SetEmoteTurnWarpEnabled_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerBannerPlant
struct ABP_PlayerCharacter_C_TriggerBannerPlant_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerBannerPlantInterface
struct ABP_PlayerCharacter_C_TriggerBannerPlantInterface_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TriggerEmoteInterface
struct ABP_PlayerCharacter_C_TriggerEmoteInterface_Params
{
	int                                                EmoteIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RotateCameratoTargetInterface
struct ABP_PlayerCharacter_C_RotateCameratoTargetInterface_Params
{
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAutoPlayerActiveInterface
struct ABP_PlayerCharacter_C_SetAutoPlayerActiveInterface_Params
{
	bool                                               AutoPlayerActive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableCameraInput
struct ABP_PlayerCharacter_C_EnableCameraInput_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableCameraInput
struct ABP_PlayerCharacter_C_DisableCameraInput_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
struct ABP_PlayerCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientStartFill
struct ABP_PlayerCharacter_C_ClientStartFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientCancelFill
struct ABP_PlayerCharacter_C_ClientCancelFill_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ShowPlayerMarker
struct ABP_PlayerCharacter_C_ShowPlayerMarker_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.HidePlayerMarker
struct ABP_PlayerCharacter_C_HidePlayerMarker_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Show Nameplate
struct ABP_PlayerCharacter_C_Show_Nameplate_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Nameplate
struct ABP_PlayerCharacter_C_Hide_Nameplate_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Show Revive Callout
struct ABP_PlayerCharacter_C_Show_Revive_Callout_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Hide Revive Callout
struct ABP_PlayerCharacter_C_Hide_Revive_Callout_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Enter Bleedout State
struct ABP_PlayerCharacter_C_Enter_Bleedout_State_Params
{
	float                                              DurationOfState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Cancel Bleedout
struct ABP_PlayerCharacter_C_Cancel_Bleedout_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Slow Charge State
struct ABP_PlayerCharacter_C_Set_Slow_Charge_State_Params
{
	bool                                               Slow_State_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RegisterRezInteraction
struct ABP_PlayerCharacter_C_RegisterRezInteraction_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UnregisterRezInteraction
struct ABP_PlayerCharacter_C_UnregisterRezInteraction_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BleedOutElasped
struct ABP_PlayerCharacter_C_BleedOutElasped_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReviveFromBleedOut
struct ABP_PlayerCharacter_C_ReviveFromBleedOut_Params
{
	class APawn*                                       RevivingPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Set Dodge And Jump Enable State
struct ABP_PlayerCharacter_C_Set_Dodge_And_Jump_Enable_State_Params
{
	bool                                               Enabled_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnterBleedout
struct ABP_PlayerCharacter_C_EnterBleedout_Params
{
	float                                              DurationPerBleedoutLevel;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyHitPause
struct ABP_PlayerCharacter_C_ApplyHitPause_Params
{
	float                                              HitPauseDuration;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWarpSmoothing
struct ABP_PlayerCharacter_C_SetWarpSmoothing_Params
{
	float                                              Smoothing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecordAttackDirection
struct ABP_PlayerCharacter_C_RecordAttackDirection_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetAttackDirection
struct ABP_PlayerCharacter_C_ServerSetAttackDirection_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateForceEndCombo
struct ABP_PlayerCharacter_C_UpdateForceEndCombo_Params
{
	float                                              MaxTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayAnimation_;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Next_Montage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Next_Montage_Section;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.BP_DamageGiven
struct ABP_PlayerCharacter_C_BP_DamageGiven_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo*                   DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ApplyShouldCheatDeathFromAboutToDie
struct ABP_PlayerCharacter_C_ApplyShouldCheatDeathFromAboutToDie_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Client_StartNextMove
struct ABP_PlayerCharacter_C_Client_StartNextMove_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerTellClient_StartNextMove
struct ABP_PlayerCharacter_C_ServerTellClient_StartNextMove_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.InternalReviveFromBleedOut
struct ABP_PlayerCharacter_C_InternalReviveFromBleedOut_Params
{
	class APawn*                                       RevivingPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_1
struct ABP_PlayerCharacter_C_OnCanAttack_Event_1_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_2
struct ABP_PlayerCharacter_C_OnCanAttack_Event_2_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCanAttack_Event_3
struct ABP_PlayerCharacter_C_OnCanAttack_Event_3_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveBeginPlay
struct ABP_PlayerCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveTick
struct ABP_PlayerCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReduceMaxSpeed
struct ABP_PlayerCharacter_C_ReduceMaxSpeed_Params
{
	float                                              SpeedFactor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxSpeed
struct ABP_PlayerCharacter_C_ResetMaxSpeed_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Delay Stamina Regen
struct ABP_PlayerCharacter_C_Delay_Stamina_Regen_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnHealedFromEffect
struct ABP_PlayerCharacter_C_OnHealedFromEffect_Params
{
	float*                                             Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceivePossessed
struct ABP_PlayerCharacter_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PerformDodge
struct ABP_PlayerCharacter_C_PerformDodge_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.MulticastHealVFX
struct ABP_PlayerCharacter_C_MulticastHealVFX_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Play Speed Mod Curve
struct ABP_PlayerCharacter_C_Play_Speed_Mod_Curve_Params
{
	class UCurveFloat*                                 Speed_Mod_Curve;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       UniqueName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientInitNameplate
struct ABP_PlayerCharacter_C_ClientInitNameplate_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RecoverFromFall
struct ABP_PlayerCharacter_C_RecoverFromFall_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveUnpossessed
struct ABP_PlayerCharacter_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnRepPlayerState
struct ABP_PlayerCharacter_C_K2_OnRepPlayerState_Params
{
	class APlayerState**                               NewPlayerState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_PawnRestarted
struct ABP_PlayerCharacter_C_K2_PawnRestarted_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnReachedJumpApex_BP
struct ABP_PlayerCharacter_C_OnReachedJumpApex_BP_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Stop Speed Mod Curve
struct ABP_PlayerCharacter_C_Stop_Speed_Mod_Curve_Params
{
	struct FName                                       UniqueName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnBecomeViewTarget
struct ABP_PlayerCharacter_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController**                          pc;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugOnMovementUpdate
struct ABP_PlayerCharacter_C_DebugOnMovementUpdate_Params
{
	float*                                             DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    OldLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    OldVelocity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboStarted
struct ABP_PlayerCharacter_C_OnComboStarted_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboEnded
struct ABP_PlayerCharacter_C_OnComboEnded_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyDebrisState
struct ABP_PlayerCharacter_C_DestroyDebrisState_Params
{
	class UObject*                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartCameraFadeOut
struct ABP_PlayerCharacter_C_StartCameraFadeOut_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRecoverFromEdgeFall
struct ABP_PlayerCharacter_C_OnRecoverFromEdgeFall_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.K2_OnMovementModeChanged
struct ABP_PlayerCharacter_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnJumped
struct ABP_PlayerCharacter_C_OnJumped_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLandBlendingOut
struct ABP_PlayerCharacter_C_OnLandBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SingleClientNameplateInit
struct ABP_PlayerCharacter_C_SingleClientNameplateInit_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHighlightComponents
struct ABP_PlayerCharacter_C_UpdateHighlightComponents_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetEarlyOutOfMontage
struct ABP_PlayerCharacter_C_SetEarlyOutOfMontage_Params
{
	bool                                               EarlyOutOfMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.PlayNetworkedMontage
struct ABP_PlayerCharacter_C_PlayNetworkedMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleFactor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateTranslateWarpTargetPosition
struct ABP_PlayerCharacter_C_UpdateTranslateWarpTargetPosition_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLocalWeatherType
struct ABP_PlayerCharacter_C_SetLocalWeatherType_Params
{
	TEnumAsByte<Eweather_type_enum>                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableIKinema
struct ABP_PlayerCharacter_C_EnableIKinema_Params
{
	bool                                               EnableIKinema;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReceiveGameplayStart
struct ABP_PlayerCharacter_C_ReceiveGameplayStart_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientGameplayStart
struct ABP_PlayerCharacter_C_ClientGameplayStart_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.LocalClientUpdateAimToServer
struct ABP_PlayerCharacter_C_LocalClientUpdateAimToServer_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerReceiveNewAimDirection
struct ABP_PlayerCharacter_C_ServerReceiveNewAimDirection_Params
{
	struct FVector                                     NewAimDirection;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StartReplicatingAim
struct ABP_PlayerCharacter_C_StartReplicatingAim_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.StopReplicatingAim
struct ABP_PlayerCharacter_C_StopReplicatingAim_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientUpdateLookAtTargetOnServer
struct ABP_PlayerCharacter_C_ClientUpdateLookAtTargetOnServer_Params
{
	struct FVector                                     LookAtTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FootPlanted
struct ABP_PlayerCharacter_C_FootPlanted_Params
{
	float                                              DelayedFootSpeed;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FootUnplanted
struct ABP_PlayerCharacter_C_FootUnplanted_Params
{
	float                                              FootSpeed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       JointName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.UpdateHasLoadedInt
struct ABP_PlayerCharacter_C_UpdateHasLoadedInt_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ToggleHideWeapon
struct ABP_PlayerCharacter_C_ToggleHideWeapon_Params
{
	bool                                               Hide_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.TogglePlayerFade
struct ABP_PlayerCharacter_C_TogglePlayerFade_Params
{
	bool                                               Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetHelmHidingSetting
struct ABP_PlayerCharacter_C_SetHelmHidingSetting_Params
{
	class FString                                      helm_hide_setting;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetAnimationGraph
struct ABP_PlayerCharacter_C_SetAnimationGraph_Params
{
	class UClass*                                      NewAnimClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetMontagePauseWindow
struct ABP_PlayerCharacter_C_SetMontagePauseWindow_Params
{
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ServerSetLastMovementInputVector
struct ABP_PlayerCharacter_C_ServerSetLastMovementInputVector_Params
{
	struct FVector                                     MovementVector;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnTookDamageWhileInvulnerableBP
struct ABP_PlayerCharacter_C_OnTookDamageWhileInvulnerableBP_Params
{
	class AActor**                                     DamageGiver;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageEventTags;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float*                                             TotalDamage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.AddEmpoweredWeaponEffectsStack
struct ABP_PlayerCharacter_C_AddEmpoweredWeaponEffectsStack_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.RemoveEmpoweredWeaponEffectsStack
struct ABP_PlayerCharacter_C_RemoveEmpoweredWeaponEffectsStack_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.EnableLocoTransitions
struct ABP_PlayerCharacter_C_EnableLocoTransitions_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableLocoTransitions
struct ABP_PlayerCharacter_C_DisableLocoTransitions_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetWeaponAbilityDamageRowOverride
struct ABP_PlayerCharacter_C_SetWeaponAbilityDamageRowOverride_Params
{
	struct FName                                       WeaponAbilityDamageRowOverride;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClearWeaponAbilityDamageRowOverride
struct ABP_PlayerCharacter_C_ClearWeaponAbilityDamageRowOverride_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRep_BodyType
struct ABP_PlayerCharacter_C_OnRep_BodyType_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SuperArmourPlayerMaterialEffect
struct ABP_PlayerCharacter_C_SuperArmourPlayerMaterialEffect_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ClientDrawServerDebugSphere
struct ABP_PlayerCharacter_C_ClientDrawServerDebugSphere_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                Segments;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ResetMaxFallTimerEvent
struct ABP_PlayerCharacter_C_ResetMaxFallTimerEvent_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DestroyEmpoweredVFX
struct ABP_PlayerCharacter_C_DestroyEmpoweredVFX_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.FailSafeBleedoutEvent
struct ABP_PlayerCharacter_C_FailSafeBleedoutEvent_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnComboNextMove
struct ABP_PlayerCharacter_C_OnComboNextMove_Params
{
	struct FComboInputBuffer*                          ComboInputBuffer;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReInitPhysics
struct ABP_PlayerCharacter_C_ReInitPhysics_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableDynamics
struct ABP_PlayerCharacter_C_DisableDynamics_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStart
struct ABP_PlayerCharacter_C_OnCinematicStart_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicEnd
struct ABP_PlayerCharacter_C_OnCinematicEnd_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStatePlaying
struct ABP_PlayerCharacter_C_OnCinematicStatePlaying_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStateComplete
struct ABP_PlayerCharacter_C_OnCinematicStateComplete_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnCinematicStateNotPlaying
struct ABP_PlayerCharacter_C_OnCinematicStateNotPlaying_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnRefreshSkeletalMeshOptimizations
struct ABP_PlayerCharacter_C_OnRefreshSkeletalMeshOptimizations_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DebugToggleSkeletalOptimization
struct ABP_PlayerCharacter_C_DebugToggleSkeletalOptimization_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReInitPhysics_blend
struct ABP_PlayerCharacter_C_ReInitPhysics_blend_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.DisableDynamics_blend
struct ABP_PlayerCharacter_C_DisableDynamics_blend_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ReinitPhysics_tempered_blend
struct ABP_PlayerCharacter_C_ReinitPhysics_tempered_blend_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.SetLookAtEnabled
struct ABP_PlayerCharacter_C_SetLookAtEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.Disable_Bangs
struct ABP_PlayerCharacter_C_Disable_Bangs_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.ExecuteUbergraph_BP_PlayerCharacter
struct ABP_PlayerCharacter_C_ExecuteUbergraph_BP_PlayerCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnActorGameplayStart__DelegateSignature
struct ABP_PlayerCharacter_C_OnActorGameplayStart__DelegateSignature_Params
{
};

// Function BP_PlayerCharacter.BP_PlayerCharacter_C.OnLocalWeaponEquippedDispatcher__DelegateSignature
struct ABP_PlayerCharacter_C_OnLocalWeaponEquippedDispatcher__DelegateSignature_Params
{
	class ABP_BaseArchonWeapon_C*                      Previous_Weapon;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_BaseArchonWeapon_C*                      New_Weapon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
