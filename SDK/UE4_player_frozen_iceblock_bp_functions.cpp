// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_frozen_iceblock_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.DestroyShard
// (Public, BlueprintCallable, BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::DestroyShard()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.DestroyShard");

	Aplayer_frozen_iceblock_bp_C_DestroyShard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ShardSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::ShardSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ShardSpawn");

	Aplayer_frozen_iceblock_bp_C_ShardSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.UserConstructionScript");

	Aplayer_frozen_iceblock_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Timeline_6__FinishedFunc
// (BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::Timeline_6__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Timeline_6__FinishedFunc");

	Aplayer_frozen_iceblock_bp_C_Timeline_6__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Timeline_6__UpdateFunc
// (BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::Timeline_6__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Timeline_6__UpdateFunc");

	Aplayer_frozen_iceblock_bp_C_Timeline_6__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceiveDestroyed");

	Aplayer_frozen_iceblock_bp_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Server_DestroyedShard
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::Server_DestroyedShard()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.Server_DestroyedShard");

	Aplayer_frozen_iceblock_bp_C_Server_DestroyedShard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceiveBeginPlay");

	Aplayer_frozen_iceblock_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent**    HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                ShotFromDirection              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Aplayer_frozen_iceblock_bp_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ReceivePointDamage");

	Aplayer_frozen_iceblock_bp_C_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.BndEvt__Shard_07_K2Node_ComponentBoundEvent_359_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Aplayer_frozen_iceblock_bp_C::BndEvt__Shard_07_K2Node_ComponentBoundEvent_359_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.BndEvt__Shard_07_K2Node_ComponentBoundEvent_359_ComponentBeginOverlapSignature__DelegateSignature");

	Aplayer_frozen_iceblock_bp_C_BndEvt__Shard_07_K2Node_ComponentBoundEvent_359_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ClientDestructionVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Aplayer_frozen_iceblock_bp_C::ClientDestructionVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ClientDestructionVFX");

	Aplayer_frozen_iceblock_bp_C_ClientDestructionVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Ustatus_effect_base_ab_C* Ability                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_frozen_iceblock_bp_C::SetData(float Duration, class Ustatus_effect_base_ab_C* Ability)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.SetData");

	Aplayer_frozen_iceblock_bp_C_SetData_Params params;
	params.Duration = Duration;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ExecuteUbergraph_player_frozen_iceblock_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aplayer_frozen_iceblock_bp_C::ExecuteUbergraph_player_frozen_iceblock_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_frozen_iceblock_bp.player_frozen_iceblock_bp_C.ExecuteUbergraph_player_frozen_iceblock_bp");

	Aplayer_frozen_iceblock_bp_C_ExecuteUbergraph_player_frozen_iceblock_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
