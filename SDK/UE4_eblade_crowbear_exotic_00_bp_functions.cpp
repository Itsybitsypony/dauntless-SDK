// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eblade_crowbear_exotic_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetRangedModeTunables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fmspear_tunables_str    Tunables                       (Parm, OutParm)

void Aeblade_crowbear_exotic_00_bp_C::GetRangedModeTunables(struct Fmspear_tunables_str* Tunables)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetRangedModeTunables");

	Aeblade_crowbear_exotic_00_bp_C_GetRangedModeTunables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tunables != nullptr)
		*Tunables = params.Tunables;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetMeterGainScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::GetMeterGainScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetMeterGainScale");

	Aeblade_crowbear_exotic_00_bp_C_GetMeterGainScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetCurrentMeterAmmoQuality
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentAmmoQuality             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::GetCurrentMeterAmmoQuality(float* CurrentAmmoQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetCurrentMeterAmmoQuality");

	Aeblade_crowbear_exotic_00_bp_C_GetCurrentMeterAmmoQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoQuality != nullptr)
		*CurrentAmmoQuality = params.CurrentAmmoQuality;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetLastFiredShotAmmoScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          LastFiredShotAmmoScale         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::GetLastFiredShotAmmoScale(float* LastFiredShotAmmoScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetLastFiredShotAmmoScale");

	Aeblade_crowbear_exotic_00_bp_C_GetLastFiredShotAmmoScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastFiredShotAmmoScale != nullptr)
		*LastFiredShotAmmoScale = params.LastFiredShotAmmoScale;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetMeter_AmmoQualityRanges
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoQualityThresh_1            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_2            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_3            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_4            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_5            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoMax                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::GetMeter_AmmoQualityRanges(float* AmmoQualityThresh_1, float* AmmoQualityThresh_2, float* AmmoQualityThresh_3, float* AmmoQualityThresh_4, float* AmmoQualityThresh_5, int* AmmoMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.GetMeter_AmmoQualityRanges");

	Aeblade_crowbear_exotic_00_bp_C_GetMeter_AmmoQualityRanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmmoQualityThresh_1 != nullptr)
		*AmmoQualityThresh_1 = params.AmmoQualityThresh_1;
	if (AmmoQualityThresh_2 != nullptr)
		*AmmoQualityThresh_2 = params.AmmoQualityThresh_2;
	if (AmmoQualityThresh_3 != nullptr)
		*AmmoQualityThresh_3 = params.AmmoQualityThresh_3;
	if (AmmoQualityThresh_4 != nullptr)
		*AmmoQualityThresh_4 = params.AmmoQualityThresh_4;
	if (AmmoQualityThresh_5 != nullptr)
		*AmmoQualityThresh_5 = params.AmmoQualityThresh_5;
	if (AmmoMax != nullptr)
		*AmmoMax = params.AmmoMax;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.PlayBlinkAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ExplicitTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::PlayBlinkAnim(float ExplicitTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.PlayBlinkAnim");

	Aeblade_crowbear_exotic_00_bp_C_PlayBlinkAnim_Params params;
	params.ExplicitTime = ExplicitTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.CustomModifyDamageEventData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData*       DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ModifiedDamageEventData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        OverriddenDamageEventData      (Parm, OutParm)
// bool                           ShouldOverrideDamageTags       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OverriddenDamageTags           (Parm, OutParm)

void Aeblade_crowbear_exotic_00_bp_C::CustomModifyDamageEventData(struct FDamageEventData* DamageEventData, class AActor** DamagedActor, struct FGameplayTagContainer* DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.CustomModifyDamageEventData");

	Aeblade_crowbear_exotic_00_bp_C_CustomModifyDamageEventData_Params params;
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


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.CanExecuteComboTransition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Aeblade_crowbear_exotic_00_bp_C::CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.CanExecuteComboTransition");

	Aeblade_crowbear_exotic_00_bp_C_CanExecuteComboTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.SpecialAttackReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::SpecialAttackReady(bool* QReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.SpecialAttackReady");

	Aeblade_crowbear_exotic_00_bp_C_SpecialAttackReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QReady != nullptr)
		*QReady = params.QReady;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aeblade_crowbear_exotic_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.UserConstructionScript");

	Aeblade_crowbear_exotic_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.ReceiveTick");

	Aeblade_crowbear_exotic_00_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.Cheat Charge Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void Aeblade_crowbear_exotic_00_bp_C::Cheat_Charge_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.Cheat Charge Weapon");

	Aeblade_crowbear_exotic_00_bp_C_Cheat_Charge_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.K2_OnEquip
// (Event, Public, BlueprintEvent)

void Aeblade_crowbear_exotic_00_bp_C::K2_OnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.K2_OnEquip");

	Aeblade_crowbear_exotic_00_bp_C_K2_OnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.Ember Charge - Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::Ember_Charge___Tick(float* Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.Ember Charge - Tick");

	Aeblade_crowbear_exotic_00_bp_C_Ember_Charge___Tick_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeAnimOff
// (BlueprintCallable, BlueprintEvent)

void Aeblade_crowbear_exotic_00_bp_C::EyeAnimOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeAnimOff");

	Aeblade_crowbear_exotic_00_bp_C_EyeAnimOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeAnimOn
// (BlueprintCallable, BlueprintEvent)

void Aeblade_crowbear_exotic_00_bp_C::EyeAnimOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeAnimOn");

	Aeblade_crowbear_exotic_00_bp_C_EyeAnimOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeBlinkTick
// (BlueprintCallable, BlueprintEvent)

void Aeblade_crowbear_exotic_00_bp_C::EyeBlinkTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.EyeBlinkTick");

	Aeblade_crowbear_exotic_00_bp_C_EyeBlinkTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.ExecuteUbergraph_eblade_crowbear_exotic_00_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeblade_crowbear_exotic_00_bp_C::ExecuteUbergraph_eblade_crowbear_exotic_00_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_crowbear_exotic_00_bp.eblade_crowbear_exotic_00_bp_C.ExecuteUbergraph_eblade_crowbear_exotic_00_bp");

	Aeblade_crowbear_exotic_00_bp_C_ExecuteUbergraph_eblade_crowbear_exotic_00_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
