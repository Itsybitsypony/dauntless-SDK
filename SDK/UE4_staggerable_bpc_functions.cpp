// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_staggerable_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function staggerable_bpc.staggerable_bpc_C.GetTotalArmor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalArmor                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TotalInitalArmor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::GetTotalArmor(float* TotalArmor, float* TotalInitalArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.GetTotalArmor");

	Ustaggerable_bpc_C_GetTotalArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalArmor != nullptr)
		*TotalArmor = params.TotalArmor;
	if (TotalInitalArmor != nullptr)
		*TotalInitalArmor = params.TotalInitalArmor;
}


// Function staggerable_bpc.staggerable_bpc_C.ReduceArmor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AmountRemaining                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::ReduceArmor(float Amount, float* AmountRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.ReduceArmor");

	Ustaggerable_bpc_C_ReduceArmor_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AmountRemaining != nullptr)
		*AmountRemaining = params.AmountRemaining;
}


// Function staggerable_bpc.staggerable_bpc_C.AddStaggerArmor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          UnscaledArmorAmount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ArmorDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGuid                   ArmorGUID                      (Parm, OutParm, IsPlainOldData)

void Ustaggerable_bpc_C::AddStaggerArmor(float UnscaledArmorAmount, float ArmorDuration, struct FGuid* ArmorGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.AddStaggerArmor");

	Ustaggerable_bpc_C_AddStaggerArmor_Params params;
	params.UnscaledArmorAmount = UnscaledArmorAmount;
	params.ArmorDuration = ArmorDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArmorGUID != nullptr)
		*ArmorGUID = params.ArmorGUID;
}


// Function staggerable_bpc.staggerable_bpc_C.OnRep_CloseToStaggerEffectsActive
// (BlueprintCallable, BlueprintEvent)

void Ustaggerable_bpc_C::OnRep_CloseToStaggerEffectsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.OnRep_CloseToStaggerEffectsActive");

	Ustaggerable_bpc_C_OnRep_CloseToStaggerEffectsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.GetIndexOfStaggerData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::GetIndexOfStaggerData(class AActor* Instigator, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.GetIndexOfStaggerData");

	Ustaggerable_bpc_C_GetIndexOfStaggerData_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function staggerable_bpc.staggerable_bpc_C.RecordStaggerDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaggerDamage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CausedAStagger                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::RecordStaggerDamage(class AActor* Instigator, float StaggerDamage, bool CausedAStagger)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.RecordStaggerDamage");

	Ustaggerable_bpc_C_RecordStaggerDamage_Params params;
	params.Instigator = Instigator;
	params.StaggerDamage = StaggerDamage;
	params.CausedAStagger = CausedAStagger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.GetPlayerScalingFactor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ScalingFactor                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::GetPlayerScalingFactor(float* ScalingFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.GetPlayerScalingFactor");

	Ustaggerable_bpc_C_GetPlayerScalingFactor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScalingFactor != nullptr)
		*ScalingFactor = params.ScalingFactor;
}


// Function staggerable_bpc.staggerable_bpc_C.ChangeStaggerStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoStagger                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewStaggerStage                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMonsterPartComponent*   StaggeredPart                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Estagger_type>     StaggerType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  StaggerCauser                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::ChangeStaggerStage(bool DoStagger, int NewStaggerStage, class UMonsterPartComponent* StaggeredPart, TEnumAsByte<Estagger_type> StaggerType, class AActor* StaggerCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.ChangeStaggerStage");

	Ustaggerable_bpc_C_ChangeStaggerStage_Params params;
	params.DoStagger = DoStagger;
	params.NewStaggerStage = NewStaggerStage;
	params.StaggeredPart = StaggeredPart;
	params.StaggerType = StaggerType;
	params.StaggerCauser = StaggerCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.CanReceiveStaggerDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Staggerable                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::CanReceiveStaggerDamage(bool* Staggerable)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.CanReceiveStaggerDamage");

	Ustaggerable_bpc_C_CanReceiveStaggerDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Staggerable != nullptr)
		*Staggerable = params.Staggerable;
}


