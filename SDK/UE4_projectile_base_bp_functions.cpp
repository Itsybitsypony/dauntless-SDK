// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_projectile_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function projectile_base_bp.projectile_base_bp_C.UpdateParticlePosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Aprojectile_base_bp_C*   ProjectileActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Position                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void Aprojectile_base_bp_C::UpdateParticlePosition(float DeltaSeconds, class Aprojectile_base_bp_C* ProjectileActor, struct FVector* Position, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.UpdateParticlePosition");

	Aprojectile_base_bp_C_UpdateParticlePosition_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.ProjectileActor = ProjectileActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function projectile_base_bp.projectile_base_bp_C.CanHitCBPushPullTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hits_                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::CanHitCBPushPullTarget(bool* Hits_)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.CanHitCBPushPullTarget");

	Aprojectile_base_bp_C_CanHitCBPushPullTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hits_ != nullptr)
		*Hits_ = params.Hits_;
}


// Function projectile_base_bp.projectile_base_bp_C.GetDefaultElementalAttackType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EElementType                   DefaultElementalAttackType     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::GetDefaultElementalAttackType(EElementType* DefaultElementalAttackType)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.GetDefaultElementalAttackType");

	Aprojectile_base_bp_C_GetDefaultElementalAttackType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultElementalAttackType != nullptr)
		*DefaultElementalAttackType = params.DefaultElementalAttackType;
}


// Function projectile_base_bp.projectile_base_bp_C.GetLookAtVector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtVector                   (Parm, OutParm, IsPlainOldData)

void Aprojectile_base_bp_C::GetLookAtVector(struct FVector* LookAtVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.GetLookAtVector");

	Aprojectile_base_bp_C_GetLookAtVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtVector != nullptr)
		*LookAtVector = params.LookAtVector;
}


// Function projectile_base_bp.projectile_base_bp_C.GetLookAtAlpha
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LookAtAlpha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::GetLookAtAlpha(float* LookAtAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.GetLookAtAlpha");

	Aprojectile_base_bp_C_GetLookAtAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtAlpha != nullptr)
		*LookAtAlpha = params.LookAtAlpha;
}


// Function projectile_base_bp.projectile_base_bp_C.GetMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMesh                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::GetMesh(class USkeletalMeshComponent** SkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.GetMesh");

	Aprojectile_base_bp_C_GetMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkeletalMesh != nullptr)
		*SkeletalMesh = params.SkeletalMesh;
}


// Function projectile_base_bp.projectile_base_bp_C.GetFallbackProjectileSpawnOffset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FVector                 Offset                         (Parm, OutParm, IsPlainOldData)

void Aprojectile_base_bp_C::GetFallbackProjectileSpawnOffset(struct FVector* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.GetFallbackProjectileSpawnOffset");

	Aprojectile_base_bp_C_GetFallbackProjectileSpawnOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Offset != nullptr)
		*Offset = params.Offset;
}


// Function projectile_base_bp.projectile_base_bp_C.CanHitThisTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanHit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::CanHitThisTarget(class AActor* TargetActor, bool* CanHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.CanHitThisTarget");

	Aprojectile_base_bp_C_CanHitThisTarget_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanHit != nullptr)
		*CanHit = params.CanHit;
}


// Function projectile_base_bp.projectile_base_bp_C.AudioSetIsLocal
// (Public, BlueprintCallable, BlueprintEvent)

