// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BaseArchonWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetModifyDamageEventPriority
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetModifyDamageEventPriority(int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetModifyDamageEventPriority");

	ABP_BaseArchonWeapon_C_GetModifyDamageEventPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CustomModifyDamageEventData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ModifiedDamageEventData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        OverriddenDamageEventData      (Parm, OutParm)
// bool                           ShouldOverrideDamageTags       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OverriddenDamageTags           (Parm, OutParm)

void ABP_BaseArchonWeapon_C::CustomModifyDamageEventData(const struct FDamageEventData& DamageEventData, class AActor* DamagedActor, const struct FGameplayTagContainer& DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CustomModifyDamageEventData");

	ABP_BaseArchonWeapon_C_CustomModifyDamageEventData_Params params;
	params.DamageEventData = DamageEventData;
	params.DamagedActor = DamagedActor;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedDamageEventData != nullptr)
		*ModifiedDamageEventData = params.ModifiedDamageEventData;
	if (OverriddenDamageEventData != nullptr)
		*OverriddenDamageEventData = params.OverriddenDamageEventData;
	if (ShouldOverrideDamageTags != nullptr)
		*ShouldOverrideDamageTags = params.ShouldOverrideDamageTags;
	if (OverriddenDamageTags != nullptr)
		*OverriddenDamageTags = params.OverriddenDamageTags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OutputDebugInformation
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent, Const)

void ABP_BaseArchonWeapon_C::OutputDebugInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OutputDebugInformation");

	ABP_BaseArchonWeapon_C_OutputDebugInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.HasFinishedLoading
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BaseArchonWeapon_C::HasFinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.HasFinishedLoading");

	ABP_BaseArchonWeapon_C_HasFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ActivateSpecialAbilities_Interface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::ActivateSpecialAbilities_Interface(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ActivateSpecialAbilities_Interface");

	ABP_BaseArchonWeapon_C_ActivateSpecialAbilities_Interface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetBackSocketName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   BackSocket                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetBackSocketName(struct FName* BackSocket)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetBackSocketName");

	ABP_BaseArchonWeapon_C_GetBackSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BackSocket != nullptr)
		*BackSocket = params.BackSocket;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetUsesAutoAttachment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsesAutoAttachment             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetUsesAutoAttachment(bool* UsesAutoAttachment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetUsesAutoAttachment");

	ABP_BaseArchonWeapon_C_GetUsesAutoAttachment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsesAutoAttachment != nullptr)
		*UsesAutoAttachment = params.UsesAutoAttachment;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SpecialAttackReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::SpecialAttackReady(bool* QReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SpecialAttackReady");

	ABP_BaseArchonWeapon_C_SpecialAttackReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QReady != nullptr)
		*QReady = params.QReady;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ActivateTrail
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystem*         InParticle_System              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InLifetime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InFirstSocketName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSecondSocketName             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         InSecondaryParticle            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   InSecondarySocketName          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            InAspectColor                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_BaseArchonWeapon_C::ActivateTrail(class UParticleSystem* InParticle_System, float InLifetime, const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, class UParticleSystem* InSecondaryParticle, const struct FName& InSecondarySocketName, const struct FLinearColor& InAspectColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ActivateTrail");

	ABP_BaseArchonWeapon_C_ActivateTrail_Params params;
	params.InParticle_System = InParticle_System;
	params.InLifetime = InLifetime;
	params.InFirstSocketName = InFirstSocketName;
	params.InSecondSocketName = InSecondSocketName;
	params.InSecondaryParticle = InSecondaryParticle;
	params.InSecondarySocketName = InSecondarySocketName;
	params.InAspectColor = InAspectColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetDefaultPrimaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetDefaultPrimaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetDefaultPrimaryDye");

	ABP_BaseArchonWeapon_C_GetDefaultPrimaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetDefaultSecondaryDye
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DyeRowName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetDefaultSecondaryDye(struct FName* DyeRowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetDefaultSecondaryDye");

	ABP_BaseArchonWeapon_C_GetDefaultSecondaryDye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DyeRowName != nullptr)
		*DyeRowName = params.DyeRowName;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetPresentationInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class USkeletalMesh> SkeletalMesh                   (Parm, OutParm)
// struct FVector                 DisplayOffset                  (Parm, OutParm, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetPresentationInfo");

	ABP_BaseArchonWeapon_C_GetPresentationInfo_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
	if (DisplayOffset != nullptr)
		*DisplayOffset = params.DisplayOffset;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetIntroAnimations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAnimSequenceBase*> IntroAnimations                (Parm, OutParm, ZeroConstructor)

void ABP_BaseArchonWeapon_C::GetIntroAnimations(TArray<class UAnimSequenceBase*>* IntroAnimations)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetIntroAnimations");

	ABP_BaseArchonWeapon_C_GetIntroAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IntroAnimations != nullptr)
		*IntroAnimations = params.IntroAnimations;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetLocoAnimset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Floco_animset_str       LocoAnimset                    (Parm, OutParm)

