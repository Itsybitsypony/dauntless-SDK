// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hit_reaction_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function hit_reaction_bpc.hit_reaction_bpc_C.TelemetryPlayerDowned
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::TelemetryPlayerDowned(class AActor* Target, class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.TelemetryPlayerDowned");

	Uhit_reaction_bpc_C_TelemetryPlayerDowned_Params params;
	params.Target = Target;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.GetHitReactionEntryInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitReactionTableEntry  HitReactionEntry               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::GetHitReactionEntryInfo(const struct FHitReactionTableEntry& HitReactionEntry, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.GetHitReactionEntryInfo");

	Uhit_reaction_bpc_C_GetHitReactionEntryInfo_Params params;
	params.HitReactionEntry = HitReactionEntry;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.DebugInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::DebugInfo(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.DebugInfo");

	Uhit_reaction_bpc_C_DebugInfo_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.ConvertAngleToDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVictimRelativeHitDirection    Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::ConvertAngleToDirection(float Angle, EVictimRelativeHitDirection* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.ConvertAngleToDirection");

	Uhit_reaction_bpc_C_ConvertAngleToDirection_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.GetImpactDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)
// EVictimRelativeHitDirection    Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::GetImpactDirection(class AActor* TargetActor, const struct FGameplayEffectContextHandle& EffectContext, EVictimRelativeHitDirection* Direction, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.GetImpactDirection");

	Uhit_reaction_bpc_C_GetImpactDirection_Params params;
	params.TargetActor = TargetActor;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;
	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.GetAttackerDirection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InstigatorActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EVictimRelativeHitDirection    AttackerDirection              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AttackerAngle                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::GetAttackerDirection(class AActor* InstigatorActor, class AActor* TargetActor, EVictimRelativeHitDirection* AttackerDirection, float* AttackerAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.GetAttackerDirection");

	Uhit_reaction_bpc_C_GetAttackerDirection_Params params;
	params.InstigatorActor = InstigatorActor;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttackerDirection != nullptr)
		*AttackerDirection = params.AttackerDirection;
	if (AttackerAngle != nullptr)
		*AttackerAngle = params.AttackerAngle;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.FilterGameplayTagContainer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   InstigatorTags                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   Filter_By                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           DebugPrint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   FilteredTags                   (Parm, OutParm)

void Uhit_reaction_bpc_C::FilterGameplayTagContainer(const struct FGameplayTagContainer& InstigatorTags, const struct FGameplayTagContainer& Filter_By, bool DebugPrint, struct FGameplayTagContainer* FilteredTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.FilterGameplayTagContainer");

	Uhit_reaction_bpc_C_FilterGameplayTagContainer_Params params;
	params.InstigatorTags = InstigatorTags;
	params.Filter_By = Filter_By;
	params.DebugPrint = DebugPrint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilteredTags != nullptr)
		*FilteredTags = params.FilteredTags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.GetMatchingHitReaction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitReactionTableEntry> HitReactionTable               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FGameplayTagContainer   Filter_By                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitReactionTableEntry  MatchingEntry                  (Parm, OutParm)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::GetMatchingHitReaction(const struct FGameplayTagContainer& Filter_By, TArray<struct FHitReactionTableEntry>* HitReactionTable, struct FHitReactionTableEntry* MatchingEntry, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.GetMatchingHitReaction");

	Uhit_reaction_bpc_C_GetMatchingHitReaction_Params params;
	params.Filter_By = Filter_By;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitReactionTable != nullptr)
		*HitReactionTable = params.HitReactionTable;
	if (MatchingEntry != nullptr)
		*MatchingEntry = params.MatchingEntry;
	if (Success != nullptr)
		*Success = params.Success;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.OnDamageReceived
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   InstigatorTags                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  InstigatorActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::OnDamageReceived(const struct FGameplayTagContainer& InstigatorTags, const struct FGameplayEffectContextHandle& EffectContext, class AActor* InstigatorActor, class AActor* TargetActor, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.OnDamageReceived");

	Uhit_reaction_bpc_C_OnDamageReceived_Params params;
	params.InstigatorTags = InstigatorTags;
	params.EffectContext = EffectContext;
	params.InstigatorActor = InstigatorActor;
	params.TargetActor = TargetActor;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.ReceiveTick");

	Uhit_reaction_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.OnOperationEnd
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonGameplayOperation* Op                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonGameplayOperationArgs Args                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::OnOperationEnd(class UArchonGameplayOperation* Op, const struct FArchonGameplayOperationArgs& Args, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.OnOperationEnd");

	Uhit_reaction_bpc_C_OnOperationEnd_Params params;
	params.Op = Op;
	params.Args = Args;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.OnEndOperation
// (BlueprintCallable, BlueprintEvent)

void Uhit_reaction_bpc_C::OnEndOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.OnEndOperation");

	Uhit_reaction_bpc_C_OnEndOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.UpdateOperation
// (BlueprintCallable, BlueprintEvent)

void Uhit_reaction_bpc_C::UpdateOperation()
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.UpdateOperation");

	Uhit_reaction_bpc_C_UpdateOperation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uhit_reaction_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.ReceiveBeginPlay");

	Uhit_reaction_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hit_reaction_bpc.hit_reaction_bpc_C.ExecuteUbergraph_hit_reaction_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhit_reaction_bpc_C::ExecuteUbergraph_hit_reaction_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function hit_reaction_bpc.hit_reaction_bpc_C.ExecuteUbergraph_hit_reaction_bpc");

	Uhit_reaction_bpc_C_ExecuteUbergraph_hit_reaction_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
