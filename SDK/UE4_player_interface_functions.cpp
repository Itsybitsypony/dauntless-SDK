// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_interface.player_interface_C.SetLookAtEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetLookAtEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetLookAtEnabled");

	Uplayer_interface_C_SetLookAtEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SetLanternGlowIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          emissive_value                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetLanternGlowIntensity(float emissive_value)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetLanternGlowIntensity");

	Uplayer_interface_C_SetLanternGlowIntensity_Params params;
	params.emissive_value = emissive_value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetHairColour
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            hair_colour                    (Parm, OutParm, IsPlainOldData)

void Uplayer_interface_C::GetHairColour(struct FLinearColor* hair_colour)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetHairColour");

	Uplayer_interface_C_GetHairColour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (hair_colour != nullptr)
		*hair_colour = params.hair_colour;
}


// Function player_interface.player_interface_C.CanPerformEmote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uplayer_interface_C::CanPerformEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.CanPerformEmote");

	Uplayer_interface_C_CanPerformEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_interface.player_interface_C.GetIsLocalPlayerAudioEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsLocalPlayerAudioEnabled(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsLocalPlayerAudioEnabled");

	Uplayer_interface_C_GetIsLocalPlayerAudioEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function player_interface.player_interface_C.GetGenderIdentity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EArchonGender                  GenderId                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetGenderIdentity(EArchonGender* GenderId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetGenderIdentity");

	Uplayer_interface_C_GetGenderIdentity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GenderId != nullptr)
		*GenderId = params.GenderId;
}


