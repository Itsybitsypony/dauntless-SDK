#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Archon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Archon.AbilityActor.ReceivedArchonAbilityDamage
struct AAbilityActor_ReceivedArchonAbilityDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.AbilityActor.ReceiveArchonRadialDamage
struct AAbilityActor_ReceiveArchonRadialDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	TArray<struct FHitResult>                          HitInfos;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.AbilityActor.ReceiveArchonPointDamage
struct AAbilityActor_ReceiveArchonPointDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.AbilityActor.ReceiveArchonDamage
struct AAbilityActor_ReceiveArchonDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.AddMemberLobbyCallbackProxy.AddMember
struct UAddMemberLobbyCallbackProxy_AddMember_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            InMemberId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAddMemberLobbyCallbackProxy*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.TryActivateAbilityBySpecHandle
struct UArchonAbilitySystemBlueprintLibrary_TryActivateAbilityBySpecHandle_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.SetEffectContext
struct UArchonAbilitySystemBlueprintLibrary_SetEffectContext_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayEffectContextHandle                ContextHandle;                                            // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.IsGameplayEffectActive
struct UArchonAbilitySystemBlueprintLibrary_IsGameplayEffectActive_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GiveAbility
struct UArchonAbilitySystemBlueprintLibrary_GiveAbility_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AbilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateAndRemoveOnEnd;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  OutAbilitySpecHandle;                                     // (Parm, OutParm)
	class UGameplayAbility*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetTimeRemaining
