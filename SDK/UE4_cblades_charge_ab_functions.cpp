// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_charge_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cblades_charge_ab.cblades_charge_ab_C.DebugOutputToLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ucblades_charge_ab_C::DebugOutputToLog(const class FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_charge_ab.cblades_charge_ab_C.DebugOutputToLog");

	Ucblades_charge_ab_C_DebugOutputToLog_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_charge_ab.cblades_charge_ab_C.OnChange_188098F342CEA3DF8EFDFDB89C89F3EC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bMatchesComparison             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CurrentValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucblades_charge_ab_C::OnChange_188098F342CEA3DF8EFDFDB89C89F3EC(bool bMatchesComparison, float CurrentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_charge_ab.cblades_charge_ab_C.OnChange_188098F342CEA3DF8EFDFDB89C89F3EC");

	Ucblades_charge_ab_C_OnChange_188098F342CEA3DF8EFDFDB89C89F3EC_Params params;
	params.bMatchesComparison = bMatchesComparison;
	params.CurrentValue = CurrentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_charge_ab.cblades_charge_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ucblades_charge_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_charge_ab.cblades_charge_ab_C.K2_ActivateAbility");

	Ucblades_charge_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_charge_ab.cblades_charge_ab_C.OnPostMitigationHitWithWeapon_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fpostmit_damage_summary PostMitigationDamageSummary    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Ucblades_charge_ab_C::OnPostMitigationHitWithWeapon_Event_1(class AActor* DamagedActor, const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_charge_ab.cblades_charge_ab_C.OnPostMitigationHitWithWeapon_Event_1");

	Ucblades_charge_ab_C_OnPostMitigationHitWithWeapon_Event_1_Params params;
	params.DamagedActor = DamagedActor;
	params.PostMitigationDamageSummary = PostMitigationDamageSummary;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_charge_ab.cblades_charge_ab_C.ExecuteUbergraph_cblades_charge_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucblades_charge_ab_C::ExecuteUbergraph_cblades_charge_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_charge_ab.cblades_charge_ab_C.ExecuteUbergraph_cblades_charge_ab");

	Ucblades_charge_ab_C_ExecuteUbergraph_cblades_charge_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