// Function player_interface.player_interface_C.SetGenderIdentity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonGender                  GenderId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetGenderIdentity(EArchonGender GenderId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetGenderIdentity");

	Uplayer_interface_C_SetGenderIdentity_Params params;
	params.GenderId = GenderId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SetAutoPlayerActiveInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutoPlayerActive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetAutoPlayerActiveInterface(bool AutoPlayerActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetAutoPlayerActiveInterface");

	Uplayer_interface_C_SetAutoPlayerActiveInterface_Params params;
	params.AutoPlayerActive = AutoPlayerActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.TriggerBannerPlantInterface
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::TriggerBannerPlantInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.TriggerBannerPlantInterface");

	Uplayer_interface_C_TriggerBannerPlantInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.TriggerEmoteInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::TriggerEmoteInterface(int EmoteIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.TriggerEmoteInterface");

	Uplayer_interface_C_TriggerEmoteInterface_Params params;
	params.EmoteIndex = EmoteIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.RotateCameratoTargetInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                TargetRotation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uplayer_interface_C::RotateCameratoTargetInterface(const struct FRotator& TargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.RotateCameratoTargetInterface");

	Uplayer_interface_C_RotateCameratoTargetInterface_Params params;
	params.TargetRotation = TargetRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetWeaponMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void Uplayer_interface_C::GetWeaponMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetWeaponMaterials");

	Uplayer_interface_C_GetWeaponMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function player_interface.player_interface_C.GetBodyMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> MaterialInstances              (Parm, OutParm, ZeroConstructor)

void Uplayer_interface_C::GetBodyMaterials(TArray<class UMaterialInstanceDynamic*>* MaterialInstances)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetBodyMaterials");

	Uplayer_interface_C_GetBodyMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstances != nullptr)
		*MaterialInstances = params.MaterialInstances;
}


// Function player_interface.player_interface_C.HidePlayerMarker
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::HidePlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.HidePlayerMarker");

	Uplayer_interface_C_HidePlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.ShowPlayerMarker
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::ShowPlayerMarker()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.ShowPlayerMarker");

	Uplayer_interface_C_ShowPlayerMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.ResetMaxFallTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::ResetMaxFallTimer(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.ResetMaxFallTimer");

	Uplayer_interface_C_ResetMaxFallTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function player_interface.player_interface_C.GetIsSprinting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsSprinting(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsSprinting");

	Uplayer_interface_C_GetIsSprinting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function player_interface.player_interface_C.GetNumPlayersReviving
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumPlayers                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetNumPlayersReviving(int* NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetNumPlayersReviving");

	Uplayer_interface_C_GetNumPlayersReviving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumPlayers != nullptr)
		*NumPlayers = params.NumPlayers;
}


// Function player_interface.player_interface_C.IsHelmVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::IsHelmVisible(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.IsHelmVisible");

	Uplayer_interface_C_IsHelmVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function player_interface.player_interface_C.SetEmoteTurnWarpEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetEmoteTurnWarpEnabled(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetEmoteTurnWarpEnabled");

	Uplayer_interface_C_SetEmoteTurnWarpEnabled_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetFacialHairSlotComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Facial_Hair_Slot               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetFacialHairSlotComponent(class USkeletalMeshComponent** Facial_Hair_Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetFacialHairSlotComponent");

	Uplayer_interface_C_GetFacialHairSlotComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Facial_Hair_Slot != nullptr)
		*Facial_Hair_Slot = params.Facial_Hair_Slot;
}


// Function player_interface.player_interface_C.ApplyShouldCheatDeathFromAboutToDie
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::ApplyShouldCheatDeathFromAboutToDie()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.ApplyShouldCheatDeathFromAboutToDie");

	Uplayer_interface_C_ApplyShouldCheatDeathFromAboutToDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetWeaponAbilityDamageRowOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WeaponAbilityDamageRowOverride (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetWeaponAbilityDamageRowOverride(struct FName* WeaponAbilityDamageRowOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetWeaponAbilityDamageRowOverride");

	Uplayer_interface_C_GetWeaponAbilityDamageRowOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponAbilityDamageRowOverride != nullptr)
		*WeaponAbilityDamageRowOverride = params.WeaponAbilityDamageRowOverride;
}


// Function player_interface.player_interface_C.ClearWeaponAbilityDamageRowOverride
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::ClearWeaponAbilityDamageRowOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.ClearWeaponAbilityDamageRowOverride");

	Uplayer_interface_C_ClearWeaponAbilityDamageRowOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SetWeaponAbilityDamageRowOverride
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WeaponAbilityDamageRowOverride (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetWeaponAbilityDamageRowOverride(const struct FName& WeaponAbilityDamageRowOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetWeaponAbilityDamageRowOverride");

	Uplayer_interface_C_SetWeaponAbilityDamageRowOverride_Params params;
	params.WeaponAbilityDamageRowOverride = WeaponAbilityDamageRowOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.IsInLobby
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInLobby                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::IsInLobby(bool* IsInLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.IsInLobby");

	Uplayer_interface_C_IsInLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInLobby != nullptr)
		*IsInLobby = params.IsInLobby;
}


// Function player_interface.player_interface_C.IsInCity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsInCity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::IsInCity(bool* IsInCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.IsInCity");

	Uplayer_interface_C_IsInCity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInCity != nullptr)
		*IsInCity = params.IsInCity;
}


// Function player_interface.player_interface_C.EnableLocoTransitions
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::EnableLocoTransitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.EnableLocoTransitions");

	Uplayer_interface_C_EnableLocoTransitions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.DisableLocoTransitions
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::DisableLocoTransitions()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.DisableLocoTransitions");

	Uplayer_interface_C_DisableLocoTransitions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetLastDamagedMonsterPart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMonsterPartComponent*   MonsterPart                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetLastDamagedMonsterPart(class UMonsterPartComponent** MonsterPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetLastDamagedMonsterPart");

	Uplayer_interface_C_GetLastDamagedMonsterPart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MonsterPart != nullptr)
		*MonsterPart = params.MonsterPart;
}


// Function player_interface.player_interface_C.RemoveEmpoweredWeaponEffectsStack
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::RemoveEmpoweredWeaponEffectsStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.RemoveEmpoweredWeaponEffectsStack");

	Uplayer_interface_C_RemoveEmpoweredWeaponEffectsStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.AddEmpoweredWeaponEffectsStack
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::AddEmpoweredWeaponEffectsStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.AddEmpoweredWeaponEffectsStack");

	Uplayer_interface_C_AddEmpoweredWeaponEffectsStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetLastDamagedActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  LastDamagedActor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetLastDamagedActor(class AActor** LastDamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetLastDamagedActor");

	Uplayer_interface_C_GetLastDamagedActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastDamagedActor != nullptr)
		*LastDamagedActor = params.LastDamagedActor;
}


// Function player_interface.player_interface_C.SetMontagePauseWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetMontagePauseWindow(float PlayRate, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetMontagePauseWindow");

	Uplayer_interface_C_SetMontagePauseWindow_Params params;
	params.PlayRate = PlayRate;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SetAnimationGraph
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  NewAnimClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetAnimationGraph(class UClass* NewAnimClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetAnimationGraph");

	Uplayer_interface_C_SetAnimationGraph_Params params;
	params.NewAnimClass = NewAnimClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SetHelmHidingSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  helm_hide_setting              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uplayer_interface_C::SetHelmHidingSetting(const class FString& helm_hide_setting)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetHelmHidingSetting");

	Uplayer_interface_C_SetHelmHidingSetting_Params params;
	params.helm_hide_setting = helm_hide_setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetHelmHidingSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Helm_Hiding                    (Parm, OutParm, ZeroConstructor)

void Uplayer_interface_C::GetHelmHidingSetting(class FString* Helm_Hiding)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetHelmHidingSetting");

	Uplayer_interface_C_GetHelmHidingSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Helm_Hiding != nullptr)
		*Helm_Hiding = params.Helm_Hiding;
}


