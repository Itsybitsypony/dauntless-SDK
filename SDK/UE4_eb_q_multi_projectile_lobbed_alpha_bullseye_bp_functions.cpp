// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_q_multi_projectile_lobbed_alpha_bullseye_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.GetDebrisData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPhysicalSurface>  SurfaceType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fdebris_vfx_struct      FoundVFX                       (Parm, OutParm)
// bool                           HasFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   SurfaceName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C::GetDebrisData(TEnumAsByte<EPhysicalSurface> SurfaceType, struct Fdebris_vfx_struct* FoundVFX, bool* HasFound, struct FName* SurfaceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.GetDebrisData");

	Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C_GetDebrisData_Params params;
	params.SurfaceType = SurfaceType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundVFX != nullptr)
		*FoundVFX = params.FoundVFX;
	if (HasFound != nullptr)
		*HasFound = params.HasFound;
	if (SurfaceName != nullptr)
		*SurfaceName = params.SurfaceName;
}


// Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.UserConstructionScript");

	Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.Timeline_0__FinishedFunc");

	Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.Timeline_0__UpdateFunc");

	Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.ReceiveBeginPlay");

	Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.ReceiveHit
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

void Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.ReceiveHit");

	Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C_ReceiveHit_Params params;
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


// Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.ExecuteUbergraph_eb_q_multi_projectile_lobbed_alpha_bullseye_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C::ExecuteUbergraph_eb_q_multi_projectile_lobbed_alpha_bullseye_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_multi_projectile_lobbed_alpha_bullseye_bp.eb_q_multi_projectile_lobbed_alpha_bullseye_bp_C.ExecuteUbergraph_eb_q_multi_projectile_lobbed_alpha_bullseye_bp");

	Aeb_q_multi_projectile_lobbed_alpha_bullseye_bp_C_ExecuteUbergraph_eb_q_multi_projectile_lobbed_alpha_bullseye_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
