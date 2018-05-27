// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gameplay_helpers_fl_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function gameplay_helpers_fl.gameplay_helpers_fl_C.ApplyBuffs-UseBuffApplierIfPossible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  BuffClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffTarget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           StartBuff                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBuff*             BuffRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           BuffWasReplacedByOverrides     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ugameplay_helpers_fl_C::STATIC_ApplyBuffs_UseBuffApplierIfPossible(class AActor* Instigator, class UClass* BuffClass, class AActor* BuffTarget, const struct FHitResult& HitResult, bool StartBuff, class UObject* __WorldContext, class AArchonBuff** BuffRef, bool* BuffWasReplacedByOverrides)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_helpers_fl.gameplay_helpers_fl_C.ApplyBuffs-UseBuffApplierIfPossible");

	Ugameplay_helpers_fl_C_ApplyBuffs_UseBuffApplierIfPossible_Params params;
	params.Instigator = Instigator;
	params.BuffClass = BuffClass;
	params.BuffTarget = BuffTarget;
	params.HitResult = HitResult;
	params.StartBuff = StartBuff;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffRef != nullptr)
		*BuffRef = params.BuffRef;
	if (BuffWasReplacedByOverrides != nullptr)
		*BuffWasReplacedByOverrides = params.BuffWasReplacedByOverrides;
}


// Function gameplay_helpers_fl.gameplay_helpers_fl_C.ApplyGameplayEffects
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Feffect_magitudes_struct> Effects                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  SourceActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugameplay_helpers_fl_C::STATIC_ApplyGameplayEffects(class AActor* SourceActor, class AActor* TargetActor, class UObject* __WorldContext, TArray<struct Feffect_magitudes_struct>* Effects)
{
	static auto fn = UObject::FindObject<UFunction>("Function gameplay_helpers_fl.gameplay_helpers_fl_C.ApplyGameplayEffects");

	Ugameplay_helpers_fl_C_ApplyGameplayEffects_Params params;
	params.SourceActor = SourceActor;
	params.TargetActor = TargetActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Effects != nullptr)
		*Effects = params.Effects;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
