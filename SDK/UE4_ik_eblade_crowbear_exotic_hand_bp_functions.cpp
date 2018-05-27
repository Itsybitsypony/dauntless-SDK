// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ik_eblade_crowbear_exotic_hand_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aik_eblade_crowbear_exotic_hand_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.UserConstructionScript");

	Aik_eblade_crowbear_exotic_hand_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aik_eblade_crowbear_exotic_hand_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ReceiveBeginPlay");

	Aik_eblade_crowbear_exotic_hand_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aik_eblade_crowbear_exotic_hand_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ReceiveTick");

	Aik_eblade_crowbear_exotic_hand_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.OnHit
// (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Aik_eblade_crowbear_exotic_hand_bp_C::OnHit(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.OnHit");

	Aik_eblade_crowbear_exotic_hand_bp_C_OnHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.HealFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Aik_eblade_crowbear_exotic_hand_bp_C::HealFX(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.HealFX");

	Aik_eblade_crowbear_exotic_hand_bp_C_HealFX_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.TickHealFX
// (BlueprintCallable, BlueprintEvent)

void Aik_eblade_crowbear_exotic_hand_bp_C::TickHealFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.TickHealFX");

	Aik_eblade_crowbear_exotic_hand_bp_C_TickHealFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aik_eblade_crowbear_exotic_hand_bp_C::ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ik_eblade_crowbear_exotic_hand_bp.ik_eblade_crowbear_exotic_hand_bp_C.ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_bp");

	Aik_eblade_crowbear_exotic_hand_bp_C_ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
