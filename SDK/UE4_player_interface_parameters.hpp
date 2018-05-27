#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_interface.player_interface_C.SetLookAtEnabled
struct Uplayer_interface_C_SetLookAtEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetLanternGlowIntensity
struct Uplayer_interface_C_SetLanternGlowIntensity_Params
{
	float                                              emissive_value;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetHairColour
struct Uplayer_interface_C_GetHairColour_Params
{
	struct FLinearColor                                hair_colour;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function player_interface.player_interface_C.CanPerformEmote
struct Uplayer_interface_C_CanPerformEmote_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsLocalPlayerAudioEnabled
struct Uplayer_interface_C_GetIsLocalPlayerAudioEnabled_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetGenderIdentity
struct Uplayer_interface_C_GetGenderIdentity_Params
{
	EArchonGender                                      GenderId;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetGenderIdentity
struct Uplayer_interface_C_SetGenderIdentity_Params
{
	EArchonGender                                      GenderId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetAutoPlayerActiveInterface
struct Uplayer_interface_C_SetAutoPlayerActiveInterface_Params
{
	bool                                               AutoPlayerActive;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.TriggerBannerPlantInterface
struct Uplayer_interface_C_TriggerBannerPlantInterface_Params
{
};

// Function player_interface.player_interface_C.TriggerEmoteInterface
struct Uplayer_interface_C_TriggerEmoteInterface_Params
{
	int                                                EmoteIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.RotateCameratoTargetInterface
struct Uplayer_interface_C_RotateCameratoTargetInterface_Params
{
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetWeaponMaterials
struct Uplayer_interface_C_GetWeaponMaterials_Params
{
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function player_interface.player_interface_C.GetBodyMaterials
struct Uplayer_interface_C_GetBodyMaterials_Params
{
	TArray<class UMaterialInstanceDynamic*>            MaterialInstances;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function player_interface.player_interface_C.HidePlayerMarker
struct Uplayer_interface_C_HidePlayerMarker_Params
{
};

// Function player_interface.player_interface_C.ShowPlayerMarker
struct Uplayer_interface_C_ShowPlayerMarker_Params
{
};

// Function player_interface.player_interface_C.ResetMaxFallTimer
struct Uplayer_interface_C_ResetMaxFallTimer_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsSprinting
struct Uplayer_interface_C_GetIsSprinting_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetNumPlayersReviving
struct Uplayer_interface_C_GetNumPlayersReviving_Params
{
	int                                                NumPlayers;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.IsHelmVisible
struct Uplayer_interface_C_IsHelmVisible_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetEmoteTurnWarpEnabled
struct Uplayer_interface_C_SetEmoteTurnWarpEnabled_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetFacialHairSlotComponent
struct Uplayer_interface_C_GetFacialHairSlotComponent_Params
{
	class USkeletalMeshComponent*                      Facial_Hair_Slot;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.ApplyShouldCheatDeathFromAboutToDie
struct Uplayer_interface_C_ApplyShouldCheatDeathFromAboutToDie_Params
{
};

// Function player_interface.player_interface_C.GetWeaponAbilityDamageRowOverride
struct Uplayer_interface_C_GetWeaponAbilityDamageRowOverride_Params
{
	struct FName                                       WeaponAbilityDamageRowOverride;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.ClearWeaponAbilityDamageRowOverride
struct Uplayer_interface_C_ClearWeaponAbilityDamageRowOverride_Params
{
};

// Function player_interface.player_interface_C.SetWeaponAbilityDamageRowOverride
struct Uplayer_interface_C_SetWeaponAbilityDamageRowOverride_Params
{
	struct FName                                       WeaponAbilityDamageRowOverride;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.isinlobby
struct Uplayer_interface_C_isinlobby_Params
{
	bool                                               isinlobby;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.IsInCity
struct Uplayer_interface_C_IsInCity_Params
{
	bool                                               IsInCity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.EnableLocoTransitions
struct Uplayer_interface_C_EnableLocoTransitions_Params
{
};

// Function player_interface.player_interface_C.DisableLocoTransitions
struct Uplayer_interface_C_DisableLocoTransitions_Params
{
};

// Function player_interface.player_interface_C.GetLastDamagedMonsterPart
struct Uplayer_interface_C_GetLastDamagedMonsterPart_Params
{
	class UMonsterPartComponent*                       MonsterPart;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.RemoveEmpoweredWeaponEffectsStack
struct Uplayer_interface_C_RemoveEmpoweredWeaponEffectsStack_Params
{
};

// Function player_interface.player_interface_C.AddEmpoweredWeaponEffectsStack
struct Uplayer_interface_C_AddEmpoweredWeaponEffectsStack_Params
{
};

// Function player_interface.player_interface_C.GetLastDamagedActor
struct Uplayer_interface_C_GetLastDamagedActor_Params
{
	class AActor*                                      LastDamagedActor;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetMontagePauseWindow
struct Uplayer_interface_C_SetMontagePauseWindow_Params
{
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetAnimationGraph
struct Uplayer_interface_C_SetAnimationGraph_Params
{
	class UClass*                                      NewAnimClass;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetHelmHidingSetting
struct Uplayer_interface_C_SetHelmHidingSetting_Params
{
	class FString                                      helm_hide_setting;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function player_interface.player_interface_C.GetHelmHidingSetting
struct Uplayer_interface_C_GetHelmHidingSetting_Params
{
	class FString                                      Helm_Hiding;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function player_interface.player_interface_C.ToggleHideWeapon
struct Uplayer_interface_C_ToggleHideWeapon_Params
{
	bool                                               Hide_;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.TogglePlayerFade
struct Uplayer_interface_C_TogglePlayerFade_Params
{
	bool                                               Fade;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetSprintInputValue
struct Uplayer_interface_C_GetSprintInputValue_Params
{
	bool                                               Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.PlayerStateMeetsRequirements
struct Uplayer_interface_C_PlayerStateMeetsRequirements_Params
{
	struct Fplayer_requirements_str                    PlayerRequirements;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               PassesRequirements;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.UpdateHasLoadedInt
struct Uplayer_interface_C_UpdateHasLoadedInt_Params
{
};

// Function player_interface.player_interface_C.GetPonytailComponent
struct Uplayer_interface_C_GetPonytailComponent_Params
{
	class USkeletalMeshComponent*                      ponytail;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.IsBannerEnabled
struct Uplayer_interface_C_IsBannerEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.StopReplicatingAim
struct Uplayer_interface_C_StopReplicatingAim_Params
{
};

// Function player_interface.player_interface_C.StartReplicatingAim
struct Uplayer_interface_C_StartReplicatingAim_Params
{
};

// Function player_interface.player_interface_C.GetCurrentAimDirection
struct Uplayer_interface_C_GetCurrentAimDirection_Params
{
	struct FVector                                     CurrentAimDirection;                                      // (Parm, OutParm, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetLoadout
struct Uplayer_interface_C_GetLoadout_Params
{
	class AArchonLoadout*                              LOADOUT;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetMaxDesiredLocoState
struct Uplayer_interface_C_SetMaxDesiredLocoState_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocomotionState>                      MaxDesiredLocoState;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.EnableIKinema
struct Uplayer_interface_C_EnableIKinema_Params
{
	bool                                               EnableIKinema;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetCinematicState
struct Uplayer_interface_C_SetCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECinematicPlayerState>                 CinematicStte;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetCinematicState
struct Uplayer_interface_C_GetCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetCombatComponent
struct Uplayer_interface_C_GetCombatComponent_Params
{
	class UArchonCombatComponent*                      CombatComponent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.IsInteracting
struct Uplayer_interface_C_IsInteracting_Params
{
	bool                                               Interacting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetDynamicMaterials
struct Uplayer_interface_C_GetDynamicMaterials_Params
{
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function player_interface.player_interface_C.EnterBleedout
struct Uplayer_interface_C_EnterBleedout_Params
{
	float                                              DurationPerBleedoutLevel;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetBleedoutLevel
struct Uplayer_interface_C_GetBleedoutLevel_Params
{
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetAbilitySystemComponent
struct Uplayer_interface_C_GetAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.Set Dodge And Jump Enable State
struct Uplayer_interface_C_Set_Dodge_And_Jump_Enable_State_Params
{
	bool                                               Enabled_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetCollisionWithDestructible
struct Uplayer_interface_C_SetCollisionWithDestructible_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.PlayNetworkedMontage
struct Uplayer_interface_C_PlayNetworkedMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaleFactor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Section;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.UpdateTranslateWarpTargetPosition
struct Uplayer_interface_C_UpdateTranslateWarpTargetPosition_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetEarlyOutOfMontage
struct Uplayer_interface_C_SetEarlyOutOfMontage_Params
{
	bool                                               EarlyOutOfMontage;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetHeadSlotComponent 
struct Uplayer_interface_C_GetHeadSlotComponent__Params
{
	class USkeletalMeshComponent*                      Head_Slot_Component;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.UpdateHighlightComponents
struct Uplayer_interface_C_UpdateHighlightComponents_Params
{
};

// Function player_interface.player_interface_C.GetLantern
struct Uplayer_interface_C_GetLantern_Params
{
	class AArchonLantern*                              Lantern;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.DoEmote
struct Uplayer_interface_C_DoEmote_Params
{
	int                                                emoteID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetHairSlotComponent
struct Uplayer_interface_C_GetHairSlotComponent_Params
{
	class USkeletalMeshComponent*                      HairSlotComponent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SetBodyType
struct Uplayer_interface_C_SetBodyType_Params
{
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetBodyType
struct Uplayer_interface_C_GetBodyType_Params
{
	EArchonBodyType                                    BodyType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetWeaponMesh
struct Uplayer_interface_C_GetWeaponMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetSkeletalMeshComponent
struct Uplayer_interface_C_GetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComp;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.UnregisterInteraction
struct Uplayer_interface_C_UnregisterInteraction_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.RegisterInteraction
struct Uplayer_interface_C_RegisterInteraction_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.SingleClientNameplateInit
struct Uplayer_interface_C_SingleClientNameplateInit_Params
{
};

// Function player_interface.player_interface_C.GetFollowCamera
struct Uplayer_interface_C_GetFollowCamera_Params
{
	class UCameraComponent*                            FollowCamera;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsDying
struct Uplayer_interface_C_GetIsDying_Params
{
	bool                                               IsDying;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetBleedOutState
struct Uplayer_interface_C_GetBleedOutState_Params
{
	bool                                               BleedOutState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetReviveHealthThreshold
struct Uplayer_interface_C_GetReviveHealthThreshold_Params
{
	float                                              ReviveHealthThreshold;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetCurrentHealth
struct Uplayer_interface_C_GetCurrentHealth_Params
{
	float                                              CurrentHealth;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.ReviveFromBleedOut
struct Uplayer_interface_C_ReviveFromBleedOut_Params
{
	class APawn*                                       RevivingPawn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetNamePlate
struct Uplayer_interface_C_GetNamePlate_Params
{
	class UWidgetComponent*                            Nameplate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetBleedOutTimer
struct Uplayer_interface_C_GetBleedOutTimer_Params
{
	struct FTimerHandle                                BleedOutTImer;                                            // (Parm, OutParm)
};

// Function player_interface.player_interface_C.ApplyStringDataInterface
struct Uplayer_interface_C_ApplyStringDataInterface_Params
{
	TArray<struct FAppearanceStringData>               String_Data;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function player_interface.player_interface_C.GatherStringDataInterface
struct Uplayer_interface_C_GatherStringDataInterface_Params
{
	TArray<struct FAppearanceStringData>               AssetData;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function player_interface.player_interface_C.CallLegalStuck
struct Uplayer_interface_C_CallLegalStuck_Params
{
};

// Function player_interface.player_interface_C.GetClientUsedMouse
struct Uplayer_interface_C_GetClientUsedMouse_Params
{
	bool                                               ClientUsedMouse;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetClientUsedGamePad
struct Uplayer_interface_C_GetClientUsedGamePad_Params
{
	bool                                               ClientUsedGamePad;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetPlayerStats
struct Uplayer_interface_C_GetPlayerStats_Params
{
	float                                              Current_Health;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Stamina;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsInCity-Deprecated
struct Uplayer_interface_C_GetIsInCity_Deprecated_Params
{
	bool                                               Is_In_City;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsSheathed
struct Uplayer_interface_C_GetIsSheathed_Params
{
	bool                                               Weapon_Sheathed;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsInStaminaThresholdRecoveryPeriod
struct Uplayer_interface_C_GetIsInStaminaThresholdRecoveryPeriod_Params
{
	bool                                               Is_in_stamina_threshold_recovery_period_;                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsInSlowChargeState
struct Uplayer_interface_C_GetIsInSlowChargeState_Params
{
	bool                                               Is_slow_charging_;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsFalling
struct Uplayer_interface_C_GetIsFalling_Params
{
	bool                                               Is_Falling_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.OnGameModeStartEvent
struct Uplayer_interface_C_OnGameModeStartEvent_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.ConsumeStamina
struct Uplayer_interface_C_ConsumeStamina_Params
{
	float                                              StaminaCost;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RestrictedByStaminaAmount_;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.RemoveDebugComponent
struct Uplayer_interface_C_RemoveDebugComponent_Params
{
	class UActorComponent*                             Comp;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_interface.player_interface_C.GetIsJumping
struct Uplayer_interface_C_GetIsJumping_Params
{
	bool                                               Is_Jumping_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