// Function player_interface.player_interface_C.ToggleHideWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide_                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::ToggleHideWeapon(bool Hide_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.ToggleHideWeapon");

	Uplayer_interface_C_ToggleHideWeapon_Params params;
	params.Hide_ = Hide_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.TogglePlayerFade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Fade                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::TogglePlayerFade(bool Fade)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.TogglePlayerFade");

	Uplayer_interface_C_TogglePlayerFade_Params params;
	params.Fade = Fade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetSprintInputValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetSprintInputValue(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetSprintInputValue");

	Uplayer_interface_C_GetSprintInputValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function player_interface.player_interface_C.PlayerStateMeetsRequirements
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fplayer_requirements_str PlayerRequirements             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           PassesRequirements             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::PlayerStateMeetsRequirements(const struct Fplayer_requirements_str& PlayerRequirements, bool* PassesRequirements)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.PlayerStateMeetsRequirements");

	Uplayer_interface_C_PlayerStateMeetsRequirements_Params params;
	params.PlayerRequirements = PlayerRequirements;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassesRequirements != nullptr)
		*PassesRequirements = params.PassesRequirements;
}


// Function player_interface.player_interface_C.UpdateHasLoadedInt
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::UpdateHasLoadedInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.UpdateHasLoadedInt");

	Uplayer_interface_C_UpdateHasLoadedInt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetPonytailComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  ponytail                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetPonytailComponent(class USkeletalMeshComponent** ponytail)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetPonytailComponent");

	Uplayer_interface_C_GetPonytailComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ponytail != nullptr)
		*ponytail = params.ponytail;
}


// Function player_interface.player_interface_C.IsBannerEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::IsBannerEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.IsBannerEnabled");

	Uplayer_interface_C_IsBannerEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function player_interface.player_interface_C.StopReplicatingAim
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::StopReplicatingAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.StopReplicatingAim");

	Uplayer_interface_C_StopReplicatingAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.StartReplicatingAim
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::StartReplicatingAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.StartReplicatingAim");

	Uplayer_interface_C_StartReplicatingAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetCurrentAimDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 CurrentAimDirection            (Parm, OutParm, IsPlainOldData)

void Uplayer_interface_C::GetCurrentAimDirection(struct FVector* CurrentAimDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetCurrentAimDirection");

	Uplayer_interface_C_GetCurrentAimDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAimDirection != nullptr)
		*CurrentAimDirection = params.CurrentAimDirection;
}


// Function player_interface.player_interface_C.GetLoadout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonLoadout*          LOADOUT                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetLoadout(class AArchonLoadout** LOADOUT)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetLoadout");

	Uplayer_interface_C_GetLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LOADOUT != nullptr)
		*LOADOUT = params.LOADOUT;
}


// Function player_interface.player_interface_C.SetMaxDesiredLocoState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELocomotionState>  MaxDesiredLocoState            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetMaxDesiredLocoState(bool Enable, TEnumAsByte<ELocomotionState> MaxDesiredLocoState)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetMaxDesiredLocoState");

	Uplayer_interface_C_SetMaxDesiredLocoState_Params params;
	params.Enable = Enable;
	params.MaxDesiredLocoState = MaxDesiredLocoState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.EnableIKinema
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableIKinema                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::EnableIKinema(bool EnableIKinema)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.EnableIKinema");

	Uplayer_interface_C_EnableIKinema_Params params;
	params.EnableIKinema = EnableIKinema;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SetCinematicState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECinematicPlayerState> CinematicStte                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState, TEnumAsByte<ECinematicPlayerState>* CinematicStte)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetCinematicState");

	Uplayer_interface_C_SetCinematicState_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CinematicStte != nullptr)
		*CinematicStte = params.CinematicStte;
}