struct UArchonAbilitySystemBlueprintLibrary_GetTimeRemaining_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetTimeFromStart
struct UArchonAbilitySystemBlueprintLibrary_GetTimeFromStart_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetTagFromName
struct UArchonAbilitySystemBlueprintLibrary_GetTagFromName_Params
{
	struct FName                                       Name;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetPeriod
struct UArchonAbilitySystemBlueprintLibrary_GetPeriod_Params
{
	struct FGameplayEffectSpec                         GameplayEffectSpec;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetNameFromTag
struct UArchonAbilitySystemBlueprintLibrary_GetNameFromTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetEffectContext
struct UArchonAbilitySystemBlueprintLibrary_GetEffectContext_Params
{
	struct FGameplayEffectSpec                         GameplayEffectSpec;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetDuration
struct UArchonAbilitySystemBlueprintLibrary_GetDuration_Params
{
	struct FGameplayEffectSpec                         GameplayEffectSpec;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetBaseFloatAttributeFromAbilitySystemComponent
struct UArchonAbilitySystemBlueprintLibrary_GetBaseFloatAttributeFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetBaseFloatAttribute
struct UArchonAbilitySystemBlueprintLibrary_GetBaseFloatAttribute_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.GetActiveDuration
struct UArchonAbilitySystemBlueprintLibrary_GetActiveDuration_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.EffectContextSetHitResult
struct UArchonAbilitySystemBlueprintLibrary_EffectContextSetHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorAbilitySystemComponent
struct UArchonAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorAbilitySystemComponent_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.EffectContextGetInstigatorAbilitySystemComponent
struct UArchonAbilitySystemBlueprintLibrary_EffectContextGetInstigatorAbilitySystemComponent_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.CancelAbilityWithHandle
struct UArchonAbilitySystemBlueprintLibrary_CancelAbilityWithHandle_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonAbilitySystemBlueprintLibrary.CancelAbilitiesWithTags
struct UArchonAbilitySystemBlueprintLibrary_CancelAbilitiesWithTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       WithTags;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       WithoutTags;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonAbilitySystemComponent.SetActiveGameplayEffectTimeRemaining
struct UArchonAbilitySystemComponent_SetActiveGameplayEffectTimeRemaining_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	float                                              NewTimeRemaining;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonAbilitySystemComponent.OnGameEffectRemoved__DelegateSignature
struct UArchonAbilitySystemComponent_OnGameEffectRemoved__DelegateSignature_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ArchonAbilitySystemComponent.OnGameEffectChanged__DelegateSignature
struct UArchonAbilitySystemComponent_OnGameEffectChanged__DelegateSignature_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeRemaining;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonAbilitySystemComponent.OnGameEffectApplied__DelegateSignature
struct UArchonAbilitySystemComponent_OnGameEffectApplied__DelegateSignature_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class UObject*                                     Icon;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemComponent.HasAbilityWithTag
struct UArchonAbilitySystemComponent_HasAbilityWithTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemComponent.GiveAbilityAndActivateOnce
struct UArchonAbilitySystemComponent_GiveAbilityAndActivateOnce_Params
{
	class UClass*                                      AbilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonAbilitySystemComponent.GiveAbility
struct UArchonAbilitySystemComponent_GiveAbility_Params
{
	class UClass*                                      AbilityClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonAbilitySystemComponent.GetTimePercentionOfActiveEffectsWithTags
struct UArchonAbilitySystemComponent_GetTimePercentionOfActiveEffectsWithTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemComponent.GetCurrentAbilityMontage
struct UArchonAbilitySystemComponent_GetCurrentAbilityMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilitySystemComponent.BP_ClearAbility
struct UArchonAbilitySystemComponent_BP_ClearAbility_Params
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonAbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
struct UArchonAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonAbilityTask_ApplyRootMotionJumpForce.Finish
struct UArchonAbilityTask_ApplyRootMotionJumpForce_Finish_Params
{
};

// Function Archon.ArchonAbilityTask_ApplyRootMotionJumpForce.ArchonApplyRootMotionJumpForce
struct UArchonAbilityTask_ApplyRootMotionJumpForce_ArchonApplyRootMotionJumpForce_Params
{
	class UGameplayAbility*                            GameplayAbility;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumLandedTriggerTime;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonAbilityTask_ApplyRootMotionJumpForce* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName.PlayMontageAndWaitNotifyName
struct UArchonAbilityTask_PlayMontageAndWaitNotifyName_PlayMontageAndWaitNotifyName_Params
{
	class UGameplayAbility*                            GameplayAbility;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAbilityEnds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonAbilityTask_PlayMontageAndWaitNotifyName* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName.OnNotifyReceived
struct UArchonAbilityTask_PlayMontageAndWaitNotifyName_OnNotifyReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MontageID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName.OnNotifyEndReceived
struct UArchonAbilityTask_PlayMontageAndWaitNotifyName_OnNotifyEndReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MontageID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName.OnNotifyBeginReceived
struct UArchonAbilityTask_PlayMontageAndWaitNotifyName_OnNotifyBeginReceived_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           MontageID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName.OnMontageInterrupted
struct UArchonAbilityTask_PlayMontageAndWaitNotifyName_OnMontageInterrupted_Params
{
};

// Function Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName.OnMontageEnded
struct UArchonAbilityTask_PlayMontageAndWaitNotifyName_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonAbilityTask_PlayMontageAndWaitNotifyName.OnMontageBlendingOut
struct UArchonAbilityTask_PlayMontageAndWaitNotifyName_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonAbilityTask_WaitVelocityBelow.CreateWaitVelocityBelow
struct UArchonAbilityTask_WaitVelocityBelow_CreateWaitVelocityBelow_Params
{
	class UGameplayAbility*                            GameplayAbility;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonAbilityTask_WaitVelocityBelow*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonVOComponent.PostAkEventVO
struct UArchonVOComponent_PostAkEventVO_Params
{
	class UAkAudioEventBase*                           AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonVOUserComponent*                      UserComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPrePostEvents;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonVOComponent.GetSpeaker
struct UArchonVOComponent_GetSpeaker_Params
{
	class UArchonSpeaker*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Archon.ArchonAmbientComponent.OnUserRequestedAmbient__DelegateSignature
struct UArchonAmbientComponent_OnUserRequestedAmbient__DelegateSignature_Params
{
	class UArchonAmbientUserComponent*                 User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonVOUserComponent.SetVOPlaying
struct UArchonVOUserComponent_SetVOPlaying_Params
{
	bool                                               bIsPlaying;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonVOUserComponent.IsVOPlaying
struct UArchonVOUserComponent_IsVOPlaying_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonVOUserComponent.IsInUIInputMode
struct UArchonVOUserComponent_IsInUIInputMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonVOUserComponent.IsInGameInputMode
struct UArchonVOUserComponent_IsInGameInputMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAnimInstance.IsPlayingMontageOnSlot
struct UArchonAnimInstance_IsPlayingMontageOnSlot_Params
{
	struct FName                                       SlotNodeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAnimInstance.IsNotifyActive
struct UArchonAnimInstance_IsNotifyActive_Params
{
	struct FName                                       NotifyName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimNotifyEvent                            OutNotify;                                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAnimInstance.GetNotifyData
struct UArchonAnimInstance_GetNotifyData_Params
{
	class UAnimNotifyState*                            notify_event;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAnimInstance.GetMontagesForSlot
struct UArchonAnimInstance_GetMontagesForSlot_Params
{
	struct FName                                       SlotName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        Montages;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonAnimInstance.ClearAllNotifyData
struct UArchonAnimInstance_ClearAllNotifyData_Params
{
};

// Function Archon.ArchonAnimInstance.AddNotifyData
struct UArchonAnimInstance_AddNotifyData_Params
{
	class UAnimNotifyState*                            notify_event;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     data_object;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonAppearanceDataStatic.GatherAppearanceData
struct UArchonAppearanceDataStatic_GatherAppearanceData_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAppearanceData                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonArmorSetItem.LookupSetItemTableRow
struct AArchonArmorSetItem_LookupSetItemTableRow_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FArmourSetItemResistanceTableData           OutResistanceTableRow;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArmorSetItem.GetTransmogID
struct AArchonArmorSetItem_GetTransmogID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArmorSetItem.GetItemID
struct AArchonArmorSetItem_GetItemID_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonArmorSetItem.GetCurrentLevel
struct AArchonArmorSetItem_GetCurrentLevel_Params
{
	EUpgradeableItemLevel                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArmor.SetDyeVariant
struct AArchonArmor_SetDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonArmor.OnDyeChanged
struct AArchonArmor_OnDyeChanged_Params
{
};

// Function Archon.ArchonArmor.LookupResistanceTableRow
struct AArchonArmor_LookupResistanceTableRow_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FArmourResistanceTableData                  OutResistanceTableRow;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArmor.GetSecondaryDyeSurface
struct AArchonArmor_GetSecondaryDyeSurface_Params
{
	EArmourDyeSurfaceType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArmor.GetSecondaryDyeRowIndex
struct AArchonArmor_GetSecondaryDyeRowIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArmor.GetPrimaryDyeSurface
struct AArchonArmor_GetPrimaryDyeSurface_Params
{
	EArmourDyeSurfaceType                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArmor.GetPrimaryDyeRowIndex
struct AArchonArmor_GetPrimaryDyeRowIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArmor.BP_OnArmourUnEquipped
struct AArchonArmor_BP_OnArmourUnEquipped_Params
{
};

// Function Archon.ArchonArmor.BP_OnArmourEquipped
struct AArchonArmor_BP_OnArmourEquipped_Params
{
};

// Function Archon.ArchonArrayExtensions.Map_KeyValueAt
struct UArchonArrayExtensions_Map_KeyValueAt_Params
{
	TMap<int, int>                                     TargetMap;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Key;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonArrayExtensions.Array_HaveCommonItems
struct UArchonArrayExtensions_Array_HaveCommonItems_Params
{
	TArray<int>                                        A;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<int>                                        B;                                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAttributeComponent.RemoveAttributeModifierByName
struct UArchonAttributeComponent_RemoveAttributeModifierByName_Params
{
	struct FName                                       AttributeName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ModifierName;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               RemoveAllMatching;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonAttributeComponent.RemoveAttributeModifier
struct UArchonAttributeComponent_RemoveAttributeModifier_Params
{
	struct FName                                       AttributeName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FArchonAttributeModifier                    Modifier;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonAttributeComponent.RemoveAttribute
struct UArchonAttributeComponent_RemoveAttribute_Params
{
	struct FName                                       AttributeName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonAttributeComponent.GetAttributeValue
struct UArchonAttributeComponent_GetAttributeValue_Params
{
	struct FName                                       AttributeName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonAttributeComponent.AddAttributeModifier
struct UArchonAttributeComponent_AddAttributeModifier_Params
{
	struct FName                                       AttributeName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FArchonAttributeModifier                    Modifier;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonAttributeComponent.AddAttribute
struct UArchonAttributeComponent_AddAttribute_Params
{
	struct FArchonAttribute                            Attribute;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBanner.OnRepCustomizationData
struct AArchonBanner_OnRepCustomizationData_Params
{
};

// Function Archon.ArchonBanner.LoadBannerTableData
struct AArchonBanner_LoadBannerTableData_Params
{
};

// Function Archon.ArchonBanner.BP_ApplyCustomizationData
struct AArchonBanner_BP_ApplyCustomizationData_Params
{
};

// Function Archon.ArchonBehemoth.UpdateTurnWarpTarget
struct AArchonBehemoth_UpdateTurnWarpTarget_Params
{
	struct FVector                                     InTarget;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.UpdatePrimaryOffenseElement
struct AArchonBehemoth_UpdatePrimaryOffenseElement_Params
{
	EElementType                                       NewPrimaryOffenseElement;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.UpdateBaseResists
struct AArchonBehemoth_UpdateBaseResists_Params
{
	bool                                               bUpdatePartsAsWell;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.UpdateBasePowers
struct AArchonBehemoth_UpdateBasePowers_Params
{
};

// Function Archon.ArchonBehemoth.TraversalEnded
struct AArchonBehemoth_TraversalEnded_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.ReceivedArchonAbilityDamageOnMonsterPart
struct AArchonBehemoth_ReceivedArchonAbilityDamageOnMonsterPart_Params
{
	class AMonsterPartActor*                           MonsterPartActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBehemoth.ReceivedArchonAbilityDamage
struct AArchonBehemoth_ReceivedArchonAbilityDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBehemoth.ReceiveArchonRadialDamage
struct AArchonBehemoth_ReceiveArchonRadialDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	TArray<struct FHitResult>                          HitInfos;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBehemoth.ReceiveArchonPointDamage
struct AArchonBehemoth_ReceiveArchonPointDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBehemoth.ReceiveArchonDamage
struct AArchonBehemoth_ReceiveArchonDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBehemoth.PostInitializeHealth
struct AArchonBehemoth_PostInitializeHealth_Params
{
};

// Function Archon.ArchonBehemoth.OnStartTraversal
struct AArchonBehemoth_OnStartTraversal_Params
{
	struct FVector                                     Delta;                                                    // (Parm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.OnRep_CurrentHealth
struct AArchonBehemoth_OnRep_CurrentHealth_Params
{
};

// Function Archon.ArchonBehemoth.OnPreMitigateOutgoingDamageBP
struct AArchonBehemoth_OnPreMitigateOutgoingDamageBP_Params
{
	class AActor*                                      DamageTaker;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bHasHitResult;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOverrideDamageData;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OutDamageEventTags;                                       // (Parm, OutParm)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonBehemoth.OnMovementUpdated
struct AArchonBehemoth_OnMovementUpdated_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.OnDeath
struct AArchonBehemoth_OnDeath_Params
{
};

// Function Archon.ArchonBehemoth.InitializeHealth
struct AArchonBehemoth_InitializeHealth_Params
{
	float                                              InitialHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.HandleCharacterMovementUpdated
struct AArchonBehemoth_HandleCharacterMovementUpdated_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.GetPivotMontages
struct AArchonBehemoth_GetPivotMontages_Params
{
	TArray<class UAnimMontage*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonBehemoth.GetPivotMontageForAngleDelta
struct AArchonBehemoth_GetPivotMontageForAngleDelta_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.GetPartForBone
struct AArchonBehemoth_GetPartForBone_Params
{
	struct FName                                       Bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UMonsterPartComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.GetMaxHealth
struct AArchonBehemoth_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.GetExtractedRootMotionForMontage
struct AArchonBehemoth_GetExtractedRootMotionForMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.GetExtractedRootMotion
struct AArchonBehemoth_GetExtractedRootMotion_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Looping;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.GetDamageInfo
struct AArchonBehemoth_GetDamageInfo_Params
{
	struct FName                                       DamageKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageInfo;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.GetCurrentHealth
struct AArchonBehemoth_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBehemoth.FixupCapsuleUpVector
struct AArchonBehemoth_FixupCapsuleUpVector_Params
{
};

// Function Archon.ArchonBehemoth.BP_GetTagsToApplyPostDamageCalculation
struct AArchonBehemoth_BP_GetTagsToApplyPostDamageCalculation_Params
{
	float                                              DamageApplied;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonBehemoth.BP_DamageGiven
struct AArchonBehemoth_BP_DamageGiven_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageReceiver;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBehemoth.ApproximatePivotDelta
struct AArchonBehemoth_ApproximatePivotDelta_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Delta;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function Archon.ArchonBuff.UpdateExpireTime
struct AArchonBuff_UpdateExpireTime_Params
{
	float                                              NewDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EndIfZeroOrBelow;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonBuff.StartBuff
struct AArchonBuff_StartBuff_Params
{
};

// Function Archon.ArchonBuff.OnTimeOut
struct AArchonBuff_OnTimeOut_Params
{
};

// Function Archon.ArchonBuff.OnTagRemoved
struct AArchonBuff_OnTagRemoved_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBuff.OnTagAdded
struct AArchonBuff_OnTagAdded_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBuff.OnRep_Active
struct AArchonBuff_OnRep_Active_Params
{
};

// Function Archon.ArchonBuff.OnRemoved
struct AArchonBuff_OnRemoved_Params
{
};

// Function Archon.ArchonBuff.OnRefreshed
struct AArchonBuff_OnRefreshed_Params
{
};

// Function Archon.ArchonBuff.OnGameplayEventTriggered
struct AArchonBuff_OnGameplayEventTriggered_Params
{
	struct FGameplayEventData                          Payload;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBuff.OnGameplayEffectRemoved
struct AArchonBuff_OnGameplayEffectRemoved_Params
{
};

// Function Archon.ArchonBuff.OnDamageReceived
struct AArchonBuff_OnDamageReceived_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBuff.OnDamageGiven
struct AArchonBuff_OnDamageGiven_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageReceiver;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonBuff.OnAdded
struct AArchonBuff_OnAdded_Params
{
};

// Function Archon.ArchonBuff.OnActiveGameplayEffectRemoved
struct AArchonBuff_OnActiveGameplayEffectRemoved_Params
{
};

// Function Archon.ArchonBuff.MulticastOnRefreshedInternal
struct AArchonBuff_MulticastOnRefreshedInternal_Params
{
};

// Function Archon.ArchonBuff.MulticastOnRefreshed
struct AArchonBuff_MulticastOnRefreshed_Params
{
};

// Function Archon.ArchonBuff.MulticastOnAdded
struct AArchonBuff_MulticastOnAdded_Params
{
};

// Function Archon.ArchonBuff.GetBuffOwner
struct AArchonBuff_GetBuffOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBuff.CustomRefresh
struct AArchonBuff_CustomRefresh_Params
{
};

// Function Archon.ArchonBuff.AuthGetCurrentDuration
struct AArchonBuff_AuthGetCurrentDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBuffableComponent.TryAddBuff
struct UArchonBuffableComponent_TryAddBuff_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BuffAdded;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor*                                      BuffInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AArchonBuff*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBuffableComponent.SpawnAndAddBuff
struct UArchonBuffableComponent_SpawnAndAddBuff_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     IntstigatorAbilitySystemComponent;                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               StartBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AArchonBuff*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBuffableComponent.RemoveBuffByClass
struct UArchonBuffableComponent_RemoveBuffByClass_Params
{
	class UClass*                                      Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonBuffableComponent.RemoveBuff
struct UArchonBuffableComponent_RemoveBuff_Params
{
	class AArchonBuff*                                 Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonBuffableComponent.HasBuff
struct UArchonBuffableComponent_HasBuff_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBuffableComponent.GetStackCount
struct UArchonBuffableComponent_GetStackCount_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBuffableComponent.FindAllBuffsOfClass
struct UArchonBuffableComponent_FindAllBuffsOfClass_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonBuff*>                         OutBuffs;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonBuffableComponent.CustomStackAdd
struct UArchonBuffableComponent_CustomStackAdd_Params
{
	class UClass*                                      Buff;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BuffInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               StartBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonBuff*>                         CurrentBuffs;                                             // (Parm, OutParm, ZeroConstructor)
	class AArchonBuff*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonBuffableComponent.CanAddBuff
struct UArchonBuffableComponent_CanAddBuff_Params
{
	class UClass*                                      BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCatalog.ParseFromEconomy
struct UArchonCatalog_ParseFromEconomy_Params
{
	class UPlayFabEconomyDataAsset*                    Economy;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCatalog.ItemHasTag
struct UArchonCatalog_ItemHasTag_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Tag;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCatalog.IsAvailable
struct UArchonCatalog_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCatalog.GetRandomItemWithTag
struct UArchonCatalog_GetRandomItemWithTag_Params
{
	class FString                                      Tag;                                                      // (Parm, ZeroConstructor)
	struct FArchonCatalogItem                          ArchonCatalogItem;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCatalog.GetQuestRewards
struct UArchonCatalog_GetQuestRewards_Params
{
	struct FName                                       QuestName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCatalogItemRewardInfo>              Rewards;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCatalog.GetItemsByTag
struct UArchonCatalog_GetItemsByTag_Params
{
	class FString                                      Tag;                                                      // (Parm, ZeroConstructor)
	TArray<struct FArchonCatalogItem>                  OutResult;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCatalog.GetItemRewardIcon
struct UArchonCatalog_GetItemRewardIcon_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
};

// Function Archon.ArchonCatalog.GetItemCustomValue
struct UArchonCatalog_GetItemCustomValue_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonCatalog.GetItemClassDefaultObject
struct UArchonCatalog_GetItemClassDefaultObject_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCatalog.GetItemArmorClass
struct UArchonCatalog_GetItemArmorClass_Params
{
	struct FArchonCatalogItem                          CatalogItem;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCatalog.GetCatalogItem
struct UArchonCatalog_GetCatalogItem_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	struct FArchonCatalogItem                          OutCatalogItem;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCatalog.GetAllItems
struct UArchonCatalog_GetAllItems_Params
{
	TArray<struct FArchonCatalogItem>                  OutResult;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCellManagerComponent.RemoveCellBonuses
struct UArchonCellManagerComponent_RemoveCellBonuses_Params
{
};

// Function Archon.ArchonCellManagerComponent.ApplyCellBonuses
struct UArchonCellManagerComponent_ApplyCellBonuses_Params
{
	TArray<struct FAppliedCellEffectCounter>           EquippedCellEffects;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonCharacter.UseQuickItem
struct AArchonCharacter_UseQuickItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.UnregisterComboModifier
struct AArchonCharacter_UnregisterComboModifier_Params
{
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.StartOrBufferComboAction
struct AArchonCharacter_StartOrBufferComboAction_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonCombatInputType                             InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.ShouldShowHitFX
struct AArchonCharacter_ShouldShowHitFX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetWeapon
struct AArchonCharacter_SetWeapon_Params
{
	class UClass*                                      WeaponClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bForceEquip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetSkeletalMeshOptimizations
struct AArchonCharacter_SetSkeletalMeshOptimizations_Params
{
	TEnumAsByte<EMeshComponentUpdateFlag>              Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetReplicatedAnimClass
struct AArchonCharacter_SetReplicatedAnimClass_Params
{
	class UClass*                                      NewAnimClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetLegsDyeVariant
struct AArchonCharacter_SetLegsDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.SetLegsArmour
struct AArchonCharacter_SetLegsArmour_Params
{
	class UClass*                                      LegsArmourClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bForceEquip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateSetBonuses;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetLantern
struct AArchonCharacter_SetLantern_Params
{
	class UClass*                                      LanternClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bForceEquip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateSetBonuses;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetHelmetDyeVariant
struct AArchonCharacter_SetHelmetDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.SetHelmetArmour
struct AArchonCharacter_SetHelmetArmour_Params
{
	class UClass*                                      HelmetArmourClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bForceEquip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateSetBonuses;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetChestDyeVariant
struct AArchonCharacter_SetChestDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.SetChestArmour
struct AArchonCharacter_SetChestArmour_Params
{
	class UClass*                                      ChestArmourClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bForceEquip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateSetBonuses;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetArmsDyeVariant
struct AArchonCharacter_SetArmsDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.SetArmsArmour
struct AArchonCharacter_SetArmsArmour_Params
{
	class UClass*                                      ArmsArmourClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bForceEquip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateSetBonuses;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.SetArmour
struct AArchonCharacter_SetArmour_Params
{
	class AArchonArmor*                                Armour;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HelmetArmourClass;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bForceEquip;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UpdateSetBonuses;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.ServerUpdateDesiredDodgeDirection
struct AArchonCharacter_ServerUpdateDesiredDodgeDirection_Params
{
	class AActor*                                      TargetedActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewValue;                                                 // (Parm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.ServerEnableAutoTraversal
struct AArchonCharacter_ServerEnableAutoTraversal_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.RegisterComboModifier
struct AArchonCharacter_RegisterComboModifier_Params
{
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.ReceivedArchonAbilityDamage
struct AArchonCharacter_ReceivedArchonAbilityDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.ReceiveArchonRadialDamage
struct AArchonCharacter_ReceiveArchonRadialDamage_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
	TArray<struct FHitResult>                          HitInfos;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.ReceiveArchonPointDamage
struct AArchonCharacter_ReceiveArchonPointDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (Parm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.ReceiveArchonDamage
struct AArchonCharacter_ReceiveArchonDamage_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   InExtendedDamageInfo;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.ProcessComboBufferInputWindow
struct AArchonCharacter_ProcessComboBufferInputWindow_Params
{
};

// Function Archon.ArchonCharacter.PerformDodge
struct AArchonCharacter_PerformDodge_Params
{
};

// Function Archon.ArchonCharacter.OverrideDodge
struct AArchonCharacter_OverrideDodge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnUpdatePlayerName
struct AArchonCharacter_OnUpdatePlayerName_Params
{
};

// Function Archon.ArchonCharacter.OnUnEquipWeapon
struct AArchonCharacter_OnUnEquipWeapon_Params
{
	class AArchonWeapon*                               WeaponBeingUnEquipped;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnUnEquipLantern
struct AArchonCharacter_OnUnEquipLantern_Params
{
	class AArchonLantern*                              LanternBeingUnEquipped;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnTraversalMontageEnded
struct AArchonCharacter_OnTraversalMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnTookDamageWhileInvulnerableBP
struct AArchonCharacter_OnTookDamageWhileInvulnerableBP_Params
{
	class AActor*                                      DamageGiver;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              TotalDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnTakeDamageFromEffect
struct AArchonCharacter_OnTakeDamageFromEffect_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnRep_TraversalInfo
struct AArchonCharacter_OnRep_TraversalInfo_Params
{
};

// Function Archon.ArchonCharacter.OnRep_ReplicatedAnimClass
struct AArchonCharacter_OnRep_ReplicatedAnimClass_Params
{
};

// Function Archon.ArchonCharacter.OnRep_IsDodging
struct AArchonCharacter_OnRep_IsDodging_Params
{
};

// Function Archon.ArchonCharacter.OnRep_HideNameplate
struct AArchonCharacter_OnRep_HideNameplate_Params
{
};

// Function Archon.ArchonCharacter.OnRep_Health
struct AArchonCharacter_OnRep_Health_Params
{
};

// Function Archon.ArchonCharacter.OnRep_GenderId
struct AArchonCharacter_OnRep_GenderId_Params
{
};

// Function Archon.ArchonCharacter.OnRep_BodyType
struct AArchonCharacter_OnRep_BodyType_Params
{
};

// Function Archon.ArchonCharacter.OnPreMitigateOutgoingDamageBP
struct AArchonCharacter_OnPreMitigateOutgoingDamageBP_Params
{
	class AActor*                                      DamageTaker;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bHasHitResult;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOverrideDamageData;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OutDamageEventTags;                                       // (Parm, OutParm)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonCharacter.OnPreMitigateDamageBP
struct AArchonCharacter_OnPreMitigateDamageBP_Params
{
	class AActor*                                      DamageGiver;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bHasHitResult;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOverrideDamageData;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OutDamageEventTags;                                       // (Parm, OutParm)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonCharacter.OnHealedFromEffect
struct AArchonCharacter_OnHealedFromEffect_Params
{
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnEquipWeapon
struct AArchonCharacter_OnEquipWeapon_Params
{
	class AArchonWeapon*                               WeaponBeingEquipped;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnEquipLantern
struct AArchonCharacter_OnEquipLantern_Params
{
	class AArchonLantern*                              LanternBeingEquipped;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnDodgeMontageEnded
struct AArchonCharacter_OnDodgeMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnComboStarted
struct AArchonCharacter_OnComboStarted_Params
{
};

// Function Archon.ArchonCharacter.OnComboNextMove
struct AArchonCharacter_OnComboNextMove_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.OnComboEnded
struct AArchonCharacter_OnComboEnded_Params
{
};

// Function Archon.ArchonCharacter.OnComboCancelledTo
struct AArchonCharacter_OnComboCancelledTo_Params
{
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.OnAboutToDieBP
struct AArchonCharacter_OnAboutToDieBP_Params
{
	bool                                               PreventDeath;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.K2_PawnRestarted
struct AArchonCharacter_K2_PawnRestarted_Params
{
};

// Function Archon.ArchonCharacter.K2_OnRepPlayerState
struct AArchonCharacter_K2_OnRepPlayerState_Params
{
	class APlayerState*                                NewPlayerState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.IsTraversing
struct AArchonCharacter_IsTraversing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.IsAutoTraversalEnabled
struct AArchonCharacter_IsAutoTraversalEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.IsAttackWindowActive
struct AArchonCharacter_IsAttackWindowActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.HandleDodgeInput
struct AArchonCharacter_HandleDodgeInput_Params
{
};

// Function Archon.ArchonCharacter.HandleCharacterMovementUpdated
struct AArchonCharacter_HandleCharacterMovementUpdated_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetWeapon
struct AArchonCharacter_GetWeapon_Params
{
	class AArchonWeapon*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetMitigatedStaggerCategory
struct AArchonCharacter_GetMitigatedStaggerCategory_Params
{
	int                                                Weight;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetMaxHealth
struct AArchonCharacter_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetIsStaggering
struct AArchonCharacter_GetIsStaggering_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetIsInvincible
struct AArchonCharacter_GetIsInvincible_Params
{
	struct FGameplayTagContainer                       ExistingInvincibilityTags;                                // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetIsDodging
struct AArchonCharacter_GetIsDodging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetIsAttacking
struct AArchonCharacter_GetIsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetHealth
struct AArchonCharacter_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetCellEffectsForItem
struct AArchonCharacter_GetCellEffectsForItem_Params
{
	class UArchonInventoryItem_CellContainer*          InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppliedCellEffectCounter>           CellEffects;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCharacter.GetAttackTargetScore
struct AArchonCharacter_GetAttackTargetScore_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetAttackModifier
struct AArchonCharacter_GetAttackModifier_Params
{
	EArchonAttackActionKeyModifier                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetAttackActionHeldTime
struct AArchonCharacter_GetAttackActionHeldTime_Params
{
	EArchonAttackActionKey                             Key;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.GetAllEquippedCellEffects
struct AArchonCharacter_GetAllEquippedCellEffects_Params
{
	TArray<struct FAppliedCellEffectCounter>           CellEffects;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCharacter.EnableAutoTraversal
struct AArchonCharacter_EnableAutoTraversal_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.Die
struct AArchonCharacter_Die_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.DebugOnMovementUpdate
struct AArchonCharacter_DebugOnMovementUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.CanUseQuickItem
struct AArchonCharacter_CanUseQuickItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.CanPerformDodge
struct AArchonCharacter_CanPerformDodge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.CanExecuteComboTransition
struct AArchonCharacter_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.CanExecuteCancelTransition
struct AArchonCharacter_CanExecuteCancelTransition_Params
{
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.CanDie
struct AArchonCharacter_CanDie_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.CanChangeChargeLevel
struct AArchonCharacter_CanChangeChargeLevel_Params
{
	int                                                PreviousChargeLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewChargeLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FComboChargeData                            ChargeData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EArchonAttackActionKey                             CurrentHeldKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCharacter.BroadcastOnMontageStarted
struct AArchonCharacter_BroadcastOnMontageStarted_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.BroadcastOnMontageEnded
struct AArchonCharacter_BroadcastOnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.BroadcastOnMontageBlendingOut
struct AArchonCharacter_BroadcastOnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCharacter.BP_GetTagsToApplyPostDamageCalculation
struct AArchonCharacter_BP_GetTagsToApplyPostDamageCalculation_Params
{
	float                                              DamageApplied;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonCharacter.BP_DamageGiven
struct AArchonCharacter_BP_DamageGiven_Params
{
	float                                              DamageReceived;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageReceiver;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo                    DamageInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonCharacter.BlueprintGatherStringData
struct AArchonCharacter_BlueprintGatherStringData_Params
{
	TArray<struct FAppearanceStringData>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonCharacter.BlueprintGatherAssetReferences
struct AArchonCharacter_BlueprintGatherAssetReferences_Params
{
	TArray<struct FAppearanceAssetReference>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonCharacter.BlueprintApplyStringData
struct AArchonCharacter_BlueprintApplyStringData_Params
{
	TArray<struct FAppearanceStringData>               StringData;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonCharacter.BlueprintApplyAssetReferences
struct AArchonCharacter_BlueprintApplyAssetReferences_Params
{
	TArray<struct FAppearanceAssetReference>           References;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonCharacterMovementComponent.CalculateStoppingDistance
struct UArchonCharacterMovementComponent_CalculateStoppingDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCheatActor.GTDDisplayCategoryNames
struct AArchonCheatActor_GTDDisplayCategoryNames_Params
{
	class APawn*                                       SelectedPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      CategoryName5;                                            // (Parm, OutParm, ZeroConstructor)
	class FString                                      CategoryName6;                                            // (Parm, OutParm, ZeroConstructor)
	class FString                                      CategoryName7;                                            // (Parm, OutParm, ZeroConstructor)
	class FString                                      CategoryName8;                                            // (Parm, OutParm, ZeroConstructor)
	class FString                                      CategoryName9;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCheatActor.GTDDisplay9
struct AArchonCheatActor_GTDDisplay9_Params
{
	class APawn*                                       SelectedPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	class FString                                      Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCheatActor.GTDDisplay8
struct AArchonCheatActor_GTDDisplay8_Params
{
	class APawn*                                       SelectedPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	class FString                                      Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCheatActor.GTDDisplay7
struct AArchonCheatActor_GTDDisplay7_Params
{
	class APawn*                                       SelectedPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	class FString                                      Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCheatActor.GTDDisplay6
struct AArchonCheatActor_GTDDisplay6_Params
{
	class APawn*                                       SelectedPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	class FString                                      Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCheatActor.GTDDisplay5
struct AArchonCheatActor_GTDDisplay5_Params
{
	class APawn*                                       SelectedPawn;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	class FString                                      Value;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.UnlockQuest
struct UArchonCheatManager_UnlockQuest_Params
{
	class FString                                      QuestID;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.ToggleSurvey
struct UArchonCheatManager_ToggleSurvey_Params
{
};

// Function Archon.ArchonCheatManager.ToggleSchedulerLogging
struct UArchonCheatManager_ToggleSchedulerLogging_Params
{
};

// Function Archon.ArchonCheatManager.ToggleProgressionLogging
struct UArchonCheatManager_ToggleProgressionLogging_Params
{
};

// Function Archon.ArchonCheatManager.ToggleNavCollisionDebugDraw
struct UArchonCheatManager_ToggleNavCollisionDebugDraw_Params
{
};

// Function Archon.ArchonCheatManager.ToggleDamageTrace
struct UArchonCheatManager_ToggleDamageTrace_Params
{
};

// Function Archon.ArchonCheatManager.StartQuest
struct UArchonCheatManager_StartQuest_Params
{
	class FString                                      QuestID;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.SetChallenge
struct UArchonCheatManager_SetChallenge_Params
{
	class FString                                      ChallengeID;                                              // (Parm, ZeroConstructor)
	class FString                                      SlotID;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.ServerDisplayAll
struct UArchonCheatManager_ServerDisplayAll_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	class FString                                      PropertyName;                                             // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.ResetQuest
struct UArchonCheatManager_ResetQuest_Params
{
	class FString                                      QuestID;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.RedeemQuest
struct UArchonCheatManager_RedeemQuest_Params
{
	class FString                                      QuestID;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.PowerAndResistanceEnabled
struct UArchonCheatManager_PowerAndResistanceEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCheatManager.LogQuestInfo
struct UArchonCheatManager_LogQuestInfo_Params
{
};

// Function Archon.ArchonCheatManager.God
struct UArchonCheatManager_God_Params
{
};

// Function Archon.ArchonCheatManager.ExpireChallenge
struct UArchonCheatManager_ExpireChallenge_Params
{
	class FString                                      ChallengeID;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.CompleteQuest
struct UArchonCheatManager_CompleteQuest_Params
{
	class FString                                      QuestID;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.CompleteHunt
struct UArchonCheatManager_CompleteHunt_Params
{
	class FString                                      PlayerHunt;                                               // (Parm, ZeroConstructor)
	class FString                                      MatchmakerHunt;                                           // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.ClearChallenge
struct UArchonCheatManager_ClearChallenge_Params
{
	class FString                                      ChallengeID;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.ChooseHuntInfo
struct UArchonCheatManager_ChooseHuntInfo_Params
{
	class FString                                      HuntId;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.Cheat
struct UArchonCheatManager_Cheat_Params
{
	class FString                                      Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCheatManager.ByeByeBehemoth
struct UArchonCheatManager_ByeByeBehemoth_Params
{
};

// Function Archon.ArchonCheatManager.AbandonQuest
struct UArchonCheatManager_AbandonQuest_Params
{
	class FString                                      QuestID;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.ArchonCinematicUtility.SortCharactersByPlayerId
struct UArchonCinematicUtility_SortCharactersByPlayerId_Params
{
	TArray<class AArchonCharacter*>                    Characters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AArchonCharacter*>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonCombatComponent.UnregisterComboModifier
struct UArchonCombatComponent_UnregisterComboModifier_Params
{
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.StartOrBufferComboStart
struct UArchonCombatComponent_StartOrBufferComboStart_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonCombatInputType                             InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionContext                         Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.StartOrBufferComboAction
struct UArchonCombatComponent_StartOrBufferComboAction_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonCombatInputType                             InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionContext                         Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.StartNextMove
struct UArchonCombatComponent_StartNextMove_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (ConstParm, Parm)
	bool                                               IsRootNode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.StartComboCharge
struct UArchonCombatComponent_StartComboCharge_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.SetCombatContext
struct UArchonCombatComponent_SetCombatContext_Params
{
	EArchonAttackActionContext                         InContext;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.ServerStartNextMove
struct UArchonCombatComponent_ServerStartNextMove_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonCombatComponent.ServerStartInputAction
struct UArchonCombatComponent_ServerStartInputAction_Params
{
	struct FInputActionData                            InputAction;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonCombatComponent.ServerStartCombo
struct UArchonCombatComponent_ServerStartCombo_Params
{
	struct FComboInputKey                              InComboInputKey;                                          // (ConstParm, Parm, ReferenceParm)
	EArchonAttackActionContext                         Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.ServerStartCharge
struct UArchonCombatComponent_ServerStartCharge_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.ServerEndCombo
struct UArchonCombatComponent_ServerEndCombo_Params
{
	EArchonCombatEndReason                             Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.ServerEndCharge
struct UArchonCombatComponent_ServerEndCharge_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.RegisterComboModifier
struct UArchonCombatComponent_RegisterComboModifier_Params
{
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.ProcessComboBufferInputWindow
struct UArchonCombatComponent_ProcessComboBufferInputWindow_Params
{
};

// Function Archon.ArchonCombatComponent.ProcessBufferedComboStart
struct UArchonCombatComponent_ProcessBufferedComboStart_Params
{
};

// Function Archon.ArchonCombatComponent.OnSimulatedMontageBlendOut
struct UArchonCombatComponent_OnSimulatedMontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.OnRep_ReplicatedAnimMontage
struct UArchonCombatComponent_OnRep_ReplicatedAnimMontage_Params
{
};

// Function Archon.ArchonCombatComponent.OnRep_IsAttacking
struct UArchonCombatComponent_OnRep_IsAttacking_Params
{
};

// Function Archon.ArchonCombatComponent.OnMontageBlendOut
struct UArchonCombatComponent_OnMontageBlendOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.IsInputBufferActive
struct UArchonCombatComponent_IsInputBufferActive_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonCombatInputType                             InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.IsChargingWindowActive
struct UArchonCombatComponent_IsChargingWindowActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.IsCancelWindowActive
struct UArchonCombatComponent_IsCancelWindowActive_Params
{
	struct FComboCancel                                ComboCancel;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.IsAttackWindowActive
struct UArchonCombatComponent_IsAttackWindowActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.IsAttacking
struct UArchonCombatComponent_IsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.GetCombatContext
struct UArchonCombatComponent_GetCombatContext_Params
{
	EArchonAttackActionContext                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.EndComboCharge
struct UArchonCombatComponent_EndComboCharge_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCombatComponent.EndCombo
struct UArchonCombatComponent_EndCombo_Params
{
	EArchonCombatEndReason                             Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayOperation.Tick
struct UArchonGameplayOperation_Tick_Params
{
	struct FArchonGameplayOperationArgs                Args;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameplayOperation.Start
struct UArchonGameplayOperation_Start_Params
{
	struct FArchonGameplayOperationArgs                Args;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameplayOperation.OnTick
struct UArchonGameplayOperation_OnTick_Params
{
	struct FArchonGameplayOperationArgs                Args;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameplayOperation.OnStart
struct UArchonGameplayOperation_OnStart_Params
{
	struct FArchonGameplayOperationArgs                Args;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameplayOperation.GatherDebugInfo
struct UArchonGameplayOperation_GatherDebugInfo_Params
{
	class FString                                      DebugText;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonGameplayOperation.EndOperation
struct UArchonGameplayOperation_EndOperation_Params
{
	struct FArchonGameplayOperationArgs                Args;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonConcurrentGameplayOperations.MasterOperationEnded
struct UArchonConcurrentGameplayOperations_MasterOperationEnded_Params
{
	class UArchonGameplayOperation*                    Op;                                                       // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FArchonGameplayOperationArgs                Args;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonCraftComponent.CheckTagPresence
struct UArchonCraftComponent_CheckTagPresence_Params
{
	TArray<class FString>                              ItemTags;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      ItemTagToLookFor;                                         // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonUserWidget.SetDesiredUserFocus
struct UArchonUserWidget_SetDesiredUserFocus_Params
{
	class UWidget*                                     InDesiredFocusedWidget;                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonUserWidget.OnLoseTopOfFocusStack
struct UArchonUserWidget_OnLoseTopOfFocusStack_Params
{
};

// Function Archon.ArchonUserWidget.OnAquireTopOfFocusStack
struct UArchonUserWidget_OnAquireTopOfFocusStack_Params
{
};

// Function Archon.ArchonUserWidget.GetDefaultFocusedWidget
struct UArchonUserWidget_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonCreditsWidget.ReadFounderNames
struct UArchonCreditsWidget_ReadFounderNames_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonDamage.Execute
struct UArchonDamage_Execute_Params
{
	struct FGameplayEffectCustomExecutionParameters    ExecutionParams;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput;                                       // (Parm, OutParm)
};

// Function Archon.ArchonDemoPawn.ReplayCameraMoveSpeed
struct AArchonDemoPawn_ReplayCameraMoveSpeed_Params
{
	float                                              NewSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonDemoPawn.MoveUp_World
struct AArchonDemoPawn_MoveUp_World_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonDemoPawn.MoveRight
struct AArchonDemoPawn_MoveRight_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonDemoPawn.MoveForward
struct AArchonDemoPawn_MoveForward_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonDemoSpectator.OnToggleUI
struct AArchonDemoSpectator_OnToggleUI_Params
{
};

// Function Archon.ArchonDemoSpectator.OnTogglePlayerNames
struct AArchonDemoSpectator_OnTogglePlayerNames_Params
{
};

// Function Archon.ArchonDialogStatics.SelectAddressee
struct UArchonDialogStatics_SelectAddressee_Params
{
	class UArchonSpeaker*                              PotentialAddressee;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AArchonPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonGender                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonDialogStatics.PickLine
struct UArchonDialogStatics_PickLine_Params
{
	TArray<struct FArchonWeightedAmbientDialogLine>    Lines;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonDialogStatics.GetLocalizedTextForString
struct UArchonDialogStatics_GetLocalizedTextForString_Params
{
	class UArchonSpeaker*                              Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	EArchonGender                                      AddresseeGender;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonDialogStatics.GetLocalizedText
struct UArchonDialogStatics_GetLocalizedText_Params
{
	class UArchonSpeaker*                              Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonDialogLine                           Line;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	EArchonGender                                      AddresseeGender;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonDialogStatics.CreateLocalizationData
struct UArchonDialogStatics_CreateLocalizationData_Params
{
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	class FString                                      TranslationNotes;                                         // (Parm, ZeroConstructor)
	struct FArchonLocalizationData                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonDialogStatics.CreateFullLocalizationData
struct UArchonDialogStatics_CreateFullLocalizationData_Params
{
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	class FString                                      TranslationNotes;                                         // (Parm, ZeroConstructor)
	class UArchonSpeaker*                              Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonSpeaker*                              Addressee;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonFullLocalizationData                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonDialogStatics.AddLocalizationDataSet
struct UArchonDialogStatics_AddLocalizationDataSet_Params
{
	TArray<struct FArchonLocalizationData>             LocLines;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FArchonDialogLine>                   Lines;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonDialogStatics.AddLocalizationData
struct UArchonDialogStatics_AddLocalizationData_Params
{
	TArray<struct FArchonLocalizationData>             LocLines;                                                 // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FArchonDialogLine                           Line;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonEditorStatics.SaveStringTextToFile
struct UArchonEditorStatics_SaveStringTextToFile_Params
{
	class FString                                      SaveDirectory;                                            // (Parm, ZeroConstructor)
	class FString                                      FileName;                                                 // (Parm, ZeroConstructor)
	class FString                                      SaveText;                                                 // (Parm, ZeroConstructor)
	bool                                               AllowOverWriting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Append;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonEditorStatics.SaveStringArrayToFile
struct UArchonEditorStatics_SaveStringArrayToFile_Params
{
	class FString                                      SaveDirectory;                                            // (Parm, ZeroConstructor)
	class FString                                      FileName;                                                 // (Parm, ZeroConstructor)
	TArray<class FString>                              SaveText;                                                 // (Parm, ZeroConstructor)
	bool                                               AllowOverWriting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Append;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonEditorStatics.LoadStringArrayFromFile
struct UArchonEditorStatics_LoadStringArrayFromFile_Params
{
	TArray<class FString>                              StringArray;                                              // (Parm, OutParm, ZeroConstructor)
	int                                                ArraySize;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class FString                                      FullFilePath;                                             // (Parm, ZeroConstructor)
	bool                                               ExcludeEmptyLines;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFeatureFlagBlueprintLibrary.IsLocalFeatureEnabled
struct UArchonFeatureFlagBlueprintLibrary_IsLocalFeatureEnabled_Params
{
	class UClass*                                      Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFeatureFlagBlueprintLibrary.IsFeatureEnabledWorldContext
struct UArchonFeatureFlagBlueprintLibrary_IsFeatureEnabledWorldContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFeatureFlagBlueprintLibrary.IsFeatureEnabled
struct UArchonFeatureFlagBlueprintLibrary_IsFeatureEnabled_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.UnblockPlayerNamed
struct UArchonFriends_UnblockPlayerNamed_Params
{
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.RemoveFriendNamed
struct UArchonFriends_RemoveFriendNamed_Params
{
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.RemoveFriend
struct UArchonFriends_RemoveFriend_Params
{
	struct FArchonFriend                               Friend;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.ReadRecentPlayers
struct UArchonFriends_ReadRecentPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.ReadFriendsList
struct UArchonFriends_ReadFriendsList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.ReadBlockedPlayersList
struct UArchonFriends_ReadBlockedPlayersList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.IsRecentPlayersReady
struct UArchonFriends_IsRecentPlayersReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.IsFriendsListReady
struct UArchonFriends_IsFriendsListReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.IsFriendFromName
struct UArchonFriends_IsFriendFromName_Params
{
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.IsFriendConnectable
struct UArchonFriends_IsFriendConnectable_Params
{
	struct FArchonFriend                               Friend;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.IsFriend
struct UArchonFriends_IsFriend_Params
{
	struct FArchonRecentPlayer                         Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.IsConnected
struct UArchonFriends_IsConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.IsBlockedPlayersReady
struct UArchonFriends_IsBlockedPlayersReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.IsBlocked
struct UArchonFriends_IsBlocked_Params
{
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.GetRecentPlayers
struct UArchonFriends_GetRecentPlayers_Params
{
	TArray<struct FArchonRecentPlayer>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonFriends.GetPresence
struct UArchonFriends_GetPresence_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FArchonPresence                             Presence;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.GetFriendsList
struct UArchonFriends_GetFriendsList_Params
{
	TArray<struct FArchonFriend>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonFriends.GetBlockedPlayersList
struct UArchonFriends_GetBlockedPlayersList_Params
{
	TArray<struct FArchonBlockedPlayer>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonFriends.BreakArchonRecentPlayer
struct UArchonFriends_BreakArchonRecentPlayer_Params
{
	struct FArchonRecentPlayer                         InPlayer;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FDateTime                                   LastSeen;                                                 // (Parm, OutParm)
};

// Function Archon.ArchonFriends.BreakArchonFriend
struct UArchonFriends_BreakArchonFriend_Params
{
	struct FArchonFriend                               InFriend;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (Parm, OutParm)
};

// Function Archon.ArchonFriends.BreakArchonBlockedPlayer
struct UArchonFriends_BreakArchonBlockedPlayer_Params
{
	struct FArchonBlockedPlayer                        InPlayer;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Name;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (Parm, OutParm)
};

// Function Archon.ArchonFriends.BlockPlayerNamed
struct UArchonFriends_BlockPlayerNamed_Params
{
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.AddFriendNamed
struct UArchonFriends_AddFriendNamed_Params
{
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFriends.AddFriend
struct UArchonFriends_AddFriend_Params
{
	struct FArchonRecentPlayer                         Player;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonFunctionalUtility.WaitForPostLoad
struct UArchonFunctionalUtility_WaitForPostLoad_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Archon.ArchonFunctionalUtility.LogGameplayTagsAbilitiesAndEffects
struct UArchonFunctionalUtility_LogGameplayTagsAbilitiesAndEffects_Params
{
	class AActor*                                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonFunctionalUtility.IsValidAssetPackage
struct UArchonFunctionalUtility_IsValidAssetPackage_Params
{
	class FString                                      AssetPath;                                                // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.UpdateSubtitle
struct UArchonGameInstance_UpdateSubtitle_Params
{
	struct FText                                       Text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.SetShouldShowHitFXForRemoteClients
struct UArchonGameInstance_SetShouldShowHitFXForRemoteClients_Params
{
	bool                                               Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.SetDisconnectError
struct UArchonGameInstance_SetDisconnectError_Params
{
	struct FText                                       ErrorText;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameInstance.LookupCellCatalogRow
struct UArchonGameInstance_LookupCellCatalogRow_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FCellCatalogTableData                       OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.GetShouldShowHitFXForRemoteClients
struct UArchonGameInstance_GetShouldShowHitFXForRemoteClients_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.GetGlobalLoadingDispatcher
struct UArchonGameInstance_GetGlobalLoadingDispatcher_Params
{
	class UArchonLoadingDispatch*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.GetGlobalEventDispatcher
struct UArchonGameInstance_GetGlobalEventDispatcher_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.GetCellExtractionCost
struct UArchonGameInstance_GetCellExtractionCost_Params
{
	EItemRarityLevelType                               CellRarity;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FItemAmountPair>                     Costs;                                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.GetBuildInfo
struct UArchonGameInstance_GetBuildInfo_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameInstance.DisplayLoadingScreen
struct UArchonGameInstance_DisplayLoadingScreen_Params
{
	TEnumAsByte<ELoadScreenStyle>                      LoadScreenStyle;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.CloseLoadingScreen
struct UArchonGameInstance_CloseLoadingScreen_Params
{
};

// Function Archon.ArchonGameInstance.ClearDisconnectError
struct UArchonGameInstance_ClearDisconnectError_Params
{
};

// Function Archon.ArchonGameInstance.AreSubtitlesEnabled
struct UArchonGameInstance_AreSubtitlesEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameInstance.AddLocalizedTextTokenSubstitution
struct UArchonGameInstance_AddLocalizedTextTokenSubstitution_Params
{
	class FString                                      Tag;                                                      // (Parm, ZeroConstructor)
	TScriptInterface<class UArchonTokenSubstitutionInterface> Interface;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameMode.ReturnToCityHost
struct AArchonGameMode_ReturnToCityHost_Params
{
};

// Function Archon.ArchonGameMode.GetMonsterClass
struct AArchonGameMode_GetMonsterClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameMode.GetAtmosphereClass
struct AArchonGameMode_GetAtmosphereClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameMode_Menu.ShutdownGame
struct AArchonGameMode_Menu_ShutdownGame_Params
{
};

// Function Archon.ArchonGameMode_Menu.ServerTravel
struct AArchonGameMode_Menu_ServerTravel_Params
{
	class FString                                      URL;                                                      // (Parm, ZeroConstructor)
};

// Function Archon.ArchonGameplayStatics.UseHolidayBuildNewGameFlow
struct UArchonGameplayStatics_UseHolidayBuildNewGameFlow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.UpdateComponentLocationFromWorld
struct UArchonGameplayStatics_UpdateComponentLocationFromWorld_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.UnpackRankedCellEffectsBP
struct UArchonGameplayStatics_UnpackRankedCellEffectsBP_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppliedCellEffectCounter>           CellEffectsList;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FAppliedCellEffectCounter>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.ToString
struct UArchonGameplayStatics_ToString_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.SLessThan
struct UArchonGameplayStatics_SLessThan_Params
{
	class FString                                      StringA;                                                  // (Parm, ZeroConstructor)
	class FString                                      StringB;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.SGreaterThan
struct UArchonGameplayStatics_SGreaterThan_Params
{
	class FString                                      StringA;                                                  // (Parm, ZeroConstructor)
	class FString                                      StringB;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.SetShapeComponentAreaClass
struct UArchonGameplayStatics_SetShapeComponentAreaClass_Params
{
	class UShapeComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      AreaClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.SetResistanceDeltaByType
struct UArchonGameplayStatics_SetResistanceDeltaByType_Params
{
	struct FDamageEventData                            DamageData;                                               // (Parm, OutParm, ReferenceParm)
	EElementType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.SetPreMitigationDamageByType
struct UArchonGameplayStatics_SetPreMitigationDamageByType_Params
{
	struct FDamageEventData                            DamageData;                                               // (Parm, OutParm, ReferenceParm)
	EElementType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.SetPostResistDamageByType
struct UArchonGameplayStatics_SetPostResistDamageByType_Params
{
	struct FDamageEventData                            DamageData;                                               // (Parm, OutParm, ReferenceParm)
	EElementType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.SetMultiplierByType
struct UArchonGameplayStatics_SetMultiplierByType_Params
{
	struct FDamageEventData                            DamageData;                                               // (Parm, OutParm, ReferenceParm)
	EElementType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.SetLevelSequenceAnimTrackActive
struct UArchonGameplayStatics_SetLevelSequenceAnimTrackActive_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SequenceActor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimSequence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.SetBoneTranslationRetargetingMode
struct UArchonGameplayStatics_SetBoneTranslationRetargetingMode_Params
{
	class USkeleton*                                   Skeleton;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BoneIndex;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneTranslationRetargetingMode>       NewRetargetingMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChildrenToo;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.SerializeStructForDataTable
struct UArchonGameplayStatics_SerializeStructForDataTable_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FStubStruct                                 CustomStruct;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.ResetSequenceActors
struct UArchonGameplayStatics_ResetSequenceActors_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ResetDynamics
struct UArchonGameplayStatics_ResetDynamics_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ReplaceSequenceActor
struct UArchonGameplayStatics_ReplaceSequenceActor_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ActorToReplace;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ClassOfActorToReplace;                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ReplaceLevelSequenceAnim
struct UArchonGameplayStatics_ReplaceLevelSequenceAnim_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SequenceActor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AnimSequenceToReplace;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           NewAnimSequence;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.RegexSearch
struct UArchonGameplayStatics_RegexSearch_Params
{
	class FString                                      Input;                                                    // (Parm, ZeroConstructor)
	class FString                                      Pattern;                                                  // (Parm, ZeroConstructor)
	TArray<struct FArchonRegexMatch>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.ProjectPointToNavigationForActor
struct UArchonGameplayStatics_ProjectPointToNavigationForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ProjectedPoint;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     QueryExtent;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.PathHitsNavMesh
struct UArchonGameplayStatics_PathHitsNavMesh_Params
{
	class FString                                      Identifier;                                               // (Parm, ZeroConstructor)
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             Path;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               WorldSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutHitPoint;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               OutUsesNavLinkTraversal;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutPathPercentageBeforeHit;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               OutFoundNavMesh;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ParentActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class ANavigationData*                             NavData;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     QueryExtent;                                              // (ConstParm, Parm, IsPlainOldData)
	bool                                               bUseNavlinkSegments;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DebugLifetime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.PassesQuestRequirements
struct UArchonGameplayStatics_PassesQuestRequirements_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuestRequirement>                   Requirements;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.MakeOutgoingGameplayEffectSpecForActor
struct UArchonGameplayStatics_MakeOutgoingGameplayEffectSpecForActor_Params
{
	class UGameplayAbility*                            GameplayAbility;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.IsVisualLoggerPaused
struct UArchonGameplayStatics_IsVisualLoggerPaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.IsShipping
struct UArchonGameplayStatics_IsShipping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.IsPlayInEditor
struct UArchonGameplayStatics_IsPlayInEditor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.IsLocalPlayerCharacterId
struct UArchonGameplayStatics_IsLocalPlayerCharacterId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      CharacterId;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.IsInEditor
struct UArchonGameplayStatics_IsInEditor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.IsGuildLeader
struct UArchonGameplayStatics_IsGuildLeader_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.IsGamepadKey
struct UArchonGameplayStatics_IsGamepadKey_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetWorldLocationFromComponent
struct UArchonGameplayStatics_GetWorldLocationFromComponent_Params
{
	struct FHitResult                                  InHit;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetWorldDeltaSeconds
struct UArchonGameplayStatics_GetWorldDeltaSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetVisualLoggerScrubTime
struct UArchonGameplayStatics_GetVisualLoggerScrubTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetTotalWeaponPower
struct UArchonGameplayStatics_GetTotalWeaponPower_Params
{
	class AArchonWeapon*                               Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Upgradeable*            InvItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetTagForPhysicalType
struct UArchonGameplayStatics_GetTagForPhysicalType_Params
{
	EPhysicalType                                      PhysicalType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetTagForElement
struct UArchonGameplayStatics_GetTagForElement_Params
{
	EElementType                                       ElementType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetStructPropertyNames
struct UArchonGameplayStatics_GetStructPropertyNames_Params
{
	class UScriptStruct*                               Struct;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetStructFullPropertyName
struct UArchonGameplayStatics_GetStructFullPropertyName_Params
{
	class UScriptStruct*                               Struct;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SimplePropertyName;                                       // (Parm, ZeroConstructor)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetSavedBoneTransform
struct UArchonGameplayStatics_GetSavedBoneTransform_Params
{
	class UArchonAnimInstance*                         AnimInstance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CachedPoseName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetResistanceDeltaByType
struct UArchonGameplayStatics_GetResistanceDeltaByType_Params
{
	struct FDamageEventData                            DamageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EElementType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetRefPoseBoneTransform
struct UArchonGameplayStatics_GetRefPoseBoneTransform_Params
{
	class USkeleton*                                   Skeleton;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPrimaryPhysicalTypeFromTags
struct UArchonGameplayStatics_GetPrimaryPhysicalTypeFromTags_Params
{
	class UAbilitySystemComponent*                     ASC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPhysicalType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPrimaryPhysicalTypeFromTagContainer
struct UArchonGameplayStatics_GetPrimaryPhysicalTypeFromTagContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	EPhysicalType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPrimaryElementalTypeFromTags
struct UArchonGameplayStatics_GetPrimaryElementalTypeFromTags_Params
{
	class UAbilitySystemComponent*                     ASC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EElementType                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPrimaryElementalTypeFromTagContainer
struct UArchonGameplayStatics_GetPrimaryElementalTypeFromTagContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	EElementType                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPreMitigationDamageByType
struct UArchonGameplayStatics_GetPreMitigationDamageByType_Params
{
	struct FDamageEventData                            DamageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EElementType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPostResistDamageByType
struct UArchonGameplayStatics_GetPostResistDamageByType_Params
{
	struct FDamageEventData                            DamageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EElementType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPlayerStatesAndCharacters
struct UArchonGameplayStatics_GetPlayerStatesAndCharacters_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeBots;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AArchonPlayerState*>                  PlayerStates;                                             // (Parm, OutParm, ZeroConstructor)
	TArray<class AArchonCharacter*>                    PlayerCharacters;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonGameplayStatics.GetPlayerStateFromPlayerName
struct UArchonGameplayStatics_GetPlayerStateFromPlayerName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	class APlayerState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPlayerStateFromNetId
struct UArchonGameplayStatics_GetPlayerStateFromNetId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            PlayerNetId;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class APlayerState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPlayerFromCharacterId
struct UArchonGameplayStatics_GetPlayerFromCharacterId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      CharacterId;                                              // (Parm, ZeroConstructor)
	class AArchonPlayerController*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPathCostForActor
struct UArchonGameplayStatics_GetPathCostForActor_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PathStart;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PathEnd;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              PathCost;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENavigationQueryResult>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetPartyFinder
struct UArchonGameplayStatics_GetPartyFinder_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonPartyFinder*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetOuter
struct UArchonGameplayStatics_GetOuter_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetOnlineSessionId
struct UArchonGameplayStatics_GetOnlineSessionId_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetObjectFullPath
struct UArchonGameplayStatics_GetObjectFullPath_Params
{
	class UObject*                                     TheObject;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetNotifyStartTime
struct UArchonGameplayStatics_GetNotifyStartTime_Params
{
	struct FAnimNotifyEvent                            Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetNotifyStartAndEnd
struct UArchonGameplayStatics_GetNotifyStartAndEnd_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NotifyType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutStartTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutEndTime;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetNotifyEndTime
struct UArchonGameplayStatics_GetNotifyEndTime_Params
{
	struct FAnimNotifyEvent                            Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetNotifiesOfClass
struct UArchonGameplayStatics_GetNotifiesOfClass_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NotifyType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAnimNotifyEvent>                    OutNotifies;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonGameplayStatics.GetNetIdFromPlayerState
struct UArchonGameplayStatics_GetNetIdFromPlayerState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetNetIdFromPlayerName
struct UArchonGameplayStatics_GetNetIdFromPlayerName_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetMultiplierByType
struct UArchonGameplayStatics_GetMultiplierByType_Params
{
	struct FDamageEventData                            DamageData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EElementType                                       Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetMontagesForObject
struct UArchonGameplayStatics_GetMontagesForObject_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        Montages;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonGameplayStatics.GetLevelSequenceActorsOfClass
struct UArchonGameplayStatics_GetLevelSequenceActorsOfClass_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ULevelSequence*                              LevelSequence;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ActorClass;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetLevelSequenceActorAnimations
struct UArchonGameplayStatics_GetLevelSequenceActorAnimations_Params
{
	class ULevelSequencePlayer*                        LevelSequencePlayer;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SequenceActor;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimSequenceBase*>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetHunts
struct UArchonGameplayStatics_GetHunts_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UHuntCatalog*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetHTTPEventLogStats
struct UArchonGameplayStatics_GetHTTPEventLogStats_Params
{
	struct FHTTPEventStats                             ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Archon.ArchonGameplayStatics.GetGameTimeInSeconds
struct UArchonGameplayStatics_GetGameTimeInSeconds_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetGameMode
struct UArchonGameplayStatics_GetGameMode_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AGameModeBase*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetFriendsClient
struct UArchonGameplayStatics_GetFriendsClient_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonFriends*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetDisplayName
struct UArchonGameplayStatics_GetDisplayName_Params
{
	struct FKey                                        Key;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetDataTableRowNamesForStruct
struct UArchonGameplayStatics_GetDataTableRowNamesForStruct_Params
{
	struct FStubStruct                                 CustomStruct;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetDataTableRowFromName_Generic
struct UArchonGameplayStatics_GetDataTableRowFromName_Generic_Params
{
	class UDataTable*                                  Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTableRowBase                               RowTypeStruct;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTableRowBase                               OutRow;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetCurveValueAtTime
struct UArchonGameplayStatics_GetCurveValueAtTime_Params
{
	class UAnimSequence*                               Sequence;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetCurveTimeAtValue
struct UArchonGameplayStatics_GetCurveTimeAtValue_Params
{
	class UAnimSequenceBase*                           Sequence;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitValue;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurveName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetContentDate
struct UArchonGameplayStatics_GetContentDate_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetContentChangelist
struct UArchonGameplayStatics_GetContentChangelist_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetCombinedRecipe
struct UArchonGameplayStatics_GetCombinedRecipe_Params
{
	struct FUpgradeableItemRecipeTableData             RecipePatternTableRow;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FUpgradeableItemRecipePerLevel>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetClassFromStringClassReference
struct UArchonGameplayStatics_GetClassFromStringClassReference_Params
{
	struct FStringClassReference                       ClassName;                                                // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetChildBonesByIndex
struct UArchonGameplayStatics_GetChildBonesByIndex_Params
{
	int                                                ParentBone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetChildBones
struct UArchonGameplayStatics_GetChildBones_Params
{
	struct FName                                       ParentBone;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetChatClient
struct UArchonGameplayStatics_GetChatClient_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UChatClient*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetChangelist
struct UArchonGameplayStatics_GetChangelist_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetCellSlotsForCellContainerData
struct UArchonGameplayStatics_GetCellSlotsForCellContainerData_Params
{
	EUpgradeableItemLevel                              ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayFabCellContainerCatalogTableData       CellContainerData;                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FCellSlot>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetBoneTransform
struct UArchonGameplayStatics_GetBoneTransform_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBoneSpaces>                           BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetBinaryChangelist
struct UArchonGameplayStatics_GetBinaryChangelist_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetArchonPersistentUser
struct UArchonGameplayStatics_GetArchonPersistentUser_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonPersistentUser*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetArchonLocalPlayer
struct UArchonGameplayStatics_GetArchonLocalPlayer_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonLocalPlayer*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetArchonGameUserSettings
struct UArchonGameplayStatics_GetArchonGameUserSettings_Params
{
	class UArchonGameUserSettings*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetArchonCatalog
struct UArchonGameplayStatics_GetArchonCatalog_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonCatalog*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetApproximateRotatedTranslationFromMontage
struct UArchonGameplayStatics_GetApproximateRotatedTranslationFromMontage_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DesiredRotation;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Out;                                                      // (Parm, OutParm, IsPlainOldData)
	float                                              StepSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.GetAllPermanentCellEffects
struct UArchonGameplayStatics_GetAllPermanentCellEffects_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FPlayFabCellContainerCatalogTableData       CatalogRowData;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	EUpgradeableItemLevel                              ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppliedCellEffectCounter>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.GetAllowedRegions
struct UArchonGameplayStatics_GetAllowedRegions_Params
{
	TArray<class FString>                              OutRegions;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonGameplayStatics.GetAdjacentBones
struct UArchonGameplayStatics_GetAdjacentBones_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartBone;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               AdjacentBones;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonGameplayStatics.FindMontageWithMatchingRootMotion
struct UArchonGameplayStatics_FindMontageWithMatchingRootMotion_Params
{
	TArray<class UAnimMontage*>                        Montages;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     TraversalVector;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ExtractRootMotionFromMontage
struct UArchonGameplayStatics_ExtractRootMotionFromMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ComponentGetDistanceToCollision
struct UArchonGameplayStatics_ComponentGetDistanceToCollision_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestPointOnCollision;                                  // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.CompareStrings
struct UArchonGameplayStatics_CompareStrings_Params
{
	class FString                                      StringA;                                                  // (Parm, ZeroConstructor)
	class FString                                      StringB;                                                  // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.CombineRecipes
struct UArchonGameplayStatics_CombineRecipes_Params
{
	TArray<struct FUpgradeableItemRecipePerLevel>      Recipe1;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUpgradeableItemRecipePerLevel>      Recipe2;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FUpgradeableItemRecipePerLevel>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.CallConditionMemberFunction
struct UArchonGameplayStatics_CallConditionMemberFunction_Params
{
	class UObject*                                     Base;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       FunctionName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Context;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ArchonLogText
struct UArchonGameplayStatics_ArchonLogText_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	struct FName                                       LogCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ArchonLogLocation
struct UArchonGameplayStatics_ArchonLogLocation_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                ObjectColor;                                              // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LogCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ArchonLogLine
struct UArchonGameplayStatics_ArchonLogLine_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                ObjectColor;                                              // (Parm, IsPlainOldData)
	struct FName                                       LogCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ArchonLogCircle
struct UArchonGameplayStatics_ArchonLogCircle_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	struct FName                                       LogCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ArchonLogBox
struct UArchonGameplayStatics_ArchonLogBox_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBox                                        BoxShape;                                                 // (Parm, IsPlainOldData)
	class FString                                      Text;                                                     // (Parm, ZeroConstructor)
	struct FLinearColor                                ObjectColor;                                              // (Parm, IsPlainOldData)
	struct FName                                       LogCategory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ApplyRootMotionConstantForce
struct UArchonGameplayStatics_ApplyRootMotionConstantForce_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ERootMotionAccumulateMode                          AccumulateMode;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RootMotionSourceID;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ApplyDamageRowBonusesToSpec
struct UArchonGameplayStatics_ApplyDamageRowBonusesToSpec_Params
{
	struct FGameplayEffectSpec                         GameplayEffectSpec;                                       // (Parm, OutParm, ReferenceParm)
	struct FDamageTableBonuses                         DamageTableBonuses;                                       // (Parm, OutParm)
	EPhysicalType                                      AttackPhysicalType;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EElementType                                       AttackElementalType;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonTruePointDamage
struct UArchonGameplayStatics_ApplyArchonTruePointDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TrueDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitFromDirection;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonTrueDamage
struct UArchonGameplayStatics_ApplyArchonTrueDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TrueDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonRadialTrueDamage
struct UArchonGameplayStatics_ApplyArchonRadialTrueDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TrueDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageFalloffCurve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              IgnoreClasses;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonRadialElementalDamage
struct UArchonGameplayStatics_ApplyArchonRadialElementalDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlameDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrostDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShockDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UmbralDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadiantDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalDamage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageFalloffCurve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              IgnoreClasses;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonRadialDamageFromTable
struct UArchonGameplayStatics_ApplyArchonRadialDamageFromTable_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageTable;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageFalloffCurve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              IgnoreClasses;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonRadialDamage
struct UArchonGameplayStatics_ApplyArchonRadialDamage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TrueDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlameDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrostDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShockDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UmbralDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadiantDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalDamage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DamageRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageFalloffCurve;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              IgnoreActors;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UClass*>                              IgnoreClasses;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ECollisionChannel>                     DamagePreventionChannel;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonPointDamageFromTable
struct UArchonGameplayStatics_ApplyArchonPointDamageFromTable_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageTable;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     HitFromDirection;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DamageScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonElementalPointDamage
struct UArchonGameplayStatics_ApplyArchonElementalPointDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlameDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrostDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShockDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UmbralDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadiantDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalDamage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitFromDirection;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameplayStatics.ApplyArchonElementalDamage
struct UArchonGameplayStatics_ApplyArchonElementalDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BaseDamage;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlameDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FrostDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShockDamage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              UmbralDamage;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadiantDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RawElementalDamage;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageTypeClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FArchonExtendedDamageInfo                   ExtendedDamageInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonGameplayStatics.AddCellSlotToArrayBP
struct UArchonGameplayStatics_AddCellSlotToArrayBP_Params
{
	struct FCellSlot                                   CellSlot;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TArray<struct FCellSlot>                           CellSlots;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FCellSlot>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.AddCellEffectToArrayBP
struct UArchonGameplayStatics_AddCellEffectToArrayBP_Params
{
	struct FDataTableRowHandle                         CellEffect;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              MagnitudeIncrease;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RankIncrease;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FAppliedCellEffectCounter>           EquippedCellEffects;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FAppliedCellEffectCounter>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.AddCellEffectsToArrayBP
struct UArchonGameplayStatics_AddCellEffectsToArrayBP_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       CellRowName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FAppliedCellEffectCounter>           EquippedCellEffects;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FAppliedCellEffectCounter>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameplayStatics.ActorLineTraceSingle
struct UArchonGameplayStatics_ActorLineTraceSingle_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTraceComplex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameplayStatics.ActorGetDistanceToCollision
struct UArchonGameplayStatics_ActorGetDistanceToCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClosestPointOnCollision;                                  // (Parm, OutParm, IsPlainOldData)
	float                                              OutDistanceToCollision;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DrawDebugType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonMath.PointBoxIntersection
struct UArchonMath_PointBoxIntersection_Params
{
	struct FBox                                        Box;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               IsPointInside;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonMath.LowPassFilter
struct UArchonMath_LowPassFilter_Params
{
	struct FRotator                                    Sample;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    PreviousValue;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              TimeConstant;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMath.LineBoxIntersection
struct UArchonMath_LineBoxIntersection_Params
{
	struct FBox                                        Box;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               DoesLineIntersect;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     IntersectionPoint;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function Archon.ArchonMath.LazyEvalStatistic_SetValueAndRate
struct UArchonMath_LazyEvalStatistic_SetValueAndRate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLazyEvalStatistic                          statistic;                                                // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLazyEvalStatistic                          statisticOut;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonMath.LazyEvalStatistic_SetValue
struct UArchonMath_LazyEvalStatistic_SetValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLazyEvalStatistic                          statistic;                                                // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLazyEvalStatistic                          statisticOut;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              NewValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonMath.LazyEvalStatistic_SetRate
struct UArchonMath_LazyEvalStatistic_SetRate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLazyEvalStatistic                          statistic;                                                // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLazyEvalStatistic                          statisticOut;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              newRate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonMath.LazyEvalStatistic_SetMinMax
struct UArchonMath_LazyEvalStatistic_SetMinMax_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLazyEvalStatistic                          statistic;                                                // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FLazyEvalStatistic                          statisticOut;                                             // (Parm, OutParm, IsPlainOldData)
	float                                              newMin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              newMax;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonMath.LazyEvalStatistic_GetValue
struct UArchonMath_LazyEvalStatistic_GetValue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLazyEvalStatistic                          statistic;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMath.LazyEvalStatistic_GetRate
struct UArchonMath_LazyEvalStatistic_GetRate_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLazyEvalStatistic                          statistic;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMath.GetBoxCenterAndExtents
struct UArchonMath_GetBoxCenterAndExtents_Params
{
	struct FBox                                        Box;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Center;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Extents;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function Archon.ArchonMath.CreateBoxFromPoints
struct UArchonMath_CreateBoxFromPoints_Params
{
	TArray<struct FVector>                             Points;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMath.CreateBox
struct UArchonMath_CreateBox_Params
{
	struct FVector                                     Offset;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Extents;                                                  // (Parm, IsPlainOldData)
	struct FBox                                        ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMath.ClampNormalizedVector
struct UArchonMath_ClampNormalizedVector_Params
{
	struct FVector                                     V;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Middle;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              HalfAngleDeg;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameState.ToggleNameplateVisibility
struct AArchonGameState_ToggleNameplateVisibility_Params
{
};

// Function Archon.ArchonGameState.SetNameplateVisibility
struct AArchonGameState_SetNameplateVisibility_Params
{
	bool                                               Visible;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonGameState.K2_IsMatchInProgress
struct AArchonGameState_K2_IsMatchInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameState.K2_HasMatchStarted
struct AArchonGameState_K2_HasMatchStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameState.K2_HasMatchEnded
struct AArchonGameState_K2_HasMatchEnded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameState.K2_HandleMatchIsWaitingToStart
struct AArchonGameState_K2_HandleMatchIsWaitingToStart_Params
{
};

// Function Archon.ArchonGameState.K2_HandleMatchHasStarted
struct AArchonGameState_K2_HandleMatchHasStarted_Params
{
};

// Function Archon.ArchonGameState.K2_HandleMatchHasEnded
struct AArchonGameState_K2_HandleMatchHasEnded_Params
{
};

// Function Archon.ArchonGameState.K2_HandleLeavingMap
struct AArchonGameState_K2_HandleLeavingMap_Params
{
};

// Function Archon.ArchonGameState.GetActivePlayers
struct AArchonGameState_GetActivePlayers_Params
{
	TArray<class APlayerState*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGameState.FindPlayerByNetId
struct AArchonGameState_FindPlayerByNetId_Params
{
	struct FUniqueNetIdRepl                            NetId;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class APlayerState*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGameState.AreNameplatesVisible
struct AArchonGameState_AreNameplatesVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonGuild.OnRep_MemberList
struct AArchonGuild_OnRep_MemberList_Params
{
};

// Function Archon.ArchonGuild.OnRep_InviteList
struct AArchonGuild_OnRep_InviteList_Params
{
};

// Function Archon.ArchonGuild.GetSortedMemberList
struct AArchonGuild_GetSortedMemberList_Params
{
	TArray<struct FArchonGuildMember>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGuild.GetSortedInviteList
struct AArchonGuild_GetSortedInviteList_Params
{
	TArray<struct FArchonGuildInvite>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonGuild.GetGuildMemberInfo
struct AArchonGuild_GetGuildMemberInfo_Params
{
	class FString                                      CharacterId;                                              // (Parm, ZeroConstructor)
	struct FArchonGuildMember                          MemberInfo;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonHeal.Execute
struct UArchonHeal_Execute_Params
{
	struct FGameplayEffectCustomExecutionParameters    ExecutionParams;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput;                                       // (Parm, OutParm)
};

// Function Archon.ArchonHealthAttributeSet.OnRep_CurrentHealth
struct UArchonHealthAttributeSet_OnRep_CurrentHealth_Params
{
};

// Function Archon.ArchonHUD.ShowDebug
struct AArchonHUD_ShowDebug_Params
{
	struct FName                                       DebugType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonHUD.PreviousDebugTarget
struct AArchonHUD_PreviousDebugTarget_Params
{
};

// Function Archon.ArchonHUD.OnSurveyTriggered
struct AArchonHUD_OnSurveyTriggered_Params
{
	class FString                                      SurveyURL;                                                // (Parm, ZeroConstructor)
};

// Function Archon.ArchonHUD.NextDebugTarget
struct AArchonHUD_NextDebugTarget_Params
{
};

// Function Archon.ArchonHUD.K2_OnPlayerTalkingStateChanged
struct AArchonHUD_K2_OnPlayerTalkingStateChanged_Params
{
	int                                                TalkingPlayerId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTalking;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonHUD.K2_OnHUDVisibityChanged
struct AArchonHUD_K2_OnHUDVisibityChanged_Params
{
	bool                                               PreviousVisibility;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonHUD.DebugBone
struct AArchonHUD_DebugBone_Params
{
	struct FName                                       Bone;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonHUD.ArchonCycleShowDebug
struct AArchonHUD_ArchonCycleShowDebug_Params
{
};

// Function Archon.ArchonInteractionComponent.UnhighlightInteraction
struct UArchonInteractionComponent_UnhighlightInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Archon.ArchonInteractionComponent.OnUserStartedInteraction__DelegateSignature
struct UArchonInteractionComponent_OnUserStartedInteraction__DelegateSignature_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Archon.ArchonInteractionComponent.OnUserCompletedInteraction__DelegateSignature
struct UArchonInteractionComponent_OnUserCompletedInteraction__DelegateSignature_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction Archon.ArchonInteractionComponent.OnUserCanceledInteraction__DelegateSignature
struct UArchonInteractionComponent_OnUserCanceledInteraction__DelegateSignature_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonInteractionComponent.HighlightInteraction
struct UArchonInteractionComponent_HighlightInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonInteractionComponent.GetPlayerInteractionMontage
struct UArchonInteractionComponent_GetPlayerInteractionMontage_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInteractionComponent.GetNumberOfUsesRemaining
struct UArchonInteractionComponent_GetNumberOfUsesRemaining_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInteractionComponent.GetInteractionDuration
struct UArchonInteractionComponent_GetInteractionDuration_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInteractionComponent.BlueprintCanUserStartInteraction
struct UArchonInteractionComponent_BlueprintCanUserStartInteraction_Params
{
	class UArchonInteractionUserComponent*             User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInteractionUserComponent.StartInteraction
struct UArchonInteractionUserComponent_StartInteraction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInteractionUserComponent.ServerStartInteraction
struct UArchonInteractionUserComponent_ServerStartInteraction_Params
{
	class UArchonInteractionComponent*                 interactionTarget;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonInteractionUserComponent.ServerCancelCurrentInteraction
struct UArchonInteractionUserComponent_ServerCancelCurrentInteraction_Params
{
	bool                                               playInterruptMontage;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInteractionUserComponent.ClientInteractionRestarted
struct UArchonInteractionUserComponent_ClientInteractionRestarted_Params
{
};

// Function Archon.ArchonInteractionUserComponent.ClientInteractionFailedToStart
struct UArchonInteractionUserComponent_ClientInteractionFailedToStart_Params
{
};

// Function Archon.ArchonInteractionUserComponent.ClientInteractionCompleted
struct UArchonInteractionUserComponent_ClientInteractionCompleted_Params
{
};

// Function Archon.ArchonInteractionUserComponent.CancelCurrentInteraction
struct UArchonInteractionUserComponent_CancelCurrentInteraction_Params
{
	bool                                               playInterruptMontage;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInteractionUserComponent.BlueprintCanStartInteraction
struct UArchonInteractionUserComponent_BlueprintCanStartInteraction_Params
{
	class UArchonInteractionComponent*                 interactionTarget;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInterruptibleTimeout.WaitForTriggerOrTimeout
struct UArchonInterruptibleTimeout_WaitForTriggerOrTimeout_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Archon.ArchonInterruptibleTimeout.TriggerInterrupt
struct UArchonInterruptibleTimeout_TriggerInterrupt_Params
{
};

// Function Archon.ArchonInterruptibleTimeout.IsInterruptTriggered
struct UArchonInterruptibleTimeout_IsInterruptTriggered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInterruptibleTimeout.CreateInterruptibleTimeout
struct UArchonInterruptibleTimeout_CreateInterruptibleTimeout_Params
{
	class UArchonInterruptibleTimeout*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.UpgradeItem
struct AArchonInventory_UpgradeItem_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	struct FCraftingPayload                            Payload;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	struct FName                                       ProgressTrackName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.UnpackItems
struct AArchonInventory_UnpackItems_Params
{
	TArray<struct FGiveItemInfo>                       ItemList;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FGiveItemInfo>                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventory.UnlockContainer
struct AArchonInventory_UnlockContainer_Params
{
	class FString                                      ContainerItemInstanceId;                                  // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	class FString                                      BoostTokenId;                                             // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.UnequipItem
struct AArchonInventory_UnequipItem_Params
{
	class UArchonInventoryItem*                        InventoryItem;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.SubtractVirtualCurrency
struct AArchonInventory_SubtractVirtualCurrency_Params
{
	EPlayFabCatalogCurrency                            Currency;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.SpendDust
struct AArchonInventory_SpendDust_Params
{
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerUpgradeItem
struct AArchonInventory_ServerUpgradeItem_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	struct FCraftingPayload                            Payload;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	struct FName                                       ProgressTrackName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.ServerUnlockContainer
struct AArchonInventory_ServerUnlockContainer_Params
{
	class FString                                      ContainerItemInstanceId;                                  // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	class FString                                      BoostTokenId;                                             // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerSubtractVirtualCurrency
struct AArchonInventory_ServerSubtractVirtualCurrency_Params
{
	EPlayFabCatalogCurrency                            VirtualCurrency;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerSpendDust
struct AArchonInventory_ServerSpendDust_Params
{
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerSetTransmogCatalogID
struct AArchonInventory_ServerSetTransmogCatalogID_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerSetDyeConfiguration
struct AArchonInventory_ServerSetDyeConfiguration_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	struct FDyeVariant                                 DyeConfiguration;                                         // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonInventory.ServerRevokeItem
struct AArchonInventory_ServerRevokeItem_Params
{
	uint16_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerRemoveCell
struct AArchonInventory_ServerRemoveCell_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      CellID;                                                   // (Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.ServerRefreshInventory
struct AArchonInventory_ServerRefreshInventory_Params
{
};

// Function Archon.ArchonInventory.ServerPurchaseItemFromStore
struct AArchonInventory_ServerPurchaseItemFromStore_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	class FString                                      StoreID;                                                  // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerPurchaseItemFromCatalog
struct AArchonInventory_ServerPurchaseItemFromCatalog_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerPatronBoost
struct AArchonInventory_ServerPatronBoost_Params
{
	int                                                SelfBoost;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBoost;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.ServerItemCustomDataReplicatedResponse
struct AArchonInventory_ServerItemCustomDataReplicatedResponse_Params
{
	TArray<uint16_t>                                   UpdatedItems;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonInventory.ServerGrantItems
struct AArchonInventory_ServerGrantItems_Params
{
	TArray<struct FGiveItemInfo>                       ItemsToAdd;                                               // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerDustItem
struct AArchonInventory_ServerDustItem_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerCraftItemFromCatalogData
struct AArchonInventory_ServerCraftItemFromCatalogData_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	struct FCraftingPayload                            Payload;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	struct FName                                       ProgressTrackName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.ServerCraftItem
struct AArchonInventory_ServerCraftItem_Params
{
	uint16_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCraftingPayload                            Payload;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerConsumeItem
struct AArchonInventory_ServerConsumeItem_Params
{
	uint16_t                                           InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerClearTransmogCatalogID
struct AArchonInventory_ServerClearTransmogCatalogID_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerChampionBoost
struct AArchonInventory_ServerChampionBoost_Params
{
};

// Function Archon.ArchonInventory.ServerAddVirtualCurrency
struct AArchonInventory_ServerAddVirtualCurrency_Params
{
	EPlayFabCatalogCurrency                            VirtualCurrency;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ServerAddCell
struct AArchonInventory_ServerAddCell_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      CellID;                                                   // (Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.RevokeItem
struct AArchonInventory_RevokeItem_Params
{
	class UArchonInventoryItem*                        InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.PurchaseItemFromStore
struct AArchonInventory_PurchaseItemFromStore_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	class FString                                      StoreID;                                                  // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.PurchaseItemFromCatalog
struct AArchonInventory_PurchaseItemFromCatalog_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.PatronBoost
struct AArchonInventory_PatronBoost_Params
{
	int                                                SelfBoost;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBoost;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.OnRep_ReplicatedItems
struct AArchonInventory_OnRep_ReplicatedItems_Params
{
};

// Function Archon.ArchonInventory.InventoryUpgradeItem
struct AArchonInventory_InventoryUpgradeItem_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.InventorySubtractVirtualCurrency
struct AArchonInventory_InventorySubtractVirtualCurrency_Params
{
	EPlayFabCatalogCurrency                            VirtualCurrency;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.InventoryRevokeItem
struct AArchonInventory_InventoryRevokeItem_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.InventoryPrint
struct AArchonInventory_InventoryPrint_Params
{
};

// Function Archon.ArchonInventory.InventoryGrantItems
struct AArchonInventory_InventoryGrantItems_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.InventoryGrantItem
struct AArchonInventory_InventoryGrantItem_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.InventoryCraftItemFromCatalogData
struct AArchonInventory_InventoryCraftItemFromCatalogData_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.InventoryCraftItem
struct AArchonInventory_InventoryCraftItem_Params
{
	class FString                                      RecipeItemId;                                             // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.InventoryConsumeItem
struct AArchonInventory_InventoryConsumeItem_Params
{
	int                                                ItemIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.InventoryAddVirtualCurrency
struct AArchonInventory_InventoryAddVirtualCurrency_Params
{
	EPlayFabCatalogCurrency                            VirtualCurrency;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.HasReachedMaxLanterns
struct AArchonInventory_HasReachedMaxLanterns_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.HasPatronBoost
struct AArchonInventory_HasPatronBoost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.HasItemFromItemId
struct AArchonInventory_HasItemFromItemId_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.HasItemFromInstanceId
struct AArchonInventory_HasItemFromInstanceId_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.HasChampionBoost
struct AArchonInventory_HasChampionBoost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.GrantItemsWithQuantity
struct AArchonInventory_GrantItemsWithQuantity_Params
{
	TArray<struct FPlayFabCatalogItemQuantity>         ItemsWithQuantity;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.GrantItems
struct AArchonInventory_GrantItems_Params
{
	TArray<class FString>                              ItemIDs;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.GrantItem
struct AArchonInventory_GrantItem_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.GetRecipeComponentsFromCatalog
struct AArchonInventory_GetRecipeComponentsFromCatalog_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	EUpgradeableItemLevel                              ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCatalogRecipeComponent>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventory.GetQuestRequirementsForItem
struct AArchonInventory_GetQuestRequirementsForItem_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	EUpgradeableItemLevel                              ItemLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FQuestRequirement>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventory.GetOtherPlayersWithPatronBoost
struct AArchonInventory_GetOtherPlayersWithPatronBoost_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventory.GetItemFromItemId
struct AArchonInventory_GetItemFromItemId_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	class UArchonInventoryItem*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.GetItemFromInstanceId
struct AArchonInventory_GetItemFromInstanceId_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class UArchonInventoryItem*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.GetItemDustResult
struct AArchonInventory_GetItemDustResult_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventory.GetDustThreshold
struct AArchonInventory_GetDustThreshold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.GetCurrentDust
struct AArchonInventory_GetCurrentDust_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.GetContainerPatronBoostPlayers
struct AArchonInventory_GetContainerPatronBoostPlayers_Params
{
	class FString                                      ContainerItemInstanceId;                                  // (Parm, ZeroConstructor)
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventory.GetContainerCount
struct AArchonInventory_GetContainerCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.EquipItems
struct AArchonInventory_EquipItems_Params
{
	TArray<class UArchonInventoryItem*>                InventoryItems;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonInventory.EquipItem
struct AArchonInventory_EquipItem_Params
{
	class UArchonInventoryItem*                        InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.DoesContainerHaveChampionBoost
struct AArchonInventory_DoesContainerHaveChampionBoost_Params
{
	class FString                                      ContainerItemInstanceId;                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.CraftItemFromCatalogData
struct AArchonInventory_CraftItemFromCatalogData_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	struct FCraftingPayload                            Payload;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	struct FName                                       ProgressTrackName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.CraftItem
struct AArchonInventory_CraftItem_Params
{
	class UArchonInventoryItem*                        RecipeItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCraftingPayload                            Payload;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.ConsumeItem
struct AArchonInventory_ConsumeItem_Params
{
	class UArchonInventoryItem*                        InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ClientItemRemoved
struct AArchonInventory_ClientItemRemoved_Params
{
	TArray<struct FRemovedItemNotification>            RemovedNotification;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonInventory.ClientItemGrantedFromDust
struct AArchonInventory_ClientItemGrantedFromDust_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventory.ClientItemGranted
struct AArchonInventory_ClientItemGranted_Params
{
	TArray<struct FGrantedItemNotification>            GrantedNotification;                                      // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonInventory.ClientItemCustomDataReplicated
struct AArchonInventory_ClientItemCustomDataReplicated_Params
{
	TArray<struct FReplicatedInventoryItemCustomData>  ReplicatedCustomData;                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonInventory.ClientCraftItemComplete
struct AArchonInventory_ClientCraftItemComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventory.ClientContainerUnlocked
struct AArchonInventory_ClientContainerUnlocked_Params
{
	TArray<struct FGrantedItemNotification>            Notifications;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonInventory.ChampionBoost
struct AArchonInventory_ChampionBoost_Params
{
};

// Function Archon.ArchonInventory.CanUpgradeToNewItem
struct AArchonInventory_CanUpgradeToNewItem_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      ItemToUpgradeTo;                                          // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.CanTransmogItem
struct AArchonInventory_CanTransmogItem_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.CanRemoveCell
struct AArchonInventory_CanRemoveCell_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      CellID;                                                   // (Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.CanDustItem
struct AArchonInventory_CanDustItem_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.CanAddCell
struct AArchonInventory_CanAddCell_Params
{
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	class FString                                      CellID;                                                   // (Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventory.AddVirtualCurrency
struct AArchonInventory_AddVirtualCurrency_Params
{
	EPlayFabCatalogCurrency                            Currency;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonInventoryComponent.UnequipItem
struct UArchonInventoryComponent_UnequipItem_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.StartUseItem
struct UArchonInventoryComponent_StartUseItem_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.OnPawnUnPossesed
struct UArchonInventoryComponent_OnPawnUnPossesed_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.OnPawnPossesed
struct UArchonInventoryComponent_OnPawnPossesed_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.OnAbilityCommit
struct UArchonInventoryComponent_OnAbilityCommit_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.InUse
struct UArchonInventoryComponent_InUse_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.GetSlotCount
struct UArchonInventoryComponent_GetSlotCount_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.GetPrecentageTimeToRecharge
struct UArchonInventoryComponent_GetPrecentageTimeToRecharge_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.GetItem
struct UArchonInventoryComponent_GetItem_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonQuickItem*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.GetIcon
struct UArchonInventoryComponent_GetIcon_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.GetCoolDownTime
struct UArchonInventoryComponent_GetCoolDownTime_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.GetCoolDownPercentage
struct UArchonInventoryComponent_GetCoolDownPercentage_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.EquipItem
struct UArchonInventoryComponent_EquipItem_Params
{
	class UClass*                                      Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AbilityLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReplaceExisting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.CanUseItem
struct UArchonInventoryComponent_CanUseItem_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryComponent.CancelUseItem
struct UArchonInventoryComponent_CancelUseItem_Params
{
	struct FName                                       Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem.IsCosmeticOnly
struct UArchonInventoryItem_IsCosmeticOnly_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem.HasTransmog
struct UArchonInventoryItem_HasTransmog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem.HasDefaultDyeConfiguration
struct UArchonInventoryItem_HasDefaultDyeConfiguration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem.GetTransmogID
struct UArchonInventoryItem_GetTransmogID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem.GetDyeConfiguration
struct UArchonInventoryItem_GetDyeConfiguration_Params
{
	struct FDyeVariant                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonInventoryItem.CanTransmog
struct UArchonInventoryItem_CanTransmog_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem.CanChangeDyeConfiguration
struct UArchonInventoryItem_CanChangeDyeConfiguration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem.CanBeTransmogTarget
struct UArchonInventoryItem_CanBeTransmogTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem_CellContainer.GetPermanentCells
struct UArchonInventoryItem_CellContainer_GetPermanentCells_Params
{
	TArray<struct FPermanentCell>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventoryItem_CellContainer.GetCellSlotsForLevel
struct UArchonInventoryItem_CellContainer_GetCellSlotsForLevel_Params
{
	EUpgradeableItemLevel                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCellSlot>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventoryItem_CellContainer.GetCellSlots
struct UArchonInventoryItem_CellContainer_GetCellSlots_Params
{
	TArray<struct FCellSlot>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventoryItem_CellContainer.GetAllPermanentCellEffects
struct UArchonInventoryItem_CellContainer_GetAllPermanentCellEffects_Params
{
	TArray<struct FAppliedCellEffectCounter>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonInventoryItem_Armour.ServerSetTransmogCatalogID
struct UArchonInventoryItem_Armour_ServerSetTransmogCatalogID_Params
{
	struct FName                                       NewTransmogID;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem_Armour.ServerSetDyeColor
struct UArchonInventoryItem_Armour_ServerSetDyeColor_Params
{
	struct FDyeVariant                                 NewDyeConfiguration;                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonInventoryItem_Banner.ServerSetCustomizationData
struct UArchonInventoryItem_Banner_ServerSetCustomizationData_Params
{
	struct FBannerCustomizationItemIDs                 NewCustomizationItemIDs;                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonInventoryItem_Emote.ResolveReference
struct UArchonInventoryItem_Emote_ResolveReference_Params
{
};

// Function Archon.ArchonInventoryItem_Lantern.ServerSetTransmogCatalogID
struct UArchonInventoryItem_Lantern_ServerSetTransmogCatalogID_Params
{
	struct FName                                       NewTransmogID;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonInventoryItem_Weapon.ServerSetTransmogCatalogID
struct UArchonInventoryItem_Weapon_ServerSetTransmogCatalogID_Params
{
	struct FName                                       NewTransmogID;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// DelegateFunction Archon.ArchonInvitationComponent.OnUserRequestedInvitation__DelegateSignature
struct UArchonInvitationComponent_OnUserRequestedInvitation__DelegateSignature_Params
{
	class UArchonInvitationUserComponent*              User;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonLandscapeAccumulation.WriteLevelAccumulationToTexture
struct UArchonLandscapeAccumulation_WriteLevelAccumulationToTexture_Params
{
	class AAccumulation*                               Accumulation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AccumulationTexture;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLandscapeAccumulation.WriteLevelAccumulationToRenderTarget
struct UArchonLandscapeAccumulation_WriteLevelAccumulationToRenderTarget_Params
{
	class AAccumulation*                               Accumulation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      AccumulationRenderTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLandscapeAccumulation.GetLevelAccumulationActor
struct UArchonLandscapeAccumulation_GetLevelAccumulationActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AAccumulation*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLantern.LookupLanternResistanceTableRow
struct AArchonLantern_LookupLanternResistanceTableRow_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLanternResistanceTableData                 OutResistanceTableRow;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLantern.GetLanternSkelMeshPtr
struct AArchonLantern_GetLanternSkelMeshPtr_Params
{
	TAssetPtr<class USkeletalMesh>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonLantern.GetItemInstanceID
struct AArchonLantern_GetItemInstanceID_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonLantern.BP_OnLanternUnEquipped
struct AArchonLantern_BP_OnLanternUnEquipped_Params
{
};

// Function Archon.ArchonLantern.BP_OnLanternEquipped
struct AArchonLantern_BP_OnLanternEquipped_Params
{
};

// Function Archon.ArchonLoadingDispatch.QuestSystemReady
struct UArchonLoadingDispatch_QuestSystemReady_Params
{
};

// Function Archon.ArchonLoadingDispatch.PlayerStateReady
struct UArchonLoadingDispatch_PlayerStateReady_Params
{
};

// Function Archon.ArchonLoadingDispatch.PlayerControllerReady
struct UArchonLoadingDispatch_PlayerControllerReady_Params
{
};

// Function Archon.ArchonLoadingDispatch.PlayerCharacterReady
struct UArchonLoadingDispatch_PlayerCharacterReady_Params
{
};

// Function Archon.ArchonLoadingDispatch.PlayerAppearanceReady
struct UArchonLoadingDispatch_PlayerAppearanceReady_Params
{
};

// Function Archon.ArchonLoadingDispatch.OnReset
struct UArchonLoadingDispatch_OnReset_Params
{
};

// Function Archon.ArchonLoadingDispatch.LobbyClientReady
struct UArchonLoadingDispatch_LobbyClientReady_Params
{
};

// Function Archon.ArchonLoadingDispatch.LoadoutAssetReady
struct UArchonLoadingDispatch_LoadoutAssetReady_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadingDispatch.IsQuestSystemReady
struct UArchonLoadingDispatch_IsQuestSystemReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadingDispatch.IsPlayerStateReady
struct UArchonLoadingDispatch_IsPlayerStateReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadingDispatch.IsPlayerLoadoutReady
struct UArchonLoadingDispatch_IsPlayerLoadoutReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadingDispatch.IsPlayerControllerReady
struct UArchonLoadingDispatch_IsPlayerControllerReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadingDispatch.IsPlayerCharacterReady
struct UArchonLoadingDispatch_IsPlayerCharacterReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadingDispatch.IsPlayerAppearanceReady
struct UArchonLoadingDispatch_IsPlayerAppearanceReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadingDispatch.IsLobbyClientReady
struct UArchonLoadingDispatch_IsLobbyClientReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadingInterface.OutputDebugInformation
struct UArchonLoadingInterface_OutputDebugInformation_Params
{
};

// Function Archon.ArchonLoadingInterface.HasFinishedLoading
struct UArchonLoadingInterface_HasFinishedLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.UseQuickItem
struct AArchonLoadout_UseQuickItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerSetAppearanceData
struct AArchonLoadout_ServerSetAppearanceData_Params
{
	struct FArchonAppearanceData                       AppearanceData;                                           // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLoadout.ServerOnUpgradeItemLevel
struct AArchonLoadout_ServerOnUpgradeItemLevel_Params
{
	class UArchonInventoryItem_Upgradeable*            InventoryItem;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignWeapon
struct AArchonLoadout_ServerInternalAssignWeapon_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignTitle
struct AArchonLoadout_ServerInternalAssignTitle_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignQuickItem
struct AArchonLoadout_ServerInternalAssignQuickItem_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	ELoadoutQuickItemSlot                              Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignManualEmote
struct AArchonLoadout_ServerInternalAssignManualEmote_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignLegsArmour
struct AArchonLoadout_ServerInternalAssignLegsArmour_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignLantern
struct AArchonLoadout_ServerInternalAssignLantern_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignIntroEmote
struct AArchonLoadout_ServerInternalAssignIntroEmote_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignHelmetArmour
struct AArchonLoadout_ServerInternalAssignHelmetArmour_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignFlask
struct AArchonLoadout_ServerInternalAssignFlask_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignEndEmote
struct AArchonLoadout_ServerInternalAssignEndEmote_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignChestArmour
struct AArchonLoadout_ServerInternalAssignChestArmour_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignBanner
struct AArchonLoadout_ServerInternalAssignBanner_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerInternalAssignArmsArmour
struct AArchonLoadout_ServerInternalAssignArmsArmour_Params
{
	int16_t                                            InstanceId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerCommitLoadout
struct AArchonLoadout_ServerCommitLoadout_Params
{
};

// Function Archon.ArchonLoadout.ServerAssignWeapon
struct AArchonLoadout_ServerAssignWeapon_Params
{
	class UArchonInventoryItem*                        WeaponItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignTitle
struct AArchonLoadout_ServerAssignTitle_Params
{
	class UArchonInventoryItem_Title*                  Title;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignQuickItem
struct AArchonLoadout_ServerAssignQuickItem_Params
{
	class UArchonInventoryItem*                        QuickItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ELoadoutQuickItemSlot                              Slot;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignManualEmote
struct AArchonLoadout_ServerAssignManualEmote_Params
{
	class UArchonInventoryItem_Emote*                  Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignLegsArmour
struct AArchonLoadout_ServerAssignLegsArmour_Params
{
	class UArchonInventoryItem*                        ArmourItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignLantern
struct AArchonLoadout_ServerAssignLantern_Params
{
	class UArchonInventoryItem*                        LanternItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignIntroEmote
struct AArchonLoadout_ServerAssignIntroEmote_Params
{
	class UArchonInventoryItem_Emote*                  Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignHelmetArmour
struct AArchonLoadout_ServerAssignHelmetArmour_Params
{
	class UArchonInventoryItem*                        ArmourItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignFlask
struct AArchonLoadout_ServerAssignFlask_Params
{
	class UArchonInventoryItem_Flask*                  FlaskItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignEndEmote
struct AArchonLoadout_ServerAssignEndEmote_Params
{
	class UArchonInventoryItem_Emote*                  Emote;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignChestArmour
struct AArchonLoadout_ServerAssignChestArmour_Params
{
	class UArchonInventoryItem*                        ArmourItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignBanner
struct AArchonLoadout_ServerAssignBanner_Params
{
	class UArchonInventoryItem*                        BannerItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.ServerAssignArmsArmour
struct AArchonLoadout_ServerAssignArmsArmour_Params
{
	class UArchonInventoryItem*                        ArmourItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.OnRep_CurrentLoadout
struct AArchonLoadout_OnRep_CurrentLoadout_Params
{
};

// Function Archon.ArchonLoadout.OnAbilityCommit
struct AArchonLoadout_OnAbilityCommit_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadout.IsItemEquipped
struct AArchonLoadout_IsItemEquipped_Params
{
	class UArchonInventoryItem*                        Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetWeapon
struct AArchonLoadout_GetWeapon_Params
{
	class UArchonInventoryItem_Weapon*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetTitle
struct AArchonLoadout_GetTitle_Params
{
	class UArchonInventoryItem_Title*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetQuickItems
struct AArchonLoadout_GetQuickItems_Params
{
	TArray<struct FLoadoutQuickItem>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonLoadout.GetQuickItemIcon
struct AArchonLoadout_GetQuickItemIcon_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonLoadout.GetQuickItemCoolDownTime
struct AArchonLoadout_GetQuickItemCoolDownTime_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetQuickItemCoolDownPercentage
struct AArchonLoadout_GetQuickItemCoolDownPercentage_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetQuickItemAvailableUses
struct AArchonLoadout_GetQuickItemAvailableUses_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetQuickItem
struct AArchonLoadout_GetQuickItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_QuickItem*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetManualEmote
struct AArchonLoadout_GetManualEmote_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Emote*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetLegsArmour
struct AArchonLoadout_GetLegsArmour_Params
{
	class UArchonInventoryItem_Armour*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetLantern
struct AArchonLoadout_GetLantern_Params
{
	class UArchonInventoryItem_Lantern*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetIntroEmote
struct AArchonLoadout_GetIntroEmote_Params
{
	class UArchonInventoryItem_Emote*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetHelmetArmour
struct AArchonLoadout_GetHelmetArmour_Params
{
	class UArchonInventoryItem_Armour*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetFlask
struct AArchonLoadout_GetFlask_Params
{
	class UArchonInventoryItem_Flask*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetEndEmote
struct AArchonLoadout_GetEndEmote_Params
{
	class UArchonInventoryItem_Emote*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetChestArmour
struct AArchonLoadout_GetChestArmour_Params
{
	class UArchonInventoryItem_Armour*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetBanner
struct AArchonLoadout_GetBanner_Params
{
	class UArchonInventoryItem_Banner*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetArmsArmour
struct AArchonLoadout_GetArmsArmour_Params
{
	class UArchonInventoryItem_Armour*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.GetArmourFromType
struct AArchonLoadout_GetArmourFromType_Params
{
	EArmorType                                         ArmourType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadout.CanUseQuickItem
struct AArchonLoadout_CanUseQuickItem_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLoadScreenWidget.ScreenFadeOut
struct UArchonLoadScreenWidget_ScreenFadeOut_Params
{
	TEnumAsByte<ELoadScreenStyle>                      LoadScreenStyle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLoadScreenWidget.ScreenFadeIn
struct UArchonLoadScreenWidget_ScreenFadeIn_Params
{
	TEnumAsByte<ELoadScreenStyle>                      LoadScreenStyle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.StartGame
struct AArchonLobbyClient_StartGame_Params
{
};

// Function Archon.ArchonLobbyClient.SetReady
struct AArchonLobbyClient_SetReady_Params
{
	bool                                               IsReady;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.ServerUpdateLobby
struct AArchonLobbyClient_ServerUpdateLobby_Params
{
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ServerStartMatchmaking
struct AArchonLobbyClient_ServerStartMatchmaking_Params
{
	struct FArchonLobbyStartGameInfo                   GameInfo;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ServerStartGameInstance
struct AArchonLobbyClient_ServerStartGameInstance_Params
{
	struct FArchonLobbyStartGameInfo                   GameInfo;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ServerSetReady
struct AArchonLobbyClient_ServerSetReady_Params
{
	bool                                               IsReady;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.ServerRallyUpUnreadyMembers
struct AArchonLobbyClient_ServerRallyUpUnreadyMembers_Params
{
};

// Function Archon.ArchonLobbyClient.ServerPromoteMember
struct AArchonLobbyClient_ServerPromoteMember_Params
{
	struct FUniqueNetIdRepl                            InMemberId;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ServerLeaveLobby
struct AArchonLobbyClient_ServerLeaveLobby_Params
{
};

// Function Archon.ArchonLobbyClient.ServerKickMember
struct AArchonLobbyClient_ServerKickMember_Params
{
	struct FUniqueNetIdRepl                            InMemberId;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ServerJoinLobby
struct AArchonLobbyClient_ServerJoinLobby_Params
{
	struct FArchonLobbyId                              InLobbyId;                                                // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ServerGetLobbies
struct AArchonLobbyClient_ServerGetLobbies_Params
{
};

// Function Archon.ArchonLobbyClient.ServerGetAvailableMemberList
struct AArchonLobbyClient_ServerGetAvailableMemberList_Params
{
};

// Function Archon.ArchonLobbyClient.ServerDestroyLobby
struct AArchonLobbyClient_ServerDestroyLobby_Params
{
};

// Function Archon.ArchonLobbyClient.ServerCreateLobby
struct AArchonLobbyClient_ServerCreateLobby_Params
{
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ServerCancelMatchmaking
struct AArchonLobbyClient_ServerCancelMatchmaking_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ServerAddMember
struct AArchonLobbyClient_ServerAddMember_Params
{
	struct FUniqueNetIdRepl                            InMemberId;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.RallyUpUnreadyMembers
struct AArchonLobbyClient_RallyUpUnreadyMembers_Params
{
};

// Function Archon.ArchonLobbyClient.OnRep_CurrentLobby
struct AArchonLobbyClient_OnRep_CurrentLobby_Params
{
};

// Function Archon.ArchonLobbyClient.IsReady
struct AArchonLobbyClient_IsReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.IsPlayerInLobby
struct AArchonLobbyClient_IsPlayerInLobby_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.IsLobbyLeader
struct AArchonLobbyClient_IsLobbyLeader_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.IsAlreadyInLobby
struct AArchonLobbyClient_IsAlreadyInLobby_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.GetCurrentLobbyInfo
struct AArchonLobbyClient_GetCurrentLobbyInfo_Params
{
	struct FArchonLobby                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.GetChatChannelName
struct AArchonLobbyClient_GetChatChannelName_Params
{
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonLobbyClient.FindPublicHunt
struct AArchonLobbyClient_FindPublicHunt_Params
{
	TArray<struct FName>                               Hunts;                                                    // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.FindGame
struct AArchonLobbyClient_FindGame_Params
{
};

// Function Archon.ArchonLobbyClient.ClientUpdateLobby
struct AArchonLobbyClient_ClientUpdateLobby_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientTravelToIsland
struct AArchonLobbyClient_ClientTravelToIsland_Params
{
	struct FArchonLobbyStartGameInfo                   GameInfo;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ClientStartMatchmaking
struct AArchonLobbyClient_ClientStartMatchmaking_Params
{
	struct FArchonLobbyStartGameInfo                   GameInfo;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ClientSetReady
struct AArchonLobbyClient_ClientSetReady_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientRallyUpUnreadyMembers
struct AArchonLobbyClient_ClientRallyUpUnreadyMembers_Params
{
};

// Function Archon.ArchonLobbyClient.ClientPromoteMember
struct AArchonLobbyClient_ClientPromoteMember_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientOnLobbyUpdated
struct AArchonLobbyClient_ClientOnLobbyUpdated_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ClientOnLobbyMemberJoined
struct AArchonLobbyClient_ClientOnLobbyMemberJoined_Params
{
	struct FUniqueNetIdRepl                            InstigatorMemberId;                                       // (ConstParm, Parm, ReferenceParm)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ClientOnLobbyMemberExited
struct AArchonLobbyClient_ClientOnLobbyMemberExited_Params
{
	struct FUniqueNetIdRepl                            InstigatorMemberId;                                       // (ConstParm, Parm, ReferenceParm)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
	ELobbyMemberChangedReason                          Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.ClientOnLobbyMemberChanged
struct AArchonLobbyClient_ClientOnLobbyMemberChanged_Params
{
	struct FUniqueNetIdRepl                            InstigatorMemberId;                                       // (ConstParm, Parm, ReferenceParm)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
	ELobbyMemberChangedReason                          Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.ClientOnLobbyJoined
struct AArchonLobbyClient_ClientOnLobbyJoined_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ClientLeaveLobby
struct AArchonLobbyClient_ClientLeaveLobby_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientLeaveChat
struct AArchonLobbyClient_ClientLeaveChat_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ClientKickMember
struct AArchonLobbyClient_ClientKickMember_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientJoinLobby
struct AArchonLobbyClient_ClientJoinLobby_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientJoinChat
struct AArchonLobbyClient_ClientJoinChat_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ClientGetLobbies
struct AArchonLobbyClient_ClientGetLobbies_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FArchonLobby>                        Lobbies;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientGetAvailableMemberList
struct AArchonLobbyClient_ClientGetAvailableMemberList_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APlayerState*>                        MembersArray;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientDestroyLobby
struct AArchonLobbyClient_ClientDestroyLobby_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientCreateLobby
struct AArchonLobbyClient_ClientCreateLobby_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.ClientCancelMatchmaking
struct AArchonLobbyClient_ClientCancelMatchmaking_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonLobbyClient.ClientAddMember
struct AArchonLobbyClient_ClientAddMember_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, Parm, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyClient.CancelMatchmaking
struct AArchonLobbyClient_CancelMatchmaking_Params
{
};

// Function Archon.ArchonLobbyClient.AreAllMembersReady
struct AArchonLobbyClient_AreAllMembersReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyClient.AddHuntToLobbyMission
struct AArchonLobbyClient_AddHuntToLobbyMission_Params
{
	struct FName                                       HuntId;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonLobbyComponent.SetLobbyMainUserReadyState
struct UArchonLobbyComponent_SetLobbyMainUserReadyState_Params
{
	bool                                               Ready;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyComponent.SetLobbyMainUserLoadout
struct UArchonLobbyComponent_SetLobbyMainUserLoadout_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyUserReadyStatusChange__DelegateSignature
struct UArchonLobbyComponent_OnLobbyUserReadyStatusChange__DelegateSignature_Params
{
	class FString                                      UserId;                                                   // (Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStatus;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyUserLoadoutChange__DelegateSignature
struct UArchonLobbyComponent_OnLobbyUserLoadoutChange__DelegateSignature_Params
{
	class FString                                      UserId;                                                   // (Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyPaperDollData                   LoadoutData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyUserLeft__DelegateSignature
struct UArchonLobbyComponent_OnLobbyUserLeft__DelegateSignature_Params
{
	class FString                                      UserId;                                                   // (Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyUserJoined__DelegateSignature
struct UArchonLobbyComponent_OnLobbyUserJoined__DelegateSignature_Params
{
	class FString                                      UserId;                                                   // (Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyOverrideBehemothChange__DelegateSignature
struct UArchonLobbyComponent_OnLobbyOverrideBehemothChange__DelegateSignature_Params
{
	class FString                                      OverrideBehemoth;                                         // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyMainUserLoggedOut__DelegateSignature
struct UArchonLobbyComponent_OnLobbyMainUserLoggedOut__DelegateSignature_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyMainUserLoggedIn__DelegateSignature
struct UArchonLobbyComponent_OnLobbyMainUserLoggedIn__DelegateSignature_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyIslandTransitionStart__DelegateSignature
struct UArchonLobbyComponent_OnLobbyIslandTransitionStart__DelegateSignature_Params
{
	class FString                                      Params;                                                   // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyIslandCountdownStarted__DelegateSignature
struct UArchonLobbyComponent_OnLobbyIslandCountdownStarted__DelegateSignature_Params
{
	float                                              CountDownTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyHuntIdChange__DelegateSignature
struct UArchonLobbyComponent_OnLobbyHuntIdChange__DelegateSignature_Params
{
	class FString                                      HuntId;                                                   // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ArchonLobbyComponent.OnLobbyCandidateFailed__DelegateSignature
struct UArchonLobbyComponent_OnLobbyCandidateFailed__DelegateSignature_Params
{
	class FString                                      Params;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonLobbyComponent.MarkCallbacksBound
struct UArchonLobbyComponent_MarkCallbacksBound_Params
{
};

// Function Archon.ArchonLobbyComponent.LeaveParty
struct UArchonLobbyComponent_LeaveParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyComponent.HasJoinedChat
struct UArchonLobbyComponent_HasJoinedChat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyComponent.GetSlotForPlayer
struct UArchonLobbyComponent_GetSlotForPlayer_Params
{
	class FString                                      PlayerId;                                                 // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetWeapon
struct AArchonLobbyPaperDoll_SetWeapon_Params
{
	class UArchonInventoryItem_Weapon*                 WeaponItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetupPaperDoll
struct AArchonLobbyPaperDoll_SetupPaperDoll_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetRandomLoadoutAndAppearance
struct AArchonLobbyPaperDoll_SetRandomLoadoutAndAppearance_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetLoadoutAndAppearanceFromData
struct AArchonLobbyPaperDoll_SetLoadoutAndAppearanceFromData_Params
{
	struct FArchonLobbyPaperDollData                   InPaperDollData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetLantern
struct AArchonLobbyPaperDoll_SetLantern_Params
{
	class UArchonInventoryItem_Lantern*                LanternItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetArmorLegs
struct AArchonLobbyPaperDoll_SetArmorLegs_Params
{
	class UArchonInventoryItem_Armour*                 LegsItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetArmorHelmet
struct AArchonLobbyPaperDoll_SetArmorHelmet_Params
{
	class UArchonInventoryItem_Armour*                 HelmetItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetArmorChest
struct AArchonLobbyPaperDoll_SetArmorChest_Params
{
	class UArchonInventoryItem_Armour*                 ChestItem;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetArmorArms
struct AArchonLobbyPaperDoll_SetArmorArms_Params
{
	class UArchonInventoryItem_Armour*                 ArmsItem;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.SetAppearance
struct AArchonLobbyPaperDoll_SetAppearance_Params
{
	struct FArchonAppearanceData                       ArchonAppearanceData;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLobbyPaperDoll.BlueprintSetupSkinAndAppearance
struct AArchonLobbyPaperDoll_BlueprintSetupSkinAndAppearance_Params
{
	TArray<struct FAppearanceStringData>               StringData;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonLobbyPaperDoll.BlueprintSetDye
struct AArchonLobbyPaperDoll_BlueprintSetDye_Params
{
	struct FName                                       DyeName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterials;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bPrimary;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLocalizationAsset.CollectLinesToTranslateBlueprint
struct UArchonLocalizationAsset_CollectLinesToTranslateBlueprint_Params
{
	TArray<struct FArchonFullLocalizationData>         ToTranslate;                                              // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonLocalizationAssetLibrary.RegisterClassForLocalization
struct UArchonLocalizationAssetLibrary_RegisterClassForLocalization_Params
{
	class UObject*                                     LocAsset;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonLocalizationContextCollector.CollectContextBlueprint
struct UArchonLocalizationContextCollector_CollectContextBlueprint_Params
{
	class UObject*                                     TargetObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TMap<class FString, class FString>                 LocalizationContext;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonLocalizationContextCollectorStatic.CollectContextFrom
struct UArchonLocalizationContextCollectorStatic_CollectContextFrom_Params
{
	class UObject*                                     Object;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TMap<class FString, class FString>                 LocalizationContext;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonLocalPlayer.SetViewedNews
struct UArchonLocalPlayer_SetViewedNews_Params
{
};

// Function Archon.ArchonLocalPlayer.HasViewedNews
struct UArchonLocalPlayer_HasViewedNews_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLocalPlayer.GetPartyFinder
struct UArchonLocalPlayer_GetPartyFinder_Params
{
	class UArchonPartyFinder*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLocalPlayer.GetLatestNews
struct UArchonLocalPlayer_GetLatestNews_Params
{
	struct FArchonLoginNews                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonLocalPlayer.GetFriendsClient
struct UArchonLocalPlayer_GetFriendsClient_Params
{
	class UArchonFriends*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonLocalPlayer.GetChatClient
struct UArchonLocalPlayer_GetChatClient_Params
{
	class UChatClient*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMainMenuWidget.StartMatchMarking
struct UArchonMainMenuWidget_StartMatchMarking_Params
{
};

// Function Archon.ArchonMainMenuWidget.StartLoginWithEmail
struct UArchonMainMenuWidget_StartLoginWithEmail_Params
{
	class FString                                      Email;                                                    // (Parm, ZeroConstructor)
	class FString                                      Password;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMainMenuWidget.StartLoginWithDummy
struct UArchonMainMenuWidget_StartLoginWithDummy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMainMenuWidget.StartLoginWithAuthToken
struct UArchonMainMenuWidget_StartLoginWithAuthToken_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMainMenuWidget.StartLogin
struct UArchonMainMenuWidget_StartLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMainMenuWidget.SetSavedRegion
struct UArchonMainMenuWidget_SetSavedRegion_Params
{
	class FString                                      SavedRegion;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonMainMenuWidget.SetSavedEmail
struct UArchonMainMenuWidget_SetSavedEmail_Params
{
	class FString                                      SavedEmail;                                               // (Parm, ZeroConstructor)
};

// Function Archon.ArchonMainMenuWidget.RecordLoginTime
struct UArchonMainMenuWidget_RecordLoginTime_Params
{
};

// Function Archon.ArchonMainMenuWidget.OnMatchMakingStarted
struct UArchonMainMenuWidget_OnMatchMakingStarted_Params
{
};

// Function Archon.ArchonMainMenuWidget.OnMatchMakingFailed
struct UArchonMainMenuWidget_OnMatchMakingFailed_Params
{
	struct FText                                       Error;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonMainMenuWidget.OnMatchMakingComplete
struct UArchonMainMenuWidget_OnMatchMakingComplete_Params
{
};

// Function Archon.ArchonMainMenuWidget.OnLoginStarted
struct UArchonMainMenuWidget_OnLoginStarted_Params
{
};

// Function Archon.ArchonMainMenuWidget.OnLoginFailed
struct UArchonMainMenuWidget_OnLoginFailed_Params
{
	struct FText                                       ErrorString;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ErrorResponse;                                            // (Parm, ZeroConstructor)
};

// Function Archon.ArchonMainMenuWidget.OnLoginCompleted
struct UArchonMainMenuWidget_OnLoginCompleted_Params
{
	class FString                                      AccountId;                                                // (Parm, ZeroConstructor)
};

// Function Archon.ArchonMainMenuWidget.IsLoggedIn
struct UArchonMainMenuWidget_IsLoggedIn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMainMenuWidget.HasFinishedTutorial
struct UArchonMainMenuWidget_HasFinishedTutorial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMainMenuWidget.HasAuthTokenInCommandLine
struct UArchonMainMenuWidget_HasAuthTokenInCommandLine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonMainMenuWidget.GetSavedRegion
struct UArchonMainMenuWidget_GetSavedRegion_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonMainMenuWidget.GetSavedEmail
struct UArchonMainMenuWidget_GetSavedEmail_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonOnlineSessionClient.GetSavedRegion
struct UArchonOnlineSessionClient_GetSavedRegion_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonOptionUserWidget.SetWindowedMode
struct UArchonOptionUserWidget_SetWindowedMode_Params
{
	bool                                               windowed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fullscreen;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonOptionUserWidget.SetQualityLevelAutomatically
struct UArchonOptionUserWidget_SetQualityLevelAutomatically_Params
{
};

// Function Archon.ArchonOptionUserWidget.SetQualityLevel
struct UArchonOptionUserWidget_SetQualityLevel_Params
{
	int                                                QualityLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonOptionUserWidget.RevertChanges
struct UArchonOptionUserWidget_RevertChanges_Params
{
};

// Function Archon.ArchonOptionUserWidget.OnConstruct
struct UArchonOptionUserWidget_OnConstruct_Params
{
};

// Function Archon.ArchonOptionUserWidget.LoadUserSettings
struct UArchonOptionUserWidget_LoadUserSettings_Params
{
};

// Function Archon.ArchonOptionUserWidget.IsWindowedFullScreen
struct UArchonOptionUserWidget_IsWindowedFullScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonOptionUserWidget.IsWindowed
struct UArchonOptionUserWidget_IsWindowed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonOptionUserWidget.IsFullScreen
struct UArchonOptionUserWidget_IsFullScreen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonOptionUserWidget.GetQualityLevel
struct UArchonOptionUserWidget_GetQualityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonOptionUserWidget.ApplySettings
struct UArchonOptionUserWidget_ApplySettings_Params
{
};

// Function Archon.ArchonPartyClient.StartIslandMatchmaking
struct AArchonPartyClient_StartIslandMatchmaking_Params
{
};

// Function Archon.ArchonPartyClient.ServerPromoteMemberToLeader
struct AArchonPartyClient_ServerPromoteMemberToLeader_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.ServerLeaveParty
struct AArchonPartyClient_ServerLeaveParty_Params
{
};

// Function Archon.ArchonPartyClient.ServerKickMember
struct AArchonPartyClient_ServerKickMember_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.ServerInvitePlayer
struct AArchonPartyClient_ServerInvitePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, ReferenceParm)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	struct FArchonPartyId                              PartyId;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.ServerGetAvailablePlayers
struct AArchonPartyClient_ServerGetAvailablePlayers_Params
{
};

// Function Archon.ArchonPartyClient.ServerDeclineInvite
struct AArchonPartyClient_ServerDeclineInvite_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.ServerCancelInvite
struct AArchonPartyClient_ServerCancelInvite_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.ServerAcceptInvite
struct AArchonPartyClient_ServerAcceptInvite_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.RefreshPartyInvites
struct AArchonPartyClient_RefreshPartyInvites_Params
{
};

// Function Archon.ArchonPartyClient.QueryAvailablePlayers
struct AArchonPartyClient_QueryAvailablePlayers_Params
{
};

// Function Archon.ArchonPartyClient.PromoteMemberToLeader
struct AArchonPartyClient_PromoteMemberToLeader_Params
{
	struct FUniqueNetIdRepl                            MemberId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.PrepareToLeaveLobby
struct AArchonPartyClient_PrepareToLeaveLobby_Params
{
};

// Function Archon.ArchonPartyClient.OnRep_SentInvites
struct AArchonPartyClient_OnRep_SentInvites_Params
{
};

// Function Archon.ArchonPartyClient.OnRep_Invites
struct AArchonPartyClient_OnRep_Invites_Params
{
};

// Function Archon.ArchonPartyClient.OnRep_CurrentParty
struct AArchonPartyClient_OnRep_CurrentParty_Params
{
	struct FArchonParty                                PreviousParty;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.OnRemovePartyMemberComplete
struct AArchonPartyClient_OnRemovePartyMemberComplete_Params
{
	struct FUniqueNetIdRepl                            RemovedPlayerID;                                          // (ConstParm, Parm, ReferenceParm)
};

// DelegateFunction Archon.ArchonPartyClient.OnRemoveMemberCompleteDelegate__DelegateSignature
struct AArchonPartyClient_OnRemoveMemberCompleteDelegate__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            RemovedPlayerID;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction Archon.ArchonPartyClient.OnPromotionCompleteDelegate__DelegateSignature
struct AArchonPartyClient_OnPromotionCompleteDelegate__DelegateSignature_Params
{
};

// Function Archon.ArchonPartyClient.OnPromotePartyMemberComplete
struct AArchonPartyClient_OnPromotePartyMemberComplete_Params
{
};

// DelegateFunction Archon.ArchonPartyClient.OnInvitationSentCompleteDelegate__DelegateSignature
struct AArchonPartyClient_OnInvitationSentCompleteDelegate__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyClient.OnInvitationSendComplete
struct AArchonPartyClient_OnInvitationSendComplete_Params
{
	bool                                               bDidSend;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, Parm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ArchonPartyClient.OnInvitationDeclineCompleteDelegate__DelegateSignature
struct AArchonPartyClient_OnInvitationDeclineCompleteDelegate__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyClient.OnInvitationDeclineComplete
struct AArchonPartyClient_OnInvitationDeclineComplete_Params
{
	bool                                               bDidDecline;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, Parm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ArchonPartyClient.OnInvitationCancelCompleteDelegate__DelegateSignature
struct AArchonPartyClient_OnInvitationCancelCompleteDelegate__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyClient.OnInvitationCancelComplete
struct AArchonPartyClient_OnInvitationCancelComplete_Params
{
	bool                                               bDidCancel;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, Parm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ArchonPartyClient.OnInvitationAcceptCompleteDelegate__DelegateSignature
struct AArchonPartyClient_OnInvitationAcceptCompleteDelegate__DelegateSignature_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyClient.OnInvitationAcceptComplete
struct AArchonPartyClient_OnInvitationAcceptComplete_Params
{
	bool                                               bDidAccept;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            ReceiverId;                                               // (ConstParm, Parm, ReferenceParm)
	class FString                                      ReceiverDisplayName;                                      // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyClient.LocalPlayerId
struct AArchonPartyClient_LocalPlayerId_Params
{
	struct FUniqueNetIdRepl                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonPartyClient.LeaveParty
struct AArchonPartyClient_LeaveParty_Params
{
};

// Function Archon.ArchonPartyClient.KickMember
struct AArchonPartyClient_KickMember_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.IsSoloParty
struct AArchonPartyClient_IsSoloParty_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.IsSendingInvite
struct AArchonPartyClient_IsSendingInvite_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.IsPartyLeader
struct AArchonPartyClient_IsPartyLeader_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.IsLocalPlayer
struct AArchonPartyClient_IsLocalPlayer_Params
{
	struct FArchonPartyMember                          PartyMember;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.IsInParty
struct AArchonPartyClient_IsInParty_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.InvitePlayerByName
struct AArchonPartyClient_InvitePlayerByName_Params
{
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.InvitePlayer
struct AArchonPartyClient_InvitePlayer_Params
{
	struct FUniqueNetIdRepl                            PlayerId;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      PlayerName;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.GetStartMatchmakingCommand
struct AArchonPartyClient_GetStartMatchmakingCommand_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPartyClient.GetPartyInvites
struct AArchonPartyClient_GetPartyInvites_Params
{
	TArray<struct FArchonPartyInvite>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPartyClient.GetChatChannelName
struct AArchonPartyClient_GetChatChannelName_Params
{
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPartyClient.GetCancelMatchmakingCommand
struct AArchonPartyClient_GetCancelMatchmakingCommand_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPartyClient.FindHunt
struct AArchonPartyClient_FindHunt_Params
{
	struct FName                                       PlayerHuntID;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               bSkipMatchmaking;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.DeclineInvite
struct AArchonPartyClient_DeclineInvite_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.DebugStartMission
struct AArchonPartyClient_DebugStartMission_Params
{
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyClient.ClientAvailablePlayers
struct AArchonPartyClient_ClientAvailablePlayers_Params
{
	bool                                               bWasSuccessful;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class APlayerState*>                        MembersArray;                                             // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	class FString                                      Error;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyClient.CancelMatchmaking
struct AArchonPartyClient_CancelMatchmaking_Params
{
};

// Function Archon.ArchonPartyClient.CancelIslandMatchmaking
struct AArchonPartyClient_CancelIslandMatchmaking_Params
{
};

// Function Archon.ArchonPartyClient.CancelInvite
struct AArchonPartyClient_CancelInvite_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPartyClient.AcceptInvite
struct AArchonPartyClient_AcceptInvite_Params
{
	struct FArchonPartyInvite                          Invite;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPartyFinder.RefreshPartyList
struct UArchonPartyFinder_RefreshPartyList_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Archon.ArchonPartyFinder.JoinPartyResponseSuccess__DelegateSignature
struct UArchonPartyFinder_JoinPartyResponseSuccess__DelegateSignature_Params
{
	struct FArchonPartyFinderEntry                     UpdatedEntry;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction Archon.ArchonPartyFinder.JoinPartyResponseFail__DelegateSignature
struct UArchonPartyFinder_JoinPartyResponseFail__DelegateSignature_Params
{
	class FString                                      ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyFinder.JoinParty
struct UArchonPartyFinder_JoinParty_Params
{
	class FString                                      PartyId;                                                  // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnSuccess;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnFail;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPartyFinder.GetPartyList
struct UArchonPartyFinder_GetPartyList_Params
{
	TArray<struct FArchonPartyFinderEntry>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// DelegateFunction Archon.ArchonPartyFinder.GetPartyEntryResponseSuccess__DelegateSignature
struct UArchonPartyFinder_GetPartyEntryResponseSuccess__DelegateSignature_Params
{
	struct FArchonPartyFinderEntry                     PartyFinderEntry;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction Archon.ArchonPartyFinder.GetPartyEntryResponseFail__DelegateSignature
struct UArchonPartyFinder_GetPartyEntryResponseFail__DelegateSignature_Params
{
	class FString                                      ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyFinder.GetPartyEntry
struct UArchonPartyFinder_GetPartyEntry_Params
{
	class FString                                      PartyId;                                                  // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnSuccess;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnFail;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Archon.ArchonPartyFinder.DeletePartyEntryResponseSuccess__DelegateSignature
struct UArchonPartyFinder_DeletePartyEntryResponseSuccess__DelegateSignature_Params
{
};

// DelegateFunction Archon.ArchonPartyFinder.DeletePartyEntryResponseFail__DelegateSignature
struct UArchonPartyFinder_DeletePartyEntryResponseFail__DelegateSignature_Params
{
	class FString                                      ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyFinder.DeletePartyEntry
struct UArchonPartyFinder_DeletePartyEntry_Params
{
	class FString                                      PartyId;                                                  // (Parm, ZeroConstructor)
	struct FScriptDelegate                             OnSuccess;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnFail;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Archon.ArchonPartyFinder.AddPartyResponseSuccess__DelegateSignature
struct UArchonPartyFinder_AddPartyResponseSuccess__DelegateSignature_Params
{
	struct FArchonPartyFinderEntry                     NewEntry;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction Archon.ArchonPartyFinder.AddPartyResponseFail__DelegateSignature
struct UArchonPartyFinder_AddPartyResponseFail__DelegateSignature_Params
{
	class FString                                      ErrorString;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPartyFinder.AddParty
struct UArchonPartyFinder_AddParty_Params
{
	class FString                                      Description;                                              // (Parm, ZeroConstructor)
	TArray<class FString>                              HuntTags;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FString>                              HuntIds;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnSuccess;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             OnFail;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPathFollowingComponent.PivotCompleted
struct UArchonPathFollowingComponent_PivotCompleted_Params
{
};

// Function Archon.ArchonPersistentUser.SetWeaponIndex
struct UArchonPersistentUser_SetWeaponIndex_Params
{
	int                                                WeaponIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPersistentUser.SetGenderId
struct UArchonPersistentUser_SetGenderId_Params
{
	EArchonGender                                      InGenderId;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPersistentUser.SetBodyType
struct UArchonPersistentUser_SetBodyType_Params
{
	EArchonBodyType                                    InBodyType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPersistentUser.SaveIfDirty
struct UArchonPersistentUser_SaveIfDirty_Params
{
};

// Function Archon.ArchonPersistentUser.GetWeaponIndex
struct UArchonPersistentUser_GetWeaponIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPersistentUser.GetGenderId
struct UArchonPersistentUser_GetGenderId_Params
{
	EArchonGender                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPersistentUser.GetBodyType
struct UArchonPersistentUser_GetBodyType_Params
{
	EArchonBodyType                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerControllerBase.ReturnToMainMenu
struct AArchonPlayerControllerBase_ReturnToMainMenu_Params
{
	struct FText                                       ReturnMessage;                                            // (ConstParm, Parm)
};

// Function Archon.ArchonPlayerControllerBase.IsUsingGamepad
struct AArchonPlayerControllerBase_IsUsingGamepad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerControllerBase.ConvertKeyEventToActionMapping
struct AArchonPlayerControllerBase_ConvertKeyEventToActionMapping_Params
{
	struct FKeyEvent                                   InKeyEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       OutActionName;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.WaitForSurveysToBeComplete
struct AArchonPlayerController_WaitForSurveysToBeComplete_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Archon.ArchonPlayerController.WaitForCurrentSurveyToBeComplete
struct AArchonPlayerController_WaitForCurrentSurveyToBeComplete_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Archon.ArchonPlayerController.UpdateChallenges
struct AArchonPlayerController_UpdateChallenges_Params
{
	bool                                               CreateNewChallenges;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.ToggleNameplates
struct AArchonPlayerController_ToggleNameplates_Params
{
};

// Function Archon.ArchonPlayerController.ToggleHUD
struct AArchonPlayerController_ToggleHUD_Params
{
};

// Function Archon.ArchonPlayerController.SuspendSurveys
struct AArchonPlayerController_SuspendSurveys_Params
{
};

// Function Archon.ArchonPlayerController.SurveyCompleted
struct AArchonPlayerController_SurveyCompleted_Params
{
};

// Function Archon.ArchonPlayerController.ServerSetEndOfMissionComplete
struct AArchonPlayerController_ServerSetEndOfMissionComplete_Params
{
};

// Function Archon.ArchonPlayerController.ServerRefreshEntitlements
struct AArchonPlayerController_ServerRefreshEntitlements_Params
{
};

// Function Archon.ArchonPlayerController.ServerRaiseInteractWith
struct AArchonPlayerController_ServerRaiseInteractWith_Params
{
	class FString                                      Target;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPlayerController.ServerCheat
struct AArchonPlayerController_ServerCheat_Params
{
	class FString                                      Params;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPlayerController.ServerArchonCheat
struct AArchonPlayerController_ServerArchonCheat_Params
{
	TArray<class FString>                              Params;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonPlayerController.ServerAddDebugProperty
struct AArchonPlayerController_ServerAddDebugProperty_Params
{
	class FString                                      ClassName;                                                // (Parm, ZeroConstructor)
	class FString                                      PropertyName;                                             // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPlayerController.ReturnToMainMenu
struct AArchonPlayerController_ReturnToMainMenu_Params
{
	struct FText                                       ReturnMessage;                                            // (ConstParm, Parm)
};

// Function Archon.ArchonPlayerController.ResumeSurveys
struct AArchonPlayerController_ResumeSurveys_Params
{
};

// Function Archon.ArchonPlayerController.RaiseInteractWithObject
struct AArchonPlayerController_RaiseInteractWithObject_Params
{
	class UObject*                                     Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.RaiseInteractWith
struct AArchonPlayerController_RaiseInteractWith_Params
{
	class FString                                      Target;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonPlayerController.ProgressionSet
struct AArchonPlayerController_ProgressionSet_Params
{
	struct FName                                       TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.ProgressionReset
struct AArchonPlayerController_ProgressionReset_Params
{
	struct FName                                       TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.ProgressionAdd
struct AArchonPlayerController_ProgressionAdd_Params
{
	struct FName                                       TrackId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.PlayerHasFinishedTutorial
struct AArchonPlayerController_PlayerHasFinishedTutorial_Params
{
};

// Function Archon.ArchonPlayerController.OnStartNewCharacterFlow
struct AArchonPlayerController_OnStartNewCharacterFlow_Params
{
};

// Function Archon.ArchonPlayerController.OnSetPawn
struct AArchonPlayerController_OnSetPawn_Params
{
	class APawn*                                       InPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.OnSetLobbyClient
struct AArchonPlayerController_OnSetLobbyClient_Params
{
};

// Function Archon.ArchonPlayerController.OnSetInventory
struct AArchonPlayerController_OnSetInventory_Params
{
	class AArchonInventory*                            InInventory;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.OnServerPlayerStarted
struct AArchonPlayerController_OnServerPlayerStarted_Params
{
};

// Function Archon.ArchonPlayerController.OnRep_Party
struct AArchonPlayerController_OnRep_Party_Params
{
};

// Function Archon.ArchonPlayerController.OnRep_LobbyClient
struct AArchonPlayerController_OnRep_LobbyClient_Params
{
};

// Function Archon.ArchonPlayerController.OnRep_Inventory
struct AArchonPlayerController_OnRep_Inventory_Params
{
};

// Function Archon.ArchonPlayerController.OnQuickSlotCycleForward
struct AArchonPlayerController_OnQuickSlotCycleForward_Params
{
};

// Function Archon.ArchonPlayerController.OnQuickSlotCycleBackward
struct AArchonPlayerController_OnQuickSlotCycleBackward_Params
{
};

// Function Archon.ArchonPlayerController.OnQuickSlotConfirm
struct AArchonPlayerController_OnQuickSlotConfirm_Params
{
};

// Function Archon.ArchonPlayerController.OnLoadoutReady
struct AArchonPlayerController_OnLoadoutReady_Params
{
};

// Function Archon.ArchonPlayerController.OnEntitlementsRefreshed
struct AArchonPlayerController_OnEntitlementsRefreshed_Params
{
};

// Function Archon.ArchonPlayerController.IsNewCharacterFlow
struct AArchonPlayerController_IsNewCharacterFlow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.IsForegroundWindow
struct AArchonPlayerController_IsForegroundWindow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.IsEndOfMissionComplete
struct AArchonPlayerController_IsEndOfMissionComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.InventoryGrantAll
struct AArchonPlayerController_InventoryGrantAll_Params
{
};

// Function Archon.ArchonPlayerController.HasFinishedTutorial
struct AArchonPlayerController_HasFinishedTutorial_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.HasEntitlement
struct AArchonPlayerController_HasEntitlement_Params
{
	class FString                                      Entitlement;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.GetTransmogTokenId
struct AArchonPlayerController_GetTransmogTokenId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.GetStoreURL
struct AArchonPlayerController_GetStoreURL_Params
{
	class FString                                      Path;                                                     // (Parm, ZeroConstructor)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPlayerController.GetParty
struct AArchonPlayerController_GetParty_Params
{
	class AArchonPartyClient*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.GetLobbyClient
struct AArchonPlayerController_GetLobbyClient_Params
{
	class AArchonLobbyClient*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.GetLoadout
struct AArchonPlayerController_GetLoadout_Params
{
	class AArchonLoadout*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.GetLastLoginTime
struct AArchonPlayerController_GetLastLoginTime_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPlayerController.GetInventory
struct AArchonPlayerController_GetInventory_Params
{
	class AArchonInventory*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.GetGenderId
struct AArchonPlayerController_GetGenderId_Params
{
	EArchonGender                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.GetCurrentLoginTime
struct AArchonPlayerController_GetCurrentLoginTime_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPlayerController.GetCharacterId
struct AArchonPlayerController_GetCharacterId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPlayerController.EnableControllerInput
struct AArchonPlayerController_EnableControllerInput_Params
{
};

// Function Archon.ArchonPlayerController.EnableCheats
struct AArchonPlayerController_EnableCheats_Params
{
};

// Function Archon.ArchonPlayerController.DisableControllerInput
struct AArchonPlayerController_DisableControllerInput_Params
{
};

// Function Archon.ArchonPlayerController.DebugRebasedPlayerId
struct AArchonPlayerController_DebugRebasedPlayerId_Params
{
};

// Function Archon.ArchonPlayerController.DebugLoadInteractionComp
struct AArchonPlayerController_DebugLoadInteractionComp_Params
{
};

// Function Archon.ArchonPlayerController.ConditionalGrantItem
struct AArchonPlayerController_ConditionalGrantItem_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	bool                                               GrantImmediately;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.ClientTriggerSurvey
struct AArchonPlayerController_ClientTriggerSurvey_Params
{
	struct FName                                       EventName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerController.ClientTravelToCity
struct AArchonPlayerController_ClientTravelToCity_Params
{
};

// Function Archon.ArchonPlayerController.ClientOnPostLogin
struct AArchonPlayerController_ClientOnPostLogin_Params
{
};

// Function Archon.ArchonPlayerController.ClientEntitlementsRefreshed
struct AArchonPlayerController_ClientEntitlementsRefreshed_Params
{
};

// Function Archon.ArchonPlayerController.Client_StartNewCharacterFlow
struct AArchonPlayerController_Client_StartNewCharacterFlow_Params
{
};

// Function Archon.ArchonPlayerController.ClearAllChallenges
struct AArchonPlayerController_ClearAllChallenges_Params
{
};

// Function Archon.ArchonPlayerController.AreSurveysInProgress
struct AArchonPlayerController_AreSurveysInProgress_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerController_Menu.TravelDirectlyToMission
struct AArchonPlayerController_Menu_TravelDirectlyToMission_Params
{
	class FString                                      IslandMap;                                                // (Parm, ZeroConstructor)
	TAssetPtr<class UClass>                            MonsterClass;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	TAssetPtr<class UClass>                            TODClass;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPlayerController_Menu.ServerSetAppearanceData
struct AArchonPlayerController_Menu_ServerSetAppearanceData_Params
{
	struct FArchonAppearanceData                       InAppearanceData;                                         // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.ArchonPlayerController_Menu.GetCharacterId
struct AArchonPlayerController_Menu_GetCharacterId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPlayerState.SetWeaponClass
struct AArchonPlayerState_SetWeaponClass_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetWeapon
struct AArchonPlayerState_SetWeapon_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetLegsDyeVariant
struct AArchonPlayerState_SetLegsDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPlayerState.SetLegsArmourClass
struct AArchonPlayerState_SetLegsArmourClass_Params
{
	class UClass*                                      ArmourClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetLegsArmour
struct AArchonPlayerState_SetLegsArmour_Params
{
	class UClass*                                      ArmourClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 DyeConfiguration;                                         // (ConstParm, Parm)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetLantern
struct AArchonPlayerState_SetLantern_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (Parm, ZeroConstructor)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetHelmetDyeVariant
struct AArchonPlayerState_SetHelmetDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPlayerState.SetHelmetArmourClass
struct AArchonPlayerState_SetHelmetArmourClass_Params
{
	class UClass*                                      ArmourClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetHelmetArmour
struct AArchonPlayerState_SetHelmetArmour_Params
{
	class UClass*                                      ArmourClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 DyeConfiguration;                                         // (ConstParm, Parm)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetChestDyeVariant
struct AArchonPlayerState_SetChestDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPlayerState.SetChestArmourClass
struct AArchonPlayerState_SetChestArmourClass_Params
{
	class UClass*                                      ArmourClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetChestArmour
struct AArchonPlayerState_SetChestArmour_Params
{
	class UClass*                                      ArmourClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 DyeConfiguration;                                         // (ConstParm, Parm)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetArmsDyeVariant
struct AArchonPlayerState_SetArmsDyeVariant_Params
{
	struct FDyeVariant                                 DyeVariant;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPlayerState.SetArmsArmourClass
struct AArchonPlayerState_SetArmsArmourClass_Params
{
	class UClass*                                      ArmourClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetArmsArmour
struct AArchonPlayerState_SetArmsArmour_Params
{
	class UClass*                                      ArmourClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 DyeConfiguration;                                         // (ConstParm, Parm)
	struct FName                                       TransmogId;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.SetAppearanceData
struct AArchonPlayerState_SetAppearanceData_Params
{
	struct FArchonAppearanceData                       InAppearanceData;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonPlayerState.OnRepWeaponClass
struct AArchonPlayerState_OnRepWeaponClass_Params
{
};

// Function Archon.ArchonPlayerState.OnRepLegsArmourClass
struct AArchonPlayerState_OnRepLegsArmourClass_Params
{
};

// Function Archon.ArchonPlayerState.OnRepLanternClass
struct AArchonPlayerState_OnRepLanternClass_Params
{
};

// Function Archon.ArchonPlayerState.OnRepIsChatBanned
struct AArchonPlayerState_OnRepIsChatBanned_Params
{
};

// Function Archon.ArchonPlayerState.OnRepHelmetArmourClass
struct AArchonPlayerState_OnRepHelmetArmourClass_Params
{
};

// Function Archon.ArchonPlayerState.OnRepGuildInvites
struct AArchonPlayerState_OnRepGuildInvites_Params
{
};

// Function Archon.ArchonPlayerState.OnRepGuild
struct AArchonPlayerState_OnRepGuild_Params
{
	class AArchonGuild*                                PreviousGuild;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.OnRepChestArmourClass
struct AArchonPlayerState_OnRepChestArmourClass_Params
{
};

// Function Archon.ArchonPlayerState.OnRepBoosts
struct AArchonPlayerState_OnRepBoosts_Params
{
};

// Function Archon.ArchonPlayerState.OnRepArmsArmourClass
struct AArchonPlayerState_OnRepArmsArmourClass_Params
{
};

// Function Archon.ArchonPlayerState.OnRepAppearanceData
struct AArchonPlayerState_OnRepAppearanceData_Params
{
};

// Function Archon.ArchonPlayerState.GetUniqueIdAsString
struct AArchonPlayerState_GetUniqueIdAsString_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonPlayerState.GetArchonCharacter
struct AArchonPlayerState_GetArchonCharacter_Params
{
	class AArchonCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.AddLoot
struct AArchonPlayerState_AddLoot_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayerState.AddConditionalLoot
struct AArchonPlayerState_AddConditionalLoot_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
	int                                                Count;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	bool                                               AwardImmediately;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonPlayParticleEffect.ShouldSpawnParticle
struct UArchonPlayParticleEffect_ShouldSpawnParticle_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.SetViewDistanceQuality
struct UArchonScalabilityUserWidget_SetViewDistanceQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.SetTextureQuality
struct UArchonScalabilityUserWidget_SetTextureQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.SetShadowQuality
struct UArchonScalabilityUserWidget_SetShadowQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.SetResolutionScale
struct UArchonScalabilityUserWidget_SetResolutionScale_Params
{
	float                                              NormalizedQuality;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.SetQualityLevel
struct UArchonScalabilityUserWidget_SetQualityLevel_Params
{
	int                                                QualityLevel;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.SetPostProcessQuality
struct UArchonScalabilityUserWidget_SetPostProcessQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.SetEffectsQuality
struct UArchonScalabilityUserWidget_SetEffectsQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.SetAutoQualityLevel
struct UArchonScalabilityUserWidget_SetAutoQualityLevel_Params
{
};

// Function Archon.ArchonScalabilityUserWidget.SetAntiAliasingQuality
struct UArchonScalabilityUserWidget_SetAntiAliasingQuality_Params
{
	int                                                Quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.GetViewDistanceQuality
struct UArchonScalabilityUserWidget_GetViewDistanceQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.GetTextureQuality
struct UArchonScalabilityUserWidget_GetTextureQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.GetShadowQuality
struct UArchonScalabilityUserWidget_GetShadowQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.GetResolutionScale
struct UArchonScalabilityUserWidget_GetResolutionScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.GetQualityLevel
struct UArchonScalabilityUserWidget_GetQualityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.GetPostProcessQuality
struct UArchonScalabilityUserWidget_GetPostProcessQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.GetEffectsQuality
struct UArchonScalabilityUserWidget_GetEffectsQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonScalabilityUserWidget.GetAntiAliasingQuality
struct UArchonScalabilityUserWidget_GetAntiAliasingQuality_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonSequenceGameplayOperations.ActiveOperationEnded
struct UArchonSequenceGameplayOperations_ActiveOperationEnded_Params
{
	class UArchonGameplayOperation*                    Op;                                                       // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FArchonGameplayOperationArgs                Args;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonSpeaker.PickSpecialCraft
struct UArchonSpeaker_PickSpecialCraft_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.PickSpecial
struct UArchonSpeaker_PickSpecial_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.PickSimpleIntro
struct UArchonSpeaker_PickSimpleIntro_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.PickQuestRedeem
struct UArchonSpeaker_PickQuestRedeem_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.PickQuestAccept
struct UArchonSpeaker_PickQuestAccept_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.PickOutro
struct UArchonSpeaker_PickOutro_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.PickNormalCraft
struct UArchonSpeaker_PickNormalCraft_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.PickInvitation
struct UArchonSpeaker_PickInvitation_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.PickIntro
struct UArchonSpeaker_PickIntro_Params
{
	struct FArchonWeightedAmbientDialogLine            LineOUT;                                                  // (Parm, OutParm)
};

// Function Archon.ArchonSpeaker.GetAssociatedMouthComponent
struct UArchonSpeaker_GetAssociatedMouthComponent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonVOMouthComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonSpeaker.GetAssociatedActor
struct UArchonSpeaker_GetAssociatedActor_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.TriggerTitleEvent
struct UArchonTelemetryBPLibrary_TriggerTitleEvent_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
	struct FJsonBPValue                                BodyJsonObject;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonTelemetryBPLibrary.TriggerPlayerEvent
struct UArchonTelemetryBPLibrary_TriggerPlayerEvent_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
	struct FJsonBPValue                                BodyJsonObject;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonTelemetryBPLibrary.TriggerMessage
struct UArchonTelemetryBPLibrary_TriggerMessage_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordSurveyPresented
struct UArchonTelemetryBPLibrary_RecordSurveyPresented_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerWonMatchEx
struct UArchonTelemetryBPLibrary_RecordPlayerWonMatchEx_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MonsterName;                                              // (Parm, ZeroConstructor)
	TArray<class FString>                              AdditionalBehemoths;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerWonMatch
struct UArchonTelemetryBPLibrary_RecordPlayerWonMatch_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MonsterName;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerReviveSucceeded
struct UArchonTelemetryBPLibrary_RecordPlayerReviveSucceeded_Params
{
	class APlayerController*                           Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Revivee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerReviveFailed
struct UArchonTelemetryBPLibrary_RecordPlayerReviveFailed_Params
{
	class APlayerController*                           Reviver;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           Revivee;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerMontageStarted
struct UArchonTelemetryBPLibrary_RecordPlayerMontageStarted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class FString                                      PlayerId;                                                 // (Parm, ZeroConstructor)
	class FString                                      CharacterId;                                              // (Parm, ZeroConstructor)
	int                                                MontageCounter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MontageName;                                              // (Parm, ZeroConstructor)
	float                                              GameTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerMontageBlendingOut
struct UArchonTelemetryBPLibrary_RecordPlayerMontageBlendingOut_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class FString                                      PlayerId;                                                 // (Parm, ZeroConstructor)
	class FString                                      CharacterId;                                              // (Parm, ZeroConstructor)
	int                                                MontageCounter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MontageName;                                              // (Parm, ZeroConstructor)
	bool                                               Interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerLostMatchEx
struct UArchonTelemetryBPLibrary_RecordPlayerLostMatchEx_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MonsterName;                                              // (Parm, ZeroConstructor)
	TArray<class FString>                              AdditionalBehemoths;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerLostMatch
struct UArchonTelemetryBPLibrary_RecordPlayerLostMatch_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MonsterName;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerHealed
struct UArchonTelemetryBPLibrary_RecordPlayerHealed_Params
{
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceObject;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerGameModeLogout
struct UArchonTelemetryBPLibrary_RecordPlayerGameModeLogout_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	class FString                                      GameModeName;                                             // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerGameModeLogin
struct UArchonTelemetryBPLibrary_RecordPlayerGameModeLogin_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	class FString                                      GameModeName;                                             // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordPlayerDeath
struct UArchonTelemetryBPLibrary_RecordPlayerDeath_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      KillerName;                                               // (Parm, ZeroConstructor)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordMonsterFound
struct UArchonTelemetryBPLibrary_RecordMonsterFound_Params
{
	class FString                                      MonsterName;                                              // (Parm, ZeroConstructor)
	class FString                                      Stage;                                                    // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordMissionJoined
struct UArchonTelemetryBPLibrary_RecordMissionJoined_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MonsterName;                                              // (Parm, ZeroConstructor)
	class FString                                      AtmosphereName;                                           // (Parm, ZeroConstructor)
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordJumpPadUsed
struct UArchonTelemetryBPLibrary_RecordJumpPadUsed_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      JumpPad;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     JumpVelocity;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordInventoryUsed
struct UArchonTelemetryBPLibrary_RecordInventoryUsed_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemName;                                                 // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordInteractableUse
struct UArchonTelemetryBPLibrary_RecordInteractableUse_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InteractableName;                                         // (Parm, ZeroConstructor)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordFallOffWorld
struct UArchonTelemetryBPLibrary_RecordFallOffWorld_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MapName;                                                  // (Parm, ZeroConstructor)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordEquipWeapon
struct UArchonTelemetryBPLibrary_RecordEquipWeapon_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      WeaponName;                                               // (Parm, ZeroConstructor)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordEnterBleedOut
struct UArchonTelemetryBPLibrary_RecordEnterBleedOut_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      KillerName;                                               // (Parm, ZeroConstructor)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordCurrentScalabilitySettings
struct UArchonTelemetryBPLibrary_RecordCurrentScalabilitySettings_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordBehemothMontageStarted
struct UArchonTelemetryBPLibrary_RecordBehemothMontageStarted_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class FString                                      BehemothName;                                             // (Parm, ZeroConstructor)
	int                                                MontageCounter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MontageName;                                              // (Parm, ZeroConstructor)
	class FString                                      ActionName;                                               // (Parm, ZeroConstructor)
	class FString                                      CurrentCharacterTarget;                                   // (Parm, ZeroConstructor)
	class FString                                      AttackedCharacterTarget;                                  // (Parm, ZeroConstructor)
	int                                                TotalAttackedCharacters;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonTelemetryBPLibrary.RecordBehemothMontageBlendingOut
struct UArchonTelemetryBPLibrary_RecordBehemothMontageBlendingOut_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class FString                                      BehemothName;                                             // (Parm, ZeroConstructor)
	int                                                MontageCounter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      MontageName;                                              // (Parm, ZeroConstructor)
	class FString                                      ActionName;                                               // (Parm, ZeroConstructor)
	bool                                               Interrupted;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GameTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonTimedParticleEffect.ShouldSpawnParticle
struct UArchonTimedParticleEffect_ShouldSpawnParticle_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonTokenSubstitutionInterface.GetTokenSubstitution
struct UArchonTokenSubstitutionInterface_GetTokenSubstitution_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsWithinSubstitution;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SubstitutionText;                                         // (Parm, OutParm, ZeroConstructor)
	bool                                               RetainBrackets;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonTokenSubstitionMethods.ReplaceTokens
struct UArchonTokenSubstitionMethods_ReplaceTokens_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CurrentContext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Source;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<TScriptInterface<class UArchonTokenSubstitutionInterface>> VariableSubstitutions;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ArchonUIBlueprintLibrary.PushInputModeUIOnly
struct UArchonUIBlueprintLibrary_PushInputModeUIOnly_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonUIBlueprintLibrary.PopInputModeUIOnly
struct UArchonUIBlueprintLibrary_PopInputModeUIOnly_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonUserButton.SetButtonLabel
struct UArchonUserButton_SetButtonLabel_Params
{
	struct FText                                       Label;                                                    // (Parm)
};

// Function Archon.ArchonUserButton.OnInputSwap
struct UArchonUserButton_OnInputSwap_Params
{
	bool                                               bUsingGamepad;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction Archon.ArchonUserButton.OnArchonUserButtonAction__DelegateSignature
struct UArchonUserButton_OnArchonUserButtonAction__DelegateSignature_Params
{
	class UArchonUserButton*                           Button;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonUserButton.HandleButtonUnhovered
struct UArchonUserButton_HandleButtonUnhovered_Params
{
};

// Function Archon.ArchonUserButton.HandleButtonHovered
struct UArchonUserButton_HandleButtonHovered_Params
{
};

// Function Archon.ArchonUserButton.HandleButtonClicked
struct UArchonUserButton_HandleButtonClicked_Params
{
};

// Function Archon.EquipmentItem.IsWeapon
struct UEquipmentItem_IsWeapon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.EquipmentItem.IsUpgrade
struct UEquipmentItem_IsUpgrade_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.EquipmentItem.IsLantern
struct UEquipmentItem_IsLantern_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.EquipmentItem.IsAtMaxLevel
struct UEquipmentItem_IsAtMaxLevel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.EquipmentItem.IsArmour
struct UEquipmentItem_IsArmour_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.EquipmentItem.GetWeaponType
struct UEquipmentItem_GetWeaponType_Params
{
	EWeaponType                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.EquipmentItem.GetArmourType
struct UEquipmentItem_GetArmourType_Params
{
	EArmorType                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.EquipmentItem.CanUpgradeToNewItem
struct UEquipmentItem_CanUpgradeToNewItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.EquipmentItem.CanCraft
struct UEquipmentItem_CanCraft_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonVendorWidget.GetUpgradableItems
struct UArchonVendorWidget_GetUpgradableItems_Params
{
	TArray<struct FName>                               Items;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonVendorWidget.GetItemSources
struct UArchonVendorWidget_GetItemSources_Params
{
	TArray<class FString>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonVendorWidget.GetItemsForSource
struct UArchonVendorWidget_GetItemsForSource_Params
{
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	TArray<class UEquipmentItem*>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonVendorWidget.ClearVendorItems
struct UArchonVendorWidget_ClearVendorItems_Params
{
};

// Function Archon.ArchonVendorWidget.AddEquipmentToVendor
struct UArchonVendorWidget_AddEquipmentToVendor_Params
{
	class FString                                      ItemID;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ArchonVOMouthComponent.GetSpeaker
struct UArchonVOMouthComponent_GetSpeaker_Params
{
	class UArchonSpeaker*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonVOMouthComponent.GetAttachedAkComponent
struct UArchonVOMouthComponent_GetAttachedAkComponent_Params
{
	class UAkComponent*                                ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonWarpComponent.UpdateTurnWarpTarget
struct UArchonWarpComponent_UpdateTurnWarpTarget_Params
{
	struct FVector                                     InTarget;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonWarpComponent.UpdateTranslateWarpTarget
struct UArchonWarpComponent_UpdateTranslateWarpTarget_Params
{
	struct FVector                                     InTarget;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.ArchonWarpComponent.StopTrajectoryWarp
struct UArchonWarpComponent_StopTrajectoryWarp_Params
{
};

// Function Archon.ArchonWarpComponent.StartTrajectoryWarp
struct UArchonWarpComponent_StartTrajectoryWarp_Params
{
	class UTrajectory*                                 Trajectory;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonWarpComponent.OpenTurnWarpWindow
struct UArchonWarpComponent_OpenTurnWarpWindow_Params
{
	class UAnimNotifyState*                            Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InMaxHalfAngle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InRotationRate;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonWarpComponentAutoRotationRateMode           RotationRateMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxRotationRate;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       PivotSocket;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonWarpComponent.OpenTranslateWarpWindow
struct UArchonWarpComponent_OpenTranslateWarpWindow_Params
{
	class UAnimNotifyState*                            Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SpeedAutoScale;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceThreshold;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonWarpComponent.OnRep_TurnWarpTarget
struct UArchonWarpComponent_OnRep_TurnWarpTarget_Params
{
};

// Function Archon.ArchonWarpComponent.HandleCharacterMovementUpdated
struct UArchonWarpComponent_HandleCharacterMovementUpdated_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OldLocation;                                              // (Parm, IsPlainOldData)
	struct FVector                                     OldVelocity;                                              // (Parm, IsPlainOldData)
};

// Function Archon.ArchonWarpComponent.CloseTurnWarpWindow
struct UArchonWarpComponent_CloseTurnWarpWindow_Params
{
	class UAnimNotifyState*                            Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonWarpComponent.CloseTranslateWarpWindow
struct UArchonWarpComponent_CloseTranslateWarpWindow_Params
{
	class UAnimNotifyState*                            Notify;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonWeapon.ServerProcessEmberCharge
struct AArchonWeapon_ServerProcessEmberCharge_Params
{
};

// Function Archon.ArchonWeapon.ProcessEmberChargeInput
struct AArchonWeapon_ProcessEmberChargeInput_Params
{
};

// Function Archon.ArchonWeapon.OnEmberChargeWindowStart
struct AArchonWeapon_OnEmberChargeWindowStart_Params
{
};

// Function Archon.ArchonWeapon.OnEmberChargeWindowEnd
struct AArchonWeapon_OnEmberChargeWindowEnd_Params
{
};

// Function Archon.ArchonWeapon.OnEmberChargeSuccessful
struct AArchonWeapon_OnEmberChargeSuccessful_Params
{
};

// Function Archon.ArchonWeapon.OnEmberChargeFail
struct AArchonWeapon_OnEmberChargeFail_Params
{
};

// Function Archon.ArchonWeapon.OnComboStarted
struct AArchonWeapon_OnComboStarted_Params
{
};

// Function Archon.ArchonWeapon.OnComboNextMove
struct AArchonWeapon_OnComboNextMove_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ArchonWeapon.OnComboEnded
struct AArchonWeapon_OnComboEnded_Params
{
};

// Function Archon.ArchonWeapon.OnComboBuffered
struct AArchonWeapon_OnComboBuffered_Params
{
	EArchonAttackActionKey                             PrimaryKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKeyModifier                     ModifierKey;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonWeapon.OnChargeStarted
struct AArchonWeapon_OnChargeStarted_Params
{
};

// Function Archon.ArchonWeapon.OnChargeLevelChanged
struct AArchonWeapon_OnChargeLevelChanged_Params
{
	int                                                PreviousChargeLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewChargeLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ArchonWeapon.OnChargeEnded
struct AArchonWeapon_OnChargeEnded_Params
{
};

// Function Archon.ArchonWeapon.ModifyDamageKeys
struct AArchonWeapon_ModifyDamageKeys_Params
{
	TArray<struct FName>                               InDamageKeys;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               OutDamageKeys;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.ArchonWeapon.LookupPowerTableRow
struct AArchonWeapon_LookupPowerTableRow_Params
{
	struct FName                                       RowName;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FWeaponPowerTableData                       OutPowerTableData;                                        // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonWeapon.K2_OnUnEquip
struct AArchonWeapon_K2_OnUnEquip_Params
{
};

// Function Archon.ArchonWeapon.K2_OnEquip
struct AArchonWeapon_K2_OnEquip_Params
{
};

// Function Archon.ArchonWeapon.HasReceivedEmberCharge
struct AArchonWeapon_HasReceivedEmberCharge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonWeapon.GetTransmogID
struct AArchonWeapon_GetTransmogID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonWeapon.GetSubMesh
struct AArchonWeapon_GetSubMesh_Params
{
	EWeaponRole                                        WeaponRole;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonWeapon.GetPawnOwner
struct AArchonWeapon_GetPawnOwner_Params
{
	class AArchonCharacter*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonWeapon.GetItemID
struct AArchonWeapon_GetItemID_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ArchonWeapon.GetCurrentLevel
struct AArchonWeapon_GetCurrentLevel_Params
{
	EUpgradeableItemLevel                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonWeapon.DeactivateSpecialAbilities
struct AArchonWeapon_DeactivateSpecialAbilities_Params
{
};

// Function Archon.ArchonWeapon.CanExecuteComboTransition
struct AArchonWeapon_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonWeapon.CanChangeChargeLevel
struct AArchonWeapon_CanChangeChargeLevel_Params
{
	int                                                PreviousChargeLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewChargeLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FComboChargeData                            ChargeData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	EArchonAttackActionKey                             CurrentHeldKey;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ArchonWeapon.CancelEmberCharge
struct AArchonWeapon_CancelEmberCharge_Params
{
};

// Function Archon.ArchonWeapon.AddSubMeshMapping
struct AArchonWeapon_AddSubMeshMapping_Params
{
	EWeaponRole                                        WeaponRole;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Archon.ArchonWeapon.ActivateSpecialAbilities
struct AArchonWeapon_ActivateSpecialAbilities_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.AtmosphereSpawner.InitEditorAtmosphere
struct AAtmosphereSpawner_InitEditorAtmosphere_Params
{
};

// Function Archon.AutoPlayerUtilityLibrary.LoadAssetClassSynchronously
struct UAutoPlayerUtilityLibrary_LoadAssetClassSynchronously_Params
{
	TAssetPtr<class UClass>                            AssetClass;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Challenge.OnEndTimeReplicated
struct UChallenge_OnEndTimeReplicated_Params
{
};

// Function Archon.Challenge.OnDataReplicated
struct UChallenge_OnDataReplicated_Params
{
};

// Function Archon.Challenge.IsGoalChallenge
struct UChallenge_IsGoalChallenge_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Challenge.IsComplete
struct UChallenge_IsComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Challenge.HasExpired
struct UChallenge_HasExpired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Challenge.GetTrackName
struct UChallenge_GetTrackName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Challenge.GetObjectives
struct UChallenge_GetObjectives_Params
{
	TArray<class UObjective*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.Challenge.GetExpiryTime
struct UChallenge_GetExpiryTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Challenge.GetChallengeTable
struct UChallenge_GetChallengeTable_Params
{
	class UDataTable*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Challenge.GetChallengeID
struct UChallenge_GetChallengeID_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.Challenge.ClientGetTimeUntilNextChallenge
struct UChallenge_ClientGetTimeUntilNextChallenge_Params
{
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Challenge.ClientGetSlotDuration
struct UChallenge_ClientGetSlotDuration_Params
{
	EChallengeSlotDuration                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ChallengeManager.GetUnlockCondition
struct UChallengeManager_GetUnlockCondition_Params
{
	class UClass*                                      UnlockConditionClass;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UUnlockCondition*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ChatClient.SendRoomMessage
struct UChatClient_SendRoomMessage_Params
{
	class FString                                      RoomName;                                                 // (Parm, ZeroConstructor)
	class FString                                      MsgBody;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ChatClient.SendPrivateMessage
struct UChatClient_SendPrivateMessage_Params
{
	class FString                                      FriendName;                                               // (Parm, ZeroConstructor)
	class FString                                      MsgBody;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction Archon.ChatClient.OnChatClientPublicRoomJoined__DelegateSignature
struct UChatClient_OnChatClientPublicRoomJoined__DelegateSignature_Params
{
	class FString                                      RoomName;                                                 // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ChatClient.OnChatClientPublicRoomExited__DelegateSignature
struct UChatClient_OnChatClientPublicRoomExited__DelegateSignature_Params
{
	class FString                                      RoomName;                                                 // (Parm, ZeroConstructor)
};

// DelegateFunction Archon.ChatClient.OnChatClientMessageAdded__DelegateSignature
struct UChatClient_OnChatClientMessageAdded__DelegateSignature_Params
{
	struct FBPChatClientMessage                        Message;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// DelegateFunction Archon.ChatClient.OnBroadcastMessage__DelegateSignature
struct UChatClient_OnBroadcastMessage__DelegateSignature_Params
{
	TArray<struct FArchonBroadcastMessage>             Messages;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ChatClient.JoinPublicRoom
struct UChatClient_JoinPublicRoom_Params
{
	class FString                                      RoomName;                                                 // (Parm, ZeroConstructor)
};

// Function Archon.ChatClient.IsChatConnected
struct UChatClient_IsChatConnected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ChatClient.InsertStatusMessage
struct UChatClient_InsertStatusMessage_Params
{
	struct FText                                       MsgBody;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ChatClient.InsertChatBreak
struct UChatClient_InsertChatBreak_Params
{
};

// Function Archon.ChatClient.HasJoinedRoom
struct UChatClient_HasJoinedRoom_Params
{
	class FString                                      RoomName;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ChatClient.GetRoomMessages
struct UChatClient_GetRoomMessages_Params
{
	class FString                                      RoomName;                                                 // (Parm, ZeroConstructor)
	TArray<struct FBPChatClientMessage>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ChatClient.GetPartyChatChannel
struct UChatClient_GetPartyChatChannel_Params
{
	bool                                               bIsCity;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ChatClient.GetMainChatChannel
struct UChatClient_GetMainChatChannel_Params
{
	bool                                               bIsCity;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ChatClient.GetLastMessages
struct UChatClient_GetLastMessages_Params
{
	TArray<struct FBPChatClientMessage>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ChatClient.GetGeneralChatChannel
struct UChatClient_GetGeneralChatChannel_Params
{
	class FString                                      ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ChatClient.GetBroadcastMessages
struct UChatClient_GetBroadcastMessages_Params
{
	TArray<struct FArchonBroadcastMessage>             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.ChatClient.ExitRoom
struct UChatClient_ExitRoom_Params
{
	class FString                                      RoomName;                                                 // (Parm, ZeroConstructor)
};

// Function Archon.ChatClient.BreakBPChatClientMessage
struct UChatClient_BreakBPChatClientMessage_Params
{
	struct FBPChatClientMessage                        InMessage;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FText                                       OutFromName;                                              // (Parm, OutParm)
	struct FText                                       OutToName;                                                // (Parm, OutParm)
	struct FText                                       OutMessage;                                               // (Parm, OutParm)
	struct FText                                       OutRoom;                                                  // (Parm, OutParm)
	bool                                               bIsFromSelf;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.CraftItemCallbackProxy.CraftItem
struct UCraftItemCallbackProxy_CraftItem_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem*                        RecipeItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FCraftingPayload                            Payload;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      Source;                                                   // (Parm, ZeroConstructor)
	class UCraftItemCallbackProxy*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.CreateLobbyCallbackProxy.CreateLobby
struct UCreateLobbyCallbackProxy_CreateLobby_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UCreateLobbyCallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.DamageComponent.StopRecordingHitLocations
struct UDamageComponent_StopRecordingHitLocations_Params
{
	class FString                                      SaveDirectory;                                            // (Parm, ZeroConstructor)
	class FString                                      FileName;                                                 // (Parm, ZeroConstructor)
};

// Function Archon.DamageComponent.StartRecordingHitLocations
struct UDamageComponent_StartRecordingHitLocations_Params
{
};

// Function Archon.DamageComponent.ServerTryDoDamage
struct UDamageComponent_ServerTryDoDamage_Params
{
	struct FDamagePayload                              Payload;                                                  // (ConstParm, Parm, ReferenceParm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
};

// Function Archon.DamageComponent.RestorePhysicsBodies
struct UDamageComponent_RestorePhysicsBodies_Params
{
	TArray<struct FName>                               PhysicsBodyNames;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.DamageComponent.ResetPhysicsBodies
struct UDamageComponent_ResetPhysicsBodies_Params
{
};

// Function Archon.DamageComponent.RemovePhysicsBodies
struct UDamageComponent_RemovePhysicsBodies_Params
{
	TArray<struct FName>                               PhysicsBodyNames;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.DamageComponent.RefreshBoneTransforms
struct UDamageComponent_RefreshBoneTransforms_Params
{
	class USkeletalMeshComponent*                      MeshComponent;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Archon.DamageComponent.OnMontageStarted
struct UDamageComponent_OnMontageStarted_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.DamageComponent.IsDamageWindowActive
struct UDamageComponent_IsDamageWindowActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.DamageComponent.GetDamageTypeForCurrentWeapon
struct UDamageComponent_GetDamageTypeForCurrentWeapon_Params
{
	struct FName                                       DamageType;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.DamageComponent.GetDamageScaleForCurrentWeapon
struct UDamageComponent_GetDamageScaleForCurrentWeapon_Params
{
	struct FName                                       DamageType;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.DamageComponent.ClientTryDoDamage
struct UDamageComponent_ClientTryDoDamage_Params
{
	struct FDamagePayload                              Payload;                                                  // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.DamageComponent.ClientDoDamageSucceed
struct UDamageComponent_ClientDoDamageSucceed_Params
{
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
};

// Function Archon.DamageComponent.ClientDoDamageFailed
struct UDamageComponent_ClientDoDamageFailed_Params
{
	int16_t                                            PredictionKey;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.DamageNotifyState.ShouldApplyDamage
struct UDamageNotifyState_ShouldApplyDamage_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.DamageNotifyState.ModifyWeaponDamageKeys
struct UDamageNotifyState_ModifyWeaponDamageKeys_Params
{
	class AArchonWeapon*                               Weapon;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               InDamageKeys;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               OutDamageKeys;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.DamageNotifyState.ModifyDamageKeys
struct UDamageNotifyState_ModifyDamageKeys_Params
{
	class USkeletalMeshComponent*                      MeshComp;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               InDamageKeys;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               OutDamageKeys;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.DestroyLobbyCallbackProxy.DestroyLobby
struct UDestroyLobbyCallbackProxy_DestroyLobby_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UDestroyLobbyCallbackProxy*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.FocusState.RestoreFocus
struct UFocusState_RestoreFocus_Params
{
	class ULocalPlayer*                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.FocusState.GetFocusState
struct UFocusState_GetFocusState_Params
{
	class ULocalPlayer*                                Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFocusState*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.GetAvailableMemberListCallbackProxy.GetAvailableMemberList
struct UGetAvailableMemberListCallbackProxy_GetAvailableMemberList_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGetAvailableMemberListCallbackProxy*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.GetLobbiesLobbyCallbackProxy.GetLobbies
struct UGetLobbiesLobbyCallbackProxy_GetLobbies_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UGetLobbiesLobbyCallbackProxy*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.GetTitleNewsCallbackProxy.GetArchonTitleNews
struct UGetTitleNewsCallbackProxy_GetArchonTitleNews_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InCount;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UGetTitleNewsCallbackProxy*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.GuildComponent.ViewMyGuildInvites
struct UGuildComponent_ViewMyGuildInvites_Params
{
};

// Function Archon.GuildComponent.ViewAllGuildInvites
struct UGuildComponent_ViewAllGuildInvites_Params
{
};

// Function Archon.GuildComponent.ServerInviteCharacterToGuild
struct UGuildComponent_ServerInviteCharacterToGuild_Params
{
	class FString                                      UserIdStr;                                                // (Parm, ZeroConstructor)
};

// Function Archon.GuildComponent.OnCreateGuildComplete
struct UGuildComponent_OnCreateGuildComplete_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ErrorMessage;                                             // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.GuildComponent.LeaveGuild
struct UGuildComponent_LeaveGuild_Params
{
};

// Function Archon.GuildComponent.KickCharacterFromGuild
struct UGuildComponent_KickCharacterFromGuild_Params
{
	class FString                                      KickCharacterId;                                          // (Parm, ZeroConstructor)
};

// Function Archon.GuildComponent.InviteCharacterToGuild
struct UGuildComponent_InviteCharacterToGuild_Params
{
	class FString                                      CharacterName;                                            // (Parm, ZeroConstructor)
};

// Function Archon.GuildComponent.HasOfficerPermissions
struct UGuildComponent_HasOfficerPermissions_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.GuildComponent.GetChatChannel
struct UGuildComponent_GetChatChannel_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.GuildComponent.DisbandGuild
struct UGuildComponent_DisbandGuild_Params
{
};

// Function Archon.GuildComponent.DeclineGuildInvitation
struct UGuildComponent_DeclineGuildInvitation_Params
{
	class FString                                      RequestGuildId;                                           // (Parm, ZeroConstructor)
};

// Function Archon.GuildComponent.CreateGuild
struct UGuildComponent_CreateGuild_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	class FString                                      Nameplate;                                                // (Parm, ZeroConstructor)
};

// Function Archon.GuildComponent.ChangeLeaderOfGuild
struct UGuildComponent_ChangeLeaderOfGuild_Params
{
	class FString                                      NewLeaderCharacterId;                                     // (Parm, ZeroConstructor)
};

// Function Archon.GuildComponent.ChangeCharacterRank
struct UGuildComponent_ChangeCharacterRank_Params
{
	class FString                                      ChangeCharacterId;                                        // (Parm, ZeroConstructor)
	EArchonGuildRank                                   Rank;                                                     // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Archon.GuildComponent.CancelGuildInvitation
struct UGuildComponent_CancelGuildInvitation_Params
{
	class FString                                      RequestCharacterId;                                       // (Parm, ZeroConstructor)
};

// Function Archon.GuildComponent.AcceptGuildInvite
struct UGuildComponent_AcceptGuildInvite_Params
{
	class FString                                      AcceptGuildId;                                            // (Parm, ZeroConstructor)
};

// Function Archon.HuntSystemComponent.ServerOnHuntCompleted
struct UHuntSystemComponent_ServerOnHuntCompleted_Params
{
	class FString                                      MatchmakerHuntID;                                         // (Parm, ZeroConstructor)
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.HuntSystemComponent.GetScheduledHuntTimeRemaining
struct UHuntSystemComponent_GetScheduledHuntTimeRemaining_Params
{
	class FString                                      HuntId;                                                   // (Parm, ZeroConstructor)
	struct FTimespan                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.HuntSystemComponent.GetPlayerHuntID
struct UHuntSystemComponent_GetPlayerHuntID_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.HuntSystemComponent.GetHuntsForRegion
struct UHuntSystemComponent_GetHuntsForRegion_Params
{
	struct FName                                       RegionId;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.HuntSystemComponent.GetHuntCatalog
struct UHuntSystemComponent_GetHuntCatalog_Params
{
	class UHuntCatalog*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.HuntSystemComponent.GetAvailableHuntRegions
struct UHuntSystemComponent_GetAvailableHuntRegions_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.HuntSystemComponent.DebugServerCompleteHunt
struct UHuntSystemComponent_DebugServerCompleteHunt_Params
{
	class FString                                      PlayerHunt;                                               // (Parm, ZeroConstructor)
	class FString                                      MatchmakerHunt;                                           // (Parm, ZeroConstructor)
};

// Function Archon.HuntCatalog.IsHuntUnlocked
struct UHuntCatalog_IsHuntUnlocked_Params
{
	struct FHunt_UnlockInfo                            UnlockInfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class AArchonPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.HuntCatalog.IsAvailable
struct UHuntCatalog_IsAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.HuntCatalog.GetPlayerHunt
struct UHuntCatalog_GetPlayerHunt_Params
{
	class FString                                      PlayerHuntID;                                             // (Parm, ZeroConstructor)
	struct FPlayerHuntTableData                        HuntData;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.HuntCatalog.GetMatchmakerHunt
struct UHuntCatalog_GetMatchmakerHunt_Params
{
	class FString                                      MatchmakerHuntID;                                         // (Parm, ZeroConstructor)
	struct FMatchmakerHuntTableData                    HuntData;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.HuntCatalog.GetHuntMatchmakingOptions
struct UHuntCatalog_GetHuntMatchmakingOptions_Params
{
	class FString                                      PlayerHuntID;                                             // (Parm, ZeroConstructor)
	class AArchonPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.InputAction.ExecuteAction
struct UInputAction_ExecuteAction_Params
{
	class AArchonCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.InputActionCondition.CanExecuteAction
struct UInputActionCondition_CanExecuteAction_Params
{
	class AArchonCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.InputBufferTransitionCondition.CanTransition
struct UInputBufferTransitionCondition_CanTransition_Params
{
	class AArchonCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AArchonWeapon*                               Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.InputBufferTransitionCondition.CallCanTransition
struct UInputBufferTransitionCondition_CallCanTransition_Params
{
	class UClass*                                      TransitionCondition;                                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AArchonCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AArchonWeapon*                               Weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.JoinLobbyCallbackProxy.JoinLobby
struct UJoinLobbyCallbackProxy_JoinLobby_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyId                              InLobbyId;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class UJoinLobbyCallbackProxy*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.JsonBPLibrary.JsonToString
struct UJsonBPLibrary_JsonToString_Params
{
	struct FJsonBPValue                                Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.JsonBPLibrary.CreateJsonValueString
struct UJsonBPLibrary_CreateJsonValueString_Params
{
	class FString                                      Value;                                                    // (Parm, ZeroConstructor)
	struct FJsonBPValue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.JsonBPLibrary.CreateJsonValueNull
struct UJsonBPLibrary_CreateJsonValueNull_Params
{
	struct FJsonBPValue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.JsonBPLibrary.CreateJsonValueInt
struct UJsonBPLibrary_CreateJsonValueInt_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJsonBPValue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.JsonBPLibrary.CreateJsonValueFloat
struct UJsonBPLibrary_CreateJsonValueFloat_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJsonBPValue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.JsonBPLibrary.CreateJsonValueBool
struct UJsonBPLibrary_CreateJsonValueBool_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FJsonBPValue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.JsonBPLibrary.CreateJsonObjectField
struct UJsonBPLibrary_CreateJsonObjectField_Params
{
	class FString                                      Name;                                                     // (Parm, ZeroConstructor)
	struct FJsonBPValue                                Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FJsonBPObjectField                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.JsonBPLibrary.CreateJsonObject
struct UJsonBPLibrary_CreateJsonObject_Params
{
	TArray<struct FJsonBPObjectField>                  Fields;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FJsonBPValue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.JsonBPLibrary.CreateJsonArray
struct UJsonBPLibrary_CreateJsonArray_Params
{
	TArray<struct FJsonBPValue>                        Elements;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FJsonBPValue                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.KickMemberLobbyCallbackProxy.KickMember
struct UKickMemberLobbyCallbackProxy_KickMember_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            InMemberId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UKickMemberLobbyCallbackProxy*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.LeaveLobbyCallbackProxy.LeaveLobby
struct ULeaveLobbyCallbackProxy_LeaveLobby_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class ULeaveLobbyCallbackProxy*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.MarkableActorInterface.GetMarkerComponent
struct UMarkableActorInterface_GetMarkerComponent_Params
{
	class UMarkerComponent*                            ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.MarkerComponent.ShouldShowOnHUD
struct UMarkerComponent_ShouldShowOnHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.MarkerComponent.ShouldShowOnCompass
struct UMarkerComponent_ShouldShowOnCompass_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.MarkerComponent.SetMarker
struct UMarkerComponent_SetMarker_Params
{
	class UClass*                                      NewMarker;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.MarkerComponent.GetScreenLocation
struct UMarkerComponent_GetScreenLocation_Params
{
	class APlayerController*                           Player;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ScreenLocation;                                           // (Parm, OutParm, IsPlainOldData)
	bool                                               bIsOffscreen;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OffscreenRotation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.MarkerComponent.GetBrush
struct UMarkerComponent_GetBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.MarkerSystemComponent.GetCompassMarkers
struct UMarkerSystemComponent_GetCompassMarkers_Params
{
	TArray<class UMarkerComponent*>                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.MarkerSystemComponent.DrawMarkers
struct UMarkerSystemComponent_DrawMarkers_Params
{
};

// Function Archon.MonsterPartActor.OnRep_Health
struct AMonsterPartActor_OnRep_Health_Params
{
};

// Function Archon.MonsterPartActor.GetMonsterPartComponent
struct AMonsterPartActor_GetMonsterPartComponent_Params
{
	class UMonsterPartComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.MonsterPartActor.GetMaxHealth
struct AMonsterPartActor_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.MonsterPartActor.GetHealth
struct AMonsterPartActor_GetHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.MonsterPartComponent.UpdateResistsFromBehemoth
struct UMonsterPartComponent_UpdateResistsFromBehemoth_Params
{
};

// Function Archon.MonsterPartComponent.SetCollisionResponseToChannelForBone
struct UMonsterPartComponent_SetCollisionResponseToChannelForBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.MonsterPartComponent.SetCollisionResponseToChannel
struct UMonsterPartComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.MonsterPartComponent.SetCollisionEnabledForBones
struct UMonsterPartComponent_SetCollisionEnabledForBones_Params
{
	TEnumAsByte<ECollisionEnabled>                     NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               BoneNames;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.MonsterPartComponent.SetCollisionEnabledForBone
struct UMonsterPartComponent_SetCollisionEnabledForBone_Params
{
	TEnumAsByte<ECollisionEnabled>                     NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function Archon.MonsterPartComponent.SetCollisionEnabled
struct UMonsterPartComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.MonsterPartComponent.OnPreMitigateDamageBP
struct UMonsterPartComponent_OnPreMitigateDamageBP_Params
{
	class AActor*                                      DamageGiver;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            DamageEventData;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       DamageEventTags;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bHasHitResult;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bOverrideDamageData;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OutDamageEventTags;                                       // (Parm, OutParm)
	struct FDamageEventData                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.MonsterPartComponent.InitializeHealth
struct UMonsterPartComponent_InitializeHealth_Params
{
};

// Function Archon.MonsterPartComponent.InitializeAttributes
struct UMonsterPartComponent_InitializeAttributes_Params
{
};

// Function Archon.MonsterPartComponent.GetMaxHealth
struct UMonsterPartComponent_GetMaxHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.MonsterPartComponent.GetCurrentHealth
struct UMonsterPartComponent_GetCurrentHealth_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.MonsterPartComponent.GetAbilitySystemComponent
struct UMonsterPartComponent_GetAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.MonsterPartComponent.ContainsComponent
struct UMonsterPartComponent_ContainsComponent_Params
{
	class UShapeComponent*                             ShapeComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.NavMeshCollisionComponent.SetCollisionEnabled
struct UNavMeshCollisionComponent_SetCollisionEnabled_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.ServerPlayMontage
struct UNetworkedMontageComponent_ServerPlayMontage_Params
{
	class UAnimMontage*                                NewAnimMontage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WorldTimeOnPlay;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RootMotionScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.ServerMontageStop
struct UNetworkedMontageComponent_ServerMontageStop_Params
{
	float                                              OverrideBlendOutTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.ServerCurrentMontageSetPlayRate
struct UNetworkedMontageComponent_ServerCurrentMontageSetPlayRate_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.ServerCurrentMontageSetNextSectionName
struct UNetworkedMontageComponent_ServerCurrentMontageSetNextSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClientPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextSectionName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.ServerCurrentMontageJumpToSectionName
struct UNetworkedMontageComponent_ServerCurrentMontageJumpToSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.PlayMontage
struct UNetworkedMontageComponent_PlayMontage_Params
{
	class UAnimMontage*                                NewAnimMontage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSectionName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RootMotionScale;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.OnRep_ReplicatedAnimMontage
struct UNetworkedMontageComponent_OnRep_ReplicatedAnimMontage_Params
{
};

// Function Archon.NetworkedMontageComponent.OnMontageEnded
struct UNetworkedMontageComponent_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.CurrentMontageStop
struct UNetworkedMontageComponent_CurrentMontageStop_Params
{
	float                                              OverrideBlendOutTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.CurrentMontageSetPlayRate
struct UNetworkedMontageComponent_CurrentMontageSetPlayRate_Params
{
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.CurrentMontageSetNextSectionName
struct UNetworkedMontageComponent_CurrentMontageSetNextSectionName_Params
{
	struct FName                                       FromSectionName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ToSectionName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.NetworkedMontageComponent.CurrentMontageJumpToSection
struct UNetworkedMontageComponent_CurrentMontageJumpToSection_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ObjectiveData.OnSetObjectiveData
struct UObjectiveData_OnSetObjectiveData_Params
{
	struct FGameplayObjective                          TheData;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.Objective.OnRep_ParentType
struct UObjective_OnRep_ParentType_Params
{
};

// Function Archon.Objective.OnRep_OwningQuest
struct UObjective_OnRep_OwningQuest_Params
{
};

// Function Archon.Objective.OnRep_OwningObjective
struct UObjective_OnRep_OwningObjective_Params
{
};

// Function Archon.Objective.OnRep_OwningChallenge
struct UObjective_OnRep_OwningChallenge_Params
{
};

// Function Archon.Objective.OnRep_ObjectiveDataIdx
struct UObjective_OnRep_ObjectiveDataIdx_Params
{
};

// Function Archon.Objective.MarkDirty
struct UObjective_MarkDirty_Params
{
};

// Function Archon.Objective.IsOptional
struct UObjective_IsOptional_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective.GetStatus
struct UObjective_GetStatus_Params
{
	EObjectiveStatus                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective.GetProgressText
struct UObjective_GetProgressText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Objective.GetObjectiveData
struct UObjective_GetObjectiveData_Params
{
	class UObjectiveData*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective.GetDescription
struct UObjective_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Objective.GetChildrenObjectives
struct UObjective_GetChildrenObjectives_Params
{
	TArray<class UObjective*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.Objective.ChangeStatus
struct UObjective_ChangeStatus_Params
{
	EObjectiveStatus                                   NewStatus;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.Objective_BehemothBase.GetCurrentAmount
struct UObjective_BehemothBase_GetCurrentAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective_BehemothParts.OnPartBroken
struct UObjective_BehemothParts_OnPartBroken_Params
{
	class AActor*                                      Behemoth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.Objective_BehemothStaggers.OnBehemothStaggered
struct UObjective_BehemothStaggers_OnBehemothStaggered_Params
{
	class AActor*                                      Behemoth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasInterrupt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.Objective_Blueprint.OnReset
struct UObjective_Blueprint_OnReset_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective_Blueprint.OnGetDescriptionStringFormat
struct UObjective_Blueprint_OnGetDescriptionStringFormat_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.Objective_Blueprint.OnDeactivate
struct UObjective_Blueprint_OnDeactivate_Params
{
};

// Function Archon.Objective_Blueprint.OnActivate
struct UObjective_Blueprint_OnActivate_Params
{
};

// Function Archon.Objective_CollectItems.GetCurrentAmount
struct UObjective_CollectItems_GetCurrentAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective_EquipmentPower.OnLoadoutChanged
struct UObjective_EquipmentPower_OnLoadoutChanged_Params
{
};

// Function Archon.Objective_HandInItems.GetCurrentAmount
struct UObjective_HandInItems_GetCurrentAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective_Hunt.OnHuntCompleted
struct UObjective_Hunt_OnHuntCompleted_Params
{
	class FString                                      PlayerHuntID;                                             // (Parm, OutParm, ZeroConstructor)
	struct FPlayerHuntTableData                        PlayerHunt;                                               // (Parm, OutParm)
	class FString                                      MatchmakerHuntID;                                         // (Parm, OutParm, ZeroConstructor)
	struct FMatchmakerHuntTableData                    MatchmakerHunt;                                           // (Parm, OutParm)
};

// Function Archon.Objective_Hunt.GetCurrentAmount
struct UObjective_Hunt_GetCurrentAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective_InteractWith.OnInteractWith
struct UObjective_InteractWith_OnInteractWith_Params
{
	class FString                                      Target;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.Objective_InteractWith.GetCurrentAmount
struct UObjective_InteractWith_GetCurrentAmount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Objective_KillBehemoth.OnBehemothKilled
struct UObjective_KillBehemoth_OnBehemothKilled_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.Objective_OrConditional.GetProgressText
struct UObjective_OrConditional_GetProgressText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Objective_ProgressTo.OnProgressRankSet
struct UObjective_ProgressTo_OnProgressRankSet_Params
{
	struct FName                                       Track;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Rank;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.PlayFabCatalogDataTableLibrary.GetPlayFabCatalogDataTableItemClassReference
struct UPlayFabCatalogDataTableLibrary_GetPlayFabCatalogDataTableItemClassReference_Params
{
	class UPlayFabCatalogDataTable*                    Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStringClassReference                       StringClassReference;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.PlayFabCatalogDataTableLibrary.GetPlayFabCatalogDataTableItemClass
struct UPlayFabCatalogDataTableLibrary_GetPlayFabCatalogDataTableItemClass_Params
{
	class UPlayFabCatalogDataTable*                    Table;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ProgressionComponent.UpdateTracks
struct UProgressionComponent_UpdateTracks_Params
{
};

// Function Archon.ProgressionComponent.UpdateAllChallenges
struct UProgressionComponent_UpdateAllChallenges_Params
{
	bool                                               CreateNewChallenges;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ProgressionComponent.ShouldGrantPrestigeProgress
struct UProgressionComponent_ShouldGrantPrestigeProgress_Params
{
	struct FName                                       ProgressionTrack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ProgressionComponent.SetProgressRank
struct UProgressionComponent_SetProgressRank_Params
{
	struct FName                                       ProgressionTrack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ProgressionComponent.ServerUpdateTracks
struct UProgressionComponent_ServerUpdateTracks_Params
{
};

// Function Archon.ProgressionComponent.ServerUpdateAllChallenges
struct UProgressionComponent_ServerUpdateAllChallenges_Params
{
	bool                                               CanCreateNewChallenges;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ProgressionComponent.ServerToggleDebugLogging
struct UProgressionComponent_ServerToggleDebugLogging_Params
{
};

// Function Archon.ProgressionComponent.ServerSetProgressInTrack
struct UProgressionComponent_ServerSetProgressInTrack_Params
{
	struct FName                                       ProgressionTrack;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                TotalAmount;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ProgressionComponent.ServerDebugSetChallenge
struct UProgressionComponent_ServerDebugSetChallenge_Params
{
	class FString                                      ChallengeID;                                              // (Parm, ZeroConstructor)
	class FString                                      SlotID;                                                   // (Parm, ZeroConstructor)
};

// Function Archon.ProgressionComponent.ServerDebugExpireChallenge
struct UProgressionComponent_ServerDebugExpireChallenge_Params
{
	class FString                                      ChallengeID;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ProgressionComponent.ServerDebugClearChallenge
struct UProgressionComponent_ServerDebugClearChallenge_Params
{
	class FString                                      ChallengeID;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ProgressionComponent.ServerDebugClearAllChallenges
struct UProgressionComponent_ServerDebugClearAllChallenges_Params
{
};

// Function Archon.ProgressionComponent.ServerAddProgressToTrack
struct UProgressionComponent_ServerAddProgressToTrack_Params
{
	struct FName                                       ProgressionTrack;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                IncreaseAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ProgressionComponent.ProgressionReady
struct UProgressionComponent_ProgressionReady_Params
{
};

// Function Archon.ProgressionComponent.ProgressAwarded
struct UProgressionComponent_ProgressAwarded_Params
{
	struct FProgressTrackReward                        Reward;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.ProgressionComponent.OnUnlockedTracksReplicated
struct UProgressionComponent_OnUnlockedTracksReplicated_Params
{
};

// Function Archon.ProgressionComponent.OnChallengesReplicated
struct UProgressionComponent_OnChallengesReplicated_Params
{
};

// Function Archon.ProgressionComponent.HandlePlayerAwardedProgress
struct UProgressionComponent_HandlePlayerAwardedProgress_Params
{
	struct FName                                       ProgressionTrack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RawIncreaseAmount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IncreaseAmount;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumRollOvers;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ProgressionComponent.GrantProgressRank
struct UProgressionComponent_GrantProgressRank_Params
{
	struct FName                                       ProgressionTrack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ProgressionComponent.GrantProgress
struct UProgressionComponent_GrantProgress_Params
{
	TArray<struct FProgressTrackEvent>                 ProgressEvents;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Archon.ProgressionComponent.GetProgressTotal
struct UProgressionComponent_GetProgressTotal_Params
{
	struct FName                                       ProgressionTrack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ProgressionComponent.GetProgressRank
struct UProgressionComponent_GetProgressRank_Params
{
	struct FName                                       ProgressionTrack;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ProgressionComponent.GetProgressionTrackDisplayName
struct UProgressionComponent_GetProgressionTrackDisplayName_Params
{
	struct FName                                       ProgressionTrack;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.ProgressionComponent.ClientOnChallengeCompleted
struct UProgressionComponent_ClientOnChallengeCompleted_Params
{
	class FString                                      TrackId;                                                  // (Parm, ZeroConstructor)
	class FString                                      SlotID;                                                   // (Parm, ZeroConstructor)
	class FString                                      ChallengeID;                                              // (Parm, ZeroConstructor)
};

// Function Archon.ProgressionComponent.ClientLogMessage
struct UProgressionComponent_ClientLogMessage_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
	bool                                               IsWarning;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsError;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.ProgressionComponent.ClientIsTrackUnlocked
struct UProgressionComponent_ClientIsTrackUnlocked_Params
{
	struct FName                                       ProgressionTrack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.ProgressionComponent.CanAcceptProgress
struct UProgressionComponent_CanAcceptProgress_Params
{
	struct FName                                       ProgressionTrack;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.PromoteMemberLobbyCallbackProxy.PromoteMember
struct UPromoteMemberLobbyCallbackProxy_PromoteMember_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            InMemberId;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class UPromoteMemberLobbyCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestData.GetShortDescriptionText
struct UQuestData_GetShortDescriptionText_Params
{
	EArchonGender                                      PlayerGender;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.QuestData.GetDescriptionText
struct UQuestData_GetDescriptionText_Params
{
	EArchonGender                                      PlayerGender;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Quest.ShouldAutoStartNextQuest
struct UQuest_ShouldAutoStartNextQuest_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.Redeem
struct UQuest_Redeem_Params
{
	struct FStringAssetReference                       Redeemer;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               IsDebugging;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.OnRep_QuestDataIdx
struct UQuest_OnRep_QuestDataIdx_Params
{
};

// Function Archon.Quest.OnRep_OwningSerie
struct UQuest_OnRep_OwningSerie_Params
{
};

// Function Archon.Quest.OnRep_IsPendingView
struct UQuest_OnRep_IsPendingView_Params
{
};

// Function Archon.Quest.MarkViewed
struct UQuest_MarkViewed_Params
{
};

// Function Archon.Quest.IsVisible
struct UQuest_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.IsUnlockable
struct UQuest_IsUnlockable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.IsRedeemed
struct UQuest_IsRedeemed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.IsComplete
struct UQuest_IsComplete_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.GetTitle
struct UQuest_GetTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Quest.GetStatus
struct UQuest_GetStatus_Params
{
	EQuestStatus                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.GetShortDescription
struct UQuest_GetShortDescription_Params
{
	EArchonGender                                      PlayerGender;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Quest.GetSerieTitle
struct UQuest_GetSerieTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Quest.GetRedeemerAsset
struct UQuest_GetRedeemerAsset_Params
{
	class UArchonSpeaker*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.GetRedeemer
struct UQuest_GetRedeemer_Params
{
	struct FStringAssetReference                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Quest.GetQuestIDToAutoStart
struct UQuest_GetQuestIDToAutoStart_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.GetQuestData
struct UQuest_GetQuestData_Params
{
	class UQuestData*                                  ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.GetOwningPlayerController
struct UQuest_GetOwningPlayerController_Params
{
	class AArchonPlayerController*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.GetOriginatorAsset
struct UQuest_GetOriginatorAsset_Params
{
	class UArchonSpeaker*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.GetOriginator
struct UQuest_GetOriginator_Params
{
	struct FStringAssetReference                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.Quest.GetObjectives
struct UQuest_GetObjectives_Params
{
	TArray<class UObjective*>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.Quest.GetID
struct UQuest_GetID_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Quest.GetEventsFor
struct UQuest_GetEventsFor_Params
{
	class UObject*                                     Who;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EQuestEventTrigger                                 Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCommit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuestEventData*>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.Quest.GetEvents
struct UQuest_GetEvents_Params
{
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EQuestEventTrigger                                 Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCommit;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuestEventData*>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.Quest.GetDescription
struct UQuest_GetDescription_Params
{
	EArchonGender                                      PlayerGender;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.QuestBlueprintLibrary.QuerySeries
struct UQuestBlueprintLibrary_QuerySeries_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIncludeInvisible;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnavailable;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnavailableButUnlockable;                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnlocked;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeCompleted;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeRedeemed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USerie*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.QuestBlueprintLibrary.QuerySerieQuests
struct UQuestBlueprintLibrary_QuerySerieQuests_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USerie*                                      Serie;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIncludeInvisible;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnavailable;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnavailableButUnlockable;                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnlocked;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeCompleted;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeRedeemed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuest*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.QuestBlueprintLibrary.MarkQuestViewed
struct UQuestBlueprintLibrary_MarkQuestViewed_Params
{
	class APlayerState*                                PlayerState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestBlueprintLibrary.IsQuestPendingView
struct UQuestBlueprintLibrary_IsQuestPendingView_Params
{
	class APlayerState*                                PlayerState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      Quest;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestBlueprintLibrary.GetQuestStatus
struct UQuestBlueprintLibrary_GetQuestStatus_Params
{
	class APlayerState*                                PlayerState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      Quest;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	EQuestStatus                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestEventData.Triggered
struct UQuestEventData_Triggered_Params
{
};

// Function Archon.QuestEventData.OnProcessLocalizationDetailed
struct UQuestEventData_OnProcessLocalizationDetailed_Params
{
	TArray<struct FArchonLocalizationData>             StringsToLoc;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function Archon.QuestEventData.HasTriggered
struct UQuestEventData_HasTriggered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.StartQuestFor
struct UQuestSystemComponent_StartQuestFor_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Who;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.StartQuest
struct UQuestSystemComponent_StartQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.ServerStartQuest
struct UQuestSystemComponent_ServerStartQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.QuestSystemComponent.ServerRedeemQuest
struct UQuestSystemComponent_ServerRedeemQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, ReferenceParm)
};

// Function Archon.QuestSystemComponent.ReplaceEventTokens
struct UQuestSystemComponent_ReplaceEventTokens_Params
{
	struct FText                                       OriginalText;                                             // (Parm)
	class UQuestEventData*                             QuestEventaData;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.QuestSystemComponent.RedeemQuestFor
struct UQuestSystemComponent_RedeemQuestFor_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Who;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.RedeemQuest
struct UQuestSystemComponent_RedeemQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.QueryRedeemableQuests
struct UQuestSystemComponent_QueryRedeemableQuests_Params
{
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIncludeInvisible;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuest*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.QuestSystemComponent.QueryQuestsFor
struct UQuestSystemComponent_QueryQuestsFor_Params
{
	class UObject*                                     Who;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeInvisible;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnavailable;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnavailableButUnlockable;                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnlocked;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeCompleted;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeRedeemed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EQuestRedeemRestriction                            RedeemRestriction;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuest*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.QuestSystemComponent.QueryQuests
struct UQuestSystemComponent_QueryQuests_Params
{
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bIncludeInvisible;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnavailable;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnavailableButUnlockable;                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeUnlocked;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeCompleted;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncludeRedeemed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	EQuestRedeemRestriction                            RedeemRestriction;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuest*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.QuestSystemComponent.GetQuest
struct UQuestSystemComponent_GetQuest_Params
{
	struct FName                                       QuestID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.GetEventsFor
struct UQuestSystemComponent_GetEventsFor_Params
{
	class UObject*                                     Who;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EQuestEventTrigger                                 Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuestEventData*>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.QuestSystemComponent.GetEvents
struct UQuestSystemComponent_GetEvents_Params
{
	struct FStringAssetReference                       Who;                                                      // (ConstParm, Parm, OutParm, ReferenceParm)
	EQuestEventTrigger                                 Trigger;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuestEventData*>                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.QuestSystemComponent.GetAllQuests
struct UQuestSystemComponent_GetAllQuests_Params
{
	TArray<class UQuest*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.QuestSystemComponent.DebugServerUnlockQuest
struct UQuestSystemComponent_DebugServerUnlockQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.DebugServerStartQuest
struct UQuestSystemComponent_DebugServerStartQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.DebugServerResetQuestSeries
struct UQuestSystemComponent_DebugServerResetQuestSeries_Params
{
	class USerie*                                      Series;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.DebugServerResetQuest
struct UQuestSystemComponent_DebugServerResetQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.DebugServerRedeemQuest
struct UQuestSystemComponent_DebugServerRedeemQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.DebugServerCompleteQuest
struct UQuestSystemComponent_DebugServerCompleteQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.DebugServerAbandonQuest
struct UQuestSystemComponent_DebugServerAbandonQuest_Params
{
	class UQuest*                                      Quest;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.DebugResetQuestSeries
struct UQuestSystemComponent_DebugResetQuestSeries_Params
{
	struct FName                                       SeriesID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.QuestSystemComponent.ClientQuestsReady
struct UQuestSystemComponent_ClientQuestsReady_Params
{
};

// Function Archon.Reward.OnSetRewardData
struct UReward_OnSetRewardData_Params
{
	struct FGameplayReward                             RewardData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.Reward.GetDescription
struct UReward_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.SchedulerComponent.ServerToggleDebugLogging
struct USchedulerComponent_ServerToggleDebugLogging_Params
{
};

// Function Archon.SchedulerComponent.ServerGetScheduledItemCompletionCount
struct USchedulerComponent_ServerGetScheduledItemCompletionCount_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.SchedulerComponent.IsItemAvailable
struct USchedulerComponent_IsItemAvailable_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MustHaveSchedule;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.SchedulerComponent.GetScheduleTypeForItem
struct USchedulerComponent_GetScheduleTypeForItem_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EScheduleType                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.SchedulerComponent.GetItemMaxCompletion
struct USchedulerComponent_GetItemMaxCompletion_Params
{
	struct FName                                       ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.SchedulerComponent.GetEndTimeForItem
struct USchedulerComponent_GetEndTimeForItem_Params
{
	class FString                                      ID;                                                       // (Parm, ZeroConstructor)
	struct FDateTime                                   EndTime;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Serie.OnRep_SerieAsset
struct USerie_OnRep_SerieAsset_Params
{
};

// Function Archon.Serie.GetTitle
struct USerie_GetTitle_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.StructBoxLibrary.SetStructInBox
struct UStructBoxLibrary_SetStructInBox_Params
{
	struct FStructBox                                  StructBox;                                                // (Parm, OutParm, ReferenceParm)
	struct FStubStruct                                 CustomStruct;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.StructBoxLibrary.GetStructFromBox
struct UStructBoxLibrary_GetStructFromBox_Params
{
	struct FStructBox                                  StructBox;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FStubStruct                                 CustomStruct;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Trajectory.WarpTrajectoryRotation
struct UTrajectory_WarpTrajectoryRotation_Params
{
	float                                              WarpStartTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WarpEndTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FinalRotation;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UTrajectory*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Trajectory.GetWorldTransformAtTime
struct UTrajectory_GetWorldTransformAtTime_Params
{
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.Trajectory.ExtractTrajectoryFromSpline
struct UTrajectory_ExtractTrajectoryFromSpline_Params
{
	class USplineComponent*                            SplineComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              aTimeStep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrajectory*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Trajectory.ExtractTrajectoryFromMontage
struct UTrajectory_ExtractTrajectoryFromMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrajectory*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Trajectory.ExtractBoneTrajectoryFromMontage
struct UTrajectory_ExtractBoneTrajectoryFromMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              aTimeStep;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTrajectory*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Trajectory.EndTime
struct UTrajectory_EndTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Trajectory.DebugDraw
struct UTrajectory_DebugDraw_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.Trajectory.CreateTrajectory
struct UTrajectory_CreateTrajectory_Params
{
	class UTrajectory*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.Trajectory.AlignTrajectoryEnd
struct UTrajectory_AlignTrajectoryEnd_Params
{
	struct FTransform                                  EndToWorld;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Archon.UnlockCondition.OnSetUnlockData
struct UUnlockCondition_OnSetUnlockData_Params
{
	struct FGameplayUnlockCondition                    UnlockConditionData;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Archon.UnlockCondition.GetDescription
struct UUnlockCondition_GetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.UnlockCondition.Evaluate
struct UUnlockCondition_Evaluate_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      OwningQuest;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UnlockCondition_Blueprint.OnGetDescription
struct UUnlockCondition_Blueprint_OnGetDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.UnlockCondition_Blueprint.OnEvaluate
struct UUnlockCondition_Blueprint_OnEvaluate_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      OwningQuest;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UnlockCondition_Blueprint.OnCommit
struct UUnlockCondition_Blueprint_OnCommit_Params
{
	class AArchonPlayerController*                     PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      OwningQuest;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UpdateLobbyCallbackProxy.UpdateLobby
struct UUpdateLobbyCallbackProxy_UpdateLobby_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyMissionInfo                     MissionInfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class UUpdateLobbyCallbackProxy*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.WaitForWidgetOrTimeout
struct UUtilityMethods_WaitForWidgetOrTimeout_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Archon.UtilityMethods.WaitForAllClientsToComplete_EndOfMission
struct UUtilityMethods_WaitForAllClientsToComplete_EndOfMission_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function Archon.UtilityMethods.ToString
struct UUtilityMethods_ToString_Params
{
	TAssetPtr<class UObject>                           AssetID;                                                  // (Parm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.UtilityMethods.SpawnChildComponentOnActor
struct UUtilityMethods_SpawnChildComponentOnActor_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.UtilityMethods.SpawnChildComponent
struct UUtilityMethods_SpawnChildComponent_Params
{
	class UClass*                                      ComponentClass;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ParentComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Archon.UtilityMethods.SetUserDisplayName
struct UUtilityMethods_SetUserDisplayName_Params
{
	class AArchonPlayerController*                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      NewDisplayName;                                           // (Parm, ZeroConstructor)
};

// Function Archon.UtilityMethods.ReconstructPlayerID
struct UUtilityMethods_ReconstructPlayerID_Params
{
	TArray<int>                                        Values;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.UtilityMethods.RebasePlayerID2
struct UUtilityMethods_RebasePlayerID2_Params
{
	class AArchonPlayerController*                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        OutData;                                                  // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.RebasePlayerID
struct UUtilityMethods_RebasePlayerID_Params
{
	class AArchonPlayerController*                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.UtilityMethods.JoinNames
struct UUtilityMethods_JoinNames_Params
{
	struct FName                                       First;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Separator;                                                // (Parm, ZeroConstructor)
	struct FName                                       Second;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	EArchonCaseBehaviour                               CaseBehaviour;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreNones;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.IsDefaultObject
struct UUtilityMethods_IsDefaultObject_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.HostTravel
struct UUtilityMethods_HostTravel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAbsolute;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Options;                                                  // (Parm, ZeroConstructor)
	bool                                               RecordReplay;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.UtilityMethods.HasReference
struct UUtilityMethods_HasReference_Params
{
	TAssetPtr<class UObject>                           Reference;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetUseableFaceMorphs
struct UUtilityMethods_GetUseableFaceMorphs_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFaceMorphTranslation>               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.UtilityMethods.GetTempPackage
struct UUtilityMethods_GetTempPackage_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetScreenLayer
struct UUtilityMethods_GetScreenLayer_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetPopupLayer
struct UUtilityMethods_GetPopupLayer_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetObjectName
struct UUtilityMethods_GetObjectName_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.UtilityMethods.GetMorphSliderValue
struct UUtilityMethods_GetMorphSliderValue_Params
{
	struct FFaceMorphTranslation                       FaceMorph;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetMatchmakingBuildId
struct UUtilityMethods_GetMatchmakingBuildId_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.UtilityMethods.GetHUDLayer
struct UUtilityMethods_GetHUDLayer_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetGameInstanceFrom
struct UUtilityMethods_GetGameInstanceFrom_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UGameInstance*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetFaceMorphTranslations
struct UUtilityMethods_GetFaceMorphTranslations_Params
{
	class USkeletalMesh*                               SkeletalMesh;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeMissing;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFaceMorphTranslationInformation>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.UtilityMethods.GetDyeRemainingUses
struct UUtilityMethods_GetDyeRemainingUses_Params
{
	class AArchonPlayerController*                     Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDyeRemainingUses>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Archon.UtilityMethods.GetColorInTextureAtLocation
struct UUtilityMethods_GetColorInTextureAtLocation_Params
{
	class UTexture2D*                                  Texture;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetCollisionProfileName
struct UUtilityMethods_GetCollisionProfileName_Params
{
	struct FBodyInstance                               Instance;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetBuildType
struct UUtilityMethods_GetBuildType_Params
{
	EArchonBuildType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.GetBlendingSliderValue
struct UUtilityMethods_GetBlendingSliderValue_Params
{
	struct FFaceMorphTranslation                       FaceMorph;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.Equal_UniqueNetIdRepl
struct UUtilityMethods_Equal_UniqueNetIdRepl_Params
{
	struct FUniqueNetIdRepl                            A;                                                        // (Parm)
	struct FUniqueNetIdRepl                            B;                                                        // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.CreateBasicAssetID
struct UUtilityMethods_CreateBasicAssetID_Params
{
	class UObject*                                     Obj;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UObject>                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.UtilityMethods.CreateAssetID
struct UUtilityMethods_CreateAssetID_Params
{
	class USkeletalMesh*                               Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Archon.UtilityMethods.Crash
struct UUtilityMethods_Crash_Params
{
};

// Function Archon.UtilityMethods.CallActorEvent
struct UUtilityMethods_CallActorEvent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      EventName;                                                // (Parm, ZeroConstructor)
	TArray<class FString>                              Parameters;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Archon.UtilityMethods.ArchonLogError
struct UUtilityMethods_ArchonLogError_Params
{
	class FString                                      Message;                                                  // (Parm, ZeroConstructor)
};

// Function Archon.UtilityMethods.ApplyMorphSliderValue
struct UUtilityMethods_ApplyMorphSliderValue_Params
{
	struct FFaceMorphTranslation                       FaceMorph;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SliderValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Archon.UtilityMethods.ApplyBlendingSliderValue
struct UUtilityMethods_ApplyBlendingSliderValue_Params
{
	struct FFaceMorphTranslation                       FaceMorph;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SliderValue;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
