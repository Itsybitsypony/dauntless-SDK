#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_eventdispatcher_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyAnyIncomingDamagePremit
struct Uplayer_eventdispatcher_bpc_C_RegisterToModifyAnyIncomingDamagePremit_Params
{
	class AActor*                                      DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModifyAnyIncomingDamagePremit
struct Uplayer_eventdispatcher_bpc_C_TryModifyAnyIncomingDamagePremit_Params
{
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageModified;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            ModifiedDamageEvent;                                      // (Parm, OutParm)
	bool                                               TagsModified;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ModifiedTags;                                             // (Parm, OutParm)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.AddPrioritizedModifier
struct Uplayer_eventdispatcher_bpc_C_AddPrioritizedModifier_Params
{
	TArray<class AActor*>                              ModifierList;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      NewModifier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutModifierList;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModifyAnyOutgoingDamagePremit
struct Uplayer_eventdispatcher_bpc_C_TryModifyAnyOutgoingDamagePremit_Params
{
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               DamageModified;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            ModifiedDamageEvent;                                      // (Parm, OutParm)
	bool                                               TagsModified;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ModifiedTags;                                             // (Parm, OutParm)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyAnyOutgoingDamagePremit
struct Uplayer_eventdispatcher_bpc_C_RegisterToModifyAnyOutgoingDamagePremit_Params
{
	class AActor*                                      DamageModifier;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModfiyOutgoingWeaponDamagePreMitigation
struct Uplayer_eventdispatcher_bpc_C_TryModfiyOutgoingWeaponDamagePreMitigation_Params
{
	struct FDamageEventData                            DamageEvent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               DamageModified;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            ModifiedDamageEvent;                                      // (Parm, OutParm)
	bool                                               TagsModified;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       ModifiedTags;                                             // (Parm, OutParm)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyOutgoingWeaponDamagePreMitigation
struct Uplayer_eventdispatcher_bpc_C_RegisterToModifyOutgoingWeaponDamagePreMitigation_Params
{
	class AActor*                                      DamageEventModifier;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyOutgoingDamagePreMitigationActorDestroyed
struct Uplayer_eventdispatcher_bpc_C_ModifyOutgoingDamagePreMitigationActorDestroyed_Params
{
	class AActor*                                      DestroyedModifier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyAnyOutgoingDamagePremitActorDestroyed
struct Uplayer_eventdispatcher_bpc_C_ModifyAnyOutgoingDamagePremitActorDestroyed_Params
{
	class AActor*                                      DestroyedModifier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ReceiveBeginPlay
struct Uplayer_eventdispatcher_bpc_C_ReceiveBeginPlay_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnStaggeredBehemoth_Event
struct Uplayer_eventdispatcher_bpc_C_OnStaggeredBehemoth_Event_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyAnyIncomingDamagePremitActorDestroyed
struct Uplayer_eventdispatcher_bpc_C_ModifyAnyIncomingDamagePremitActorDestroyed_Params
{
	class AActor*                                      DestroyedModifier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyIncomingDamagePreMitigationActorDestroyed
struct Uplayer_eventdispatcher_bpc_C_ModifyIncomingDamagePreMitigationActorDestroyed_Params
{
	class AActor*                                      DestroyedModifier;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnExposedBehemoth_Event
struct Uplayer_eventdispatcher_bpc_C_OnExposedBehemoth_Event_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ExecuteUbergraph_player_eventdispatcher_bpc
struct Uplayer_eventdispatcher_bpc_C_ExecuteUbergraph_player_eventdispatcher_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBehemothExposedByAnyone__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnBehemothExposedByAnyone__DelegateSignature_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBehemothStaggeredByAnyone__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnBehemothStaggeredByAnyone__DelegateSignature_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.AboutToDie__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_AboutToDie__DelegateSignature_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostWeaponHitComplete__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnPostWeaponHitComplete__DelegateSignature_Params
{
	struct FGameplayTagContainer                       DamageAndInstigatorTags;                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FinalDamageAmount;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostMitigationDealtAnyDamage__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnPostMitigationDealtAnyDamage__DelegateSignature_Params
{
	struct Fpostmit_damage_summary                     PostMitigationDamageSummary;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnWasRevived__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnWasRevived__DelegateSignature_Params
{
	class AActor*                                      Reviver;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnRevivedOtherPlayer__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnRevivedOtherPlayer__DelegateSignature_Params
{
	class AActor*                                      OtherPlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostMitigationHitWithWeapon__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnPostMitigationHitWithWeapon__DelegateSignature_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fpostmit_damage_summary                     PostMitigationDamageSummary;                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.CustomPreMitigationDamageHook__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_CustomPreMitigationDamageHook__DelegateSignature_Params
{
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBrokePart__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnBrokePart__DelegateSignature_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnStaggeredBehemoth__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnStaggeredBehemoth__DelegateSignature_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnExposedPart__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnExposedPart__DelegateSignature_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPerfectDodgeRoll__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnPerfectDodgeRoll__DelegateSignature_Params
{
	float                                              DamageMitigated;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnDodgeRollBegin__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnDodgeRollBegin__DelegateSignature_Params
{
};

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPreMitigationHitWithWeaponSwing__DelegateSignature
struct Uplayer_eventdispatcher_bpc_C_OnPreMitigationHitWithWeaponSwing__DelegateSignature_Params
{
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
