// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_hud_status_effect_bar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.GetStatusEffectByName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class Ubpw_hud_status_effect_item_C* StatusEffect                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_bar_C::GetStatusEffectByName(const class FString& Name, class Ubpw_hud_status_effect_item_C** StatusEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.GetStatusEffectByName");

	Ubpw_hud_status_effect_bar_C_GetStatusEffectByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusEffect != nullptr)
		*StatusEffect = params.StatusEffect;
}


// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.GetUnusedStatusEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_hud_status_effect_item_C* StatusEffectItem               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_bar_C::GetUnusedStatusEffect(class Ubpw_hud_status_effect_item_C** StatusEffectItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.GetUnusedStatusEffect");

	Ubpw_hud_status_effect_bar_C_GetUnusedStatusEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusEffectItem != nullptr)
		*StatusEffectItem = params.StatusEffectItem;
}


// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_hud_status_effect_bar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.Construct");

	Ubpw_hud_status_effect_bar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameplayEffectApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_bar_C::OnGameplayEffectApplied(const class FString& Name, class UObject* Icon, float Duration, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameplayEffectApplied");

	Ubpw_hud_status_effect_bar_C_OnGameplayEffectApplied_Params params;
	params.Name = Name;
	params.Icon = Icon;
	params.Duration = Duration;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameplayEffectRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_hud_status_effect_bar_C::OnGameplayEffectRemoved(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameplayEffectRemoved");

	Ubpw_hud_status_effect_bar_C_OnGameplayEffectRemoved_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameEffectChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StackCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_bar_C::OnGameEffectChanged(const class FString& Name, class UObject* Icon, float Duration, float TimeRemaining, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.OnGameEffectChanged");

	Ubpw_hud_status_effect_bar_C_OnGameEffectChanged_Params params;
	params.Name = Name;
	params.Icon = Icon;
	params.Duration = Duration;
	params.TimeRemaining = TimeRemaining;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.ExecuteUbergraph_bpw_hud_status_effect_bar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_hud_status_effect_bar_C::ExecuteUbergraph_bpw_hud_status_effect_bar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_hud_status_effect_bar.bpw_hud_status_effect_bar_C.ExecuteUbergraph_bpw_hud_status_effect_bar");

	Ubpw_hud_status_effect_bar_C_ExecuteUbergraph_bpw_hud_status_effect_bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
