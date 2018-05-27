// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_eventdispatcher_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyAnyIncomingDamagePremit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageModifier                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::RegisterToModifyAnyIncomingDamagePremit(class AActor* DamageModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyAnyIncomingDamagePremit");

	Uplayer_eventdispatcher_bpc_C_RegisterToModifyAnyIncomingDamagePremit_Params params;
	params.DamageModifier = DamageModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModifyAnyIncomingDamagePremit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageModified                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        ModifiedDamageEvent            (Parm, OutParm)
// bool                           TagsModified                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   ModifiedTags                   (Parm, OutParm)

void Uplayer_eventdispatcher_bpc_C::TryModifyAnyIncomingDamagePremit(const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageTags, class AActor* DamagingActor, bool* DamageModified, struct FDamageEventData* ModifiedDamageEvent, bool* TagsModified, struct FGameplayTagContainer* ModifiedTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModifyAnyIncomingDamagePremit");

	Uplayer_eventdispatcher_bpc_C_TryModifyAnyIncomingDamagePremit_Params params;
	params.DamageEventData = DamageEventData;
	params.DamageTags = DamageTags;
	params.DamagingActor = DamagingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageModified != nullptr)
		*DamageModified = params.DamageModified;
	if (ModifiedDamageEvent != nullptr)
		*ModifiedDamageEvent = params.ModifiedDamageEvent;
	if (TagsModified != nullptr)
		*TagsModified = params.TagsModified;
	if (ModifiedTags != nullptr)
		*ModifiedTags = params.ModifiedTags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.AddPrioritizedModifier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ModifierList                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  NewModifier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          OutModifierList                (Parm, OutParm, ZeroConstructor)

void Uplayer_eventdispatcher_bpc_C::AddPrioritizedModifier(class AActor* NewModifier, TArray<class AActor*>* ModifierList, TArray<class AActor*>* OutModifierList)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.AddPrioritizedModifier");

	Uplayer_eventdispatcher_bpc_C_AddPrioritizedModifier_Params params;
	params.NewModifier = NewModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifierList != nullptr)
		*ModifierList = params.ModifierList;
	if (OutModifierList != nullptr)
		*OutModifierList = params.OutModifierList;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModifyAnyOutgoingDamagePremit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DamageModified                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        ModifiedDamageEvent            (Parm, OutParm)
// bool                           TagsModified                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   ModifiedTags                   (Parm, OutParm)