void Aprojectile_base_bp_C::AudioSetIsLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.AudioSetIsLocal");

	Aprojectile_base_bp_C_AudioSetIsLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.AuthSweepHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         CollisionReference             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::AuthSweepHit(class USceneComponent* CollisionReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.AuthSweepHit");

	Aprojectile_base_bp_C_AuthSweepHit_Params params;
	params.CollisionReference = CollisionReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.AuthBecomeLobbedProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TargetPos                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          MinDistanceForScaling          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxDistanceForScaling          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PeakHeightAtMinDistance        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PeakHeightAtMaxDistance        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LateralSpeedAtMinDistance      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LateralSpeedAtMaxDistance      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::AuthBecomeLobbedProjectile(const struct FVector& TargetPos, float MinDistanceForScaling, float MaxDistanceForScaling, float PeakHeightAtMinDistance, float PeakHeightAtMaxDistance, float LateralSpeedAtMinDistance, float LateralSpeedAtMaxDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.AuthBecomeLobbedProjectile");

	Aprojectile_base_bp_C_AuthBecomeLobbedProjectile_Params params;
	params.TargetPos = TargetPos;
	params.MinDistanceForScaling = MinDistanceForScaling;
	params.MaxDistanceForScaling = MaxDistanceForScaling;
	params.PeakHeightAtMinDistance = PeakHeightAtMinDistance;
	params.PeakHeightAtMaxDistance = PeakHeightAtMaxDistance;
	params.LateralSpeedAtMinDistance = LateralSpeedAtMinDistance;
	params.LateralSpeedAtMaxDistance = LateralSpeedAtMaxDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.Server - Apply Damage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target_Actor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit_Info                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent*     OtherComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::Server___Apply_Damage(class AActor* Target_Actor, const struct FHitResult& Hit_Info, class UPrimitiveComponent* OtherComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.Server - Apply Damage");

	Aprojectile_base_bp_C_Server___Apply_Damage_Params params;
	params.Target_Actor = Target_Actor;
	params.Hit_Info = Hit_Info;
	params.OtherComponent = OtherComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aprojectile_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.UserConstructionScript");

	Aprojectile_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.SetProjectileMovementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eprojectile_movement_type> NewMovementType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::SetProjectileMovementType(TEnumAsByte<Eprojectile_movement_type> NewMovementType)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.SetProjectileMovementType");

	Aprojectile_base_bp_C_SetProjectileMovementType_Params params;
	params.NewMovementType = NewMovementType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.ReceiveTick");

	Aprojectile_base_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aprojectile_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.ReceiveBeginPlay");

	Aprojectile_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.MulticastVelocityAndGravityChanges
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewVel                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          NewGravity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::MulticastVelocityAndGravityChanges(const struct FVector& NewVel, float NewGravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.MulticastVelocityAndGravityChanges");

	Aprojectile_base_bp_C_MulticastVelocityAndGravityChanges_Params params;
	params.NewVel = NewVel;
	params.NewGravity = NewGravity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.CalculateHoming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::CalculateHoming(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.CalculateHoming");

	Aprojectile_base_bp_C_CalculateHoming_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.MulticastVelocity
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewVelocity                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aprojectile_base_bp_C::MulticastVelocity(const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.MulticastVelocity");

	Aprojectile_base_bp_C_MulticastVelocity_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Aprojectile_base_bp_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	Aprojectile_base_bp_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.AuthOnProjectileDamageOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Aprojectile_base_bp_C::AuthOnProjectileDamageOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.AuthOnProjectileDamageOverlap");

	Aprojectile_base_bp_C_AuthOnProjectileDamageOverlap_Params params;
	params.OtherActor = OtherActor;
	params.OtherComponent = OtherComponent;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.ProjectileExploded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ExplosionLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aprojectile_base_bp_C::ProjectileExploded(const struct FVector& ExplosionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.ProjectileExploded");

	Aprojectile_base_bp_C_ProjectileExploded_Params params;
	params.ExplosionLocation = ExplosionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.OnProjectileStopped
// (BlueprintCallable, BlueprintEvent)

void Aprojectile_base_bp_C::OnProjectileStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.OnProjectileStopped");

	Aprojectile_base_bp_C_OnProjectileStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.SpawnActor_Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void Aprojectile_base_bp_C::SpawnActor_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.SpawnActor_Destroy");

	Aprojectile_base_bp_C_SpawnActor_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.DebugMulticastDrawProjectileSphere
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aprojectile_base_bp_C::DebugMulticastDrawProjectileSphere(const struct FVector& Location, float Duration, float Thickness, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.DebugMulticastDrawProjectileSphere");

	Aprojectile_base_bp_C_DebugMulticastDrawProjectileSphere_Params params;
	params.Location = Location;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.Multi_Explode
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aprojectile_base_bp_C::Multi_Explode(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.Multi_Explode");

	Aprojectile_base_bp_C_Multi_Explode_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.AuthSweepHitEvent
// (BlueprintCallable, BlueprintEvent)

void Aprojectile_base_bp_C::AuthSweepHitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.AuthSweepHitEvent");

	Aprojectile_base_bp_C_AuthSweepHitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.Multi_Hit
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Aprojectile_base_bp_C::Multi_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.Multi_Hit");

	Aprojectile_base_bp_C_Multi_Hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.Multi_ProjectileStopped
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void Aprojectile_base_bp_C::Multi_ProjectileStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.Multi_ProjectileStopped");

	Aprojectile_base_bp_C_Multi_ProjectileStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Aprojectile_base_bp_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.ReceiveDestroyed");

	Aprojectile_base_bp_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.ExecuteUbergraph_projectile_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::ExecuteUbergraph_projectile_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.ExecuteUbergraph_projectile_base_bp");

	Aprojectile_base_bp_C_ExecuteUbergraph_projectile_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.OnProjectileStopped_Dispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::OnProjectileStopped_Dispatcher__DelegateSignature(class Aprojectile_base_bp_C* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.OnProjectileStopped_Dispatcher__DelegateSignature");

	Aprojectile_base_bp_C_OnProjectileStopped_Dispatcher__DelegateSignature_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_base_bp.projectile_base_bp_C.OnProjectileExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aprojectile_base_bp_C*   Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_base_bp_C::OnProjectileExploded__DelegateSignature(class Aprojectile_base_bp_C* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_base_bp.projectile_base_bp_C.OnProjectileExploded__DelegateSignature");

	Aprojectile_base_bp_C_OnProjectileExploded__DelegateSignature_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
