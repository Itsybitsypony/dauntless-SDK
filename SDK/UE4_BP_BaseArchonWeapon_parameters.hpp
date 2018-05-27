#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BaseArchonWeapon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetModifyDamageEventPriority
struct ABP_BaseArchonWeapon_C_GetModifyDamageEventPriority_Params
{
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CustomModifyDamageEventData
struct ABP_BaseArchonWeapon_C_CustomModifyDamageEventData_Params
{
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ModifiedDamageEventData;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            OverriddenDamageEventData;                                // (Parm, OutParm)
	bool                                               ShouldOverrideDamageTags;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OverriddenDamageTags;                                     // (Parm, OutParm)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OutputDebugInformation
struct ABP_BaseArchonWeapon_C_OutputDebugInformation_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.HasFinishedLoading
struct ABP_BaseArchonWeapon_C_HasFinishedLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ActivateSpecialAbilities_Interface
struct ABP_BaseArchonWeapon_C_ActivateSpecialAbilities_Interface_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetBackSocketName
struct ABP_BaseArchonWeapon_C_GetBackSocketName_Params
{
	struct FName                                       BackSocket;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetUsesAutoAttachment
struct ABP_BaseArchonWeapon_C_GetUsesAutoAttachment_Params
{
	bool                                               UsesAutoAttachment;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SpecialAttackReady
struct ABP_BaseArchonWeapon_C_SpecialAttackReady_Params
{
	bool                                               QReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ActivateTrail
struct ABP_BaseArchonWeapon_C_ActivateTrail_Params
{
	class UParticleSystem*                             InParticle_System;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLifetime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InFirstSocketName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSecondSocketName;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             InSecondaryParticle;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InSecondarySocketName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                InAspectColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetDefaultPrimaryDye
struct ABP_BaseArchonWeapon_C_GetDefaultPrimaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetDefaultSecondaryDye
struct ABP_BaseArchonWeapon_C_GetDefaultSecondaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetPresentationInfo
struct ABP_BaseArchonWeapon_C_GetPresentationInfo_Params
{
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // (Parm, OutParm)
	struct FVector                                     DisplayOffset;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetIntroAnimations
struct ABP_BaseArchonWeapon_C_GetIntroAnimations_Params
{
	TArray<class UAnimSequenceBase*>                   IntroAnimations;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetLocoAnimset
struct ABP_BaseArchonWeapon_C_GetLocoAnimset_Params
{
	struct Floco_animset_str                           LocoAnimset;                                              // (Parm, OutParm)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetActionsAnimset
struct ABP_BaseArchonWeapon_C_GetActionsAnimset_Params
{
	struct Factions_animset_str                        ActionsAnimset;                                           // (Parm, OutParm)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetStaggerAnimset
struct ABP_BaseArchonWeapon_C_GetStaggerAnimset_Params
{
	struct Fstagger_animset_str                        StaggerAnimset;                                           // (Parm, OutParm)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.LookupPowerTableRow
struct ABP_BaseArchonWeapon_C_LookupPowerTableRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWeaponPowerTableData                       OutPowerTableData;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CanExecuteComboTransition
struct ABP_BaseArchonWeapon_C_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SpawnGameplayCueFX
struct ABP_BaseArchonWeapon_C_SpawnGameplayCueFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetHitPauseOptimalityScale
struct ABP_BaseArchonWeapon_C_GetHitPauseOptimalityScale_Params
{
	struct FGameplayTagContainer                       Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              PauseDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ScaledDuration;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SetTierAttributes
struct ABP_BaseArchonWeapon_C_SetTierAttributes_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SetAnimationBlueprint
struct ABP_BaseArchonWeapon_C_SetAnimationBlueprint_Params
{
	class AArchonCharacter*                            Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetSpecialEffectsForTags
struct ABP_BaseArchonWeapon_C_GetSpecialEffectsForTags_Params
{
	struct FGameplayTagContainer                       SourceTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FStruct_TagToSpecialEffects>         Effects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FStruct_TagToSpecialEffects>         Particle_Systems;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetBaseHitVFX
struct ABP_BaseArchonWeapon_C_GetBaseHitVFX_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UParticleSystem*                             ElementalVFX;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RateScale;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SizeScale;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             HitFX;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.IsPlayingHeavyJumpLandAnimation
struct ABP_BaseArchonWeapon_C_IsPlayingHeavyJumpLandAnimation_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ExtractSwitchFromTags
struct ABP_BaseArchonWeapon_C_ExtractSwitchFromTags_Params
{
	TArray<struct FGameplayTag>                        Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FGameplayTagContainer                       TagContainer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetHitPauseDuration
struct ABP_BaseArchonWeapon_C_GetHitPauseDuration_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              HitDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                HitFrames;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.DamageAudio
struct ABP_BaseArchonWeapon_C_DamageAudio_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CompenentHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SelectCameraShakeForHit
struct ABP_BaseArchonWeapon_C_SelectCameraShakeForHit_Params
{
	struct FGameplayTagContainer                       Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                HitPauseFrames;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Shake;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              IntensityScale;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DurationScale;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Get Hit Effects For Tags
struct ABP_BaseArchonWeapon_C_Get_Hit_Effects_For_Tags_Params
{
	struct FGameplayTagContainer                       SourceTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FStruct_TagToHitEffects>             Effects;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FStruct_TagToHitEffects>             Particle_Systems;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnMoveSkill
struct ABP_BaseArchonWeapon_C_OnMoveSkill_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Find Collision Point Between Damage Volume And Colliding Actor
struct ABP_BaseArchonWeapon_C_Find_Collision_Point_Between_Damage_Volume_And_Colliding_Actor_Params
{
	class UCapsuleComponent*                           Damage_Volume;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Colliding_Actor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Found_Location;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     World_Location;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Cheat Charge Weapon
struct ABP_BaseArchonWeapon_C_Cheat_Charge_Weapon_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.UserConstructionScript
struct ABP_BaseArchonWeapon_C_UserConstructionScript_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnLoaded_981E11D8435C05E106A2DD8AC61151B6
struct ABP_BaseArchonWeapon_C_OnLoaded_981E11D8435C05E106A2DD8AC61151B6_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CallWeaponSpecificFunction
struct ABP_BaseArchonWeapon_C_CallWeaponSpecificFunction_Params
{
	struct FName                                       Function_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GameplayCue.Combat.OnDamageGiven
struct ABP_BaseArchonWeapon_C_GameplayCue_Combat_OnDamageGiven_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GameplayCue.Combat.Glint
struct ABP_BaseArchonWeapon_C_GameplayCue_Combat_Glint_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CreateGameplayCueFX
struct ABP_BaseArchonWeapon_C_CreateGameplayCueFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UParticleSystem*                             Particle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.K2_OnEquip
struct ABP_BaseArchonWeapon_C_K2_OnEquip_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.AddDebrisState
struct ABP_BaseArchonWeapon_C_AddDebrisState_Params
{
	class UAnimNotifyState*                            CallerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fvfx_state_id_struct                        StateId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.UpdateDebrisState
struct ABP_BaseArchonWeapon_C_UpdateDebrisState_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.DestroyDebrisState
struct ABP_BaseArchonWeapon_C_DestroyDebrisState_Params
{
	class UObject*                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReEquip
struct ABP_BaseArchonWeapon_C_ReEquip_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.MultiEquip
struct ABP_BaseArchonWeapon_C_MultiEquip_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.K2_OnUnEquip
struct ABP_BaseArchonWeapon_C_K2_OnUnEquip_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ClientTestForOwner
struct ABP_BaseArchonWeapon_C_ClientTestForOwner_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReceiveBeginPlay
struct ABP_BaseArchonWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Authorize_Set_Tier_Attributes
struct ABP_BaseArchonWeapon_C_Authorize_Set_Tier_Attributes_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReceiveGameplayStart
struct ABP_BaseArchonWeapon_C_ReceiveGameplayStart_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Check For Transmog
struct ABP_BaseArchonWeapon_C_Check_For_Transmog_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnComboNextMove
struct ABP_BaseArchonWeapon_C_OnComboNextMove_Params
{
	struct FComboInputBuffer*                          ComboInputBuffer;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnComboEnded
struct ABP_BaseArchonWeapon_C_OnComboEnded_Params
{
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnSetOwnerHiddenInGame
struct ABP_BaseArchonWeapon_C_OnSetOwnerHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ExecuteUbergraph_BP_BaseArchonWeapon
struct ABP_BaseArchonWeapon_C_ExecuteUbergraph_BP_BaseArchonWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
