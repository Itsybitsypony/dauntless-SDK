// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_simple_player_special_projectile_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Asimple_player_special_projectile_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.UserConstructionScript");

	Asimple_player_special_projectile_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Asimple_player_special_projectile_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ReceiveBeginPlay");

	Asimple_player_special_projectile_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.BndEvt__Colliding Body_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Asimple_player_special_projectile_bp_C::BndEvt__Colliding_Body_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.BndEvt__Colliding Body_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature");

	Asimple_player_special_projectile_bp_C_BndEvt__Colliding_Body_K2Node_ComponentBoundEvent_10_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.DeactivateParticle
// (BlueprintCallable, BlueprintEvent)

void Asimple_player_special_projectile_bp_C::DeactivateParticle()
{
	static auto fn = UObject::FindObject<UFunction>("Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.DeactivateParticle");

	Asimple_player_special_projectile_bp_C_DeactivateParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Asimple_player_special_projectile_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ReceiveTick");

	Asimple_player_special_projectile_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ExecuteUbergraph_simple_player_special_projectile_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Asimple_player_special_projectile_bp_C::ExecuteUbergraph_simple_player_special_projectile_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function simple_player_special_projectile_bp.simple_player_special_projectile_bp_C.ExecuteUbergraph_simple_player_special_projectile_bp");

	Asimple_player_special_projectile_bp_C_ExecuteUbergraph_simple_player_special_projectile_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
