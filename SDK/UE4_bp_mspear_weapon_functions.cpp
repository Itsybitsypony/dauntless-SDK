// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_mspear_weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_mspear_weapon.bp_mspear_weapon_C.GetMeter_AmmoQualityRanges
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AmmoQualityThresh_1            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_2            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_3            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_4            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AmmoQualityThresh_5            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            AmmoMax                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::GetMeter_AmmoQualityRanges(float* AmmoQualityThresh_1, float* AmmoQualityThresh_2, float* AmmoQualityThresh_3, float* AmmoQualityThresh_4, float* AmmoQualityThresh_5, int* AmmoMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.GetMeter_AmmoQualityRanges");

	Abp_mspear_weapon_C_GetMeter_AmmoQualityRanges_Params params;

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


// Function bp_mspear_weapon.bp_mspear_weapon_C.GetLastFiredShotAmmoScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          LastFiredShotAmmoScale         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::GetLastFiredShotAmmoScale(float* LastFiredShotAmmoScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.GetLastFiredShotAmmoScale");

	Abp_mspear_weapon_C_GetLastFiredShotAmmoScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastFiredShotAmmoScale != nullptr)
		*LastFiredShotAmmoScale = params.LastFiredShotAmmoScale;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentMeterAmmoQuality
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentAmmoQuality             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::GetCurrentMeterAmmoQuality(float* CurrentAmmoQuality)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentMeterAmmoQuality");

	Abp_mspear_weapon_C_GetCurrentMeterAmmoQuality_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentAmmoQuality != nullptr)
		*CurrentAmmoQuality = params.CurrentAmmoQuality;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.GetMeterGainScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::GetMeterGainScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.GetMeterGainScale");

	Abp_mspear_weapon_C_GetMeterGainScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.GetRangedModeTunables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fmspear_tunables_str    Tunables                       (Parm, OutParm)

void Abp_mspear_weapon_C::GetRangedModeTunables(struct Fmspear_tunables_str* Tunables)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.GetRangedModeTunables");

	Abp_mspear_weapon_C_GetRangedModeTunables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tunables != nullptr)
		*Tunables = params.Tunables;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.CanExecuteComboTransition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Abp_mspear_weapon_C::CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.CanExecuteComboTransition");

	Abp_mspear_weapon_C_CanExecuteComboTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.CustomModifyDamageEventData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData*       DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ModifiedDamageEventData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        OverriddenDamageEventData      (Parm, OutParm)
// bool                           ShouldOverrideDamageTags       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OverriddenDamageTags           (Parm, OutParm)

void Abp_mspear_weapon_C::CustomModifyDamageEventData(struct FDamageEventData* DamageEventData, class AActor** DamagedActor, struct FGameplayTagContainer* DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.CustomModifyDamageEventData");

	Abp_mspear_weapon_C_CustomModifyDamageEventData_Params params;
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


// Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentAmmoScale
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_mspear_weapon_C::GetCurrentAmmoScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentAmmoScale");

	Abp_mspear_weapon_C_GetCurrentAmmoScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentAimAccuracy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Accuracy                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::GetCurrentAimAccuracy(float* Accuracy)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.GetCurrentAimAccuracy");

	Abp_mspear_weapon_C_GetCurrentAimAccuracy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accuracy != nullptr)
		*Accuracy = params.Accuracy;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_mspear_weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.UserConstructionScript");

	Abp_mspear_weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.CallWeaponSpecificFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Function_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::CallWeaponSpecificFunction(struct FName* Function_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.CallWeaponSpecificFunction");

	Abp_mspear_weapon_C_CallWeaponSpecificFunction_Params params;
	params.Function_Name = Function_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.EndAiming
// (BlueprintCallable, BlueprintEvent)

void Abp_mspear_weapon_C::EndAiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.EndAiming");

	Abp_mspear_weapon_C_EndAiming_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.OnNotifyAimAccuracyStarted
// (BlueprintCallable, BlueprintEvent)

void Abp_mspear_weapon_C::OnNotifyAimAccuracyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.OnNotifyAimAccuracyStarted");

	Abp_mspear_weapon_C_OnNotifyAimAccuracyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.OnComboEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void Abp_mspear_weapon_C::OnComboEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.OnComboEnd_Event_1");

	Abp_mspear_weapon_C_OnComboEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.ServerOnAmmoAdjustedPreClamp_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            OldAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::ServerOnAmmoAdjustedPreClamp_Event_1(int OldAmmoCount, int NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.ServerOnAmmoAdjustedPreClamp_Event_1");

	Abp_mspear_weapon_C_ServerOnAmmoAdjustedPreClamp_Event_1_Params params;
	params.OldAmmoCount = OldAmmoCount;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.OnComboIncremented_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EArchonAttackActionKey         AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::OnComboIncremented_Event_1(EArchonAttackActionKey AttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.OnComboIncremented_Event_1");

	Abp_mspear_weapon_C_OnComboIncremented_Event_1_Params params;
	params.AttackType = AttackType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.ReceiveTick");

	Abp_mspear_weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.Cheat Charge Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_mspear_weapon_C::Cheat_Charge_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.Cheat Charge Weapon");

	Abp_mspear_weapon_C_Cheat_Charge_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.K2_OnEquip
// (Event, Public, BlueprintEvent)

void Abp_mspear_weapon_C::K2_OnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.K2_OnEquip");

	Abp_mspear_weapon_C_K2_OnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abp_mspear_weapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.ReceiveBeginPlay");

	Abp_mspear_weapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_mspear_weapon.bp_mspear_weapon_C.ExecuteUbergraph_bp_mspear_weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_mspear_weapon_C::ExecuteUbergraph_bp_mspear_weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_mspear_weapon.bp_mspear_weapon_C.ExecuteUbergraph_bp_mspear_weapon");

	Abp_mspear_weapon_C_ExecuteUbergraph_bp_mspear_weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
