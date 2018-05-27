// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_buff_applier_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function buff_applier_bpc.buff_applier_bpc_C.ClearProjectileClassBuffs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Key                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void Ubuff_applier_bpc_C::ClearProjectileClassBuffs(class UClass** Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.ClearProjectileClassBuffs");

	Ubuff_applier_bpc_C_ClearProjectileClassBuffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Key != nullptr)
		*Key = params.Key;
}


// Function buff_applier_bpc.buff_applier_bpc_C.AddProjectileClassBuffs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ProjectileClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fbuff_override_struct   BuffOverrides                  (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubuff_applier_bpc_C::AddProjectileClassBuffs(class UClass* ProjectileClass, const struct Fbuff_override_struct& BuffOverrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.AddProjectileClassBuffs");

	Ubuff_applier_bpc_C_AddProjectileClassBuffs_Params params;
	params.ProjectileClass = ProjectileClass;
	params.BuffOverrides = BuffOverrides;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function buff_applier_bpc.buff_applier_bpc_C.ClearGameplayEffectOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameplayEffectClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubuff_applier_bpc_C::ClearGameplayEffectOverrides(class UClass* GameplayEffectClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.ClearGameplayEffectOverrides");

	Ubuff_applier_bpc_C_ClearGameplayEffectOverrides_Params params;
	params.GameplayEffectClass = GameplayEffectClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function buff_applier_bpc.buff_applier_bpc_C.AddGameplayEffectOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  GameplayEffectClass            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fge_override_struct     OverrideData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubuff_applier_bpc_C::AddGameplayEffectOverride(class UClass* GameplayEffectClass, const struct Fge_override_struct& OverrideData)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.AddGameplayEffectOverride");

	Ubuff_applier_bpc_C_AddGameplayEffectOverride_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.OverrideData = OverrideData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function buff_applier_bpc.buff_applier_bpc_C.AddGameplayEffects
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Feffect_magitudes_struct> GameplayEffects                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ubuff_applier_bpc_C::AddGameplayEffects(class AActor* TargetActor, TArray<struct Feffect_magitudes_struct>* GameplayEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.AddGameplayEffects");

	Ubuff_applier_bpc_C_AddGameplayEffects_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayEffects != nullptr)
		*GameplayEffects = params.GameplayEffects;
}


// Function buff_applier_bpc.buff_applier_bpc_C.ClearBuffOverrides
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BuffClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubuff_applier_bpc_C::ClearBuffOverrides(class UClass* BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.ClearBuffOverrides");

	Ubuff_applier_bpc_C_ClearBuffOverrides_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function buff_applier_bpc.buff_applier_bpc_C.AddBuffOverride
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fbuff_override_struct   Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubuff_applier_bpc_C::AddBuffOverride(class UClass* Key, const struct Fbuff_override_struct& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.AddBuffOverride");

	Ubuff_applier_bpc_C_AddBuffOverride_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function buff_applier_bpc.buff_applier_bpc_C.TryAddBuff
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BuffClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OptionalHitResult              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           StartBuff                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBuff*             BuffRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           BuffWasReplacedByOverrides     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubuff_applier_bpc_C::TryAddBuff(class UClass* BuffClass, class AActor* Target, const struct FHitResult& OptionalHitResult, bool StartBuff, class AArchonBuff** BuffRef, bool* BuffWasReplacedByOverrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.TryAddBuff");

	Ubuff_applier_bpc_C_TryAddBuff_Params params;
	params.BuffClass = BuffClass;
	params.Target = Target;
	params.OptionalHitResult = OptionalHitResult;
	params.StartBuff = StartBuff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffRef != nullptr)
		*BuffRef = params.BuffRef;
	if (BuffWasReplacedByOverrides != nullptr)
		*BuffWasReplacedByOverrides = params.BuffWasReplacedByOverrides;
}


// Function buff_applier_bpc.buff_applier_bpc_C.OnSpawnedProjectile_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGuid                   Guid                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ubuff_applier_bpc_C::OnSpawnedProjectile_Event_1(class Aprojectile_base_bp_C* Projectile, const struct FVector& Target, const struct FGuid& Guid)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.OnSpawnedProjectile_Event_1");

	Ubuff_applier_bpc_C_OnSpawnedProjectile_Event_1_Params params;
	params.Projectile = Projectile;
	params.Target = Target;
	params.Guid = Guid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function buff_applier_bpc.buff_applier_bpc_C.ExecuteUbergraph_buff_applier_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubuff_applier_bpc_C::ExecuteUbergraph_buff_applier_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function buff_applier_bpc.buff_applier_bpc_C.ExecuteUbergraph_buff_applier_bpc");

	Ubuff_applier_bpc_C_ExecuteUbergraph_buff_applier_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
