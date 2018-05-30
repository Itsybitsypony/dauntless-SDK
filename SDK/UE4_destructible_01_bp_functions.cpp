// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_destructible_01_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function destructible_01_bp.destructible_01_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Adestructible_01_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function destructible_01_bp.destructible_01_bp_C.UserConstructionScript");

	Adestructible_01_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function destructible_01_bp.destructible_01_bp_C.Evaluate
// (BlueprintCallable, BlueprintEvent)

void Adestructible_01_bp_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function destructible_01_bp.destructible_01_bp_C.Evaluate");

	Adestructible_01_bp_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function destructible_01_bp.destructible_01_bp_C.ReceivePointDamage
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

void Adestructible_01_bp_C::ReceivePointDamage(float* Damage, class UDamageType** DamageType, struct FVector* HitLocation, struct FVector* HitNormal, class UPrimitiveComponent** HitComponent, struct FName* BoneName, struct FVector* ShotFromDirection, class AController** InstigatedBy, class AActor** DamageCauser, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function destructible_01_bp.destructible_01_bp_C.ReceivePointDamage");

	Adestructible_01_bp_C_ReceivePointDamage_Params params;
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


// Function destructible_01_bp.destructible_01_bp_C.MultiDestruct
// (Net, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Adestructible_01_bp_C::MultiDestruct(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function destructible_01_bp.destructible_01_bp_C.MultiDestruct");

	Adestructible_01_bp_C_MultiDestruct_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function destructible_01_bp.destructible_01_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Adestructible_01_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function destructible_01_bp.destructible_01_bp_C.ReceiveBeginPlay");

	Adestructible_01_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function destructible_01_bp.destructible_01_bp_C.OnInfluencerAdded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    InfluencerComponent            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 InfluencerActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adestructible_01_bp_C::OnInfluencerAdded(class UPrimitiveComponent** InfluencerComponent, class AActor** InfluencerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function destructible_01_bp.destructible_01_bp_C.OnInfluencerAdded");

	Adestructible_01_bp_C_OnInfluencerAdded_Params params;
	params.InfluencerComponent = InfluencerComponent;
	params.InfluencerActor = InfluencerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function destructible_01_bp.destructible_01_bp_C.OnInfluencerRemoved
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    InfluencerComponent            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor**                 InfluencerActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adestructible_01_bp_C::OnInfluencerRemoved(class UPrimitiveComponent** InfluencerComponent, class AActor** InfluencerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function destructible_01_bp.destructible_01_bp_C.OnInfluencerRemoved");

	Adestructible_01_bp_C_OnInfluencerRemoved_Params params;
	params.InfluencerComponent = InfluencerComponent;
	params.InfluencerActor = InfluencerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function destructible_01_bp.destructible_01_bp_C.ExecuteUbergraph_destructible_01_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adestructible_01_bp_C::ExecuteUbergraph_destructible_01_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function destructible_01_bp.destructible_01_bp_C.ExecuteUbergraph_destructible_01_bp");

	Adestructible_01_bp_C_ExecuteUbergraph_destructible_01_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