// Function player_interface.player_interface_C.GetCinematicState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetCinematicState(TEnumAsByte<ECinematicPlayerState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetCinematicState");

	Uplayer_interface_C_GetCinematicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function player_interface.player_interface_C.GetCombatComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonCombatComponent*  CombatComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetCombatComponent(class UArchonCombatComponent** CombatComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetCombatComponent");

	Uplayer_interface_C_GetCombatComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatComponent != nullptr)
		*CombatComponent = params.CombatComponent;
}


// Function player_interface.player_interface_C.IsInteracting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Interacting                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::IsInteracting(bool* Interacting)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.IsInteracting");

	Uplayer_interface_C_IsInteracting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Interacting != nullptr)
		*Interacting = params.Interacting;
}


// Function player_interface.player_interface_C.GetDynamicMaterials
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> DynamicMaterials               (Parm, OutParm, ZeroConstructor)

void Uplayer_interface_C::GetDynamicMaterials(TArray<class UMaterialInstanceDynamic*>* DynamicMaterials)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetDynamicMaterials");

	Uplayer_interface_C_GetDynamicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DynamicMaterials != nullptr)
		*DynamicMaterials = params.DynamicMaterials;
}


// Function player_interface.player_interface_C.EnterBleedout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DurationPerBleedoutLevel       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::EnterBleedout(float DurationPerBleedoutLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.EnterBleedout");

	Uplayer_interface_C_EnterBleedout_Params params;
	params.DurationPerBleedoutLevel = DurationPerBleedoutLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetBleedoutLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetBleedoutLevel(int* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetBleedoutLevel");

	Uplayer_interface_C_GetBleedoutLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function player_interface.player_interface_C.GetAbilitySystemComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetAbilitySystemComponent(class UAbilitySystemComponent** AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetAbilitySystemComponent");

	Uplayer_interface_C_GetAbilitySystemComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbilitySystem != nullptr)
		*AbilitySystem = params.AbilitySystem;
}


// Function player_interface.player_interface_C.Set Dodge And Jump Enable State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::Set_Dodge_And_Jump_Enable_State(bool Enabled_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.Set Dodge And Jump Enable State");

	Uplayer_interface_C_Set_Dodge_And_Jump_Enable_State_Params params;
	params.Enabled_ = Enabled_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SetCollisionWithDestructible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetCollisionWithDestructible(bool Enabled, bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetCollisionWithDestructible");

	Uplayer_interface_C_SetCollisionWithDestructible_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function player_interface.player_interface_C.PlayNetworkedMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaleFactor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayRate                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Section                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::PlayNetworkedMontage(class UAnimMontage* Montage, float ScaleFactor, float PlayRate, const struct FName& Section)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.PlayNetworkedMontage");

	Uplayer_interface_C_PlayNetworkedMontage_Params params;
	params.Montage = Montage;
	params.ScaleFactor = ScaleFactor;
	params.PlayRate = PlayRate;
	params.Section = Section;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.UpdateTranslateWarpTargetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Position                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uplayer_interface_C::UpdateTranslateWarpTargetPosition(const struct FVector& Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.UpdateTranslateWarpTargetPosition");

	Uplayer_interface_C_UpdateTranslateWarpTargetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SetEarlyOutOfMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EarlyOutOfMontage              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetEarlyOutOfMontage(bool EarlyOutOfMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetEarlyOutOfMontage");

	Uplayer_interface_C_SetEarlyOutOfMontage_Params params;
	params.EarlyOutOfMontage = EarlyOutOfMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetHeadSlotComponent 
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Head_Slot_Component            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetHeadSlotComponent_(class USkeletalMeshComponent** Head_Slot_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetHeadSlotComponent ");

	Uplayer_interface_C_GetHeadSlotComponent__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Head_Slot_Component != nullptr)
		*Head_Slot_Component = params.Head_Slot_Component;
}


// Function player_interface.player_interface_C.UpdateHighlightComponents
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::UpdateHighlightComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.UpdateHighlightComponents");

	Uplayer_interface_C_UpdateHighlightComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetLantern
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonLantern*          Lantern                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetLantern(class AArchonLantern** Lantern)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetLantern");

	Uplayer_interface_C_GetLantern_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Lantern != nullptr)
		*Lantern = params.Lantern;
}


// Function player_interface.player_interface_C.DoEmote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            emoteID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::DoEmote(int emoteID)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.DoEmote");

	Uplayer_interface_C_DoEmote_Params params;
	params.emoteID = emoteID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetHairSlotComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  HairSlotComponent              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetHairSlotComponent(class USkeletalMeshComponent** HairSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetHairSlotComponent");

	Uplayer_interface_C_GetHairSlotComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HairSlotComponent != nullptr)
		*HairSlotComponent = params.HairSlotComponent;
}


