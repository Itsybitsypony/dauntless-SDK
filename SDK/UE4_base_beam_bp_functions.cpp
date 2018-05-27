// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_beam_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_beam_bp.base_beam_bp_C.GetHitActorsAndComponents
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          UniqueActors                   (Parm, OutParm, ZeroConstructor)
// TMap<class AActor*, class UPrimitiveComponent*> UniqueActorComponent           (Parm, OutParm, ZeroConstructor)

void Abase_beam_bp_C::GetHitActorsAndComponents(TArray<class AActor*>* UniqueActors, TMap<class AActor*, class UPrimitiveComponent*>* UniqueActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.GetHitActorsAndComponents");

	Abase_beam_bp_C_GetHitActorsAndComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UniqueActors != nullptr)
		*UniqueActors = params.UniqueActors;
	if (UniqueActorComponent != nullptr)
		*UniqueActorComponent = params.UniqueActorComponent;
}


// Function base_beam_bp.base_beam_bp_C.GetBeamDamageScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::GetBeamDamageScale(class AActor* HitActor, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.GetBeamDamageScale");

	Abase_beam_bp_C_GetBeamDamageScale_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function base_beam_bp.base_beam_bp_C.ClientRegisterBeamFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent* BeamComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::ClientRegisterBeamFX(class UParticleSystemComponent* BeamComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.ClientRegisterBeamFX");

	Abase_beam_bp_C_ClientRegisterBeamFX_Params params;
	params.BeamComponent = BeamComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.AuthUpdateBeamParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fbeam_request           NewBeamData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           RestartMotion                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::AuthUpdateBeamParameters(const struct Fbeam_request& NewBeamData, bool RestartMotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.AuthUpdateBeamParameters");

	Abase_beam_bp_C_AuthUpdateBeamParameters_Params params;
	params.NewBeamData = NewBeamData;
	params.RestartMotion = RestartMotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.AuthOnHitTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::AuthOnHitTarget(class AActor* HitActor, const struct FHitResult& HitResult, class UPrimitiveComponent* HitComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.AuthOnHitTarget");

	Abase_beam_bp_C_AuthOnHitTarget_Params params;
	params.HitActor = HitActor;
	params.HitResult = HitResult;
	params.HitComponent = HitComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.ApplyDamage
// (Public, BlueprintCallable, BlueprintEvent)

void Abase_beam_bp_C::ApplyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.ApplyDamage");

	Abase_beam_bp_C_ApplyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.UpdateBeamEndEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsBeamColliding                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndPos                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Abase_beam_bp_C::UpdateBeamEndEffects(bool IsBeamColliding, const struct FHitResult& HitResult, const struct FVector& EndPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.UpdateBeamEndEffects");

	Abase_beam_bp_C_UpdateBeamEndEffects_Params params;
	params.IsBeamColliding = IsBeamColliding;
	params.HitResult = HitResult;
	params.EndPos = EndPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.IsBeamFinished
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           BeamIsFinished                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::IsBeamFinished(bool* BeamIsFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.IsBeamFinished");

	Abase_beam_bp_C_IsBeamFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamIsFinished != nullptr)
		*BeamIsFinished = params.BeamIsFinished;
}


// Function base_beam_bp.base_beam_bp_C.UpdateBeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::UpdateBeam(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.UpdateBeam");

	Abase_beam_bp_C_UpdateBeam_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.GetBeamSourcePoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 BeamSourcePoint                (Parm, OutParm, IsPlainOldData)

void Abase_beam_bp_C::GetBeamSourcePoint(struct FVector* BeamSourcePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.GetBeamSourcePoint");

	Abase_beam_bp_C_GetBeamSourcePoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamSourcePoint != nullptr)
		*BeamSourcePoint = params.BeamSourcePoint;
}


// Function base_beam_bp.base_beam_bp_C.AuthStopBeam
// (Public, BlueprintCallable, BlueprintEvent)

void Abase_beam_bp_C::AuthStopBeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.AuthStopBeam");

	Abase_beam_bp_C_AuthStopBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.UpdateBeamEndPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BeamFinished                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::UpdateBeamEndPoint(bool* BeamFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.UpdateBeamEndPoint");

	Abase_beam_bp_C_UpdateBeamEndPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamFinished != nullptr)
		*BeamFinished = params.BeamFinished;
}


// Function base_beam_bp.base_beam_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abase_beam_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.UserConstructionScript");

	Abase_beam_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.ReceiveTick");

	Abase_beam_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abase_beam_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.ReceiveBeginPlay");

	Abase_beam_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Abase_beam_bp_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.ReceiveDestroyed");

	Abase_beam_bp_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Abase_beam_bp_C::BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Abase_beam_bp_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function base_beam_bp.base_beam_bp_C.DrawCapsule
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Abase_beam_bp_C::DrawCapsule(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.DrawCapsule");

	Abase_beam_bp_C_DrawCapsule_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.DrawSphere
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Abase_beam_bp_C::DrawSphere(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.DrawSphere");

	Abase_beam_bp_C_DrawSphere_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.ExecuteUbergraph_base_beam_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::ExecuteUbergraph_base_beam_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.ExecuteUbergraph_base_beam_bp");

	Abase_beam_bp_C_ExecuteUbergraph_base_beam_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_beam_bp.base_beam_bp_C.AuthHitTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abase_beam_bp_C::AuthHitTarget__DelegateSignature(bool Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_beam_bp.base_beam_bp_C.AuthHitTarget__DelegateSignature");

	Abase_beam_bp_C_AuthHitTarget__DelegateSignature_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
