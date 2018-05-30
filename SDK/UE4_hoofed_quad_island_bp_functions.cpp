// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hoofed_quad_island_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function hoofed_quad_island_bp.hoofed_quad_island_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ahoofed_quad_island_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function hoofed_quad_island_bp.hoofed_quad_island_bp_C.UserConstructionScript");

	Ahoofed_quad_island_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hoofed_quad_island_bp.hoofed_quad_island_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Ahoofed_quad_island_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function hoofed_quad_island_bp.hoofed_quad_island_bp_C.ReceiveBeginPlay");

	Ahoofed_quad_island_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hoofed_quad_island_bp.hoofed_quad_island_bp_C.OnRep_Used
// (BlueprintCallable, BlueprintEvent)

void Ahoofed_quad_island_bp_C::OnRep_Used()
{
	static auto fn = UObject::FindObject<UFunction>("Function hoofed_quad_island_bp.hoofed_quad_island_bp_C.OnRep_Used");

	Ahoofed_quad_island_bp_C_OnRep_Used_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function hoofed_quad_island_bp.hoofed_quad_island_bp_C.ExecuteUbergraph_hoofed_quad_island_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ahoofed_quad_island_bp_C::ExecuteUbergraph_hoofed_quad_island_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function hoofed_quad_island_bp.hoofed_quad_island_bp_C.ExecuteUbergraph_hoofed_quad_island_bp");

	Ahoofed_quad_island_bp_C_ExecuteUbergraph_hoofed_quad_island_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