// Function player_interface.player_interface_C.SetBodyType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::SetBodyType(EArchonBodyType BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SetBodyType");

	Uplayer_interface_C_SetBodyType_Params params;
	params.BodyType = BodyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetBodyType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonBodyType                BodyType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetBodyType(EArchonBodyType* BodyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetBodyType");

	Uplayer_interface_C_GetBodyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BodyType != nullptr)
		*BodyType = params.BodyType;
}


// Function player_interface.player_interface_C.GetWeaponMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Mesh                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetWeaponMesh(class USkeletalMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetWeaponMesh");

	Uplayer_interface_C_GetWeaponMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mesh != nullptr)
		*Mesh = params.Mesh;
}


// Function player_interface.player_interface_C.GetSkeletalMeshComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComp               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetSkeletalMeshComponent(class USkeletalMeshComponent** SkeletalMeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetSkeletalMeshComponent");

	Uplayer_interface_C_GetSkeletalMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMeshComp != nullptr)
		*SkeletalMeshComp = params.SkeletalMeshComp;
}


// Function player_interface.player_interface_C.UnregisterInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::UnregisterInteraction(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.UnregisterInteraction");

	Uplayer_interface_C_UnregisterInteraction_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.RegisterInteraction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::RegisterInteraction(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.RegisterInteraction");

	Uplayer_interface_C_RegisterInteraction_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.SingleClientNameplateInit
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::SingleClientNameplateInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.SingleClientNameplateInit");

	Uplayer_interface_C_SingleClientNameplateInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetFollowCamera
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        FollowCamera                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetFollowCamera(class UCameraComponent** FollowCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetFollowCamera");

	Uplayer_interface_C_GetFollowCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FollowCamera != nullptr)
		*FollowCamera = params.FollowCamera;
}


// Function player_interface.player_interface_C.GetIsDying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDying                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsDying(bool* IsDying)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsDying");

	Uplayer_interface_C_GetIsDying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDying != nullptr)
		*IsDying = params.IsDying;
}


// Function player_interface.player_interface_C.GetBleedOutState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BleedOutState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetBleedOutState(bool* BleedOutState)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetBleedOutState");

	Uplayer_interface_C_GetBleedOutState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BleedOutState != nullptr)
		*BleedOutState = params.BleedOutState;
}


// Function player_interface.player_interface_C.GetReviveHealthThreshold
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReviveHealthThreshold          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetReviveHealthThreshold(float* ReviveHealthThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetReviveHealthThreshold");

	Uplayer_interface_C_GetReviveHealthThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReviveHealthThreshold != nullptr)
		*ReviveHealthThreshold = params.ReviveHealthThreshold;
}


// Function player_interface.player_interface_C.GetCurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentHealth                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetCurrentHealth(float* CurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetCurrentHealth");

	Uplayer_interface_C_GetCurrentHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentHealth != nullptr)
		*CurrentHealth = params.CurrentHealth;
}


// Function player_interface.player_interface_C.ReviveFromBleedOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   RevivingPawn                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::ReviveFromBleedOut(class APawn* RevivingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.ReviveFromBleedOut");

	Uplayer_interface_C_ReviveFromBleedOut_Params params;
	params.RevivingPawn = RevivingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetNamePlate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        Nameplate                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetNamePlate(class UWidgetComponent** Nameplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetNamePlate");

	Uplayer_interface_C_GetNamePlate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Nameplate != nullptr)
		*Nameplate = params.Nameplate;
}


// Function player_interface.player_interface_C.GetBleedOutTimer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle            BleedOutTImer                  (Parm, OutParm)

void Uplayer_interface_C::GetBleedOutTimer(struct FTimerHandle* BleedOutTImer)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetBleedOutTimer");

	Uplayer_interface_C_GetBleedOutTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BleedOutTImer != nullptr)
		*BleedOutTImer = params.BleedOutTImer;
}


// Function player_interface.player_interface_C.ApplyStringDataInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData> String_Data                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uplayer_interface_C::ApplyStringDataInterface(TArray<struct FAppearanceStringData>* String_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.ApplyStringDataInterface");

	Uplayer_interface_C_ApplyStringDataInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (String_Data != nullptr)
		*String_Data = params.String_Data;
}


// Function player_interface.player_interface_C.GatherStringDataInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAppearanceStringData> AssetData                      (Parm, OutParm, ZeroConstructor)