void Uplayer_eventdispatcher_bpc_C::TryModifyAnyOutgoingDamagePremit(const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageTags, class AActor* DamagedActor, bool* DamageModified, struct FDamageEventData* ModifiedDamageEvent, bool* TagsModified, struct FGameplayTagContainer* ModifiedTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModifyAnyOutgoingDamagePremit");

	Uplayer_eventdispatcher_bpc_C_TryModifyAnyOutgoingDamagePremit_Params params;
	params.DamageEventData = DamageEventData;
	params.DamageTags = DamageTags;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageModified != nullptr)
		*DamageModified = params.DamageModified;
	if (ModifiedDamageEvent != nullptr)
		*ModifiedDamageEvent = params.ModifiedDamageEvent;
	if (TagsModified != nullptr)
		*TagsModified = params.TagsModified;
	if (ModifiedTags != nullptr)
		*ModifiedTags = params.ModifiedTags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyAnyOutgoingDamagePremit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageModifier                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::RegisterToModifyAnyOutgoingDamagePremit(class AActor* DamageModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyAnyOutgoingDamagePremit");

	Uplayer_eventdispatcher_bpc_C_RegisterToModifyAnyOutgoingDamagePremit_Params params;
	params.DamageModifier = DamageModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModfiyOutgoingWeaponDamagePreMitigation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEvent                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DamageModified                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        ModifiedDamageEvent            (Parm, OutParm)
// bool                           TagsModified                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   ModifiedTags                   (Parm, OutParm)

void Uplayer_eventdispatcher_bpc_C::TryModfiyOutgoingWeaponDamagePreMitigation(const struct FDamageEventData& DamageEvent, class AActor* DamagedActor, const struct FGameplayTagContainer& DamageTags, bool* DamageModified, struct FDamageEventData* ModifiedDamageEvent, bool* TagsModified, struct FGameplayTagContainer* ModifiedTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.TryModfiyOutgoingWeaponDamagePreMitigation");

	Uplayer_eventdispatcher_bpc_C_TryModfiyOutgoingWeaponDamagePreMitigation_Params params;
	params.DamageEvent = DamageEvent;
	params.DamagedActor = DamagedActor;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageModified != nullptr)
		*DamageModified = params.DamageModified;
	if (ModifiedDamageEvent != nullptr)
		*ModifiedDamageEvent = params.ModifiedDamageEvent;
	if (TagsModified != nullptr)
		*TagsModified = params.TagsModified;
	if (ModifiedTags != nullptr)
		*ModifiedTags = params.ModifiedTags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyOutgoingWeaponDamagePreMitigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageEventModifier            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::RegisterToModifyOutgoingWeaponDamagePreMitigation(class AActor* DamageEventModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.RegisterToModifyOutgoingWeaponDamagePreMitigation");

	Uplayer_eventdispatcher_bpc_C_RegisterToModifyOutgoingWeaponDamagePreMitigation_Params params;
	params.DamageEventModifier = DamageEventModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyOutgoingDamagePreMitigationActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedModifier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::ModifyOutgoingDamagePreMitigationActorDestroyed(class AActor* DestroyedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyOutgoingDamagePreMitigationActorDestroyed");

	Uplayer_eventdispatcher_bpc_C_ModifyOutgoingDamagePreMitigationActorDestroyed_Params params;
	params.DestroyedModifier = DestroyedModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyAnyOutgoingDamagePremitActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedModifier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::ModifyAnyOutgoingDamagePremitActorDestroyed(class AActor* DestroyedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyAnyOutgoingDamagePremitActorDestroyed");

	Uplayer_eventdispatcher_bpc_C_ModifyAnyOutgoingDamagePremitActorDestroyed_Params params;
	params.DestroyedModifier = DestroyedModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ReceiveBeginPlay");

	Uplayer_eventdispatcher_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnStaggeredBehemoth_Event
// (BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::OnStaggeredBehemoth_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnStaggeredBehemoth_Event");

	Uplayer_eventdispatcher_bpc_C_OnStaggeredBehemoth_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyAnyIncomingDamagePremitActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedModifier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::ModifyAnyIncomingDamagePremitActorDestroyed(class AActor* DestroyedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyAnyIncomingDamagePremitActorDestroyed");

	Uplayer_eventdispatcher_bpc_C_ModifyAnyIncomingDamagePremitActorDestroyed_Params params;
	params.DestroyedModifier = DestroyedModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyIncomingDamagePreMitigationActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedModifier              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::ModifyIncomingDamagePreMitigationActorDestroyed(class AActor* DestroyedModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ModifyIncomingDamagePreMitigationActorDestroyed");

	Uplayer_eventdispatcher_bpc_C_ModifyIncomingDamagePreMitigationActorDestroyed_Params params;
	params.DestroyedModifier = DestroyedModifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnExposedBehemoth_Event
// (BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::OnExposedBehemoth_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnExposedBehemoth_Event");

	Uplayer_eventdispatcher_bpc_C_OnExposedBehemoth_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ExecuteUbergraph_player_eventdispatcher_bpc
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::ExecuteUbergraph_player_eventdispatcher_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.ExecuteUbergraph_player_eventdispatcher_bpc");

	Uplayer_eventdispatcher_bpc_C_ExecuteUbergraph_player_eventdispatcher_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBehemothExposedByAnyone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::OnBehemothExposedByAnyone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBehemothExposedByAnyone__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnBehemothExposedByAnyone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBehemothStaggeredByAnyone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::OnBehemothStaggeredByAnyone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBehemothStaggeredByAnyone__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnBehemothStaggeredByAnyone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.AboutToDie__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::AboutToDie__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.AboutToDie__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_AboutToDie__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostWeaponHitComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   DamageAndInstigatorTags        (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FinalDamageAmount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::OnPostWeaponHitComplete__DelegateSignature(const struct FGameplayTagContainer& DamageAndInstigatorTags, class AActor* DamagedActor, float FinalDamageAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostWeaponHitComplete__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnPostWeaponHitComplete__DelegateSignature_Params params;
	params.DamageAndInstigatorTags = DamageAndInstigatorTags;
	params.DamagedActor = DamagedActor;
	params.FinalDamageAmount = FinalDamageAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostMitigationDealtAnyDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fpostmit_damage_summary PostMitigationDamageSummary    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::OnPostMitigationDealtAnyDamage__DelegateSignature(const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags, class AActor* DamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostMitigationDealtAnyDamage__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnPostMitigationDealtAnyDamage__DelegateSignature_Params params;
	params.PostMitigationDamageSummary = PostMitigationDamageSummary;
	params.DamageTags = DamageTags;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnWasRevived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Reviver                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::OnWasRevived__DelegateSignature(class AActor* Reviver)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnWasRevived__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnWasRevived__DelegateSignature_Params params;
	params.Reviver = Reviver;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnRevivedOtherPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherPlayer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::OnRevivedOtherPlayer__DelegateSignature(class AActor* OtherPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnRevivedOtherPlayer__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnRevivedOtherPlayer__DelegateSignature_Params params;
	params.OtherPlayer = OtherPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostMitigationHitWithWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fpostmit_damage_summary PostMitigationDamageSummary    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Uplayer_eventdispatcher_bpc_C::OnPostMitigationHitWithWeapon__DelegateSignature(class AActor* DamagedActor, const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPostMitigationHitWithWeapon__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnPostMitigationHitWithWeapon__DelegateSignature_Params params;
	params.DamagedActor = DamagedActor;
	params.PostMitigationDamageSummary = PostMitigationDamageSummary;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.CustomPreMitigationDamageHook__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)

void Uplayer_eventdispatcher_bpc_C::CustomPreMitigationDamageHook__DelegateSignature(const struct FDamageEventData& DamageEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.CustomPreMitigationDamageHook__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_CustomPreMitigationDamageHook__DelegateSignature_Params params;
	params.DamageEventData = DamageEventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBrokePart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::OnBrokePart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnBrokePart__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnBrokePart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnStaggeredBehemoth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::OnStaggeredBehemoth__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnStaggeredBehemoth__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnStaggeredBehemoth__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnExposedPart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::OnExposedPart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnExposedPart__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnExposedPart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPerfectDodgeRoll__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageMitigated                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::OnPerfectDodgeRoll__DelegateSignature(float DamageMitigated)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPerfectDodgeRoll__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnPerfectDodgeRoll__DelegateSignature_Params params;
	params.DamageMitigated = DamageMitigated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnDodgeRollBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uplayer_eventdispatcher_bpc_C::OnDodgeRollBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnDodgeRollBegin__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnDodgeRollBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPreMitigationHitWithWeaponSwing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_eventdispatcher_bpc_C::OnPreMitigationHitWithWeaponSwing__DelegateSignature(const struct FGameplayTagContainer& DamageTags, class AActor* DamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_eventdispatcher_bpc.player_eventdispatcher_bpc_C.OnPreMitigationHitWithWeaponSwing__DelegateSignature");

	Uplayer_eventdispatcher_bpc_C_OnPreMitigationHitWithWeaponSwing__DelegateSignature_Params params;
	params.DamageTags = DamageTags;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
