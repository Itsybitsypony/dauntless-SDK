// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_q_projectile_alpha_sally_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aeb_q_projectile_alpha_sally_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.UserConstructionScript");

	Aeb_q_projectile_alpha_sally_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aeb_q_projectile_alpha_sally_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveBeginPlay");

	Aeb_q_projectile_alpha_sally_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeb_q_projectile_alpha_sally_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveTick");

	Aeb_q_projectile_alpha_sally_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.OnProjectileStopped
// (BlueprintCallable, BlueprintEvent)

void Aeb_q_projectile_alpha_sally_bp_C::OnProjectileStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.OnProjectileStopped");

	Aeb_q_projectile_alpha_sally_bp_C_OnProjectileStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveHit
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

void Aeb_q_projectile_alpha_sally_bp_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ReceiveHit");

	Aeb_q_projectile_alpha_sally_bp_C_ReceiveHit_Params params;
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


// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ProjectileExploded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                ExplosionLocation              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aeb_q_projectile_alpha_sally_bp_C::ProjectileExploded(struct FVector* ExplosionLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ProjectileExploded");

	Aeb_q_projectile_alpha_sally_bp_C_ProjectileExploded_Params params;
	params.ExplosionLocation = ExplosionLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ExecuteUbergraph_eb_q_projectile_alpha_sally_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeb_q_projectile_alpha_sally_bp_C::ExecuteUbergraph_eb_q_projectile_alpha_sally_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_sally_bp.eb_q_projectile_alpha_sally_bp_C.ExecuteUbergraph_eb_q_projectile_alpha_sally_bp");

	Aeb_q_projectile_alpha_sally_bp_C_ExecuteUbergraph_eb_q_projectile_alpha_sally_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
