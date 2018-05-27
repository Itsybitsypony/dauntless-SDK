// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function fauna_base_bp.fauna_base_bp_C.CanHitCBPushPullTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hits_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::CanHitCBPushPullTarget(bool* Hits_)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.CanHitCBPushPullTarget");

	Afauna_base_bp_C_CanHitCBPushPullTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits_ != nullptr)
		*Hits_ = params.Hits_;
}


// Function fauna_base_bp.fauna_base_bp_C.GetDefaultElementalAttackType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   DefaultElementalAttackType     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.GetDefaultElementalAttackType");

	Afauna_base_bp_C_GetDefaultElementalAttackType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultElementalAttackType != nullptr)
		*DefaultElementalAttackType = params.DefaultElementalAttackType;
}


// Function fauna_base_bp.fauna_base_bp_C.GetLookAtAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LookAtAlpha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::GetLookAtAlpha(float* LookAtAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.GetLookAtAlpha");

	Afauna_base_bp_C_GetLookAtAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtAlpha != nullptr)
		*LookAtAlpha = params.LookAtAlpha;
}


// Function fauna_base_bp.fauna_base_bp_C.GetLookAtVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtVector                   (Parm, OutParm, IsPlainOldData)

void Afauna_base_bp_C::GetLookAtVector(struct FVector* LookAtVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.GetLookAtVector");

	Afauna_base_bp_C_GetLookAtVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtVector != nullptr)
		*LookAtVector = params.LookAtVector;
}


// Function fauna_base_bp.fauna_base_bp_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::GetMesh(class USkeletalMeshComponent** SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.GetMesh");

	Afauna_base_bp_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
}


// Function fauna_base_bp.fauna_base_bp_C.GetFallbackProjectileSpawnOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void Afauna_base_bp_C::GetFallbackProjectileSpawnOffset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.GetFallbackProjectileSpawnOffset");

	Afauna_base_bp_C_GetFallbackProjectileSpawnOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function fauna_base_bp.fauna_base_bp_C.UpdateLookAtTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Afauna_base_bp_C::UpdateLookAtTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.UpdateLookAtTarget");

	Afauna_base_bp_C_UpdateLookAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.UpdateMeshOrientation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Afauna_base_bp_C::UpdateMeshOrientation()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.UpdateMeshOrientation");

	Afauna_base_bp_C_UpdateMeshOrientation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.GetPivotMontageForAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::GetPivotMontageForAngle(float Angle, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.GetPivotMontageForAngle");

	Afauna_base_bp_C_GetPivotMontageForAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function fauna_base_bp.fauna_base_bp_C.DoPivot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Epivot_target_type> PivotTargetType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PivotToLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  PivotTargetActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PivotToActorPredictionTime     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::DoPivot(TEnumAsByte<Epivot_target_type> PivotTargetType, float Angle, const struct FVector& PivotToLocation, class AActor* PivotTargetActor, float PivotToActorPredictionTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.DoPivot");

	Afauna_base_bp_C_DoPivot_Params params;
	params.PivotTargetType = PivotTargetType;
	params.Angle = Angle;
	params.PivotToLocation = PivotToLocation;
	params.PivotTargetActor = PivotTargetActor;
	params.PivotToActorPredictionTime = PivotToActorPredictionTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.IsPivoting?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StillPivoting                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::IsPivoting_(bool* StillPivoting)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.IsPivoting?");

	Afauna_base_bp_C_IsPivoting__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StillPivoting != nullptr)
		*StillPivoting = params.StillPivoting;
}


// Function fauna_base_bp.fauna_base_bp_C.AbortPivot
// (Public, BlueprintCallable, BlueprintEvent)

void Afauna_base_bp_C::AbortPivot()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.AbortPivot");

	Afauna_base_bp_C_AbortPivot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.OnPivotEnded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Afauna_base_bp_C::OnPivotEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.OnPivotEnded");

	Afauna_base_bp_C_OnPivotEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.OnPivotAnimEnded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         BlendOutDelegate               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Afauna_base_bp_C::OnPivotAnimEnded(class UAnimInstance* AnimInstance, class UObject* Montage, struct FScriptDelegate* BlendOutDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.OnPivotAnimEnded");

	Afauna_base_bp_C_OnPivotAnimEnded_Params params;
	params.AnimInstance = AnimInstance;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlendOutDelegate != nullptr)
		*BlendOutDelegate = params.BlendOutDelegate;
}


// Function fauna_base_bp.fauna_base_bp_C.SetupPathFollowing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonPathFollowingComponent* ArchonPathFollowing            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::SetupPathFollowing(class UArchonPathFollowingComponent* ArchonPathFollowing)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.SetupPathFollowing");

	Afauna_base_bp_C_SetupPathFollowing_Params params;
	params.ArchonPathFollowing = ArchonPathFollowing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Afauna_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.UserConstructionScript");

	Afauna_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Afauna_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.ReceiveBeginPlay");

	Afauna_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.ReceiveTick");

	Afauna_base_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.OnDoPivotDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TurnAngle                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            OverridePivotMontage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::OnDoPivotDelegate(float TurnAngle, class UAnimMontage* OverridePivotMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.OnDoPivotDelegate");

	Afauna_base_bp_C_OnDoPivotDelegate_Params params;
	params.TurnAngle = TurnAngle;
	params.OverridePivotMontage = OverridePivotMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.OnPivotAborted
// (BlueprintCallable, BlueprintEvent)

void Afauna_base_bp_C::OnPivotAborted()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.OnPivotAborted");

	Afauna_base_bp_C_OnPivotAborted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.OnPivotStarted
// (BlueprintCallable, BlueprintEvent)

void Afauna_base_bp_C::OnPivotStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.OnPivotStarted");

	Afauna_base_bp_C_OnPivotStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.OnMontageBlendingOut_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::OnMontageBlendingOut_Event(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.OnMontageBlendingOut_Event");

	Afauna_base_bp_C_OnMontageBlendingOut_Event_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::ReceivePossessed(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.ReceivePossessed");

	Afauna_base_bp_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.SetLocoState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Efauna_loco_state_enum> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::SetLocoState(TEnumAsByte<Efauna_loco_state_enum> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.SetLocoState");

	Afauna_base_bp_C_SetLocoState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_bp.fauna_base_bp_C.ExecuteUbergraph_fauna_base_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_bp_C::ExecuteUbergraph_fauna_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_bp.fauna_base_bp_C.ExecuteUbergraph_fauna_base_bp");

	Afauna_base_bp_C_ExecuteUbergraph_fauna_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
