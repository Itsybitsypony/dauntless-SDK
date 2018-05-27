// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_projectile_simple_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function projectile_simple_bp.projectile_simple_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aprojectile_simple_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_simple_bp.projectile_simple_bp_C.UserConstructionScript");

	Aprojectile_simple_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_simple_bp.projectile_simple_bp_C.AuthSweepHitEvent
// (BlueprintCallable, BlueprintEvent)

void Aprojectile_simple_bp_C::AuthSweepHitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_simple_bp.projectile_simple_bp_C.AuthSweepHitEvent");

	Aprojectile_simple_bp_C_AuthSweepHitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function projectile_simple_bp.projectile_simple_bp_C.ExecuteUbergraph_projectile_simple_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aprojectile_simple_bp_C::ExecuteUbergraph_projectile_simple_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function projectile_simple_bp.projectile_simple_bp_C.ExecuteUbergraph_projectile_simple_bp");

	Aprojectile_simple_bp_C_ExecuteUbergraph_projectile_simple_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
