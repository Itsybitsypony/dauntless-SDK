// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mspear_charge_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mspear_charge_ab.mspear_charge_ab_C.GetDetermination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Determination                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umspear_charge_ab_C::GetDetermination(float* Determination)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.GetDetermination");

	Umspear_charge_ab_C_GetDetermination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Determination != nullptr)
		*Determination = params.Determination;
}


// Function mspear_charge_ab.mspear_charge_ab_C.DebugOutputToLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Umspear_charge_ab_C::DebugOutputToLog(const class FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.DebugOutputToLog");

	Umspear_charge_ab_C_DebugOutputToLog_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mspear_charge_ab.mspear_charge_ab_C.EventReceived_689DFF264047DC2C6AD46DB4AF6DBC3B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Umspear_charge_ab_C::EventReceived_689DFF264047DC2C6AD46DB4AF6DBC3B(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.EventReceived_689DFF264047DC2C6AD46DB4AF6DBC3B");

	Umspear_charge_ab_C_EventReceived_689DFF264047DC2C6AD46DB4AF6DBC3B_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mspear_charge_ab.mspear_charge_ab_C.EventReceived_6A0153D14E7A171DAB63098135895A3E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Umspear_charge_ab_C::EventReceived_6A0153D14E7A171DAB63098135895A3E(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.EventReceived_6A0153D14E7A171DAB63098135895A3E");

	Umspear_charge_ab_C_EventReceived_6A0153D14E7A171DAB63098135895A3E_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mspear_charge_ab.mspear_charge_ab_C.OnFinish_14475F854B3B6C816AFC219FC8668B81
// (BlueprintCallable, BlueprintEvent)

void Umspear_charge_ab_C::OnFinish_14475F854B3B6C816AFC219FC8668B81()
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.OnFinish_14475F854B3B6C816AFC219FC8668B81");

	Umspear_charge_ab_C_OnFinish_14475F854B3B6C816AFC219FC8668B81_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mspear_charge_ab.mspear_charge_ab_C.OnChange_7D6D836B4D54D8D27793D1AF9D20A89C
// (BlueprintCallable, BlueprintEvent)

void Umspear_charge_ab_C::OnChange_7D6D836B4D54D8D27793D1AF9D20A89C()
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.OnChange_7D6D836B4D54D8D27793D1AF9D20A89C");

	Umspear_charge_ab_C_OnChange_7D6D836B4D54D8D27793D1AF9D20A89C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mspear_charge_ab.mspear_charge_ab_C.OnChange_1EE39B04438E3E9F2FD5FDB3F1D489C9
// (BlueprintCallable, BlueprintEvent)

void Umspear_charge_ab_C::OnChange_1EE39B04438E3E9F2FD5FDB3F1D489C9()
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.OnChange_1EE39B04438E3E9F2FD5FDB3F1D489C9");

	Umspear_charge_ab_C_OnChange_1EE39B04438E3E9F2FD5FDB3F1D489C9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mspear_charge_ab.mspear_charge_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Umspear_charge_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.K2_ActivateAbility");

	Umspear_charge_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mspear_charge_ab.mspear_charge_ab_C.ServerOnAmmoAdjusted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AdjustedAmount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umspear_charge_ab_C::ServerOnAmmoAdjusted(int AdjustedAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.ServerOnAmmoAdjusted");

	Umspear_charge_ab_C_ServerOnAmmoAdjusted_Params params;
	params.AdjustedAmount = AdjustedAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function mspear_charge_ab.mspear_charge_ab_C.ExecuteUbergraph_mspear_charge_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Umspear_charge_ab_C::ExecuteUbergraph_mspear_charge_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_charge_ab.mspear_charge_ab_C.ExecuteUbergraph_mspear_charge_ab");

	Umspear_charge_ab_C_ExecuteUbergraph_mspear_charge_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
