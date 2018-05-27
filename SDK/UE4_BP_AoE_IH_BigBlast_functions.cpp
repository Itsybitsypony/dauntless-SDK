// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AoE_IH_BigBlast_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.GetCustomDamageScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_AoE_IH_BigBlast_C::GetCustomDamageScale(class AActor** TargetActor, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.GetCustomDamageScale");

	ABP_AoE_IH_BigBlast_C_GetCustomDamageScale_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AoE_IH_BigBlast_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.UserConstructionScript");

	ABP_AoE_IH_BigBlast_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_AoE_IH_BigBlast_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.Timeline_0__FinishedFunc");

	ABP_AoE_IH_BigBlast_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_AoE_IH_BigBlast_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.Timeline_0__UpdateFunc");

	ABP_AoE_IH_BigBlast_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.Timeline_0__Secondary Explosion Timing__EventFunc
// (BlueprintEvent)

void ABP_AoE_IH_BigBlast_C::Timeline_0__Secondary_Explosion_Timing__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.Timeline_0__Secondary Explosion Timing__EventFunc");

	ABP_AoE_IH_BigBlast_C_Timeline_0__Secondary_Explosion_Timing__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AoE_IH_BigBlast_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.ReceiveBeginPlay");

	ABP_AoE_IH_BigBlast_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.TriggerClientVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AmmoSpent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AoE_IH_BigBlast_C::TriggerClientVFX(int AmmoSpent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.TriggerClientVFX");

	ABP_AoE_IH_BigBlast_C_TriggerClientVFX_Params params;
	params.AmmoSpent = AmmoSpent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.ExecuteUbergraph_BP_AoE_IH_BigBlast
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AoE_IH_BigBlast_C::ExecuteUbergraph_BP_AoE_IH_BigBlast(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AoE_IH_BigBlast.BP_AoE_IH_BigBlast_C.ExecuteUbergraph_BP_AoE_IH_BigBlast");

	ABP_AoE_IH_BigBlast_C_ExecuteUbergraph_BP_AoE_IH_BigBlast_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
