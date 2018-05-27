// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_q_projectile_alpha_crowbear_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eb_q_projectile_alpha_crowbear_bp.eb_q_projectile_alpha_crowbear_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aeb_q_projectile_alpha_crowbear_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_crowbear_bp.eb_q_projectile_alpha_crowbear_bp_C.UserConstructionScript");

	Aeb_q_projectile_alpha_crowbear_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_projectile_alpha_crowbear_bp.eb_q_projectile_alpha_crowbear_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeb_q_projectile_alpha_crowbear_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_crowbear_bp.eb_q_projectile_alpha_crowbear_bp_C.ReceiveTick");

	Aeb_q_projectile_alpha_crowbear_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_q_projectile_alpha_crowbear_bp.eb_q_projectile_alpha_crowbear_bp_C.ExecuteUbergraph_eb_q_projectile_alpha_crowbear_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeb_q_projectile_alpha_crowbear_bp_C::ExecuteUbergraph_eb_q_projectile_alpha_crowbear_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_q_projectile_alpha_crowbear_bp.eb_q_projectile_alpha_crowbear_bp_C.ExecuteUbergraph_eb_q_projectile_alpha_crowbear_bp");

	Aeb_q_projectile_alpha_crowbear_bp_C_ExecuteUbergraph_eb_q_projectile_alpha_crowbear_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