void ABP_BaseArchonWeapon_C::GetLocoAnimset(struct Floco_animset_str* LocoAnimset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetLocoAnimset");

	ABP_BaseArchonWeapon_C_GetLocoAnimset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocoAnimset != nullptr)
		*LocoAnimset = params.LocoAnimset;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetActionsAnimset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Factions_animset_str    ActionsAnimset                 (Parm, OutParm)

void ABP_BaseArchonWeapon_C::GetActionsAnimset(struct Factions_animset_str* ActionsAnimset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetActionsAnimset");

	ABP_BaseArchonWeapon_C_GetActionsAnimset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionsAnimset != nullptr)
		*ActionsAnimset = params.ActionsAnimset;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetStaggerAnimset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fstagger_animset_str    StaggerAnimset                 (Parm, OutParm)

void ABP_BaseArchonWeapon_C::GetStaggerAnimset(struct Fstagger_animset_str* StaggerAnimset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetStaggerAnimset");

	ABP_BaseArchonWeapon_C_GetStaggerAnimset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerAnimset != nullptr)
		*StaggerAnimset = params.StaggerAnimset;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.LookupPowerTableRow
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FWeaponPowerTableData   OutPowerTableData              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BaseArchonWeapon_C::LookupPowerTableRow(struct FName* RowName, struct FWeaponPowerTableData* OutPowerTableData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.LookupPowerTableRow");

	ABP_BaseArchonWeapon_C_LookupPowerTableRow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RowName != nullptr)
		*RowName = params.RowName;
	if (OutPowerTableData != nullptr)
		*OutPowerTableData = params.OutPowerTableData;

	return params.ReturnValue;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CanExecuteComboTransition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_BaseArchonWeapon_C::CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CanExecuteComboTransition");

	ABP_BaseArchonWeapon_C_CanExecuteComboTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SpawnGameplayCueFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::SpawnGameplayCueFX(TEnumAsByte<EGameplayCueEvent> Selection, class UParticleSystem* EmitterTemplate, const struct FName& SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SpawnGameplayCueFX");

	ABP_BaseArchonWeapon_C_SpawnGameplayCueFX_Params params;
	params.Selection = Selection;
	params.EmitterTemplate = EmitterTemplate;
	params.SocketLocation = SocketLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetHitPauseOptimalityScale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   Container                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          PauseDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaledDuration                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetHitPauseOptimalityScale(float PauseDuration, struct FGameplayTagContainer* Container, float* ScaledDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetHitPauseOptimalityScale");

	ABP_BaseArchonWeapon_C_GetHitPauseOptimalityScale_Params params;
	params.PauseDuration = PauseDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Container != nullptr)
		*Container = params.Container;
	if (ScaledDuration != nullptr)
		*ScaledDuration = params.ScaledDuration;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SetTierAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::SetTierAttributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SetTierAttributes");

	ABP_BaseArchonWeapon_C_SetTierAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SetAnimationBlueprint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::SetAnimationBlueprint(class AArchonCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SetAnimationBlueprint");

	ABP_BaseArchonWeapon_C_SetAnimationBlueprint_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetSpecialEffectsForTags
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   SourceTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FStruct_TagToSpecialEffects> Effects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FStruct_TagToSpecialEffects> Particle_Systems               (Parm, OutParm, ZeroConstructor)

void ABP_BaseArchonWeapon_C::GetSpecialEffectsForTags(const struct FGameplayTagContainer& SourceTags, TArray<struct FStruct_TagToSpecialEffects>* Effects, TArray<struct FStruct_TagToSpecialEffects>* Particle_Systems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetSpecialEffectsForTags");

	ABP_BaseArchonWeapon_C_GetSpecialEffectsForTags_Params params;
	params.SourceTags = SourceTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
	if (Particle_Systems != nullptr)
		*Particle_Systems = params.Particle_Systems;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetBaseHitVFX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UParticleSystem*         ElementalVFX                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RateScale                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SizeScale                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          SphereRadius                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         HitFX                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetBaseHitVFX(struct FGameplayTagContainer* Tags, class UParticleSystem** ElementalVFX, float* RateScale, float* SizeScale, float* SphereRadius, class UParticleSystem** HitFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetBaseHitVFX");

	ABP_BaseArchonWeapon_C_GetBaseHitVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
	if (ElementalVFX != nullptr)
		*ElementalVFX = params.ElementalVFX;
	if (RateScale != nullptr)
		*RateScale = params.RateScale;
	if (SizeScale != nullptr)
		*SizeScale = params.SizeScale;
	if (SphereRadius != nullptr)
		*SphereRadius = params.SphereRadius;
	if (HitFX != nullptr)
		*HitFX = params.HitFX;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.IsPlayingHeavyJumpLandAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::IsPlayingHeavyJumpLandAnimation(class UAnimMontage* Montage, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.IsPlayingHeavyJumpLandAnimation");

	ABP_BaseArchonWeapon_C_IsPlayingHeavyJumpLandAnimation_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ExtractSwitchFromTags
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGameplayTag>    Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGameplayTagContainer   TagContainer                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_BaseArchonWeapon_C::ExtractSwitchFromTags(const struct FGameplayTagContainer& TagContainer, TArray<struct FGameplayTag>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ExtractSwitchFromTags");

	ABP_BaseArchonWeapon_C_ExtractSwitchFromTags_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;

	return params.ReturnValue;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetHitPauseDuration
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                          HitDuration                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            HitFrames                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::GetHitPauseDuration(struct FGameplayTagContainer* Tags, float* HitDuration, int* HitFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GetHitPauseDuration");

	ABP_BaseArchonWeapon_C_GetHitPauseDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tags != nullptr)
		*Tags = params.Tags;
	if (HitDuration != nullptr)
		*HitDuration = params.HitDuration;
	if (HitFrames != nullptr)
		*HitFrames = params.HitFrames;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.DamageAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     CompenentHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorHit                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::DamageAudio(const struct FGameplayTagContainer& Tags, float Damage, class UPrimitiveComponent* CompenentHit, class AActor* ActorHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.DamageAudio");

	ABP_BaseArchonWeapon_C_DamageAudio_Params params;
	params.Tags = Tags;
	params.Damage = Damage;
	params.CompenentHit = CompenentHit;
	params.ActorHit = ActorHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SelectCameraShakeForHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   Container                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int                            HitPauseFrames                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Shake                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          IntensityScale                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DurationScale                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::SelectCameraShakeForHit(const struct FGameplayTagContainer& Container, int HitPauseFrames, class UClass** Shake, float* IntensityScale, float* DurationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.SelectCameraShakeForHit");

	ABP_BaseArchonWeapon_C_SelectCameraShakeForHit_Params params;
	params.Container = Container;
	params.HitPauseFrames = HitPauseFrames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Shake != nullptr)
		*Shake = params.Shake;
	if (IntensityScale != nullptr)
		*IntensityScale = params.IntensityScale;
	if (DurationScale != nullptr)
		*DurationScale = params.DurationScale;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Get Hit Effects For Tags
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer   SourceTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FStruct_TagToHitEffects> Effects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FStruct_TagToHitEffects> Particle_Systems               (Parm, OutParm, ZeroConstructor)

void ABP_BaseArchonWeapon_C::Get_Hit_Effects_For_Tags(const struct FGameplayTagContainer& SourceTags, TArray<struct FStruct_TagToHitEffects>* Effects, TArray<struct FStruct_TagToHitEffects>* Particle_Systems)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Get Hit Effects For Tags");

	ABP_BaseArchonWeapon_C_Get_Hit_Effects_For_Tags_Params params;
	params.SourceTags = SourceTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
	if (Particle_Systems != nullptr)
		*Particle_Systems = params.Particle_Systems;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnMoveSkill
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::OnMoveSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnMoveSkill");

	ABP_BaseArchonWeapon_C_OnMoveSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Find Collision Point Between Damage Volume And Colliding Actor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCapsuleComponent*       Damage_Volume                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Colliding_Actor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Found_Location                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 World_Location                 (Parm, OutParm, IsPlainOldData)

void ABP_BaseArchonWeapon_C::Find_Collision_Point_Between_Damage_Volume_And_Colliding_Actor(class UCapsuleComponent* Damage_Volume, class AActor* Colliding_Actor, const struct FVector& HitLocation, bool* Found_Location, struct FVector* World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Find Collision Point Between Damage Volume And Colliding Actor");

	ABP_BaseArchonWeapon_C_Find_Collision_Point_Between_Damage_Volume_And_Colliding_Actor_Params params;
	params.Damage_Volume = Damage_Volume;
	params.Colliding_Actor = Colliding_Actor;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_Location != nullptr)
		*Found_Location = params.Found_Location;
	if (World_Location != nullptr)
		*World_Location = params.World_Location;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Cheat Charge Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::Cheat_Charge_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Cheat Charge Weapon");

	ABP_BaseArchonWeapon_C_Cheat_Charge_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.UserConstructionScript");

	ABP_BaseArchonWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnLoaded_981E11D8435C05E106A2DD8AC61151B6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::OnLoaded_981E11D8435C05E106A2DD8AC61151B6(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnLoaded_981E11D8435C05E106A2DD8AC61151B6");

	ABP_BaseArchonWeapon_C_OnLoaded_981E11D8435C05E106A2DD8AC61151B6_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CallWeaponSpecificFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Function_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::CallWeaponSpecificFunction(const struct FName& Function_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CallWeaponSpecificFunction");

	ABP_BaseArchonWeapon_C_CallWeaponSpecificFunction_Params params;
	params.Function_Name = Function_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GameplayCue.Combat.OnDamageGiven
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BaseArchonWeapon_C::GameplayCue_Combat_OnDamageGiven(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GameplayCue.Combat.OnDamageGiven");

	ABP_BaseArchonWeapon_C_GameplayCue_Combat_OnDamageGiven_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GameplayCue.Combat.Glint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BaseArchonWeapon_C::GameplayCue_Combat_Glint(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.GameplayCue.Combat.Glint");

	ABP_BaseArchonWeapon_C_GameplayCue_Combat_Glint_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CreateGameplayCueFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UParticleSystem*         Particle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SocketLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::CreateGameplayCueFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters, class UParticleSystem* Particle, const struct FName& SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.CreateGameplayCueFX");

	ABP_BaseArchonWeapon_C_CreateGameplayCueFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;
	params.Particle = Particle;
	params.SocketLocation = SocketLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.K2_OnEquip
// (Event, Public, BlueprintEvent)

void ABP_BaseArchonWeapon_C::K2_OnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.K2_OnEquip");

	ABP_BaseArchonWeapon_C_K2_OnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.AddDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimNotifyState*        CallerEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fvfx_state_id_struct    StateId                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_BaseArchonWeapon_C::AddDebrisState(class UAnimNotifyState* CallerEvent, const struct Fvfx_state_id_struct& StateId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.AddDebrisState");

	ABP_BaseArchonWeapon_C_AddDebrisState_Params params;
	params.CallerEvent = CallerEvent;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.UpdateDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::UpdateDebrisState(const struct FVector& Location, const struct FRotator& Rotation, class UObject* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.UpdateDebrisState");

	ABP_BaseArchonWeapon_C_UpdateDebrisState_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.DestroyDebrisState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LifeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::DestroyDebrisState(class UObject* Data, float LifeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.DestroyDebrisState");

	ABP_BaseArchonWeapon_C_DestroyDebrisState_Params params;
	params.Data = Data;
	params.LifeTime = LifeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReEquip
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::ReEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReEquip");

	ABP_BaseArchonWeapon_C_ReEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.MultiEquip
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::MultiEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.MultiEquip");

	ABP_BaseArchonWeapon_C_MultiEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void ABP_BaseArchonWeapon_C::K2_OnUnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.K2_OnUnEquip");

	ABP_BaseArchonWeapon_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ClientTestForOwner
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::ClientTestForOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ClientTestForOwner");

	ABP_BaseArchonWeapon_C_ClientTestForOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BaseArchonWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReceiveBeginPlay");

	ABP_BaseArchonWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Authorize_Set_Tier_Attributes
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::Authorize_Set_Tier_Attributes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Authorize_Set_Tier_Attributes");

	ABP_BaseArchonWeapon_C_Authorize_Set_Tier_Attributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_BaseArchonWeapon_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ReceiveGameplayStart");

	ABP_BaseArchonWeapon_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Check For Transmog
// (BlueprintCallable, BlueprintEvent)

void ABP_BaseArchonWeapon_C::Check_For_Transmog()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.Check For Transmog");

	ABP_BaseArchonWeapon_C_Check_For_Transmog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnComboNextMove
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer*      ComboInputBuffer               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_BaseArchonWeapon_C::OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnComboNextMove");

	ABP_BaseArchonWeapon_C_OnComboNextMove_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnComboEnded
// (Event, Protected, BlueprintEvent)

void ABP_BaseArchonWeapon_C::OnComboEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnComboEnded");

	ABP_BaseArchonWeapon_C_OnComboEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnSetOwnerHiddenInGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewHidden                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::OnSetOwnerHiddenInGame(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.OnSetOwnerHiddenInGame");

	ABP_BaseArchonWeapon_C_OnSetOwnerHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ExecuteUbergraph_BP_BaseArchonWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BaseArchonWeapon_C::ExecuteUbergraph_BP_BaseArchonWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BaseArchonWeapon.BP_BaseArchonWeapon_C.ExecuteUbergraph_BP_BaseArchonWeapon");

	ABP_BaseArchonWeapon_C_ExecuteUbergraph_BP_BaseArchonWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
