// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fog_wispy_02_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function fog_wispy_02_bp.fog_wispy_02_bp_C.CleanUpParticles
// (Public, BlueprintCallable, BlueprintEvent)

void Afog_wispy_02_bp_C::CleanUpParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function fog_wispy_02_bp.fog_wispy_02_bp_C.CleanUpParticles");

	Afog_wispy_02_bp_C_CleanUpParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fog_wispy_02_bp.fog_wispy_02_bp_C.ApplyChanges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Afog_wispy_02_bp_C::ApplyChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function fog_wispy_02_bp.fog_wispy_02_bp_C.ApplyChanges");

	Afog_wispy_02_bp_C_ApplyChanges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fog_wispy_02_bp.fog_wispy_02_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Afog_wispy_02_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function fog_wispy_02_bp.fog_wispy_02_bp_C.UserConstructionScript");

	Afog_wispy_02_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fog_wispy_02_bp.fog_wispy_02_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Afog_wispy_02_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function fog_wispy_02_bp.fog_wispy_02_bp_C.ReceiveBeginPlay");

	Afog_wispy_02_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fog_wispy_02_bp.fog_wispy_02_bp_C.ExecuteUbergraph_fog_wispy_02_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afog_wispy_02_bp_C::ExecuteUbergraph_fog_wispy_02_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function fog_wispy_02_bp.fog_wispy_02_bp_C.ExecuteUbergraph_fog_wispy_02_bp");

	Afog_wispy_02_bp_C_ExecuteUbergraph_fog_wispy_02_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
