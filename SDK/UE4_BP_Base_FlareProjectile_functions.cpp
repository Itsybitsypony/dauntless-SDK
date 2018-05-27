// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_Base_FlareProjectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.GetMarkerComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UMarkerComponent*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMarkerComponent* ABP_Base_FlareProjectile_C::GetMarkerComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.GetMarkerComponent");

	ABP_Base_FlareProjectile_C_GetMarkerComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.OnRep_DefaultFlare
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_FlareProjectile_C::OnRep_DefaultFlare()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.OnRep_DefaultFlare");

	ABP_Base_FlareProjectile_C_OnRep_DefaultFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Base_FlareProjectile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.UserConstructionScript");

	ABP_Base_FlareProjectile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ExplodeShapedBurst
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_FlareProjectile_C::ExplodeShapedBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ExplodeShapedBurst");

	ABP_Base_FlareProjectile_C_ExplodeShapedBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_FlareProjectile_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.Explode");

	ABP_Base_FlareProjectile_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.Stop Particles
// (BlueprintCallable, BlueprintEvent)

void ABP_Base_FlareProjectile_C::Stop_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.Stop Particles");

	ABP_Base_FlareProjectile_C_Stop_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_Base_FlareProjectile_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ReceiveDestroyed");

	ABP_Base_FlareProjectile_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_FlareProjectile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ReceiveTick");

	ABP_Base_FlareProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Base_FlareProjectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ReceiveBeginPlay");

	ABP_Base_FlareProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ExecuteUbergraph_BP_Base_FlareProjectile
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Base_FlareProjectile_C::ExecuteUbergraph_BP_Base_FlareProjectile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Base_FlareProjectile.BP_Base_FlareProjectile_C.ExecuteUbergraph_BP_Base_FlareProjectile");

	ABP_Base_FlareProjectile_C_ExecuteUbergraph_BP_Base_FlareProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
