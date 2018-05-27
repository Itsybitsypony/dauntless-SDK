// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Axe_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetCurrentDetermination
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Determination                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::GetCurrentDetermination(int* Determination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetCurrentDetermination");

	ABP_Axe_Weapon_C_GetCurrentDetermination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Determination != nullptr)
		*Determination = params.Determination;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetDeterminationOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DeterminationLevel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::SetDeterminationOverride(int DeterminationLevel, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetDeterminationOverride");

	ABP_Axe_Weapon_C_SetDeterminationOverride_Params params;
	params.DeterminationLevel = DeterminationLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetCurrentChargeLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChargeLevel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::GetCurrentChargeLevel(int* ChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetCurrentChargeLevel");

	ABP_Axe_Weapon_C_GetCurrentChargeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChargeLevel != nullptr)
		*ChargeLevel = params.ChargeLevel;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetDeterminationOnHitPerChargeLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    DeterminationOnHitPerChargeLevel (Parm, OutParm, ZeroConstructor)

void ABP_Axe_Weapon_C::GetDeterminationOnHitPerChargeLevel(TArray<int>* DeterminationOnHitPerChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GetDeterminationOnHitPerChargeLevel");

	ABP_Axe_Weapon_C_GetDeterminationOnHitPerChargeLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeterminationOnHitPerChargeLevel != nullptr)
		*DeterminationOnHitPerChargeLevel = params.DeterminationOnHitPerChargeLevel;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.CanExecuteComboTransition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Axe_Weapon_C::CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.CanExecuteComboTransition");

	ABP_Axe_Weapon_C_CanExecuteComboTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.IsPreviousChargeActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::IsPreviousChargeActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.IsPreviousChargeActive");

	ABP_Axe_Weapon_C_IsPreviousChargeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetPreviousChargeLevel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChargeLevel                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::SetPreviousChargeLevel(int ChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetPreviousChargeLevel");

	ABP_Axe_Weapon_C_SetPreviousChargeLevel_Params params;
	params.ChargeLevel = ChargeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.SpecialAttackReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::SpecialAttackReady(bool* QReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.SpecialAttackReady");

	ABP_Axe_Weapon_C_SpecialAttackReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QReady != nullptr)
		*QReady = params.QReady;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.InternalClearChargeParticles
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::InternalClearChargeParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.InternalClearChargeParticles");

	ABP_Axe_Weapon_C_InternalClearChargeParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisableDeterminationAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::DisableDeterminationAudio(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisableDeterminationAudio");

	ABP_Axe_Weapon_C_DisableDeterminationAudio_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.EnableDeterminationAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::EnableDeterminationAudio(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.EnableDeterminationAudio");

	ABP_Axe_Weapon_C_EnableDeterminationAudio_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisableDeterminationVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::DisableDeterminationVFX(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisableDeterminationVFX");

	ABP_Axe_Weapon_C_DisableDeterminationVFX_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.EnableDeterminationVFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::EnableDeterminationVFX(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.EnableDeterminationVFX");

	ABP_Axe_Weapon_C_EnableDeterminationVFX_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Modify Damage Row Name Based On Scriptable Hook
// (BlueprintCallable, BlueprintEvent, BlueprintPure)

void ABP_Axe_Weapon_C::Modify_Damage_Row_Name_Based_On_Scriptable_Hook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.Modify Damage Row Name Based On Scriptable Hook");

	ABP_Axe_Weapon_C_Modify_Damage_Row_Name_Based_On_Scriptable_Hook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Spawn Charge Level Particle & Audio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Charge_level                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::Spawn_Charge_Level_Particle___Audio(int Charge_level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.Spawn Charge Level Particle & Audio");

	ABP_Axe_Weapon_C_Spawn_Charge_Level_Particle___Audio_Params params;
	params.Charge_level = Charge_level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnRep_Current Charge Level
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::OnRep_Current_Charge_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnRep_Current Charge Level");

	ABP_Axe_Weapon_C_OnRep_Current_Charge_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Spawn Charge Level Change Particle - Old Flash Color Implementation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            New_Charge_Level               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::Spawn_Charge_Level_Change_Particle___Old_Flash_Color_Implementation(int New_Charge_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.Spawn Charge Level Change Particle - Old Flash Color Implementation");

	ABP_Axe_Weapon_C_Spawn_Charge_Level_Change_Particle___Old_Flash_Color_Implementation_Params params;
	params.New_Charge_Level = New_Charge_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Get Appropriate Weapon Trails
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::Get_Appropriate_Weapon_Trails()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.Get Appropriate Weapon Trails");

	ABP_Axe_Weapon_C_Get_Appropriate_Weapon_Trails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Debug Set Weapon Color
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Axe_Weapon_C::Debug_Set_Weapon_Color(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.Debug Set Weapon Color");

	ABP_Axe_Weapon_C_Debug_Set_Weapon_Color_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.UserConstructionScript");

	ABP_Axe_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultOne__FinishedFunc
// (BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeMultOne__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultOne__FinishedFunc");

	ABP_Axe_Weapon_C_ChargeMultOne__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultOne__UpdateFunc
// (BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeMultOne__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultOne__UpdateFunc");

	ABP_Axe_Weapon_C_ChargeMultOne__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultTwo__FinishedFunc
// (BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeMultTwo__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultTwo__FinishedFunc");

	ABP_Axe_Weapon_C_ChargeMultTwo__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultTwo__UpdateFunc
// (BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeMultTwo__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultTwo__UpdateFunc");

	ABP_Axe_Weapon_C_ChargeMultTwo__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultThree__FinishedFunc
// (BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeMultThree__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultThree__FinishedFunc");

	ABP_Axe_Weapon_C_ChargeMultThree__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultThree__UpdateFunc
// (BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeMultThree__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeMultThree__UpdateFunc");

	ABP_Axe_Weapon_C_ChargeMultThree__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Axe_Weapon_C::GameplayCue_Combat_Determination_OnLvl1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl1");

	ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Axe_Weapon_C::GameplayCue_Combat_Determination_OnLvl2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl2");

	ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Axe_Weapon_C::GameplayCue_Combat_Determination_OnLvl3(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl3");

	ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl3_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.ReadyToLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Axe_Weapon_C::GameplayCue_Combat_Determination_ReadyToLevel(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.ReadyToLevel");

	ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_ReadyToLevel_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.VFX.Axe.Special
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Axe_Weapon_C::GameplayCue_VFX_Axe_Special(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.VFX.Axe.Special");

	ABP_Axe_Weapon_C_GameplayCue_VFX_Axe_Special_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Axe_Weapon_C::GameplayCue_Combat_Determination_OnLvl4(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl4");

	ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl4_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Axe_Weapon_C::GameplayCue_Combat_Determination_OnLvl5(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.GameplayCue.Combat.Determination.OnLvl5");

	ABP_Axe_Weapon_C_GameplayCue_Combat_Determination_OnLvl5_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboStarted
// (Event, Protected, BlueprintEvent)

void ABP_Axe_Weapon_C::OnComboStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboStarted");

	ABP_Axe_Weapon_C_OnComboStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboEnded
// (Event, Protected, BlueprintEvent)

void ABP_Axe_Weapon_C::OnComboEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboEnded");

	ABP_Axe_Weapon_C_OnComboEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnChargeLevelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           PreviousChargeLevel            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewChargeLevel                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::OnChargeLevelChanged(int* PreviousChargeLevel, int* NewChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnChargeLevelChanged");

	ABP_Axe_Weapon_C_OnChargeLevelChanged_Params params;
	params.PreviousChargeLevel = PreviousChargeLevel;
	params.NewChargeLevel = NewChargeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Cheat Charge Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::Cheat_Charge_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.Cheat Charge Weapon");

	ABP_Axe_Weapon_C_Cheat_Charge_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboNextMove
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer*      ComboInputBuffer               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Axe_Weapon_C::OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboNextMove");

	ABP_Axe_Weapon_C_OnComboNextMove_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void ABP_Axe_Weapon_C::K2_OnUnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.K2_OnUnEquip");

	ABP_Axe_Weapon_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Clear Charge Level
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::Clear_Charge_Level()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.Clear Charge Level");

	ABP_Axe_Weapon_C_Clear_Charge_Level_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.Clear Charge Particles
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::Clear_Charge_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.Clear Charge Particles");

	ABP_Axe_Weapon_C_Clear_Charge_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnMoveSkill
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::OnMoveSkill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnMoveSkill");

	ABP_Axe_Weapon_C_OnMoveSkill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnChargeEnded
// (Event, Public, BlueprintEvent)

void ABP_Axe_Weapon_C::OnChargeEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnChargeEnded");

	ABP_Axe_Weapon_C_OnChargeEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.CallWeaponSpecificFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Function_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::CallWeaponSpecificFunction(struct FName* Function_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.CallWeaponSpecificFunction");

	ABP_Axe_Weapon_C_CallWeaponSpecificFunction_Params params;
	params.Function_Name = Function_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ActivateSuper
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::ActivateSuper()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ActivateSuper");

	ABP_Axe_Weapon_C_ActivateSuper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnRep_Equipped?
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::OnRep_Equipped_()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnRep_Equipped?");

	ABP_Axe_Weapon_C_OnRep_Equipped__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ClientTestForOwner
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::ClientTestForOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ClientTestForOwner");

	ABP_Axe_Weapon_C_ClientTestForOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetCurrentChargeLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentChargeLevel             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::SetCurrentChargeLevel(int CurrentChargeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.SetCurrentChargeLevel");

	ABP_Axe_Weapon_C_SetCurrentChargeLevel_Params params;
	params.CurrentChargeLevel = CurrentChargeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeOnePlayerMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeOnePlayerMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeOnePlayerMaterial");

	ABP_Axe_Weapon_C_ChargeOnePlayerMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeTwoPlayerMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeTwoPlayerMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeTwoPlayerMaterial");

	ABP_Axe_Weapon_C_ChargeTwoPlayerMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeThreePlayerMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::ChargeThreePlayerMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ChargeThreePlayerMaterial");

	ABP_Axe_Weapon_C_ChargeThreePlayerMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboIncremented_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonAttackActionKey         AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::OnComboIncremented_Event_1(EArchonAttackActionKey AttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.OnComboIncremented_Event_1");

	ABP_Axe_Weapon_C_OnComboIncremented_Event_1_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Axe_Weapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ReceiveBeginPlay");

	ABP_Axe_Weapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationOneAxeMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::DeterminationOneAxeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationOneAxeMaterial");

	ABP_Axe_Weapon_C_DeterminationOneAxeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationTwoAxeMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::DeterminationTwoAxeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationTwoAxeMaterial");

	ABP_Axe_Weapon_C_DeterminationTwoAxeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationThreeAxeMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::DeterminationThreeAxeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationThreeAxeMaterial");

	ABP_Axe_Weapon_C_DeterminationThreeAxeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationZeroAxeMaterial
// (BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::DeterminationZeroAxeMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.DeterminationZeroAxeMaterial");

	ABP_Axe_Weapon_C_DeterminationZeroAxeMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisablePlayerEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Axe_Weapon_C::DisablePlayerEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.DisablePlayerEffects");

	ABP_Axe_Weapon_C_DisablePlayerEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Axe_Weapon.BP_Axe_Weapon_C.ExecuteUbergraph_BP_Axe_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Axe_Weapon_C::ExecuteUbergraph_BP_Axe_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Axe_Weapon.BP_Axe_Weapon_C.ExecuteUbergraph_BP_Axe_Weapon");

	ABP_Axe_Weapon_C_ExecuteUbergraph_BP_Axe_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
