// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_sheathe_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.IsLocalPlayerOrBot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocalPlayerOrBot             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::IsLocalPlayerOrBot(bool* IsLocalPlayerOrBot)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.IsLocalPlayerOrBot");

	Uweapon_sheathe_bpc_C_IsLocalPlayerOrBot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocalPlayerOrBot != nullptr)
		*IsLocalPlayerOrBot = params.IsLocalPlayerOrBot;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.IsMontageRelevantToCurrentSheathing
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsRelevant                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsSheathing                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::IsMontageRelevantToCurrentSheathing(class UAnimMontage* Montage, bool* IsRelevant, bool* IsSheathing)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.IsMontageRelevantToCurrentSheathing");

	Uweapon_sheathe_bpc_C_IsMontageRelevantToCurrentSheathing_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsRelevant != nullptr)
		*IsRelevant = params.IsRelevant;
	if (IsSheathing != nullptr)
		*IsSheathing = params.IsSheathing;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.TrySetSheatheState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eplayer_sheathe_states_enum> SheathState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::TrySetSheatheState(TEnumAsByte<Eplayer_sheathe_states_enum> SheathState, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.TrySetSheatheState");

	Uweapon_sheathe_bpc_C_TrySetSheatheState_Params params;
	params.SheathState = SheathState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.LocalSetSheatheState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eplayer_sheathe_states_enum> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::LocalSetSheatheState(TEnumAsByte<Eplayer_sheathe_states_enum> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.LocalSetSheatheState");

	Uweapon_sheathe_bpc_C_LocalSetSheatheState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Private_CanPerformSheathe
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::Private_CanPerformSheathe(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Private_CanPerformSheathe");

	Uweapon_sheathe_bpc_C_Private_CanPerformSheathe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Private_GetAnimSet
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Factions_animset_str    AnimSet                        (Parm, OutParm)

void Uweapon_sheathe_bpc_C::Private_GetAnimSet(struct Factions_animset_str* AnimSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Private_GetAnimSet");

	Uweapon_sheathe_bpc_C_Private_GetAnimSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimSet != nullptr)
		*AnimSet = params.AnimSet;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.GetWeaponSheatheState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Eplayer_sheathe_states_enum> SheatheState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::GetWeaponSheatheState(TEnumAsByte<Eplayer_sheathe_states_enum>* SheatheState)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.GetWeaponSheatheState");

	Uweapon_sheathe_bpc_C_GetWeaponSheatheState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SheatheState != nullptr)
		*SheatheState = params.SheatheState;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.DebugInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::DebugInfo(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.DebugInfo");

	Uweapon_sheathe_bpc_C_DebugInfo_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.SetSheatheWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayAnim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::SetSheatheWeapon(bool PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.SetSheatheWeapon");

	Uweapon_sheathe_bpc_C_SetSheatheWeapon_Params params;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.SetUnSheatheWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayAnim                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::SetUnSheatheWeapon(bool PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.SetUnSheatheWeapon");

	Uweapon_sheathe_bpc_C_SetUnSheatheWeapon_Params params;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheathStateBegin_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eplayer_sheathe_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::OnSheathStateBegin_Event(TEnumAsByte<Eplayer_sheathe_states_enum> State)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheathStateBegin_Event");

	Uweapon_sheathe_bpc_C_OnSheathStateBegin_Event_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_UpdateSheatheStatus
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eplayer_sheathe_states_enum> ClientSheatheState             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::Server_UpdateSheatheStatus(TEnumAsByte<Eplayer_sheathe_states_enum> ClientSheatheState)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_UpdateSheatheStatus");

	Uweapon_sheathe_bpc_C_Server_UpdateSheatheStatus_Params params;
	params.ClientSheatheState = ClientSheatheState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnMontageBlendingOut_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnMontageBlendingOut_Event_1");

	Uweapon_sheathe_bpc_C_OnMontageBlendingOut_Event_1_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.MulticastOnSheatheWeaponAnimEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::MulticastOnSheatheWeaponAnimEnd(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.MulticastOnSheatheWeaponAnimEnd");

	Uweapon_sheathe_bpc_C_MulticastOnSheatheWeaponAnimEnd_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_CallOnSheatheWeaponEnd
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::Server_CallOnSheatheWeaponEnd(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_CallOnSheatheWeaponEnd");

	Uweapon_sheathe_bpc_C_Server_CallOnSheatheWeaponEnd_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ServerUnSheatheWeapon
// (BlueprintCallable, BlueprintEvent)

void Uweapon_sheathe_bpc_C::ServerUnSheatheWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ServerUnSheatheWeapon");

	Uweapon_sheathe_bpc_C_ServerUnSheatheWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ServerSheatheWeapon
// (BlueprintCallable, BlueprintEvent)

void Uweapon_sheathe_bpc_C::ServerSheatheWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ServerSheatheWeapon");

	Uweapon_sheathe_bpc_C_ServerSheatheWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ReceiveTick");

	Uweapon_sheathe_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.MulticastOnUnSheatheWeaponAnimEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::MulticastOnUnSheatheWeaponAnimEnd(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.MulticastOnUnSheatheWeaponAnimEnd");

	Uweapon_sheathe_bpc_C_MulticastOnUnSheatheWeaponAnimEnd_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_CallOnUnSheatheWeaponEnd
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::Server_CallOnUnSheatheWeaponEnd(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.Server_CallOnUnSheatheWeaponEnd");

	Uweapon_sheathe_bpc_C_Server_CallOnUnSheatheWeaponEnd_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uweapon_sheathe_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ReceiveBeginPlay");

	Uweapon_sheathe_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnAnimationBlueprintChanged_Event_1
// (BlueprintCallable, BlueprintEvent)

void Uweapon_sheathe_bpc_C::OnAnimationBlueprintChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnAnimationBlueprintChanged_Event_1");

	Uweapon_sheathe_bpc_C_OnAnimationBlueprintChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ToggleSheatheWeapon
// (BlueprintCallable, BlueprintEvent)

void Uweapon_sheathe_bpc_C::ToggleSheatheWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ToggleSheatheWeapon");

	Uweapon_sheathe_bpc_C_ToggleSheatheWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ExecuteUbergraph_weapon_sheathe_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::ExecuteUbergraph_weapon_sheathe_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.ExecuteUbergraph_weapon_sheathe_bpc");

	Uweapon_sheathe_bpc_C_ExecuteUbergraph_weapon_sheathe_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.AuthOnSheatheStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eplayer_sheathe_states_enum> SheatheState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::AuthOnSheatheStateChanged__DelegateSignature(TEnumAsByte<Eplayer_sheathe_states_enum> SheatheState)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.AuthOnSheatheStateChanged__DelegateSignature");

	Uweapon_sheathe_bpc_C_AuthOnSheatheStateChanged__DelegateSignature_Params params;
	params.SheatheState = SheatheState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnCanAttack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uweapon_sheathe_bpc_C::OnCanAttack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnCanAttack__DelegateSignature");

	Uweapon_sheathe_bpc_C_OnCanAttack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheatheStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eplayer_sheathe_states_enum> PreviousState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eplayer_sheathe_states_enum> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::OnSheatheStateChanged__DelegateSignature(TEnumAsByte<Eplayer_sheathe_states_enum> PreviousState, TEnumAsByte<Eplayer_sheathe_states_enum> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheatheStateChanged__DelegateSignature");

	Uweapon_sheathe_bpc_C_OnSheatheStateChanged__DelegateSignature_Params params;
	params.PreviousState = PreviousState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnAnimationBlueprintChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uweapon_sheathe_bpc_C::OnAnimationBlueprintChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnAnimationBlueprintChanged__DelegateSignature");

	Uweapon_sheathe_bpc_C_OnAnimationBlueprintChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnUnSheatheWeaponAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::OnUnSheatheWeaponAnimEnd__DelegateSignature(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnUnSheatheWeaponAnimEnd__DelegateSignature");

	Uweapon_sheathe_bpc_C_OnUnSheatheWeaponAnimEnd__DelegateSignature_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheatheWeaponAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uweapon_sheathe_bpc_C::OnSheatheWeaponAnimEnd__DelegateSignature(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_sheathe_bpc.weapon_sheathe_bpc_C.OnSheatheWeaponAnimEnd__DelegateSignature");

	Uweapon_sheathe_bpc_C_OnSheatheWeaponAnimEnd__DelegateSignature_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
