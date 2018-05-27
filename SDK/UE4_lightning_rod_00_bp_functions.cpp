// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lightning_rod_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lightning_rod_00_bp.lightning_rod_00_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Alightning_rod_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lightning_rod_00_bp.lightning_rod_00_bp_C.UserConstructionScript");

	Alightning_rod_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightning_rod_00_bp.lightning_rod_00_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alightning_rod_00_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function lightning_rod_00_bp.lightning_rod_00_bp_C.ReceiveTick");

	Alightning_rod_00_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lightning_rod_00_bp.lightning_rod_00_bp_C.ExecuteUbergraph_lightning_rod_00_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alightning_rod_00_bp_C::ExecuteUbergraph_lightning_rod_00_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lightning_rod_00_bp.lightning_rod_00_bp_C.ExecuteUbergraph_lightning_rod_00_bp");

	Alightning_rod_00_bp_C_ExecuteUbergraph_lightning_rod_00_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
