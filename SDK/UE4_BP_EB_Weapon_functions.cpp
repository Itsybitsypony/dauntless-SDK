// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_EB_Weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_EB_Weapon.BP_EB_Weapon_C.GetUsesBaseWeaponSuperMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::GetUsesBaseWeaponSuperMode(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.GetUsesBaseWeaponSuperMode");

	ABP_EB_Weapon_C_GetUsesBaseWeaponSuperMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.GetIsInSuperMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::GetIsInSuperMode(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.GetIsInSuperMode");

	ABP_EB_Weapon_C_GetIsInSuperMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.GetMaxEmberCharge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          MaxCharge                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::GetMaxEmberCharge(float* MaxCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.GetMaxEmberCharge");

	ABP_EB_Weapon_C_GetMaxEmberCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxCharge != nullptr)
		*MaxCharge = params.MaxCharge;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.GetCurrentEmberCharge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::GetCurrentEmberCharge(float* CurrentCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.GetCurrentEmberCharge");

	ABP_EB_Weapon_C_GetCurrentEmberCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentCharge != nullptr)
		*CurrentCharge = params.CurrentCharge;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.CustomModifyDamageEventData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData*       DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ModifiedDamageEventData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        OverriddenDamageEventData      (Parm, OutParm)
// bool                           ShouldOverrideDamageTags       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OverriddenDamageTags           (Parm, OutParm)

void ABP_EB_Weapon_C::CustomModifyDamageEventData(struct FDamageEventData* DamageEventData, class AActor** DamagedActor, struct FGameplayTagContainer* DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.CustomModifyDamageEventData");

	ABP_EB_Weapon_C_CustomModifyDamageEventData_Params params;
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


// Function BP_EB_Weapon.BP_EB_Weapon_C.OnRep_InSuperMode
// (BlueprintCallable, BlueprintEvent)

void ABP_EB_Weapon_C::OnRep_InSuperMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.OnRep_InSuperMode");

	ABP_EB_Weapon_C_OnRep_InSuperMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.CanExecuteComboTransition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EB_Weapon_C::CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.CanExecuteComboTransition");

	ABP_EB_Weapon_C_CanExecuteComboTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.SpecialAttackReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::SpecialAttackReady(bool* QReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.SpecialAttackReady");

	ABP_EB_Weapon_C_SpecialAttackReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QReady != nullptr)
		*QReady = params.QReady;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Set Attack Speed Rate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          New_Attack_Speed_Rate          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::Set_Attack_Speed_Rate(float New_Attack_Speed_Rate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Set Attack Speed Rate");

	ABP_EB_Weapon_C_Set_Attack_Speed_Rate_Params params;
	params.New_Attack_Speed_Rate = New_Attack_Speed_Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Add Ember Charge On Hit
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_EB_Weapon_C::Add_Ember_Charge_On_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Add Ember Charge On Hit");

	ABP_EB_Weapon_C_Add_Ember_Charge_On_Hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Update Ember Charge Decay
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::Update_Ember_Charge_Decay(float Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Update Ember Charge Decay");

	ABP_EB_Weapon_C_Update_Ember_Charge_Decay_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Debug Set Weapon Color
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_EB_Weapon_C::Debug_Set_Weapon_Color(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Debug Set Weapon Color");

	ABP_EB_Weapon_C_Debug_Set_Weapon_Color_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Consume Ember Charge
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount_To_Consume              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::Consume_Ember_Charge(float Amount_To_Consume)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Consume Ember Charge");

	ABP_EB_Weapon_C_Consume_Ember_Charge_Params params;
	params.Amount_To_Consume = Amount_To_Consume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Get Current Ember Charge Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::Get_Current_Ember_Charge_Percent(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Get Current Ember Charge Percent");

	ABP_EB_Weapon_C_Get_Current_Ember_Charge_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EB_Weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.UserConstructionScript");

	ABP_EB_Weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeWindowEnd
// (Event, Protected, BlueprintEvent)

void ABP_EB_Weapon_C::OnEmberChargeWindowEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeWindowEnd");

	ABP_EB_Weapon_C_OnEmberChargeWindowEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeWindowStart
// (Event, Protected, BlueprintEvent)

void ABP_EB_Weapon_C::OnEmberChargeWindowStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeWindowStart");

	ABP_EB_Weapon_C_OnEmberChargeWindowStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeFail
// (Event, Public, BlueprintEvent)

void ABP_EB_Weapon_C::OnEmberChargeFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeFail");

	ABP_EB_Weapon_C_OnEmberChargeFail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Trigger Charge Meter Delay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           High_Delay_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::Trigger_Charge_Meter_Delay(bool High_Delay_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Trigger Charge Meter Delay");

	ABP_EB_Weapon_C_Trigger_Charge_Meter_Delay_Params params;
	params.High_Delay_ = High_Delay_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Ember Charge - Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::Ember_Charge___Tick(float Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Ember Charge - Tick");

	ABP_EB_Weapon_C_Ember_Charge___Tick_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Evaluate Ember Charge
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EB_Weapon_C::Evaluate_Ember_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Evaluate Ember Charge");

	ABP_EB_Weapon_C_Evaluate_Ember_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.ReceiveTick");

	ABP_EB_Weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboStarted
// (Event, Protected, BlueprintEvent)

void ABP_EB_Weapon_C::OnComboStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboStarted");

	ABP_EB_Weapon_C_OnComboStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboNextMove
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer*      ComboInputBuffer               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_EB_Weapon_C::OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboNextMove");

	ABP_EB_Weapon_C_OnComboNextMove_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboEnded
// (Event, Protected, BlueprintEvent)

void ABP_EB_Weapon_C::OnComboEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.OnComboEnded");

	ABP_EB_Weapon_C_OnComboEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeSuccessful
// (Event, Public, BlueprintEvent)

void ABP_EB_Weapon_C::OnEmberChargeSuccessful()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.OnEmberChargeSuccessful");

	ABP_EB_Weapon_C_OnEmberChargeSuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.Cheat Charge Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EB_Weapon_C::Cheat_Charge_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.Cheat Charge Weapon");

	ABP_EB_Weapon_C_Cheat_Charge_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.K2_OnEquip
// (Event, Public, BlueprintEvent)

void ABP_EB_Weapon_C::K2_OnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.K2_OnEquip");

	ABP_EB_Weapon_C_K2_OnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EB_Weapon.BP_EB_Weapon_C.ExecuteUbergraph_BP_EB_Weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EB_Weapon_C::ExecuteUbergraph_BP_EB_Weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EB_Weapon.BP_EB_Weapon_C.ExecuteUbergraph_BP_EB_Weapon");

	ABP_EB_Weapon_C_ExecuteUbergraph_BP_EB_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
