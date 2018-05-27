// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_ihammer_weapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_ihammer_weapon.bp_ihammer_weapon_C.IsAmmoShellPrimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPrimed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::IsAmmoShellPrimed(bool* IsPrimed)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.IsAmmoShellPrimed");

	Abp_ihammer_weapon_C_IsAmmoShellPrimed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPrimed != nullptr)
		*IsPrimed = params.IsPrimed;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.PrimeAmmoShell
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Abp_ihammer_weapon_C::PrimeAmmoShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.PrimeAmmoShell");

	Abp_ihammer_weapon_C_PrimeAmmoShell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.RemovePrimedAmmoShell
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Abp_ihammer_weapon_C::RemovePrimedAmmoShell()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.RemovePrimedAmmoShell");

	Abp_ihammer_weapon_C_RemovePrimedAmmoShell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.CanExecuteComboTransition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Abp_ihammer_weapon_C::CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.CanExecuteComboTransition");

	Abp_ihammer_weapon_C_CanExecuteComboTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.CustomModifyDamageEventData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData*       DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ModifiedDamageEventData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        OverriddenDamageEventData      (Parm, OutParm)
// bool                           ShouldOverrideDamageTags       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OverriddenDamageTags           (Parm, OutParm)

void Abp_ihammer_weapon_C::CustomModifyDamageEventData(struct FDamageEventData* DamageEventData, class AActor** DamagedActor, struct FGameplayTagContainer* DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.CustomModifyDamageEventData");

	Abp_ihammer_weapon_C_CustomModifyDamageEventData_Params params;
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


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.SpecialAttackReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QReady                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::SpecialAttackReady(bool* QReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.SpecialAttackReady");

	Abp_ihammer_weapon_C_SpecialAttackReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QReady != nullptr)
		*QReady = params.QReady;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Get Appropriate Weapon Trails
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::Get_Appropriate_Weapon_Trails()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.Get Appropriate Weapon Trails");

	Abp_ihammer_weapon_C_Get_Appropriate_Weapon_Trails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.UserConstructionScript");

	Abp_ihammer_weapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Eject Clip
// (BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::Eject_Clip()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.Eject Clip");

	Abp_ihammer_weapon_C_Eject_Clip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Spawn Shell Casing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Amount_To_Spawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::Spawn_Shell_Casing(int Amount_To_Spawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.Spawn Shell Casing");

	Abp_ihammer_weapon_C_Spawn_Shell_Casing_Params params;
	params.Amount_To_Spawn = Amount_To_Spawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnAmmoCountChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::OnAmmoCountChanged(int NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnAmmoCountChanged");

	Abp_ihammer_weapon_C_OnAmmoCountChanged_Params params;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnAmmoAdjusted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AdjustedAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::OnAmmoAdjusted(int AdjustedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnAmmoAdjusted");

	Abp_ihammer_weapon_C_OnAmmoAdjusted_Params params;
	params.AdjustedAmount = AdjustedAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnReloadWeapon
// (BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::OnReloadWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnReloadWeapon");

	Abp_ihammer_weapon_C_OnReloadWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientAdjustAmmo
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Adjusted_Amount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::ClientAdjustAmmo(int Adjusted_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientAdjustAmmo");

	Abp_ihammer_weapon_C_ClientAdjustAmmo_Params params;
	params.Adjusted_Amount = Adjusted_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientOnReloadWeapon
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::ClientOnReloadWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientOnReloadWeapon");

	Abp_ihammer_weapon_C_ClientOnReloadWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnNotifyReloadInputWindowStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::OnNotifyReloadInputWindowStarted(float TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnNotifyReloadInputWindowStarted");

	Abp_ihammer_weapon_C_OnNotifyReloadInputWindowStarted_Params params;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnNotifyReloadInputWindowEnded
// (BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::OnNotifyReloadInputWindowEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnNotifyReloadInputWindowEnded");

	Abp_ihammer_weapon_C_OnNotifyReloadInputWindowEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ReloadVFX
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::ReloadVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.ReloadVFX");

	Abp_ihammer_weapon_C_ReloadVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.AuthBroadcastInstantReloadEffects
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::AuthBroadcastInstantReloadEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.AuthBroadcastInstantReloadEffects");

	Abp_ihammer_weapon_C_AuthBroadcastInstantReloadEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.MulticastInstantReloadEffects
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::MulticastInstantReloadEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.MulticastInstantReloadEffects");

	Abp_ihammer_weapon_C_MulticastInstantReloadEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboEnded
// (Event, Protected, BlueprintEvent)

void Abp_ihammer_weapon_C::OnComboEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboEnded");

	Abp_ihammer_weapon_C_OnComboEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboBuffered
// (Event, Protected, BlueprintEvent)
// Parameters:
// EArchonAttackActionKey*        PrimaryKey                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArchonAttackActionKeyModifier* ModifierKey                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::OnComboBuffered(EArchonAttackActionKey* PrimaryKey, EArchonAttackActionKeyModifier* ModifierKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboBuffered");

	Abp_ihammer_weapon_C_OnComboBuffered_Params params;
	params.PrimaryKey = PrimaryKey;
	params.ModifierKey = ModifierKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboNextMove
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer*      ComboInputBuffer               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Abp_ihammer_weapon_C::OnComboNextMove(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.OnComboNextMove");

	Abp_ihammer_weapon_C_OnComboNextMove_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.K2_OnEquip
// (Event, Public, BlueprintEvent)

void Abp_ihammer_weapon_C::K2_OnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.K2_OnEquip");

	Abp_ihammer_weapon_C_K2_OnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientTestForOwner
// (BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::ClientTestForOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.ClientTestForOwner");

	Abp_ihammer_weapon_C_ClientTestForOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Cheat Charge Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::Cheat_Charge_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.Cheat Charge Weapon");

	Abp_ihammer_weapon_C_Cheat_Charge_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.ReceiveTick");

	Abp_ihammer_weapon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.ExecuteUbergraph_bp_ihammer_weapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::ExecuteUbergraph_bp_ihammer_weapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.ExecuteUbergraph_bp_ihammer_weapon");

	Abp_ihammer_weapon_C_ExecuteUbergraph_bp_ihammer_weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Active Reload Complete Dispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active_Reload_Success_         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_ihammer_weapon_C::Active_Reload_Complete_Dispatcher__DelegateSignature(bool Active_Reload_Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.Active Reload Complete Dispatcher__DelegateSignature");

	Abp_ihammer_weapon_C_Active_Reload_Complete_Dispatcher__DelegateSignature_Params params;
	params.Active_Reload_Success_ = Active_Reload_Success_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_ihammer_weapon.bp_ihammer_weapon_C.Active Reload Start Dispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Abp_ihammer_weapon_C::Active_Reload_Start_Dispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_ihammer_weapon.bp_ihammer_weapon_C.Active Reload Start Dispatcher__DelegateSignature");

	Abp_ihammer_weapon_C_Active_Reload_Start_Dispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