void Uplayer_interface_C::GatherStringDataInterface(TArray<struct FAppearanceStringData>* AssetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GatherStringDataInterface");

	Uplayer_interface_C_GatherStringDataInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AssetData != nullptr)
		*AssetData = params.AssetData;
}


// Function player_interface.player_interface_C.CallLegalStuck
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_interface_C::CallLegalStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.CallLegalStuck");

	Uplayer_interface_C_CallLegalStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetClientUsedMouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClientUsedMouse                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetClientUsedMouse(bool* ClientUsedMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetClientUsedMouse");

	Uplayer_interface_C_GetClientUsedMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientUsedMouse != nullptr)
		*ClientUsedMouse = params.ClientUsedMouse;
}


// Function player_interface.player_interface_C.GetClientUsedGamePad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClientUsedGamePad              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetClientUsedGamePad(bool* ClientUsedGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetClientUsedGamePad");

	Uplayer_interface_C_GetClientUsedGamePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientUsedGamePad != nullptr)
		*ClientUsedGamePad = params.ClientUsedGamePad;
}


// Function player_interface.player_interface_C.GetPlayerStats
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Health                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Current_Stamina                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetPlayerStats(float* Current_Health, float* Current_Stamina)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetPlayerStats");

	Uplayer_interface_C_GetPlayerStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Current_Health != nullptr)
		*Current_Health = params.Current_Health;
	if (Current_Stamina != nullptr)
		*Current_Stamina = params.Current_Stamina;
}


// Function player_interface.player_interface_C.GetIsInCity-Deprecated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_In_City                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsInCity_Deprecated(bool* Is_In_City)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsInCity-Deprecated");

	Uplayer_interface_C_GetIsInCity_Deprecated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_In_City != nullptr)
		*Is_In_City = params.Is_In_City;
}


// Function player_interface.player_interface_C.GetIsSheathed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Weapon_Sheathed                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsSheathed(bool* Weapon_Sheathed)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsSheathed");

	Uplayer_interface_C_GetIsSheathed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon_Sheathed != nullptr)
		*Weapon_Sheathed = params.Weapon_Sheathed;
}


// Function player_interface.player_interface_C.GetIsInStaminaThresholdRecoveryPeriod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_in_stamina_threshold_recovery_period_ (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsInStaminaThresholdRecoveryPeriod(bool* Is_in_stamina_threshold_recovery_period_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsInStaminaThresholdRecoveryPeriod");

	Uplayer_interface_C_GetIsInStaminaThresholdRecoveryPeriod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_in_stamina_threshold_recovery_period_ != nullptr)
		*Is_in_stamina_threshold_recovery_period_ = params.Is_in_stamina_threshold_recovery_period_;
}


// Function player_interface.player_interface_C.GetIsInSlowChargeState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_slow_charging_              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsInSlowChargeState(bool* Is_slow_charging_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsInSlowChargeState");

	Uplayer_interface_C_GetIsInSlowChargeState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_slow_charging_ != nullptr)
		*Is_slow_charging_ = params.Is_slow_charging_;
}


// Function player_interface.player_interface_C.GetIsFalling
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Falling_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsFalling(bool* Is_Falling_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsFalling");

	Uplayer_interface_C_GetIsFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Falling_ != nullptr)
		*Is_Falling_ = params.Is_Falling_;
}


// Function player_interface.player_interface_C.OnGameModeStartEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::OnGameModeStartEvent(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.OnGameModeStartEvent");

	Uplayer_interface_C_OnGameModeStartEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function player_interface.player_interface_C.ConsumeStamina
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StaminaCost                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           RestrictedByStaminaAmount_     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::ConsumeStamina(float StaminaCost, bool RestrictedByStaminaAmount_, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.ConsumeStamina");

	Uplayer_interface_C_ConsumeStamina_Params params;
	params.StaminaCost = StaminaCost;
	params.RestrictedByStaminaAmount_ = RestrictedByStaminaAmount_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function player_interface.player_interface_C.RemoveDebugComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Comp                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::RemoveDebugComponent(class UActorComponent* Comp)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.RemoveDebugComponent");

	Uplayer_interface_C_RemoveDebugComponent_Params params;
	params.Comp = Comp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_interface.player_interface_C.GetIsJumping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Jumping_                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_interface_C::GetIsJumping(bool* Is_Jumping_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_interface.player_interface_C.GetIsJumping");

	Uplayer_interface_C_GetIsJumping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Is_Jumping_ != nullptr)
		*Is_Jumping_ = params.Is_Jumping_;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
