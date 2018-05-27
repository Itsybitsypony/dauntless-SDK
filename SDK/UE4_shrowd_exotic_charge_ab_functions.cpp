// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_shrowd_exotic_charge_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.PerHitMeterGain
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Secondary                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Gain                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ushrowd_exotic_charge_ab_C::PerHitMeterGain(bool Secondary, float* Gain)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.PerHitMeterGain");

	Ushrowd_exotic_charge_ab_C_PerHitMeterGain_Params params;
	params.Secondary = Secondary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Gain != nullptr)
		*Gain = params.Gain;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.HealSelf
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ushrowd_exotic_charge_ab_C::HealSelf(float HealAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.HealSelf");

	Ushrowd_exotic_charge_ab_C_HealSelf_Params params;
	params.HealAmount = HealAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.GetDetermination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Determination                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ushrowd_exotic_charge_ab_C::GetDetermination(float* Determination)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.GetDetermination");

	Ushrowd_exotic_charge_ab_C_GetDetermination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Determination != nullptr)
		*Determination = params.Determination;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.DebugOutputToLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ushrowd_exotic_charge_ab_C::DebugOutputToLog(const class FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.DebugOutputToLog");

	Ushrowd_exotic_charge_ab_C_DebugOutputToLog_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_F8A282F74ACD98F3B36ECE8CF8693997
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ushrowd_exotic_charge_ab_C::EventReceived_F8A282F74ACD98F3B36ECE8CF8693997(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_F8A282F74ACD98F3B36ECE8CF8693997");

	Ushrowd_exotic_charge_ab_C_EventReceived_F8A282F74ACD98F3B36ECE8CF8693997_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_7CB3DECB4F9FE0EE522CEDBAAA536912
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ushrowd_exotic_charge_ab_C::EventReceived_7CB3DECB4F9FE0EE522CEDBAAA536912(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_7CB3DECB4F9FE0EE522CEDBAAA536912");

	Ushrowd_exotic_charge_ab_C_EventReceived_7CB3DECB4F9FE0EE522CEDBAAA536912_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnFinish_9B96D0604F5CA231AE7E7B855556BC2B
// (BlueprintCallable, BlueprintEvent)

void Ushrowd_exotic_charge_ab_C::OnFinish_9B96D0604F5CA231AE7E7B855556BC2B()
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnFinish_9B96D0604F5CA231AE7E7B855556BC2B");

	Ushrowd_exotic_charge_ab_C_OnFinish_9B96D0604F5CA231AE7E7B855556BC2B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnChange_8C72C6FB4BA6F3A0D68D1E8A0150971C
// (BlueprintCallable, BlueprintEvent)

void Ushrowd_exotic_charge_ab_C::OnChange_8C72C6FB4BA6F3A0D68D1E8A0150971C()
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnChange_8C72C6FB4BA6F3A0D68D1E8A0150971C");

	Ushrowd_exotic_charge_ab_C_OnChange_8C72C6FB4BA6F3A0D68D1E8A0150971C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnChange_39EBBEB1494661FE7A5810836000692F
// (BlueprintCallable, BlueprintEvent)

void Ushrowd_exotic_charge_ab_C::OnChange_39EBBEB1494661FE7A5810836000692F()
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnChange_39EBBEB1494661FE7A5810836000692F");

	Ushrowd_exotic_charge_ab_C_OnChange_39EBBEB1494661FE7A5810836000692F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnFinish_832D54B24CE4507307DEB4879E879169
// (BlueprintCallable, BlueprintEvent)

void Ushrowd_exotic_charge_ab_C::OnFinish_832D54B24CE4507307DEB4879E879169()
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnFinish_832D54B24CE4507307DEB4879E879169");

	Ushrowd_exotic_charge_ab_C_OnFinish_832D54B24CE4507307DEB4879E879169_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_E8AE810B4C4D95D374CE1BACE392A2C8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Ushrowd_exotic_charge_ab_C::EventReceived_E8AE810B4C4D95D374CE1BACE392A2C8(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EventReceived_E8AE810B4C4D95D374CE1BACE392A2C8");

	Ushrowd_exotic_charge_ab_C_EventReceived_E8AE810B4C4D95D374CE1BACE392A2C8_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ushrowd_exotic_charge_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.K2_ActivateAbility");

	Ushrowd_exotic_charge_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.StartMeterDecay
// (BlueprintCallable, BlueprintEvent)

void Ushrowd_exotic_charge_ab_C::StartMeterDecay()
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.StartMeterDecay");

	Ushrowd_exotic_charge_ab_C_StartMeterDecay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnComboNextMove_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm)

void Ushrowd_exotic_charge_ab_C::OnComboNextMove_Event_1(const struct FComboInputBuffer& ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.OnComboNextMove_Event_1");

	Ushrowd_exotic_charge_ab_C_OnComboNextMove_Event_1_Params params;
	params.ComboInputBuffer = ComboInputBuffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EndDecay
// (BlueprintCallable, BlueprintEvent)

void Ushrowd_exotic_charge_ab_C::EndDecay()
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.EndDecay");

	Ushrowd_exotic_charge_ab_C_EndDecay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ClientStartFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aeblade_crowbear_exotic_00_bp_C* Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ushrowd_exotic_charge_ab_C::ClientStartFX(class AActor* Owner, class Aeblade_crowbear_exotic_00_bp_C* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ClientStartFX");

	Ushrowd_exotic_charge_ab_C_ClientStartFX_Params params;
	params.Owner = Owner;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ClientStopFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aeblade_crowbear_exotic_00_bp_C* Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ushrowd_exotic_charge_ab_C::ClientStopFX(class UObject* Owner, class Aeblade_crowbear_exotic_00_bp_C* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ClientStopFX");

	Ushrowd_exotic_charge_ab_C_ClientStopFX_Params params;
	params.Owner = Owner;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ExecuteUbergraph_shrowd_exotic_charge_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ushrowd_exotic_charge_ab_C::ExecuteUbergraph_shrowd_exotic_charge_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function shrowd_exotic_charge_ab.shrowd_exotic_charge_ab_C.ExecuteUbergraph_shrowd_exotic_charge_ab");

	Ushrowd_exotic_charge_ab_C_ExecuteUbergraph_shrowd_exotic_charge_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
