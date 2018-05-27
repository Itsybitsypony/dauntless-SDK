// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IKinemaCore_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IKinemaCore.ArchonFootIKComponent.Unpin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EArchonFootID                  ID                             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBall                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          RateScale                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UArchonFootIKComponent::Unpin(EArchonFootID ID, bool IsBall, float RateScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.ArchonFootIKComponent.Unpin");

	UArchonFootIKComponent_Unpin_Params params;
	params.ID = ID;
	params.IsBall = IsBall;
	params.RateScale = RateScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.ArchonFootIKComponent.Pin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EArchonFootID                  FootId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBall                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UArchonFootIKComponent::Pin(EArchonFootID FootId, bool IsBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.ArchonFootIKComponent.Pin");

	UArchonFootIKComponent_Pin_Params params;
	params.FootId = FootId;
	params.IsBall = IsBall;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.ArchonImpactComponent.ApplyImpact
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Position                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DurationScale                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          MagnitudeScale                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UArchonImpactComponent::ApplyImpact(const struct FVector& Position, const struct FVector& Direction, float DurationScale, float MagnitudeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.ArchonImpactComponent.ApplyImpact");

	UArchonImpactComponent_ApplyImpact_Params params;
	params.Position = Position;
	params.Direction = Direction;
	params.DurationScale = DurationScale;
	params.MagnitudeScale = MagnitudeScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.IKinemaAnimLibrary.Slerp
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                A                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                B                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Alpha                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FRotator                Out                            (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_Slerp(const struct FRotator& A, const struct FRotator& B, float Alpha, struct FRotator* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.Slerp");

	UIKinemaAnimLibrary_Slerp_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function IKinemaCore.IKinemaAnimLibrary.SetupTask
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              Target                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIKinemaTargetType> TargetType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InComponentSpace               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableTranslation              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableOrientation              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseTipOffset                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DebugDrawScale                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FIKinemaSolverTask      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FIKinemaSolverTask UIKinemaAnimLibrary::STATIC_SetupTask(const struct FTransform& Target, float Alpha, TEnumAsByte<EIKinemaTargetType> TargetType, bool InComponentSpace, bool EnableTranslation, bool EnableOrientation, bool UseTipOffset, bool DebugDraw, float DebugDrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.SetupTask");

	UIKinemaAnimLibrary_SetupTask_Params params;
	params.Target = Target;
	params.Alpha = Alpha;
	params.TargetType = TargetType;
	params.InComponentSpace = InComponentSpace;
	params.EnableTranslation = EnableTranslation;
	params.EnableOrientation = EnableOrientation;
	params.UseTipOffset = UseTipOffset;
	params.DebugDraw = DebugDraw;
	params.DebugDrawScale = DebugDrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.IKinemaAnimLibrary.SetupLookAtTaskFromTask
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FIKinemaSolverTask      Task                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FIKinemaSolverLookAtTask ReturnValue                    (Parm, OutParm, ReturnParm)

struct FIKinemaSolverLookAtTask UIKinemaAnimLibrary::STATIC_SetupLookAtTaskFromTask(const struct FIKinemaSolverTask& Task)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.SetupLookAtTaskFromTask");

	UIKinemaAnimLibrary_SetupLookAtTaskFromTask_Params params;
	params.Task = Task;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.IKinemaAnimLibrary.SetupLookAtTask
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 LookAtTarget                   (Parm, IsPlainOldData)
// struct FVector                 LookAtAxis                     (Parm, IsPlainOldData)
// struct FVector                 PositionTarget                 (Parm, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EIKinemaTargetType> TargetType                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InComponentSpace               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReduceWeight                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableTranslation              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableOrientation              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DebugDrawScale                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FIKinemaSolverLookAtTask ReturnValue                    (Parm, OutParm, ReturnParm)

struct FIKinemaSolverLookAtTask UIKinemaAnimLibrary::STATIC_SetupLookAtTask(const struct FVector& LookAtTarget, const struct FVector& LookAtAxis, const struct FVector& PositionTarget, float Alpha, TEnumAsByte<EIKinemaTargetType> TargetType, bool InComponentSpace, bool ReduceWeight, bool EnableTranslation, bool EnableOrientation, bool DebugDraw, float DebugDrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.SetupLookAtTask");

	UIKinemaAnimLibrary_SetupLookAtTask_Params params;
	params.LookAtTarget = LookAtTarget;
	params.LookAtAxis = LookAtAxis;
	params.PositionTarget = PositionTarget;
	params.Alpha = Alpha;
	params.TargetType = TargetType;
	params.InComponentSpace = InComponentSpace;
	params.ReduceWeight = ReduceWeight;
	params.EnableTranslation = EnableTranslation;
	params.EnableOrientation = EnableOrientation;
	params.DebugDraw = DebugDraw;
	params.DebugDrawScale = DebugDrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.IKinemaAnimLibrary.SetupCOMTask
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (Parm, IsPlainOldData)
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InComponentSpace               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugDraw                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          DebugDrawScale                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FIKinemaCOMTask         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FIKinemaCOMTask UIKinemaAnimLibrary::STATIC_SetupCOMTask(const struct FVector& Target, bool Enable, bool InComponentSpace, bool DebugDraw, float DebugDrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.SetupCOMTask");

	UIKinemaAnimLibrary_SetupCOMTask_Params params;
	params.Target = Target;
	params.Enable = Enable;
	params.InComponentSpace = InComponentSpace;
	params.DebugDraw = DebugDraw;
	params.DebugDrawScale = DebugDrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.IKinemaAnimLibrary.MakeTaskProperties
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           PositionDofX                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PositionDofY                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           PositionDofZ                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            PositionDepth                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PositionWeight                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PositionPrecision              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           RotateDofX                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RotateDofY                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RotateDofZ                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            RotateDepth                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 RotateWeight                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 RotatePrecision                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FIKinemaTaskProperties  OutProperties                  (Parm, OutParm)

void UIKinemaAnimLibrary::STATIC_MakeTaskProperties(bool PositionDofX, bool PositionDofY, bool PositionDofZ, int PositionDepth, const struct FVector& PositionWeight, const struct FVector& PositionPrecision, bool RotateDofX, bool RotateDofY, bool RotateDofZ, int RotateDepth, const struct FVector& RotateWeight, const struct FVector& RotatePrecision, struct FIKinemaTaskProperties* OutProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.MakeTaskProperties");

	UIKinemaAnimLibrary_MakeTaskProperties_Params params;
	params.PositionDofX = PositionDofX;
	params.PositionDofY = PositionDofY;
	params.PositionDofZ = PositionDofZ;
	params.PositionDepth = PositionDepth;
	params.PositionWeight = PositionWeight;
	params.PositionPrecision = PositionPrecision;
	params.RotateDofX = RotateDofX;
	params.RotateDofY = RotateDofY;
	params.RotateDofZ = RotateDofZ;
	params.RotateDepth = RotateDepth;
	params.RotateWeight = RotateWeight;
	params.RotatePrecision = RotatePrecision;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProperties != nullptr)
		*OutProperties = params.OutProperties;
}


// Function IKinemaCore.IKinemaAnimLibrary.MakeSegmentProperties
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           DofX                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DofY                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           DofZ                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnforceLimits                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Weight                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           EnableLimits                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          LimitsGain                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableRetargeting              (Parm, ZeroConstructor, IsPlainOldData)
// float                          RetargetingGain                (Parm, ZeroConstructor, IsPlainOldData)
// struct FIKinemaSegmentProperties OutProperties                  (Parm, OutParm)

void UIKinemaAnimLibrary::STATIC_MakeSegmentProperties(bool DofX, bool DofY, bool DofZ, bool EnforceLimits, const struct FVector& Weight, bool EnableLimits, float LimitsGain, bool EnableRetargeting, float RetargetingGain, struct FIKinemaSegmentProperties* OutProperties)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.MakeSegmentProperties");

	UIKinemaAnimLibrary_MakeSegmentProperties_Params params;
	params.DofX = DofX;
	params.DofY = DofY;
	params.DofZ = DofZ;
	params.EnforceLimits = EnforceLimits;
	params.Weight = Weight;
	params.EnableLimits = EnableLimits;
	params.LimitsGain = LimitsGain;
	params.EnableRetargeting = EnableRetargeting;
	params.RetargetingGain = RetargetingGain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutProperties != nullptr)
		*OutProperties = params.OutProperties;
}


// Function IKinemaCore.IKinemaAnimLibrary.MakeRotatorFromQuaternion
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQuat                   InQuat                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                OutRotator                     (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_MakeRotatorFromQuaternion(const struct FQuat& InQuat, struct FRotator* OutRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.MakeRotatorFromQuaternion");

	UIKinemaAnimLibrary_MakeRotatorFromQuaternion_Params params;
	params.InQuat = InQuat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotator != nullptr)
		*OutRotator = params.OutRotator;
}


// Function IKinemaCore.IKinemaAnimLibrary.LineTrace
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bTrace                         (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimInstance*           Owner                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  IgnoreActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Start                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 End                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<ECollisionChannel> TraceChannel                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTraceComplex                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDrawDebug                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UIKinemaAnimLibrary::STATIC_LineTrace(bool bTrace, class UAnimInstance* Owner, class AActor* IgnoreActor, const struct FVector& Start, const struct FVector& End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDrawDebug, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.LineTrace");

	UIKinemaAnimLibrary_LineTrace_Params params;
	params.bTrace = bTrace;
	params.Owner = Owner;
	params.IgnoreActor = IgnoreActor;
	params.Start = Start;
	params.End = End;
	params.TraceChannel = TraceChannel;
	params.bTraceComplex = bTraceComplex;
	params.bDrawDebug = bDrawDebug;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function IKinemaCore.IKinemaAnimLibrary.InverseTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              InTransform                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_InverseTransform(const struct FTransform& InTransform, struct FTransform* OutTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.InverseTransform");

	UIKinemaAnimLibrary_InverseTransform_Params params;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
}


// Function IKinemaCore.IKinemaAnimLibrary.GetRelativeTransformReverse
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              A                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              B                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              AInverseTimesB                 (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_GetRelativeTransformReverse(const struct FTransform& A, const struct FTransform& B, struct FTransform* AInverseTimesB)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.GetRelativeTransformReverse");

	UIKinemaAnimLibrary_GetRelativeTransformReverse_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AInverseTimesB != nullptr)
		*AInverseTimesB = params.AInverseTimesB;
}


// Function IKinemaCore.IKinemaAnimLibrary.GetRelativeTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              A                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              B                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FTransform              ATimesBInverse                 (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_GetRelativeTransform(const struct FTransform& A, const struct FTransform& B, struct FTransform* ATimesBInverse)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.GetRelativeTransform");

	UIKinemaAnimLibrary_GetRelativeTransform_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ATimesBInverse != nullptr)
		*ATimesBInverse = params.ATimesBInverse;
}


// Function IKinemaCore.IKinemaAnimLibrary.GetComponentToWorldSpaceTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*           Vim                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              BoneTransform                  (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_GetComponentToWorldSpaceTransform(class UAnimInstance* Vim, struct FTransform* BoneTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.GetComponentToWorldSpaceTransform");

	UIKinemaAnimLibrary_GetComponentToWorldSpaceTransform_Params params;
	params.Vim = Vim;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneTransform != nullptr)
		*BoneTransform = params.BoneTransform;
}


// Function IKinemaCore.IKinemaAnimLibrary.GetBoneFromPoseLink
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKinemaRTAnimInstance*  Vim                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FPoseLink               CachedPose                     (Parm)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUpdate                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaX                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              BoneTransform                  (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_GetBoneFromPoseLink(class UIKinemaRTAnimInstance* Vim, const struct FPoseLink& CachedPose, const struct FName& BoneName, bool ForceUpdate, float DeltaX, struct FTransform* BoneTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.GetBoneFromPoseLink");

	UIKinemaAnimLibrary_GetBoneFromPoseLink_Params params;
	params.Vim = Vim;
	params.CachedPose = CachedPose;
	params.BoneName = BoneName;
	params.ForceUpdate = ForceUpdate;
	params.DeltaX = DeltaX;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneTransform != nullptr)
		*BoneTransform = params.BoneTransform;
}


// Function IKinemaCore.IKinemaAnimLibrary.GetBoneFromPose
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UIKinemaRTAnimInstance*  AnimBlueprint                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   CachedPose                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceUpdate                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              BoneTransform                  (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_GetBoneFromPose(class UIKinemaRTAnimInstance* AnimBlueprint, const struct FName& CachedPose, const struct FName& BoneName, bool ForceUpdate, struct FTransform* BoneTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.GetBoneFromPose");

	UIKinemaAnimLibrary_GetBoneFromPose_Params params;
	params.AnimBlueprint = AnimBlueprint;
	params.CachedPose = CachedPose;
	params.BoneName = BoneName;
	params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneTransform != nullptr)
		*BoneTransform = params.BoneTransform;
}


// Function IKinemaCore.IKinemaAnimLibrary.GenerateLookAtTarget
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              Bone                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 LookAtAxis                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 lookAtDirection                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UIKinemaAnimLibrary::STATIC_GenerateLookAtTarget(const struct FTransform& Bone, const struct FVector& LookAtAxis, const struct FVector& lookAtDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.GenerateLookAtTarget");

	UIKinemaAnimLibrary_GenerateLookAtTarget_Params params;
	params.Bone = Bone;
	params.LookAtAxis = LookAtAxis;
	params.lookAtDirection = lookAtDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.IKinemaAnimLibrary.FindSkeletonWorldSpaceTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  Skeleton                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   TransName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_FindSkeletonWorldSpaceTransform(class USkeletalMeshComponent* Skeleton, const struct FName& TransName, struct FTransform* OutTransform, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.FindSkeletonWorldSpaceTransform");

	UIKinemaAnimLibrary_FindSkeletonWorldSpaceTransform_Params params;
	params.Skeleton = Skeleton;
	params.TransName = TransName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function IKinemaCore.IKinemaAnimLibrary.FindRotatorFromUpAxisAndRefRot
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 UpAxis                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                RefRotator                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TEnumAsByte<EAxisDirection>    RefSpaceRightDir               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAxisDirection>    OutSpaceUpDir                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAxisDirection>    OutSpaceRightDir               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAxisDirection>    OutSpaceFrontDir               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           LeftHanded                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotator                     (Parm, OutParm, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_FindRotatorFromUpAxisAndRefRot(const struct FVector& UpAxis, const struct FRotator& RefRotator, TEnumAsByte<EAxisDirection> RefSpaceRightDir, TEnumAsByte<EAxisDirection> OutSpaceUpDir, TEnumAsByte<EAxisDirection> OutSpaceRightDir, TEnumAsByte<EAxisDirection> OutSpaceFrontDir, bool LeftHanded, struct FRotator* OutRotator)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.FindRotatorFromUpAxisAndRefRot");

	UIKinemaAnimLibrary_FindRotatorFromUpAxisAndRefRot_Params params;
	params.UpAxis = UpAxis;
	params.RefRotator = RefRotator;
	params.RefSpaceRightDir = RefSpaceRightDir;
	params.OutSpaceUpDir = OutSpaceUpDir;
	params.OutSpaceRightDir = OutSpaceRightDir;
	params.OutSpaceFrontDir = OutSpaceFrontDir;
	params.LeftHanded = LeftHanded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRotator != nullptr)
		*OutRotator = params.OutRotator;
}


// Function IKinemaCore.IKinemaAnimLibrary.FindRotationBetweenVectors
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 From                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 To                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator UIKinemaAnimLibrary::STATIC_FindRotationBetweenVectors(const struct FVector& From, const struct FVector& To)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.FindRotationBetweenVectors");

	UIKinemaAnimLibrary_FindRotationBetweenVectors_Params params;
	params.From = From;
	params.To = To;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IKinemaCore.IKinemaAnimLibrary.FindActorWorldSpaceTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   ActorName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TransName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              OutTransform                   (Parm, OutParm, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIKinemaAnimLibrary::STATIC_FindActorWorldSpaceTransform(const struct FName& ActorName, const struct FName& TransName, struct FTransform* OutTransform, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.FindActorWorldSpaceTransform");

	UIKinemaAnimLibrary_FindActorWorldSpaceTransform_Params params;
	params.ActorName = ActorName;
	params.TransName = TransName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTransform != nullptr)
		*OutTransform = params.OutTransform;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function IKinemaCore.IKinemaAnimLibrary.DumpSolvers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           Vim                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Folder                         (Parm, ZeroConstructor)

void UIKinemaAnimLibrary::STATIC_DumpSolvers(class UAnimInstance* Vim, const class FString& Folder)
{
	static auto fn = UObject::FindObject<UFunction>("Function IKinemaCore.IKinemaAnimLibrary.DumpSolvers");

	UIKinemaAnimLibrary_DumpSolvers_Params params;
	params.Vim = Vim;
	params.Folder = Folder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