// Function staggerable_bpc.staggerable_bpc_C.GetCurrentStaggerData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct Fstagger_stage          StaggerData                    (Parm, OutParm)

void Ustaggerable_bpc_C::GetCurrentStaggerData(struct Fstagger_stage* StaggerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.GetCurrentStaggerData");

	Ustaggerable_bpc_C_GetCurrentStaggerData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerData != nullptr)
		*StaggerData = params.StaggerData;
}


// Function staggerable_bpc.staggerable_bpc_C.TryAddStaggerDamage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalBaseStaggerDamage         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PostCalcStaggerMultiplier      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BaseDamageStaggerMultiplier    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PerHitStaggerBonus             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StaggerResistPenetrationPercent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMonsterPartComponent*   StaggeredPart                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           StaggerCausedByThisDamage      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StaggerDamageDealt             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::TryAddStaggerDamage(float TotalBaseStaggerDamage, class AActor* Instigator, float PostCalcStaggerMultiplier, float BaseDamageStaggerMultiplier, float PerHitStaggerBonus, float StaggerResistPenetrationPercent, class UMonsterPartComponent* StaggeredPart, bool* StaggerCausedByThisDamage, float* StaggerDamageDealt)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.TryAddStaggerDamage");

	Ustaggerable_bpc_C_TryAddStaggerDamage_Params params;
	params.TotalBaseStaggerDamage = TotalBaseStaggerDamage;
	params.Instigator = Instigator;
	params.PostCalcStaggerMultiplier = PostCalcStaggerMultiplier;
	params.BaseDamageStaggerMultiplier = BaseDamageStaggerMultiplier;
	params.PerHitStaggerBonus = PerHitStaggerBonus;
	params.StaggerResistPenetrationPercent = StaggerResistPenetrationPercent;
	params.StaggeredPart = StaggeredPart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerCausedByThisDamage != nullptr)
		*StaggerCausedByThisDamage = params.StaggerCausedByThisDamage;
	if (StaggerDamageDealt != nullptr)
		*StaggerDamageDealt = params.StaggerDamageDealt;
}


// Function staggerable_bpc.staggerable_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.ReceiveTick");

	Ustaggerable_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ustaggerable_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.ReceiveBeginPlay");

	Ustaggerable_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.MulticastCombatText
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            BaseColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ustaggerable_bpc_C::MulticastCombatText(float DamageAmount, class AActor* DamageInstigator, const struct FLinearColor& BaseColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.MulticastCombatText");

	Ustaggerable_bpc_C_MulticastCombatText_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageInstigator = DamageInstigator;
	params.BaseColor = BaseColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.AuthSendStaggerTelemetryData
// (BlueprintCallable, BlueprintEvent)

void Ustaggerable_bpc_C::AuthSendStaggerTelemetryData()
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.AuthSendStaggerTelemetryData");

	Ustaggerable_bpc_C_AuthSendStaggerTelemetryData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.MulticastTelemetryData
// (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fstagger_telemetry_data> StaggerTelemetryData           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Ustaggerable_bpc_C::MulticastTelemetryData(TArray<struct Fstagger_telemetry_data> StaggerTelemetryData)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.MulticastTelemetryData");

	Ustaggerable_bpc_C_MulticastTelemetryData_Params params;
	params.StaggerTelemetryData = StaggerTelemetryData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.DegenStaggerArmor
// (BlueprintCallable, BlueprintEvent)

void Ustaggerable_bpc_C::DegenStaggerArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.DegenStaggerArmor");

	Ustaggerable_bpc_C_DegenStaggerArmor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.RefreshStaggerEffectsActive
// (BlueprintCallable, BlueprintEvent)

void Ustaggerable_bpc_C::RefreshStaggerEffectsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.RefreshStaggerEffectsActive");

	Ustaggerable_bpc_C_RefreshStaggerEffectsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function staggerable_bpc.staggerable_bpc_C.ExecuteUbergraph_staggerable_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustaggerable_bpc_C::ExecuteUbergraph_staggerable_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function staggerable_bpc.staggerable_bpc_C.ExecuteUbergraph_staggerable_bpc");

	Ustaggerable_bpc_C_ExecuteUbergraph_staggerable_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
