// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_pull_projectile_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.CanPullHitTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanPull                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acblades_pull_projectile_bp_C::CanPullHitTarget(class AActor* HitActor, class UPrimitiveComponent* HitComponent, bool* CanPull)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.CanPullHitTarget");

	Acblades_pull_projectile_bp_C_CanPullHitTarget_Params params;
	params.HitActor = HitActor;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPull != nullptr)
		*CanPull = params.CanPull;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.RotateToTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acblades_pull_projectile_bp_C::RotateToTarget(class USceneComponent* TargetComponent, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.RotateToTarget");

	Acblades_pull_projectile_bp_C_RotateToTarget_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.GetLaunchVelocity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ACharacter*              Player_Character               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Hit_Point                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector Acblades_pull_projectile_bp_C::GetLaunchVelocity(float Height, class ACharacter* Player_Character, const struct FVector& Hit_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.GetLaunchVelocity");

	Acblades_pull_projectile_bp_C_GetLaunchVelocity_Params params;
	params.Height = Height;
	params.Player_Character = Player_Character;
	params.Hit_Point = Hit_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.DEPRECIATED_GetLaunchVelocity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacter*              PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitPoint                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 LaunchVector                   (Parm, OutParm, IsPlainOldData)

void Acblades_pull_projectile_bp_C::DEPRECIATED_GetLaunchVelocity(class ACharacter* PlayerCharacter, const struct FVector& HitPoint, struct FVector* LaunchVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.DEPRECIATED_GetLaunchVelocity");

	Acblades_pull_projectile_bp_C_DEPRECIATED_GetLaunchVelocity_Params params;
	params.PlayerCharacter = PlayerCharacter;
	params.HitPoint = HitPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LaunchVector != nullptr)
		*LaunchVector = params.LaunchVector;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acblades_pull_projectile_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.UserConstructionScript");

	Acblades_pull_projectile_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Acblades_pull_projectile_bp_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ReceiveHit");

	Acblades_pull_projectile_bp_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.SetHomingTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HomingTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acblades_pull_projectile_bp_C::SetHomingTarget(class UPrimitiveComponent* HomingTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.SetHomingTarget");

	Acblades_pull_projectile_bp_C_SetHomingTarget_Params params;
	params.HomingTarget = HomingTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acblades_pull_projectile_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ReceiveBeginPlay");

	Acblades_pull_projectile_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.DebugDrawProjectileSphere
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           IsServer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acblades_pull_projectile_bp_C::DebugDrawProjectileSphere(const struct FVector& Location, bool IsServer, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.DebugDrawProjectileSphere");

	Acblades_pull_projectile_bp_C_DebugDrawProjectileSphere_Params params;
	params.Location = Location;
	params.IsServer = IsServer;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.BndEvt__Colliding Body_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Acblades_pull_projectile_bp_C::BndEvt__Colliding_Body_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.BndEvt__Colliding Body_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature");

	Acblades_pull_projectile_bp_C_BndEvt__Colliding_Body_K2Node_ComponentBoundEvent_32_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.AuthCollide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComponent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Acblades_pull_projectile_bp_C::AuthCollide(class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.AuthCollide");

	Acblades_pull_projectile_bp_C_AuthCollide_Params params;
	params.OtherActor = OtherActor;
	params.OtherComponent = OtherComponent;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ExecuteUbergraph_cblades_pull_projectile_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acblades_pull_projectile_bp_C::ExecuteUbergraph_cblades_pull_projectile_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_pull_projectile_bp.cblades_pull_projectile_bp_C.ExecuteUbergraph_cblades_pull_projectile_bp");

	Acblades_pull_projectile_bp_C_ExecuteUbergraph_cblades_pull_projectile_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
