// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_equipped_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lantern_equipped_ab.lantern_equipped_ab_C.CanGainLanternChargeFromActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanGainLanternCharge           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulantern_equipped_ab_C::CanGainLanternChargeFromActor(class AActor* HitActor, bool* CanGainLanternCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_equipped_ab.lantern_equipped_ab_C.CanGainLanternChargeFromActor");

	Ulantern_equipped_ab_C_CanGainLanternChargeFromActor_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanGainLanternCharge != nullptr)
		*CanGainLanternCharge = params.CanGainLanternCharge;
}


// Function lantern_equipped_ab.lantern_equipped_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ulantern_equipped_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_equipped_ab.lantern_equipped_ab_C.K2_ActivateAbility");

	Ulantern_equipped_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_equipped_ab.lantern_equipped_ab_C.OnPostMitigationHitWithWeapon_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fpostmit_damage_summary PostMitigationDamageSummary    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Ulantern_equipped_ab_C::OnPostMitigationHitWithWeapon_Event_2(class AActor* DamagedActor, const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_equipped_ab.lantern_equipped_ab_C.OnPostMitigationHitWithWeapon_Event_2");

	Ulantern_equipped_ab_C_OnPostMitigationHitWithWeapon_Event_2_Params params;
	params.DamagedActor = DamagedActor;
	params.PostMitigationDamageSummary = PostMitigationDamageSummary;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_equipped_ab.lantern_equipped_ab_C.OnPostMitigationDealtAnyDamage_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fpostmit_damage_summary PostMitigationDamageSummary    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulantern_equipped_ab_C::OnPostMitigationDealtAnyDamage_Event_1(const struct Fpostmit_damage_summary& PostMitigationDamageSummary, const struct FGameplayTagContainer& DamageTags, class AActor* DamagedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_equipped_ab.lantern_equipped_ab_C.OnPostMitigationDealtAnyDamage_Event_1");

	Ulantern_equipped_ab_C_OnPostMitigationDealtAnyDamage_Event_1_Params params;
	params.PostMitigationDamageSummary = PostMitigationDamageSummary;
	params.DamageTags = DamageTags;
	params.DamagedActor = DamagedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lantern_equipped_ab.lantern_equipped_ab_C.ExecuteUbergraph_lantern_equipped_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulantern_equipped_ab_C::ExecuteUbergraph_lantern_equipped_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lantern_equipped_ab.lantern_equipped_ab_C.ExecuteUbergraph_lantern_equipped_ab");

	Ulantern_equipped_ab_C_ExecuteUbergraph_lantern_equipped_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
