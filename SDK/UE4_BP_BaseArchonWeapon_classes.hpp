#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BaseArchonWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseArchonWeapon.BP_BaseArchonWeapon_C
// 0x0579 (0x0A49 - 0x04D0)
class ABP_BaseArchonWeapon_C : public AArchonWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (Transient, DuplicateTransient)
	class Uweapon_eventdispatcher_bpc_C*               weapon_eventdispatcher_bpc;                               // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDamageComponent*                            DamageComponent;                                          // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Weapon_UI_Widget_Class;                                   // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Has_Slow_Charge_State_;                                   // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              Slow_Charge_Base_Speed;                                   // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Slow_Charge_Stamina_Cost_Per_Second;                      // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04FC(0x0004) MISSED OFFSET
	class UTexture2D*                                  WeaponTeamDisplayIcon;                                    // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ComboTreeImage;                                           // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  ComboTreeImage_PC;                                        // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Jump_Land_Heavy_Montage;                                  // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Character_Weapon;                                         // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Character_Weapon_Specific;                                // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAkAudioBank*>                        Weapon_Audio_Banks;                                       // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Cheat_Charged_Weapon;                                     // 0x0540(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0541(0x0003) MISSED OFFSET
	int                                                Default_Hit_Pause_Frames;                                 // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct Fselect_montage_from_angle_str>      Idle_Pivot_Animations;                                    // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              MoveSkillCost;                                            // 0x0558(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            Dynamic_Materials;                                        // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EElementalTypes>                       Elemental_Type;                                           // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0571(0x0007) MISSED OFFSET
	class UClass*                                      Animation_Blueprint;                                      // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Set_Hit_Color;                                            // 0x0580(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct Fstagger_animset_str                        Stagger_Animset;                                          // 0x0590(0x0040) (Edit, BlueprintVisible)
	struct FName                                       InFirstSocketName;                                        // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       InSecondSocketName;                                       // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05E4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    Secondary_Particle_System;                                // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct Fvfx_state_id_struct>                Debris_State_VFX;                                         // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               Debug_Tint;                                               // 0x0600(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0601(0x0007) MISSED OFFSET
	TArray<struct FLinearColor>                        Element_Colors;                                           // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       BackSocketName;                                           // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fhitfx_optimality                           Flame_HitFX;                                              // 0x0620(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Shock_HitFX;                                              // 0x0668(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           RawElemental_HitFX;                                       // 0x06B0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Umbral_HitFX;                                             // 0x06F8(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Radiant_HitFX;                                            // 0x0740(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Frost_HitVFX;                                             // 0x0788(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Aether_HitFX;                                             // 0x07D0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FStruct_TagToSpecialEffects>         Return_Array;                                             // 0x0818(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStruct_TagToSpecialEffects>         Special_Effects;                                          // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct Factions_animset_str                        Actions_Animset;                                          // 0x0838(0x0018) (Edit, BlueprintVisible)
	TArray<struct FStruct_TagToHitEffects>             DotHitEffects;                                            // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UParticleSystemComponent*>            CurrentDotEffects;                                        // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct Floco_animset_str                           Loco_Animset;                                             // 0x0870(0x0010) (Edit, BlueprintVisible)
	struct Floco_animset_str                           UA_Loco_Animset;                                          // 0x0880(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               UsesAutoAttachment;                                       // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	struct Fhitfx_optimality                           Blunt_HitFX;                                              // 0x0898(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Pierce_HitFX;                                             // 0x08E0(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct Fhitfx_optimality                           Cutting_HitFX;                                            // 0x0928(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                      SpecialProjectileAngle;                                   // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       WeaponGlintAttachPoint;                                   // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TestForOwnerTimer;                                        // 0x0988(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimSequenceBase*>                   Intro_Animations;                                         // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              HitDuration;                                              // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x09A4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleReference;                                        // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HitFrames;                                                // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 TimeCurve;                                                // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RemoveDilationTimer;                                      // 0x09C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct Ftier_weapon_data>                   Tier_Data;                                                // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTransform                                  SheatheOffset;                                            // 0x09E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               WeaponTemplate;                                           // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     WeaponSkelMesh;                                           // 0x0A18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasAssetLoaded;                                           // 0x0A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0A39(0x0003) MISSED OFFSET
	int                                                TestPriority;                                             // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AArchonCharacter*                            LCharacterOwner;                                          // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               LRefreshDamageComponent;                                  // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseArchonWeapon.BP_BaseArchonWeapon_C");
		return ptr;
	}


	void GetModifyDamageEventPriority(int* Priority);
	void CustomModifyDamageEventData(const struct FDamageEventData& DamageEventData, class AActor* DamagedActor, const struct FGameplayTagContainer& DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags);
	void OutputDebugInformation();
	bool HasFinishedLoading();
	void ActivateSpecialAbilities_Interface(bool* Success);
	void GetBackSocketName(struct FName* BackSocket);
	void GetUsesAutoAttachment(bool* UsesAutoAttachment);
	void SpecialAttackReady(bool* QReady);
	void ActivateTrail(class UParticleSystem* InParticle_System, float InLifetime, const struct FName& InFirstSocketName, const struct FName& InSecondSocketName, class UParticleSystem* InSecondaryParticle, const struct FName& InSecondarySocketName, const struct FLinearColor& InAspectColor);
	void GetDefaultPrimaryDye(struct FName* DyeRowName);
	void GetDefaultSecondaryDye(struct FName* DyeRowName);
	void GetPresentationInfo(EArchonBodyType BodyType, TAssetPtr<class USkeletalMesh>* SkeletalMesh, struct FVector* DisplayOffset);
	void GetIntroAnimations(TArray<class UAnimSequenceBase*>* IntroAnimations);
	void GetLocoAnimset(struct Floco_animset_str* LocoAnimset);
	void GetActionsAnimset(struct Factions_animset_str* ActionsAnimset);
	void GetStaggerAnimset(struct Fstagger_animset_str* StaggerAnimset);
	bool LookupPowerTableRow(struct FName* RowName, struct FWeaponPowerTableData* OutPowerTableData);
	bool CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer);
	void SpawnGameplayCueFX(TEnumAsByte<EGameplayCueEvent> Selection, class UParticleSystem* EmitterTemplate, const struct FName& SocketLocation);
	void GetHitPauseOptimalityScale(float PauseDuration, struct FGameplayTagContainer* Container, float* ScaledDuration);
	void SetTierAttributes();
	void SetAnimationBlueprint(class AArchonCharacter* Character);
	void GetSpecialEffectsForTags(const struct FGameplayTagContainer& SourceTags, TArray<struct FStruct_TagToSpecialEffects>* Effects, TArray<struct FStruct_TagToSpecialEffects>* Particle_Systems);
	void GetBaseHitVFX(struct FGameplayTagContainer* Tags, class UParticleSystem** ElementalVFX, float* RateScale, float* SizeScale, float* SphereRadius, class UParticleSystem** HitFX);
	void IsPlayingHeavyJumpLandAnimation(class UAnimMontage* Montage, bool* Result);
	struct FName ExtractSwitchFromTags(const struct FGameplayTagContainer& TagContainer, TArray<struct FGameplayTag>* Array);
	void GetHitPauseDuration(struct FGameplayTagContainer* Tags, float* HitDuration, int* HitFrames);
	void DamageAudio(const struct FGameplayTagContainer& Tags, float Damage, class UPrimitiveComponent* CompenentHit, class AActor* ActorHit);
	void SelectCameraShakeForHit(const struct FGameplayTagContainer& Container, int HitPauseFrames, class UClass** Shake, float* IntensityScale, float* DurationScale);
	void Get_Hit_Effects_For_Tags(const struct FGameplayTagContainer& SourceTags, TArray<struct FStruct_TagToHitEffects>* Effects, TArray<struct FStruct_TagToHitEffects>* Particle_Systems);
	void OnMoveSkill();
	void Find_Collision_Point_Between_Damage_Volume_And_Colliding_Actor(class UCapsuleComponent* Damage_Volume, class AActor* Colliding_Actor, const struct FVector& HitLocation, bool* Found_Location, struct FVector* World_Location);
	void Cheat_Charge_Weapon();
	void UserConstructionScript();
	void OnLoaded_981E11D8435C05E106A2DD8AC61151B6(class UObject* Loaded);
	void CallWeaponSpecificFunction(const struct FName& Function_Name);
	void GameplayCue_Combat_OnDamageGiven(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Combat_Glint(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void CreateGameplayCueFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters, class UParticleSystem* Particle, const struct FName& SocketLocation);
	void K2_OnEquip();
	void AddDebrisState(class UAnimNotifyState* CallerEvent, const struct Fvfx_state_id_struct& StateId);
	void UpdateDebrisState(const struct FVector& Location, const struct FRotator& Rotation, class UObject* Data);
	void DestroyDebrisState(class UObject* Data, float LifeTime);
	void ReEquip();
	void MultiEquip();
	void K2_OnUnEquip();
	void ClientTestForOwner();
	void ReceiveBeginPlay();
	void Authorize_Set_Tier_Attributes();
	void ReceiveGameplayStart();
	void Check_For_Transmog();
	void OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer);
	void OnComboEnded();
	void OnSetOwnerHiddenInGame(bool bNewHidden);
	void ExecuteUbergraph_BP_BaseArchonWeapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
