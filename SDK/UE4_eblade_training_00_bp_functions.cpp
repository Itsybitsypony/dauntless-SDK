// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eblade_training_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eblade_training_00_bp.eblade_training_00_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aeblade_training_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_training_00_bp.eblade_training_00_bp_C.UserConstructionScript");

	Aeblade_training_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_training_00_bp.eblade_training_00_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeblade_training_00_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_training_00_bp.eblade_training_00_bp_C.ReceiveTick");

	Aeblade_training_00_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_training_00_bp.eblade_training_00_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aeblade_training_00_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_training_00_bp.eblade_training_00_bp_C.ReceiveBeginPlay");

	Aeblade_training_00_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eblade_training_00_bp.eblade_training_00_bp_C.ExecuteUbergraph_eblade_training_00_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aeblade_training_00_bp_C::ExecuteUbergraph_eblade_training_00_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eblade_training_00_bp.eblade_training_00_bp_C.ExecuteUbergraph_eblade_training_00_bp");

	Aeblade_training_00_bp_C_ExecuteUbergraph_eblade_training_00_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
