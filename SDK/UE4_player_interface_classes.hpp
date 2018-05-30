#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_interface.player_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uplayer_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_interface.player_interface_C");
		return ptr;
	}


	void SetLookAtEnabled(bool Enabled);
	void SetLanternGlowIntensity(float emissive_value);
	void GetHairColour(struct FLinearColor* hair_colour);
	bool CanPerformEmote();
	void GetIsLocalPlayerAudioEnabled(bool* Out);
	void GetGenderIdentity(EArchonGender* GenderId);
	void SetGenderIdentity(EArchonGender GenderId);
	void SetAutoPlayerActiveInterface(bool AutoPlayerActive);
	void TriggerBannerPlantInterface();
	void TriggerEmoteInterface(int EmoteIndex);
	void RotateCameratoTargetInterface(const struct FRotator& TargetRotation);
	void GetWeaponMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void GetBodyMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances);
	void HidePlayerMarker();
	void ShowPlayerMarker();
	void ResetMaxFallTimer(bool* Out);
	void GetIsSprinting(bool* Return);
	void GetNumPlayersReviving(int* NumPlayers);
	void IsHelmVisible(bool* Visible);
	void SetEmoteTurnWarpEnabled(bool Enable);
	void GetFacialHairSlotComponent(class USkeletalMeshComponent** Facial_Hair_Slot);
	void ApplyShouldCheatDeathFromAboutToDie();
	void GetWeaponAbilityDamageRowOverride(struct FName* WeaponAbilityDamageRowOverride);
	void ClearWeaponAbilityDamageRowOverride();
	void SetWeaponAbilityDamageRowOverride(const struct FName& WeaponAbilityDamageRowOverride);
	void IsInLobby(bool* IsInLobby);
	void IsInCity(bool* IsInCity);
	void EnableLocoTransitions();
	void DisableLocoTransitions();
	void GetLastDamagedMonsterPart(class UMonsterPartComponent** MonsterPart);
	void RemoveEmpoweredWeaponEffectsStack();
	void AddEmpoweredWeaponEffectsStack();
	void GetLastDamagedActor(class AActor** LastDamagedActor);
	void SetMontagePauseWindow(float PlayRate, float Duration);
	void SetAnimationGraph(class UClass* NewAnimClass);
	void SetHelmHidingSetting(const class FString& helm_hide_setting);
	void GetHelmHidingSetting(class FString* Helm_Hiding);
	void ToggleHideWeapon(bool Hide_);
	void TogglePlayerFade(bool Fade);
	void GetSprintInputValue(bool* Value);
	void PlayerStateMeetsRequirements(const struct Fplayer_requirements_str& PlayerRequirements, bool* PassesRequirements);
	void UpdateHasLoadedInt();
	void GetPonytailComponent(class USkeletalMeshComponent** ponytail);
	void IsBannerEnabled(bool* IsEnabled);
	void StopReplicatingAim();
	void StartReplicatingAim();
	void GetCurrentAimDirection(struct FVector* CurrentAimDirection);
	void GetLoadout(class AArchonLoadout** LOADOUT);
	void SetMaxDesiredLocoState(bool Enable, TEnumAsByte<ELocomotionState> MaxDesiredLocoState);
	void EnableIKinema(bool EnableIKinema);
	void SetCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState, TEnumAsByte<ECinematicPlayerState>* CinematicStte);
	void GetCinematicState(TEnumAsByte<ECinematicPlayerState>* State);
	void GetCombatComponent(class UArchonCombatComponent** CombatComponent);
	void IsInteracting(bool* Interacting);
	void GetDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* DynamicMaterials);
	void EnterBleedout(float DurationPerBleedoutLevel);
	void GetBleedoutLevel(int* Level);
	void GetAbilitySystemComponent(class UAbilitySystemComponent** AbilitySystem);
	void Set_Dodge_And_Jump_Enable_State(bool Enabled_);
	void SetCollisionWithDestructible(bool Enabled, bool* Return);
	void PlayNetworkedMontage(class UAnimMontage* Montage, float ScaleFactor, float PlayRate, const struct FName& Section);
	void UpdateTranslateWarpTargetPosition(const struct FVector& Position);
	void SetEarlyOutOfMontage(bool EarlyOutOfMontage);
	void GetHeadSlotComponent_(class USkeletalMeshComponent** Head_Slot_Component);
	void UpdateHighlightComponents();
	void GetLantern(class AArchonLantern** Lantern);
	void DoEmote(int emoteID);
	void GetHairSlotComponent(class USkeletalMeshComponent** HairSlotComponent);
	void SetBodyType(EArchonBodyType BodyType);
	void GetBodyType(EArchonBodyType* BodyType);
	void GetWeaponMesh(class USkeletalMeshComponent** Mesh);
	void GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeletalMeshComp);
	void UnregisterInteraction(class AActor* Actor);
	void RegisterInteraction(class AActor* Actor);
	void SingleClientNameplateInit();
	void GetFollowCamera(class UCameraComponent** FollowCamera);
	void GetIsDying(bool* IsDying);
	void GetBleedOutState(bool* BleedOutState);
	void GetReviveHealthThreshold(float* ReviveHealthThreshold);
	void GetCurrentHealth(float* CurrentHealth);
	void ReviveFromBleedOut(class APawn* RevivingPawn);
	void GetNamePlate(class UWidgetComponent** Nameplate);
	void GetBleedOutTimer(struct FTimerHandle* BleedOutTImer);
	void ApplyStringDataInterface(TArray<struct FAppearanceStringData>* String_Data);
	void GatherStringDataInterface(TArray<struct FAppearanceStringData>* AssetData);
	void CallLegalStuck();
	void GetClientUsedMouse(bool* ClientUsedMouse);
	void GetClientUsedGamePad(bool* ClientUsedGamePad);
	void GetPlayerStats(float* Current_Health, float* Current_Stamina);
	void GetIsInCity_Deprecated(bool* Is_In_City);
	void GetIsSheathed(bool* Weapon_Sheathed);
	void GetIsInStaminaThresholdRecoveryPeriod(bool* Is_in_stamina_threshold_recovery_period_);
	void GetIsInSlowChargeState(bool* Is_slow_charging_);
	void GetIsFalling(bool* Is_Falling_);
	void OnGameModeStartEvent(bool* Success);
	void ConsumeStamina(float StaminaCost, bool RestrictedByStaminaAmount_, bool* Success);
	void RemoveDebugComponent(class UActorComponent* Comp);
	void GetIsJumping(bool* Is_Jumping_);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
