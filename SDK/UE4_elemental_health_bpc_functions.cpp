// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_elemental_health_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentStage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Stage                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::GetCurrentStage(EElementType Element, int* Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentStage");

	Uelemental_health_bpc_C_GetCurrentStage_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stage != nullptr)
		*Stage = params.Stage;
}


// Function elemental_health_bpc.elemental_health_bpc_C.InitializeHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Stage                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::InitializeHealth(EElementType Element, int Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.InitializeHealth");

	Uelemental_health_bpc_C_InitializeHealth_Params params;
	params.Element = Element;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.MoveToNextStage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::MoveToNextStage(EElementType Element)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.MoveToNextStage");

	Uelemental_health_bpc_C_MoveToNextStage_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.AuthProcessDebuffStates
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DebuffObjectName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::AuthProcessDebuffStates(const struct FName& DebuffObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.AuthProcessDebuffStates");

	Uelemental_health_bpc_C_AuthProcessDebuffStates_Params params;
	params.DebuffObjectName = DebuffObjectName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.AuthHandleApplyStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMonsterPartActor*       PartDamaged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasHitResult                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Uelemental_health_bpc_C::AuthHandleApplyStatus(class AActor* Instigator, EElementType Element, class AMonsterPartActor* PartDamaged, bool HasHitResult, const struct FHitResult& HitResult, const struct FGameplayTagContainer& DamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.AuthHandleApplyStatus");

	Uelemental_health_bpc_C_AuthHandleApplyStatus_Params params;
	params.Instigator = Instigator;
	params.Element = Element;
	params.PartDamaged = PartDamaged;
	params.HasHitResult = HasHitResult;
	params.HitResult = HitResult;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.CreateSpecHandles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uelemental_health_bpc_C::CreateSpecHandles()
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.CreateSpecHandles");

	Uelemental_health_bpc_C_CreateSpecHandles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentMaxHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::GetCurrentMaxHealth(EElementType Element, float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentMaxHealth");

	Uelemental_health_bpc_C_GetCurrentMaxHealth_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   Element                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Health                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::GetCurrentHealth(EElementType Element, float* Health)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.GetCurrentHealth");

	Uelemental_health_bpc_C_GetCurrentHealth_Params params;
	params.Element = Element;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Health != nullptr)
		*Health = params.Health;
}


// Function elemental_health_bpc.elemental_health_bpc_C.AuthRegenHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::AuthRegenHealth(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.AuthRegenHealth");

	Uelemental_health_bpc_C_AuthRegenHealth_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.AuthTryAddElementalDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMonsterPartActor*       PartDamaged                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   DamageEventTags                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           HasHitResult                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uelemental_health_bpc_C::AuthTryAddElementalDamage(class AActor* Instigator, class AMonsterPartActor* PartDamaged, const struct FDamageEventData& DamageEventData, const struct FGameplayTagContainer& DamageEventTags, bool HasHitResult, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.AuthTryAddElementalDamage");

	Uelemental_health_bpc_C_AuthTryAddElementalDamage_Params params;
	params.Instigator = Instigator;
	params.PartDamaged = PartDamaged;
	params.DamageEventData = DamageEventData;
	params.DamageEventTags = DamageEventTags;
	params.HasHitResult = HasHitResult;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uelemental_health_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.ReceiveBeginPlay");

	Uelemental_health_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.ReceiveTick");

	Uelemental_health_bpc_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.MultiShowElementalHealth
// (BlueprintCallable, BlueprintEvent)

void Uelemental_health_bpc_C::MultiShowElementalHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.MultiShowElementalHealth");

	Uelemental_health_bpc_C_MultiShowElementalHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.OnComponentActivate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::OnComponentActivate(class UActorComponent* Component, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.OnComponentActivate");

	Uelemental_health_bpc_C_OnComponentActivate_Params params;
	params.Component = Component;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.MultiMoveToNextStage
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::MultiMoveToNextStage(EElementType NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.MultiMoveToNextStage");

	Uelemental_health_bpc_C_MultiMoveToNextStage_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function elemental_health_bpc.elemental_health_bpc_C.ExecuteUbergraph_elemental_health_bpc
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uelemental_health_bpc_C::ExecuteUbergraph_elemental_health_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function elemental_health_bpc.elemental_health_bpc_C.ExecuteUbergraph_elemental_health_bpc");

	Uelemental_health_bpc_C_ExecuteUbergraph_elemental_health_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
